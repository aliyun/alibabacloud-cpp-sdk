// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppSecuritiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppSecuritiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecuritys, appSecuritys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppSecuritiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecuritys, appSecuritys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAppSecuritiesResponseBody() = default ;
    DescribeAppSecuritiesResponseBody(const DescribeAppSecuritiesResponseBody &) = default ;
    DescribeAppSecuritiesResponseBody(DescribeAppSecuritiesResponseBody &&) = default ;
    DescribeAppSecuritiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppSecuritiesResponseBody() = default ;
    DescribeAppSecuritiesResponseBody& operator=(const DescribeAppSecuritiesResponseBody &) = default ;
    DescribeAppSecuritiesResponseBody& operator=(DescribeAppSecuritiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppSecuritys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppSecuritys& obj) { 
        DARABONBA_PTR_TO_JSON(AppSecurity, appSecurity_);
      };
      friend void from_json(const Darabonba::Json& j, AppSecuritys& obj) { 
        DARABONBA_PTR_FROM_JSON(AppSecurity, appSecurity_);
      };
      AppSecuritys() = default ;
      AppSecuritys(const AppSecuritys &) = default ;
      AppSecuritys(AppSecuritys &&) = default ;
      AppSecuritys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppSecuritys() = default ;
      AppSecuritys& operator=(const AppSecuritys &) = default ;
      AppSecuritys& operator=(AppSecuritys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppSecurity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppSecurity& obj) { 
          DARABONBA_PTR_TO_JSON(AppCode, appCode_);
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        };
        friend void from_json(const Darabonba::Json& j, AppSecurity& obj) { 
          DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        };
        AppSecurity() = default ;
        AppSecurity(const AppSecurity &) = default ;
        AppSecurity(AppSecurity &&) = default ;
        AppSecurity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppSecurity() = default ;
        AppSecurity& operator=(const AppSecurity &) = default ;
        AppSecurity& operator=(AppSecurity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appKey_ == nullptr && this->appSecret_ == nullptr && this->createdTime_ == nullptr && this->modifiedTime_ == nullptr; };
        // appCode Field Functions 
        bool hasAppCode() const { return this->appCode_ != nullptr;};
        void deleteAppCode() { this->appCode_ = nullptr;};
        inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
        inline AppSecurity& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
        inline AppSecurity& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // appSecret Field Functions 
        bool hasAppSecret() const { return this->appSecret_ != nullptr;};
        void deleteAppSecret() { this->appSecret_ = nullptr;};
        inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
        inline AppSecurity& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline AppSecurity& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline AppSecurity& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      protected:
        // The application AppCode.
        shared_ptr<string> appCode_ {};
        // The application AppKey.
        shared_ptr<string> appKey_ {};
        // The application AppSecret.
        shared_ptr<string> appSecret_ {};
        // The time when the AppKey was created.
        shared_ptr<string> createdTime_ {};
        // The time when the AppSecret was last modified. The time is displayed in UTC.
        shared_ptr<string> modifiedTime_ {};
      };

      virtual bool empty() const override { return this->appSecurity_ == nullptr; };
      // appSecurity Field Functions 
      bool hasAppSecurity() const { return this->appSecurity_ != nullptr;};
      void deleteAppSecurity() { this->appSecurity_ = nullptr;};
      inline const vector<AppSecuritys::AppSecurity> & getAppSecurity() const { DARABONBA_PTR_GET_CONST(appSecurity_, vector<AppSecuritys::AppSecurity>) };
      inline vector<AppSecuritys::AppSecurity> getAppSecurity() { DARABONBA_PTR_GET(appSecurity_, vector<AppSecuritys::AppSecurity>) };
      inline AppSecuritys& setAppSecurity(const vector<AppSecuritys::AppSecurity> & appSecurity) { DARABONBA_PTR_SET_VALUE(appSecurity_, appSecurity) };
      inline AppSecuritys& setAppSecurity(vector<AppSecuritys::AppSecurity> && appSecurity) { DARABONBA_PTR_SET_RVALUE(appSecurity_, appSecurity) };


    protected:
      shared_ptr<vector<AppSecuritys::AppSecurity>> appSecurity_ {};
    };

    virtual bool empty() const override { return this->appSecuritys_ == nullptr
        && this->requestId_ == nullptr; };
    // appSecuritys Field Functions 
    bool hasAppSecuritys() const { return this->appSecuritys_ != nullptr;};
    void deleteAppSecuritys() { this->appSecuritys_ = nullptr;};
    inline const DescribeAppSecuritiesResponseBody::AppSecuritys & getAppSecuritys() const { DARABONBA_PTR_GET_CONST(appSecuritys_, DescribeAppSecuritiesResponseBody::AppSecuritys) };
    inline DescribeAppSecuritiesResponseBody::AppSecuritys getAppSecuritys() { DARABONBA_PTR_GET(appSecuritys_, DescribeAppSecuritiesResponseBody::AppSecuritys) };
    inline DescribeAppSecuritiesResponseBody& setAppSecuritys(const DescribeAppSecuritiesResponseBody::AppSecuritys & appSecuritys) { DARABONBA_PTR_SET_VALUE(appSecuritys_, appSecuritys) };
    inline DescribeAppSecuritiesResponseBody& setAppSecuritys(DescribeAppSecuritiesResponseBody::AppSecuritys && appSecuritys) { DARABONBA_PTR_SET_RVALUE(appSecuritys_, appSecuritys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppSecuritiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The associated security policy information.
    shared_ptr<DescribeAppSecuritiesResponseBody::AppSecuritys> appSecuritys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
