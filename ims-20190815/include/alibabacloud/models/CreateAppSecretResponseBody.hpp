// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateAppSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAppSecretResponseBody() = default ;
    CreateAppSecretResponseBody(const CreateAppSecretResponseBody &) = default ;
    CreateAppSecretResponseBody(CreateAppSecretResponseBody &&) = default ;
    CreateAppSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppSecretResponseBody() = default ;
    CreateAppSecretResponseBody& operator=(const CreateAppSecretResponseBody &) = default ;
    CreateAppSecretResponseBody& operator=(CreateAppSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppSecret : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppSecret& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppSecretId, appSecretId_);
        DARABONBA_PTR_TO_JSON(AppSecretValue, appSecretValue_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      };
      friend void from_json(const Darabonba::Json& j, AppSecret& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppSecretId, appSecretId_);
        DARABONBA_PTR_FROM_JSON(AppSecretValue, appSecretValue_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      };
      AppSecret() = default ;
      AppSecret(const AppSecret &) = default ;
      AppSecret(AppSecret &&) = default ;
      AppSecret(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppSecret() = default ;
      AppSecret& operator=(const AppSecret &) = default ;
      AppSecret& operator=(AppSecret &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appSecretId_ == nullptr && this->appSecretValue_ == nullptr && this->createDate_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppSecret& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appSecretId Field Functions 
      bool hasAppSecretId() const { return this->appSecretId_ != nullptr;};
      void deleteAppSecretId() { this->appSecretId_ = nullptr;};
      inline string getAppSecretId() const { DARABONBA_PTR_GET_DEFAULT(appSecretId_, "") };
      inline AppSecret& setAppSecretId(string appSecretId) { DARABONBA_PTR_SET_VALUE(appSecretId_, appSecretId) };


      // appSecretValue Field Functions 
      bool hasAppSecretValue() const { return this->appSecretValue_ != nullptr;};
      void deleteAppSecretValue() { this->appSecretValue_ = nullptr;};
      inline string getAppSecretValue() const { DARABONBA_PTR_GET_DEFAULT(appSecretValue_, "") };
      inline AppSecret& setAppSecretValue(string appSecretValue) { DARABONBA_PTR_SET_VALUE(appSecretValue_, appSecretValue) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline AppSecret& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The ID of the application secret.
      shared_ptr<string> appSecretId_ {};
      // The content of the application secret. This value can be used as the client secret for open authorization (OAuth).
      shared_ptr<string> appSecretValue_ {};
      // The creation time.
      shared_ptr<string> createDate_ {};
    };

    virtual bool empty() const override { return this->appSecret_ == nullptr
        && this->requestId_ == nullptr; };
    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline const CreateAppSecretResponseBody::AppSecret & getAppSecret() const { DARABONBA_PTR_GET_CONST(appSecret_, CreateAppSecretResponseBody::AppSecret) };
    inline CreateAppSecretResponseBody::AppSecret getAppSecret() { DARABONBA_PTR_GET(appSecret_, CreateAppSecretResponseBody::AppSecret) };
    inline CreateAppSecretResponseBody& setAppSecret(const CreateAppSecretResponseBody::AppSecret & appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };
    inline CreateAppSecretResponseBody& setAppSecret(CreateAppSecretResponseBody::AppSecret && appSecret) { DARABONBA_PTR_SET_RVALUE(appSecret_, appSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the application secret.
    shared_ptr<CreateAppSecretResponseBody::AppSecret> appSecret_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
