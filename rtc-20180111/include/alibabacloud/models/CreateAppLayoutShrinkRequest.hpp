// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLAYOUTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLAYOUTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppLayoutShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppLayoutShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Layout, layoutShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppLayoutShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Layout, layoutShrink_);
    };
    CreateAppLayoutShrinkRequest() = default ;
    CreateAppLayoutShrinkRequest(const CreateAppLayoutShrinkRequest &) = default ;
    CreateAppLayoutShrinkRequest(CreateAppLayoutShrinkRequest &&) = default ;
    CreateAppLayoutShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppLayoutShrinkRequest() = default ;
    CreateAppLayoutShrinkRequest& operator=(const CreateAppLayoutShrinkRequest &) = default ;
    CreateAppLayoutShrinkRequest& operator=(CreateAppLayoutShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->clientToken_ != nullptr && this->layoutShrink_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppLayoutShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppLayoutShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // layoutShrink Field Functions 
    bool hasLayoutShrink() const { return this->layoutShrink_ != nullptr;};
    void deleteLayoutShrink() { this->layoutShrink_ = nullptr;};
    inline string layoutShrink() const { DARABONBA_PTR_GET_DEFAULT(layoutShrink_, "") };
    inline CreateAppLayoutShrinkRequest& setLayoutShrink(string layoutShrink) { DARABONBA_PTR_SET_VALUE(layoutShrink_, layoutShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> layoutShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
