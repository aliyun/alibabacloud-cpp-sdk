// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHRENDERINGINSTANCESTREAMINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHRENDERINGINSTANCESTREAMINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RefreshRenderingInstanceStreamingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshRenderingInstanceStreamingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInfo, clientInfoShrink_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshRenderingInstanceStreamingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfoShrink_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    RefreshRenderingInstanceStreamingShrinkRequest() = default ;
    RefreshRenderingInstanceStreamingShrinkRequest(const RefreshRenderingInstanceStreamingShrinkRequest &) = default ;
    RefreshRenderingInstanceStreamingShrinkRequest(RefreshRenderingInstanceStreamingShrinkRequest &&) = default ;
    RefreshRenderingInstanceStreamingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshRenderingInstanceStreamingShrinkRequest() = default ;
    RefreshRenderingInstanceStreamingShrinkRequest& operator=(const RefreshRenderingInstanceStreamingShrinkRequest &) = default ;
    RefreshRenderingInstanceStreamingShrinkRequest& operator=(RefreshRenderingInstanceStreamingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientInfoShrink_ != nullptr
        && this->renderingInstanceId_ != nullptr; };
    // clientInfoShrink Field Functions 
    bool hasClientInfoShrink() const { return this->clientInfoShrink_ != nullptr;};
    void deleteClientInfoShrink() { this->clientInfoShrink_ = nullptr;};
    inline string clientInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(clientInfoShrink_, "") };
    inline RefreshRenderingInstanceStreamingShrinkRequest& setClientInfoShrink(string clientInfoShrink) { DARABONBA_PTR_SET_VALUE(clientInfoShrink_, clientInfoShrink) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline RefreshRenderingInstanceStreamingShrinkRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<string> clientInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
