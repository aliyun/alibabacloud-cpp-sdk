// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateMessageAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
    };
    CreateMessageAppRequest() = default ;
    CreateMessageAppRequest(const CreateMessageAppRequest &) = default ;
    CreateMessageAppRequest(CreateMessageAppRequest &&) = default ;
    CreateMessageAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageAppRequest() = default ;
    CreateMessageAppRequest& operator=(const CreateMessageAppRequest &) = default ;
    CreateMessageAppRequest& operator=(CreateMessageAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appConfig_ != nullptr
        && this->appName_ != nullptr && this->extension_ != nullptr; };
    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline const map<string, string> & appConfig() const { DARABONBA_PTR_GET_CONST(appConfig_, map<string, string>) };
    inline map<string, string> appConfig() { DARABONBA_PTR_GET(appConfig_, map<string, string>) };
    inline CreateMessageAppRequest& setAppConfig(const map<string, string> & appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };
    inline CreateMessageAppRequest& setAppConfig(map<string, string> && appConfig) { DARABONBA_PTR_SET_RVALUE(appConfig_, appConfig) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateMessageAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const map<string, string> & extension() const { DARABONBA_PTR_GET_CONST(extension_, map<string, string>) };
    inline map<string, string> extension() { DARABONBA_PTR_GET(extension_, map<string, string>) };
    inline CreateMessageAppRequest& setExtension(const map<string, string> & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline CreateMessageAppRequest& setExtension(map<string, string> && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


  protected:
    // The configurations of the application.
    std::shared_ptr<map<string, string>> appConfig_ = nullptr;
    // The name of the interactive message application. The name must be 2 to 16 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The extended fields.
    std::shared_ptr<map<string, string>> extension_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
