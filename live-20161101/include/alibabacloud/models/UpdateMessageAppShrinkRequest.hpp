// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESSAGEAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESSAGEAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateMessageAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMessageAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfigShrink_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Extension, extensionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMessageAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfigShrink_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Extension, extensionShrink_);
    };
    UpdateMessageAppShrinkRequest() = default ;
    UpdateMessageAppShrinkRequest(const UpdateMessageAppShrinkRequest &) = default ;
    UpdateMessageAppShrinkRequest(UpdateMessageAppShrinkRequest &&) = default ;
    UpdateMessageAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMessageAppShrinkRequest() = default ;
    UpdateMessageAppShrinkRequest& operator=(const UpdateMessageAppShrinkRequest &) = default ;
    UpdateMessageAppShrinkRequest& operator=(UpdateMessageAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appConfigShrink_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->extensionShrink_ == nullptr; };
    // appConfigShrink Field Functions 
    bool hasAppConfigShrink() const { return this->appConfigShrink_ != nullptr;};
    void deleteAppConfigShrink() { this->appConfigShrink_ = nullptr;};
    inline string getAppConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(appConfigShrink_, "") };
    inline UpdateMessageAppShrinkRequest& setAppConfigShrink(string appConfigShrink) { DARABONBA_PTR_SET_VALUE(appConfigShrink_, appConfigShrink) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMessageAppShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateMessageAppShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // extensionShrink Field Functions 
    bool hasExtensionShrink() const { return this->extensionShrink_ != nullptr;};
    void deleteExtensionShrink() { this->extensionShrink_ = nullptr;};
    inline string getExtensionShrink() const { DARABONBA_PTR_GET_DEFAULT(extensionShrink_, "") };
    inline UpdateMessageAppShrinkRequest& setExtensionShrink(string extensionShrink) { DARABONBA_PTR_SET_VALUE(extensionShrink_, extensionShrink) };


  protected:
    // The configurations of the application.
    shared_ptr<string> appConfigShrink_ {};
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The name of the interactive messaging application.
    shared_ptr<string> appName_ {};
    // The extended field.
    shared_ptr<string> extensionShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
