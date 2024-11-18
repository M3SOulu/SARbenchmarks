// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: protos/Cpp_B.proto

#include "protos/Cpp_B.pb.h"
#include "protos/Cpp_B.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace protos {

static const char* Cpp_B_method_names[] = {
  "/protos.Cpp_B/Cpp_B_1",
  "/protos.Cpp_B/Cpp_B_2",
  "/protos.Cpp_B/Cpp_B_3",
};

std::unique_ptr< Cpp_B::Stub> Cpp_B::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Cpp_B::Stub> stub(new Cpp_B::Stub(channel, options));
  return stub;
}

Cpp_B::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Cpp_B_1_(Cpp_B_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Cpp_B_2_(Cpp_B_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Cpp_B_3_(Cpp_B_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Cpp_B::Stub::Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Cpp_B_1_, context, request, response);
}

void Cpp_B::Stub::async::Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Cpp_B_1_, context, request, response, std::move(f));
}

void Cpp_B::Stub::async::Cpp_B_1(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Cpp_B_1_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Cpp_B::Stub::PrepareAsyncCpp_B_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Cpp_B_1_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Cpp_B::Stub::AsyncCpp_B_1Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCpp_B_1Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Cpp_B::Stub::Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Cpp_B_2_, context, request, response);
}

void Cpp_B::Stub::async::Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Cpp_B_2_, context, request, response, std::move(f));
}

void Cpp_B::Stub::async::Cpp_B_2(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Cpp_B_2_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Cpp_B::Stub::PrepareAsyncCpp_B_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Cpp_B_2_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Cpp_B::Stub::AsyncCpp_B_2Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCpp_B_2Raw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Cpp_B::Stub::Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::protos::CommonMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Cpp_B_3_, context, request, response);
}

void Cpp_B::Stub::async::Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Cpp_B_3_, context, request, response, std::move(f));
}

void Cpp_B::Stub::async::Cpp_B_3(::grpc::ClientContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Cpp_B_3_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Cpp_B::Stub::PrepareAsyncCpp_B_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Cpp_B_3_, context, request);
}

::grpc::ClientAsyncResponseReader< ::protos::CommonMessage>* Cpp_B::Stub::AsyncCpp_B_3Raw(::grpc::ClientContext* context, const ::protos::CommonMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCpp_B_3Raw(context, request, cq);
  result->StartCall();
  return result;
}

Cpp_B::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Cpp_B_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Cpp_B::Service, ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Cpp_B::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::CommonMessage* req,
             ::protos::CommonMessage* resp) {
               return service->Cpp_B_1(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Cpp_B_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Cpp_B::Service, ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Cpp_B::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::CommonMessage* req,
             ::protos::CommonMessage* resp) {
               return service->Cpp_B_2(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Cpp_B_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Cpp_B::Service, ::protos::CommonMessage, ::protos::CommonMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Cpp_B::Service* service,
             ::grpc::ServerContext* ctx,
             const ::protos::CommonMessage* req,
             ::protos::CommonMessage* resp) {
               return service->Cpp_B_3(ctx, req, resp);
             }, this)));
}

Cpp_B::Service::~Service() {
}

::grpc::Status Cpp_B::Service::Cpp_B_1(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Cpp_B::Service::Cpp_B_2(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Cpp_B::Service::Cpp_B_3(::grpc::ServerContext* context, const ::protos::CommonMessage* request, ::protos::CommonMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace protos

