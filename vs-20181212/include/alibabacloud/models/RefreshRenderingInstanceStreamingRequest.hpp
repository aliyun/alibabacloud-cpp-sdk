// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHRENDERINGINSTANCESTREAMINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHRENDERINGINSTANCESTREAMINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RefreshRenderingInstanceStreamingRequestClientInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RefreshRenderingInstanceStreamingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshRenderingInstanceStreamingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshRenderingInstanceStreamingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    RefreshRenderingInstanceStreamingRequest() = default ;
    RefreshRenderingInstanceStreamingRequest(const RefreshRenderingInstanceStreamingRequest &) = default ;
    RefreshRenderingInstanceStreamingRequest(RefreshRenderingInstanceStreamingRequest &&) = default ;
    RefreshRenderingInstanceStreamingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshRenderingInstanceStreamingRequest() = default ;
    RefreshRenderingInstanceStreamingRequest& operator=(const RefreshRenderingInstanceStreamingRequest &) = default ;
    RefreshRenderingInstanceStreamingRequest& operator=(RefreshRenderingInstanceStreamingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientInfo_ == nullptr
        && return this->renderingInstanceId_ == nullptr; };
    // clientInfo Field Functions 
    bool hasClientInfo() const { return this->clientInfo_ != nullptr;};
    void deleteClientInfo() { this->clientInfo_ = nullptr;};
    inline const RefreshRenderingInstanceStreamingRequestClientInfo & clientInfo() const { DARABONBA_PTR_GET_CONST(clientInfo_, RefreshRenderingInstanceStreamingRequestClientInfo) };
    inline RefreshRenderingInstanceStreamingRequestClientInfo clientInfo() { DARABONBA_PTR_GET(clientInfo_, RefreshRenderingInstanceStreamingRequestClientInfo) };
    inline RefreshRenderingInstanceStreamingRequest& setClientInfo(const RefreshRenderingInstanceStreamingRequestClientInfo & clientInfo) { DARABONBA_PTR_SET_VALUE(clientInfo_, clientInfo) };
    inline RefreshRenderingInstanceStreamingRequest& setClientInfo(RefreshRenderingInstanceStreamingRequestClientInfo && clientInfo) { DARABONBA_PTR_SET_RVALUE(clientInfo_, clientInfo) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline RefreshRenderingInstanceStreamingRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<RefreshRenderingInstanceStreamingRequestClientInfo> clientInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
