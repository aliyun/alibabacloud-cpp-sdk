// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRENDERINGINSTANCESTREAMINGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRENDERINGINSTANCESTREAMINGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class GetRenderingInstanceStreamingInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRenderingInstanceStreamingInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRenderingInstanceStreamingInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRenderingInstanceStreamingInfoResponseBody() = default ;
    GetRenderingInstanceStreamingInfoResponseBody(const GetRenderingInstanceStreamingInfoResponseBody &) = default ;
    GetRenderingInstanceStreamingInfoResponseBody(GetRenderingInstanceStreamingInfoResponseBody &&) = default ;
    GetRenderingInstanceStreamingInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRenderingInstanceStreamingInfoResponseBody() = default ;
    GetRenderingInstanceStreamingInfoResponseBody& operator=(const GetRenderingInstanceStreamingInfoResponseBody &) = default ;
    GetRenderingInstanceStreamingInfoResponseBody& operator=(GetRenderingInstanceStreamingInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowId_ == nullptr
        && this->gateway_ == nullptr && this->hostname_ == nullptr && this->port_ == nullptr && this->renderingInstanceId_ == nullptr && this->requestId_ == nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline GetRenderingInstanceStreamingInfoResponseBody& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline GetRenderingInstanceStreamingInfoResponseBody& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline GetRenderingInstanceStreamingInfoResponseBody& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetRenderingInstanceStreamingInfoResponseBody& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline GetRenderingInstanceStreamingInfoResponseBody& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRenderingInstanceStreamingInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> flowId_ {};
    shared_ptr<string> gateway_ {};
    shared_ptr<string> hostname_ {};
    shared_ptr<string> port_ {};
    shared_ptr<string> renderingInstanceId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
