// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSECRETIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSECRETIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAppSecretIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppSecretIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecrets, appSecrets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppSecretIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecrets, appSecrets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAppSecretIdsResponseBody() = default ;
    ListAppSecretIdsResponseBody(const ListAppSecretIdsResponseBody &) = default ;
    ListAppSecretIdsResponseBody(ListAppSecretIdsResponseBody &&) = default ;
    ListAppSecretIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppSecretIdsResponseBody() = default ;
    ListAppSecretIdsResponseBody& operator=(const ListAppSecretIdsResponseBody &) = default ;
    ListAppSecretIdsResponseBody& operator=(ListAppSecretIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppSecrets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppSecrets& obj) { 
        DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      };
      friend void from_json(const Darabonba::Json& j, AppSecrets& obj) { 
        DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      };
      AppSecrets() = default ;
      AppSecrets(const AppSecrets &) = default ;
      AppSecrets(AppSecrets &&) = default ;
      AppSecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppSecrets() = default ;
      AppSecrets& operator=(const AppSecrets &) = default ;
      AppSecrets& operator=(AppSecrets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppSecret : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppSecret& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppSecretId, appSecretId_);
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        };
        friend void from_json(const Darabonba::Json& j, AppSecret& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppSecretId, appSecretId_);
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
        && this->appSecretId_ == nullptr && this->createDate_ == nullptr; };
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
        // The creation time.
        shared_ptr<string> createDate_ {};
      };

      virtual bool empty() const override { return this->appSecret_ == nullptr; };
      // appSecret Field Functions 
      bool hasAppSecret() const { return this->appSecret_ != nullptr;};
      void deleteAppSecret() { this->appSecret_ = nullptr;};
      inline const vector<AppSecrets::AppSecret> & getAppSecret() const { DARABONBA_PTR_GET_CONST(appSecret_, vector<AppSecrets::AppSecret>) };
      inline vector<AppSecrets::AppSecret> getAppSecret() { DARABONBA_PTR_GET(appSecret_, vector<AppSecrets::AppSecret>) };
      inline AppSecrets& setAppSecret(const vector<AppSecrets::AppSecret> & appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };
      inline AppSecrets& setAppSecret(vector<AppSecrets::AppSecret> && appSecret) { DARABONBA_PTR_SET_RVALUE(appSecret_, appSecret) };


    protected:
      shared_ptr<vector<AppSecrets::AppSecret>> appSecret_ {};
    };

    virtual bool empty() const override { return this->appSecrets_ == nullptr
        && this->requestId_ == nullptr; };
    // appSecrets Field Functions 
    bool hasAppSecrets() const { return this->appSecrets_ != nullptr;};
    void deleteAppSecrets() { this->appSecrets_ = nullptr;};
    inline const ListAppSecretIdsResponseBody::AppSecrets & getAppSecrets() const { DARABONBA_PTR_GET_CONST(appSecrets_, ListAppSecretIdsResponseBody::AppSecrets) };
    inline ListAppSecretIdsResponseBody::AppSecrets getAppSecrets() { DARABONBA_PTR_GET(appSecrets_, ListAppSecretIdsResponseBody::AppSecrets) };
    inline ListAppSecretIdsResponseBody& setAppSecrets(const ListAppSecretIdsResponseBody::AppSecrets & appSecrets) { DARABONBA_PTR_SET_VALUE(appSecrets_, appSecrets) };
    inline ListAppSecretIdsResponseBody& setAppSecrets(ListAppSecretIdsResponseBody::AppSecrets && appSecrets) { DARABONBA_PTR_SET_RVALUE(appSecrets_, appSecrets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppSecretIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the application secret.
    shared_ptr<ListAppSecretIdsResponseBody::AppSecrets> appSecrets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
