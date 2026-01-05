// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateMessageAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfigShrink_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Extension, extensionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfigShrink_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Extension, extensionShrink_);
    };
    CreateMessageAppShrinkRequest() = default ;
    CreateMessageAppShrinkRequest(const CreateMessageAppShrinkRequest &) = default ;
    CreateMessageAppShrinkRequest(CreateMessageAppShrinkRequest &&) = default ;
    CreateMessageAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageAppShrinkRequest() = default ;
    CreateMessageAppShrinkRequest& operator=(const CreateMessageAppShrinkRequest &) = default ;
    CreateMessageAppShrinkRequest& operator=(CreateMessageAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appConfigShrink_ == nullptr
        && this->appName_ == nullptr && this->extensionShrink_ == nullptr; };
    // appConfigShrink Field Functions 
    bool hasAppConfigShrink() const { return this->appConfigShrink_ != nullptr;};
    void deleteAppConfigShrink() { this->appConfigShrink_ = nullptr;};
    inline string getAppConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(appConfigShrink_, "") };
    inline CreateMessageAppShrinkRequest& setAppConfigShrink(string appConfigShrink) { DARABONBA_PTR_SET_VALUE(appConfigShrink_, appConfigShrink) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateMessageAppShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // extensionShrink Field Functions 
    bool hasExtensionShrink() const { return this->extensionShrink_ != nullptr;};
    void deleteExtensionShrink() { this->extensionShrink_ = nullptr;};
    inline string getExtensionShrink() const { DARABONBA_PTR_GET_DEFAULT(extensionShrink_, "") };
    inline CreateMessageAppShrinkRequest& setExtensionShrink(string extensionShrink) { DARABONBA_PTR_SET_VALUE(extensionShrink_, extensionShrink) };


  protected:
    // The configurations of the application.
    shared_ptr<string> appConfigShrink_ {};
    // The name of the interactive message application. The name must be 2 to 16 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The extended fields.
    shared_ptr<string> extensionShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
