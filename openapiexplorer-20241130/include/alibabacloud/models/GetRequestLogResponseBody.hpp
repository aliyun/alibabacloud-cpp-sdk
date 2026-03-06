// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(logInfo, logInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(logInfo, logInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetRequestLogResponseBody() = default ;
    GetRequestLogResponseBody(const GetRequestLogResponseBody &) = default ;
    GetRequestLogResponseBody(GetRequestLogResponseBody &&) = default ;
    GetRequestLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBody() = default ;
    GetRequestLogResponseBody& operator=(const GetRequestLogResponseBody &) = default ;
    GetRequestLogResponseBody& operator=(GetRequestLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogInfo& obj) { 
        DARABONBA_PTR_TO_JSON(authenticationInfo, authenticationInfo_);
        DARABONBA_PTR_TO_JSON(basicInfo, basicInfo_);
        DARABONBA_PTR_TO_JSON(callerInfo, callerInfo_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(responses, responses_);
      };
      friend void from_json(const Darabonba::Json& j, LogInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(authenticationInfo, authenticationInfo_);
        DARABONBA_PTR_FROM_JSON(basicInfo, basicInfo_);
        DARABONBA_PTR_FROM_JSON(callerInfo, callerInfo_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(responses, responses_);
      };
      LogInfo() = default ;
      LogInfo(const LogInfo &) = default ;
      LogInfo(LogInfo &&) = default ;
      LogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogInfo() = default ;
      LogInfo& operator=(const LogInfo &) = default ;
      LogInfo& operator=(LogInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Responses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Responses& obj) { 
          DARABONBA_PTR_TO_JSON(responseBody, responseBody_);
          DARABONBA_PTR_TO_JSON(responseBodyFormat, responseBodyFormat_);
        };
        friend void from_json(const Darabonba::Json& j, Responses& obj) { 
          DARABONBA_PTR_FROM_JSON(responseBody, responseBody_);
          DARABONBA_PTR_FROM_JSON(responseBodyFormat, responseBodyFormat_);
        };
        Responses() = default ;
        Responses(const Responses &) = default ;
        Responses(Responses &&) = default ;
        Responses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Responses() = default ;
        Responses& operator=(const Responses &) = default ;
        Responses& operator=(Responses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->responseBody_ == nullptr
        && this->responseBodyFormat_ == nullptr; };
        // responseBody Field Functions 
        bool hasResponseBody() const { return this->responseBody_ != nullptr;};
        void deleteResponseBody() { this->responseBody_ = nullptr;};
        inline string getResponseBody() const { DARABONBA_PTR_GET_DEFAULT(responseBody_, "") };
        inline Responses& setResponseBody(string responseBody) { DARABONBA_PTR_SET_VALUE(responseBody_, responseBody) };


        // responseBodyFormat Field Functions 
        bool hasResponseBodyFormat() const { return this->responseBodyFormat_ != nullptr;};
        void deleteResponseBodyFormat() { this->responseBodyFormat_ = nullptr;};
        inline string getResponseBodyFormat() const { DARABONBA_PTR_GET_DEFAULT(responseBodyFormat_, "") };
        inline Responses& setResponseBodyFormat(string responseBodyFormat) { DARABONBA_PTR_SET_VALUE(responseBodyFormat_, responseBodyFormat) };


      protected:
        // The response information.
        shared_ptr<string> responseBody_ {};
        // The type of the response body. Valid values: JSON, XML, and HTML.
        shared_ptr<string> responseBodyFormat_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(required, required_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(required, required_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_ANY_FROM_JSON(value, value_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->required_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline Parameters& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Parameters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Parameters& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The name of the request parameter.
        shared_ptr<string> name_ {};
        // Indicates whether the request parameter is required.
        shared_ptr<bool> required_ {};
        // The type of the request parameter.
        shared_ptr<string> type_ {};
        // The value of the request parameter.
        Darabonba::Json value_ {};
      };

      class CallerInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallerInfo& obj) { 
          DARABONBA_PTR_TO_JSON(callerAccountId, callerAccountId_);
          DARABONBA_PTR_TO_JSON(callerIp, callerIp_);
          DARABONBA_PTR_TO_JSON(callerType, callerType_);
          DARABONBA_PTR_TO_JSON(masterAccountId, masterAccountId_);
          DARABONBA_PTR_TO_JSON(userAgent, userAgent_);
        };
        friend void from_json(const Darabonba::Json& j, CallerInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(callerAccountId, callerAccountId_);
          DARABONBA_PTR_FROM_JSON(callerIp, callerIp_);
          DARABONBA_PTR_FROM_JSON(callerType, callerType_);
          DARABONBA_PTR_FROM_JSON(masterAccountId, masterAccountId_);
          DARABONBA_PTR_FROM_JSON(userAgent, userAgent_);
        };
        CallerInfo() = default ;
        CallerInfo(const CallerInfo &) = default ;
        CallerInfo(CallerInfo &&) = default ;
        CallerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallerInfo() = default ;
        CallerInfo& operator=(const CallerInfo &) = default ;
        CallerInfo& operator=(CallerInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callerAccountId_ == nullptr
        && this->callerIp_ == nullptr && this->callerType_ == nullptr && this->masterAccountId_ == nullptr && this->userAgent_ == nullptr; };
        // callerAccountId Field Functions 
        bool hasCallerAccountId() const { return this->callerAccountId_ != nullptr;};
        void deleteCallerAccountId() { this->callerAccountId_ = nullptr;};
        inline string getCallerAccountId() const { DARABONBA_PTR_GET_DEFAULT(callerAccountId_, "") };
        inline CallerInfo& setCallerAccountId(string callerAccountId) { DARABONBA_PTR_SET_VALUE(callerAccountId_, callerAccountId) };


        // callerIp Field Functions 
        bool hasCallerIp() const { return this->callerIp_ != nullptr;};
        void deleteCallerIp() { this->callerIp_ = nullptr;};
        inline string getCallerIp() const { DARABONBA_PTR_GET_DEFAULT(callerIp_, "") };
        inline CallerInfo& setCallerIp(string callerIp) { DARABONBA_PTR_SET_VALUE(callerIp_, callerIp) };


        // callerType Field Functions 
        bool hasCallerType() const { return this->callerType_ != nullptr;};
        void deleteCallerType() { this->callerType_ = nullptr;};
        inline string getCallerType() const { DARABONBA_PTR_GET_DEFAULT(callerType_, "") };
        inline CallerInfo& setCallerType(string callerType) { DARABONBA_PTR_SET_VALUE(callerType_, callerType) };


        // masterAccountId Field Functions 
        bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
        void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
        inline string getMasterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
        inline CallerInfo& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


        // userAgent Field Functions 
        bool hasUserAgent() const { return this->userAgent_ != nullptr;};
        void deleteUserAgent() { this->userAgent_ = nullptr;};
        inline string getUserAgent() const { DARABONBA_PTR_GET_DEFAULT(userAgent_, "") };
        inline CallerInfo& setUserAgent(string userAgent) { DARABONBA_PTR_SET_VALUE(userAgent_, userAgent) };


      protected:
        // The ID of the caller\\"s account.
        shared_ptr<string> callerAccountId_ {};
        // The IP address of the caller.
        shared_ptr<string> callerIp_ {};
        // The type of the caller.
        // 
        // 1. customer: Alibaba Cloud account
        // 
        // 2. sub: RAM user
        // 
        // 3. AssumedRoleUser: A temporary identity that is created using a Security Token Service (STS) token.
        shared_ptr<string> callerType_ {};
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> masterAccountId_ {};
        // The user agent.
        shared_ptr<string> userAgent_ {};
      };

      class BasicInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BasicInfo& obj) { 
          DARABONBA_PTR_TO_JSON(accessDeniedDetail, accessDeniedDetail_);
          DARABONBA_PTR_TO_JSON(api, api_);
          DARABONBA_PTR_TO_JSON(apiDoc, apiDoc_);
          DARABONBA_PTR_TO_JSON(apiStyle, apiStyle_);
          DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
          DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(gatewayProcessTime, gatewayProcessTime_);
          DARABONBA_PTR_TO_JSON(httpMethod, httpMethod_);
          DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
          DARABONBA_PTR_TO_JSON(logRequestId, logRequestId_);
          DARABONBA_PTR_TO_JSON(product, product_);
          DARABONBA_PTR_TO_JSON(productName, productName_);
          DARABONBA_PTR_TO_JSON(regionId, regionId_);
          DARABONBA_PTR_TO_JSON(requestDuration, requestDuration_);
          DARABONBA_PTR_TO_JSON(sdkRequestTime, sdkRequestTime_);
          DARABONBA_PTR_TO_JSON(throttlingResult, throttlingResult_);
        };
        friend void from_json(const Darabonba::Json& j, BasicInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(accessDeniedDetail, accessDeniedDetail_);
          DARABONBA_PTR_FROM_JSON(api, api_);
          DARABONBA_PTR_FROM_JSON(apiDoc, apiDoc_);
          DARABONBA_PTR_FROM_JSON(apiStyle, apiStyle_);
          DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
          DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(gatewayProcessTime, gatewayProcessTime_);
          DARABONBA_PTR_FROM_JSON(httpMethod, httpMethod_);
          DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
          DARABONBA_PTR_FROM_JSON(logRequestId, logRequestId_);
          DARABONBA_PTR_FROM_JSON(product, product_);
          DARABONBA_PTR_FROM_JSON(productName, productName_);
          DARABONBA_PTR_FROM_JSON(regionId, regionId_);
          DARABONBA_PTR_FROM_JSON(requestDuration, requestDuration_);
          DARABONBA_PTR_FROM_JSON(sdkRequestTime, sdkRequestTime_);
          DARABONBA_PTR_FROM_JSON(throttlingResult, throttlingResult_);
        };
        BasicInfo() = default ;
        BasicInfo(const BasicInfo &) = default ;
        BasicInfo(BasicInfo &&) = default ;
        BasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BasicInfo() = default ;
        BasicInfo& operator=(const BasicInfo &) = default ;
        BasicInfo& operator=(BasicInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProductName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProductName& obj) { 
            DARABONBA_PTR_TO_JSON(cnName, cnName_);
            DARABONBA_PTR_TO_JSON(enName, enName_);
          };
          friend void from_json(const Darabonba::Json& j, ProductName& obj) { 
            DARABONBA_PTR_FROM_JSON(cnName, cnName_);
            DARABONBA_PTR_FROM_JSON(enName, enName_);
          };
          ProductName() = default ;
          ProductName(const ProductName &) = default ;
          ProductName(ProductName &&) = default ;
          ProductName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProductName() = default ;
          ProductName& operator=(const ProductName &) = default ;
          ProductName& operator=(ProductName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cnName_ == nullptr
        && this->enName_ == nullptr; };
          // cnName Field Functions 
          bool hasCnName() const { return this->cnName_ != nullptr;};
          void deleteCnName() { this->cnName_ = nullptr;};
          inline string getCnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
          inline ProductName& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


          // enName Field Functions 
          bool hasEnName() const { return this->enName_ != nullptr;};
          void deleteEnName() { this->enName_ = nullptr;};
          inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
          inline ProductName& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


        protected:
          // The Chinese name of the product.
          shared_ptr<string> cnName_ {};
          // The English name of the product.
          shared_ptr<string> enName_ {};
        };

        class ApiDoc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApiDoc& obj) { 
            DARABONBA_PTR_TO_JSON(alibabacloudSite, alibabacloudSite_);
            DARABONBA_PTR_TO_JSON(aliyunSite, aliyunSite_);
          };
          friend void from_json(const Darabonba::Json& j, ApiDoc& obj) { 
            DARABONBA_PTR_FROM_JSON(alibabacloudSite, alibabacloudSite_);
            DARABONBA_PTR_FROM_JSON(aliyunSite, aliyunSite_);
          };
          ApiDoc() = default ;
          ApiDoc(const ApiDoc &) = default ;
          ApiDoc(ApiDoc &&) = default ;
          ApiDoc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ApiDoc() = default ;
          ApiDoc& operator=(const ApiDoc &) = default ;
          ApiDoc& operator=(ApiDoc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->alibabacloudSite_ == nullptr
        && this->aliyunSite_ == nullptr; };
          // alibabacloudSite Field Functions 
          bool hasAlibabacloudSite() const { return this->alibabacloudSite_ != nullptr;};
          void deleteAlibabacloudSite() { this->alibabacloudSite_ = nullptr;};
          inline string getAlibabacloudSite() const { DARABONBA_PTR_GET_DEFAULT(alibabacloudSite_, "") };
          inline ApiDoc& setAlibabacloudSite(string alibabacloudSite) { DARABONBA_PTR_SET_VALUE(alibabacloudSite_, alibabacloudSite) };


          // aliyunSite Field Functions 
          bool hasAliyunSite() const { return this->aliyunSite_ != nullptr;};
          void deleteAliyunSite() { this->aliyunSite_ = nullptr;};
          inline string getAliyunSite() const { DARABONBA_PTR_GET_DEFAULT(aliyunSite_, "") };
          inline ApiDoc& setAliyunSite(string aliyunSite) { DARABONBA_PTR_SET_VALUE(aliyunSite_, aliyunSite) };


        protected:
          // The link to the API reference on the Alibaba Cloud International Website (www\\.alibabacloud.com).
          shared_ptr<string> alibabacloudSite_ {};
          // The link to the API reference on the Alibaba Cloud China Website (www\\.aliyun.com).
          shared_ptr<string> aliyunSite_ {};
        };

        class AccessDeniedDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
            DARABONBA_PTR_TO_JSON(authAction, authAction_);
            DARABONBA_PTR_TO_JSON(authPrincipalDisplayName, authPrincipalDisplayName_);
            DARABONBA_PTR_TO_JSON(authPrincipalOwnerId, authPrincipalOwnerId_);
            DARABONBA_PTR_TO_JSON(authPrincipalType, authPrincipalType_);
            DARABONBA_PTR_TO_JSON(encodedDiagnosticMessage, encodedDiagnosticMessage_);
            DARABONBA_PTR_TO_JSON(noPermissionType, noPermissionType_);
            DARABONBA_PTR_TO_JSON(policyType, policyType_);
          };
          friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(authAction, authAction_);
            DARABONBA_PTR_FROM_JSON(authPrincipalDisplayName, authPrincipalDisplayName_);
            DARABONBA_PTR_FROM_JSON(authPrincipalOwnerId, authPrincipalOwnerId_);
            DARABONBA_PTR_FROM_JSON(authPrincipalType, authPrincipalType_);
            DARABONBA_PTR_FROM_JSON(encodedDiagnosticMessage, encodedDiagnosticMessage_);
            DARABONBA_PTR_FROM_JSON(noPermissionType, noPermissionType_);
            DARABONBA_PTR_FROM_JSON(policyType, policyType_);
          };
          AccessDeniedDetail() = default ;
          AccessDeniedDetail(const AccessDeniedDetail &) = default ;
          AccessDeniedDetail(AccessDeniedDetail &&) = default ;
          AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccessDeniedDetail() = default ;
          AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
          AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
          // authAction Field Functions 
          bool hasAuthAction() const { return this->authAction_ != nullptr;};
          void deleteAuthAction() { this->authAction_ = nullptr;};
          inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
          inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


          // authPrincipalDisplayName Field Functions 
          bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
          void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
          inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
          inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


          // authPrincipalOwnerId Field Functions 
          bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
          void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
          inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
          inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


          // authPrincipalType Field Functions 
          bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
          void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
          inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
          inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


          // encodedDiagnosticMessage Field Functions 
          bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
          void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
          inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
          inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


          // noPermissionType Field Functions 
          bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
          void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
          inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
          inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


          // policyType Field Functions 
          bool hasPolicyType() const { return this->policyType_ != nullptr;};
          void deletePolicyType() { this->policyType_ = nullptr;};
          inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
          inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        protected:
          // The specific operation that is denied.
          shared_ptr<string> authAction_ {};
          // The identity.
          shared_ptr<string> authPrincipalDisplayName_ {};
          // The UID of the Alibaba Cloud account to which the current identity belongs.
          shared_ptr<string> authPrincipalOwnerId_ {};
          // The identity type of the operator.
          shared_ptr<string> authPrincipalType_ {};
          // The encoded diagnostic message. To obtain more diagnostic information, call the DecodeDiagnosticMessage operation of RAM.
          shared_ptr<string> encodedDiagnosticMessage_ {};
          // The reason why the access is denied.
          shared_ptr<string> noPermissionType_ {};
          // The type of the policy that denies the access.
          shared_ptr<string> policyType_ {};
        };

        virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->api_ == nullptr && this->apiDoc_ == nullptr && this->apiStyle_ == nullptr && this->apiVersion_ == nullptr && this->endpoint_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->gatewayProcessTime_ == nullptr && this->httpMethod_ == nullptr && this->httpStatusCode_ == nullptr
        && this->logRequestId_ == nullptr && this->product_ == nullptr && this->productName_ == nullptr && this->regionId_ == nullptr && this->requestDuration_ == nullptr
        && this->sdkRequestTime_ == nullptr && this->throttlingResult_ == nullptr; };
        // accessDeniedDetail Field Functions 
        bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
        void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
        inline const BasicInfo::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, BasicInfo::AccessDeniedDetail) };
        inline BasicInfo::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, BasicInfo::AccessDeniedDetail) };
        inline BasicInfo& setAccessDeniedDetail(const BasicInfo::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
        inline BasicInfo& setAccessDeniedDetail(BasicInfo::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


        // api Field Functions 
        bool hasApi() const { return this->api_ != nullptr;};
        void deleteApi() { this->api_ = nullptr;};
        inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
        inline BasicInfo& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


        // apiDoc Field Functions 
        bool hasApiDoc() const { return this->apiDoc_ != nullptr;};
        void deleteApiDoc() { this->apiDoc_ = nullptr;};
        inline const BasicInfo::ApiDoc & getApiDoc() const { DARABONBA_PTR_GET_CONST(apiDoc_, BasicInfo::ApiDoc) };
        inline BasicInfo::ApiDoc getApiDoc() { DARABONBA_PTR_GET(apiDoc_, BasicInfo::ApiDoc) };
        inline BasicInfo& setApiDoc(const BasicInfo::ApiDoc & apiDoc) { DARABONBA_PTR_SET_VALUE(apiDoc_, apiDoc) };
        inline BasicInfo& setApiDoc(BasicInfo::ApiDoc && apiDoc) { DARABONBA_PTR_SET_RVALUE(apiDoc_, apiDoc) };


        // apiStyle Field Functions 
        bool hasApiStyle() const { return this->apiStyle_ != nullptr;};
        void deleteApiStyle() { this->apiStyle_ = nullptr;};
        inline string getApiStyle() const { DARABONBA_PTR_GET_DEFAULT(apiStyle_, "") };
        inline BasicInfo& setApiStyle(string apiStyle) { DARABONBA_PTR_SET_VALUE(apiStyle_, apiStyle) };


        // apiVersion Field Functions 
        bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
        void deleteApiVersion() { this->apiVersion_ = nullptr;};
        inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
        inline BasicInfo& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline BasicInfo& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline BasicInfo& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline BasicInfo& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // gatewayProcessTime Field Functions 
        bool hasGatewayProcessTime() const { return this->gatewayProcessTime_ != nullptr;};
        void deleteGatewayProcessTime() { this->gatewayProcessTime_ = nullptr;};
        inline string getGatewayProcessTime() const { DARABONBA_PTR_GET_DEFAULT(gatewayProcessTime_, "") };
        inline BasicInfo& setGatewayProcessTime(string gatewayProcessTime) { DARABONBA_PTR_SET_VALUE(gatewayProcessTime_, gatewayProcessTime) };


        // httpMethod Field Functions 
        bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
        void deleteHttpMethod() { this->httpMethod_ = nullptr;};
        inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
        inline BasicInfo& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


        // httpStatusCode Field Functions 
        bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
        void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
        inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
        inline BasicInfo& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


        // logRequestId Field Functions 
        bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
        void deleteLogRequestId() { this->logRequestId_ = nullptr;};
        inline string getLogRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
        inline BasicInfo& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline BasicInfo& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline const BasicInfo::ProductName & getProductName() const { DARABONBA_PTR_GET_CONST(productName_, BasicInfo::ProductName) };
        inline BasicInfo::ProductName getProductName() { DARABONBA_PTR_GET(productName_, BasicInfo::ProductName) };
        inline BasicInfo& setProductName(const BasicInfo::ProductName & productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };
        inline BasicInfo& setProductName(BasicInfo::ProductName && productName) { DARABONBA_PTR_SET_RVALUE(productName_, productName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline BasicInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // requestDuration Field Functions 
        bool hasRequestDuration() const { return this->requestDuration_ != nullptr;};
        void deleteRequestDuration() { this->requestDuration_ = nullptr;};
        inline string getRequestDuration() const { DARABONBA_PTR_GET_DEFAULT(requestDuration_, "") };
        inline BasicInfo& setRequestDuration(string requestDuration) { DARABONBA_PTR_SET_VALUE(requestDuration_, requestDuration) };


        // sdkRequestTime Field Functions 
        bool hasSdkRequestTime() const { return this->sdkRequestTime_ != nullptr;};
        void deleteSdkRequestTime() { this->sdkRequestTime_ = nullptr;};
        inline string getSdkRequestTime() const { DARABONBA_PTR_GET_DEFAULT(sdkRequestTime_, "") };
        inline BasicInfo& setSdkRequestTime(string sdkRequestTime) { DARABONBA_PTR_SET_VALUE(sdkRequestTime_, sdkRequestTime) };


        // throttlingResult Field Functions 
        bool hasThrottlingResult() const { return this->throttlingResult_ != nullptr;};
        void deleteThrottlingResult() { this->throttlingResult_ = nullptr;};
        inline string getThrottlingResult() const { DARABONBA_PTR_GET_DEFAULT(throttlingResult_, "") };
        inline BasicInfo& setThrottlingResult(string throttlingResult) { DARABONBA_PTR_SET_VALUE(throttlingResult_, throttlingResult) };


      protected:
        // The details of the access denied error. This field is returned only if an authentication error occurs for the specified request ID.
        shared_ptr<BasicInfo::AccessDeniedDetail> accessDeniedDetail_ {};
        // The name of the API that was called.
        shared_ptr<string> api_ {};
        // The API reference information.
        shared_ptr<BasicInfo::ApiDoc> apiDoc_ {};
        // The API style. Valid values: ROA and RPC.
        shared_ptr<string> apiStyle_ {};
        // The API version.
        shared_ptr<string> apiVersion_ {};
        // The endpoint of the area where the endpoint is deployed.
        shared_ptr<string> endpoint_ {};
        // The error code in the log. This field is empty if no error is reported for the request.
        shared_ptr<string> errorCode_ {};
        // The error message in the log. This field is empty if no error is reported for the request.
        shared_ptr<string> errorMessage_ {};
        // The time when the gateway received the request. The time is in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> gatewayProcessTime_ {};
        // The HTTP request method. Examples: GET, PUT, and POST.
        shared_ptr<string> httpMethod_ {};
        // The HTTP status code in the log.
        shared_ptr<string> httpStatusCode_ {};
        // The request ID that you specified.
        shared_ptr<string> logRequestId_ {};
        // The product code.
        shared_ptr<string> product_ {};
        // The product name, which includes the Chinese and English names.
        shared_ptr<BasicInfo::ProductName> productName_ {};
        // The ID of the area where the endpoint is deployed.
        shared_ptr<string> regionId_ {};
        // The time that elapses from when the gateway receives a request to when it returns a response. Unit: milliseconds (ms).
        shared_ptr<string> requestDuration_ {};
        // The time when the request was initiated. The time is in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> sdkRequestTime_ {};
        // The result of the throttling check. FC.PASS: The request was not blocked by the throttling check and no rate limiting occurred. FC.DENY: The request was blocked by the throttling check and rate limiting occurred.
        shared_ptr<string> throttlingResult_ {};
      };

      class AuthenticationInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthenticationInfo& obj) { 
          DARABONBA_PTR_TO_JSON(authenticationType, authenticationType_);
          DARABONBA_PTR_TO_JSON(signatureMethod, signatureMethod_);
          DARABONBA_PTR_TO_JSON(signatureVersion, signatureVersion_);
        };
        friend void from_json(const Darabonba::Json& j, AuthenticationInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(authenticationType, authenticationType_);
          DARABONBA_PTR_FROM_JSON(signatureMethod, signatureMethod_);
          DARABONBA_PTR_FROM_JSON(signatureVersion, signatureVersion_);
        };
        AuthenticationInfo() = default ;
        AuthenticationInfo(const AuthenticationInfo &) = default ;
        AuthenticationInfo(AuthenticationInfo &&) = default ;
        AuthenticationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthenticationInfo() = default ;
        AuthenticationInfo& operator=(const AuthenticationInfo &) = default ;
        AuthenticationInfo& operator=(AuthenticationInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authenticationType_ == nullptr
        && this->signatureMethod_ == nullptr && this->signatureVersion_ == nullptr; };
        // authenticationType Field Functions 
        bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
        void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
        inline string getAuthenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
        inline AuthenticationInfo& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


        // signatureMethod Field Functions 
        bool hasSignatureMethod() const { return this->signatureMethod_ != nullptr;};
        void deleteSignatureMethod() { this->signatureMethod_ = nullptr;};
        inline string getSignatureMethod() const { DARABONBA_PTR_GET_DEFAULT(signatureMethod_, "") };
        inline AuthenticationInfo& setSignatureMethod(string signatureMethod) { DARABONBA_PTR_SET_VALUE(signatureMethod_, signatureMethod) };


        // signatureVersion Field Functions 
        bool hasSignatureVersion() const { return this->signatureVersion_ != nullptr;};
        void deleteSignatureVersion() { this->signatureVersion_ = nullptr;};
        inline string getSignatureVersion() const { DARABONBA_PTR_GET_DEFAULT(signatureVersion_, "") };
        inline AuthenticationInfo& setSignatureVersion(string signatureVersion) { DARABONBA_PTR_SET_VALUE(signatureVersion_, signatureVersion) };


      protected:
        // The authentication type.
        // 
        // - AK: An AccessKey pair, which can be a permanent AccessKey pair, a temporary AccessKey pair, or an STS token.
        // 
        // - PRIVATEKEY: An AccessKey pair that uses asymmetric key encryption.
        // 
        // - BEARERTOKEN: An identity verification mechanism that is widely used in the OAuth 2.0 framework and cloud services.
        // 
        // - CUSTOM_SPI: An efficient and secure authentication method that is used for the delivery and management of Software as a Service (SaaS) products in Alibaba Cloud Marketplace.
        // 
        // - Anonymous: Anonymous access.
        // 
        // - DPS: Similar to an AccessKey pair, but uses a signature algorithm that is different from the official Alibaba Cloud algorithm. This method is specific to certain products.
        shared_ptr<string> authenticationType_ {};
        // The signature method.
        // 
        // - HMAC-SHA1: The request is signed using the HMAC-SHA1 algorithm.
        // 
        // - HMAC-SHA256: The request is signed using the HMAC-SHA256 algorithm.
        shared_ptr<string> signatureMethod_ {};
        // The signature version.
        shared_ptr<string> signatureVersion_ {};
      };

      virtual bool empty() const override { return this->authenticationInfo_ == nullptr
        && this->basicInfo_ == nullptr && this->callerInfo_ == nullptr && this->parameters_ == nullptr && this->responses_ == nullptr; };
      // authenticationInfo Field Functions 
      bool hasAuthenticationInfo() const { return this->authenticationInfo_ != nullptr;};
      void deleteAuthenticationInfo() { this->authenticationInfo_ = nullptr;};
      inline const LogInfo::AuthenticationInfo & getAuthenticationInfo() const { DARABONBA_PTR_GET_CONST(authenticationInfo_, LogInfo::AuthenticationInfo) };
      inline LogInfo::AuthenticationInfo getAuthenticationInfo() { DARABONBA_PTR_GET(authenticationInfo_, LogInfo::AuthenticationInfo) };
      inline LogInfo& setAuthenticationInfo(const LogInfo::AuthenticationInfo & authenticationInfo) { DARABONBA_PTR_SET_VALUE(authenticationInfo_, authenticationInfo) };
      inline LogInfo& setAuthenticationInfo(LogInfo::AuthenticationInfo && authenticationInfo) { DARABONBA_PTR_SET_RVALUE(authenticationInfo_, authenticationInfo) };


      // basicInfo Field Functions 
      bool hasBasicInfo() const { return this->basicInfo_ != nullptr;};
      void deleteBasicInfo() { this->basicInfo_ = nullptr;};
      inline const LogInfo::BasicInfo & getBasicInfo() const { DARABONBA_PTR_GET_CONST(basicInfo_, LogInfo::BasicInfo) };
      inline LogInfo::BasicInfo getBasicInfo() { DARABONBA_PTR_GET(basicInfo_, LogInfo::BasicInfo) };
      inline LogInfo& setBasicInfo(const LogInfo::BasicInfo & basicInfo) { DARABONBA_PTR_SET_VALUE(basicInfo_, basicInfo) };
      inline LogInfo& setBasicInfo(LogInfo::BasicInfo && basicInfo) { DARABONBA_PTR_SET_RVALUE(basicInfo_, basicInfo) };


      // callerInfo Field Functions 
      bool hasCallerInfo() const { return this->callerInfo_ != nullptr;};
      void deleteCallerInfo() { this->callerInfo_ = nullptr;};
      inline const LogInfo::CallerInfo & getCallerInfo() const { DARABONBA_PTR_GET_CONST(callerInfo_, LogInfo::CallerInfo) };
      inline LogInfo::CallerInfo getCallerInfo() { DARABONBA_PTR_GET(callerInfo_, LogInfo::CallerInfo) };
      inline LogInfo& setCallerInfo(const LogInfo::CallerInfo & callerInfo) { DARABONBA_PTR_SET_VALUE(callerInfo_, callerInfo) };
      inline LogInfo& setCallerInfo(LogInfo::CallerInfo && callerInfo) { DARABONBA_PTR_SET_RVALUE(callerInfo_, callerInfo) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<LogInfo::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<LogInfo::Parameters>) };
      inline vector<LogInfo::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<LogInfo::Parameters>) };
      inline LogInfo& setParameters(const vector<LogInfo::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline LogInfo& setParameters(vector<LogInfo::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // responses Field Functions 
      bool hasResponses() const { return this->responses_ != nullptr;};
      void deleteResponses() { this->responses_ = nullptr;};
      inline const LogInfo::Responses & getResponses() const { DARABONBA_PTR_GET_CONST(responses_, LogInfo::Responses) };
      inline LogInfo::Responses getResponses() { DARABONBA_PTR_GET(responses_, LogInfo::Responses) };
      inline LogInfo& setResponses(const LogInfo::Responses & responses) { DARABONBA_PTR_SET_VALUE(responses_, responses) };
      inline LogInfo& setResponses(LogInfo::Responses && responses) { DARABONBA_PTR_SET_RVALUE(responses_, responses) };


    protected:
      // The authentication information.
      shared_ptr<LogInfo::AuthenticationInfo> authenticationInfo_ {};
      // The basic information about the API request.
      shared_ptr<LogInfo::BasicInfo> basicInfo_ {};
      // The information about the caller.
      shared_ptr<LogInfo::CallerInfo> callerInfo_ {};
      // The request parameter information.
      shared_ptr<vector<LogInfo::Parameters>> parameters_ {};
      // The response information that corresponds to the request.
      shared_ptr<LogInfo::Responses> responses_ {};
    };

    virtual bool empty() const override { return this->logInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // logInfo Field Functions 
    bool hasLogInfo() const { return this->logInfo_ != nullptr;};
    void deleteLogInfo() { this->logInfo_ = nullptr;};
    inline const GetRequestLogResponseBody::LogInfo & getLogInfo() const { DARABONBA_PTR_GET_CONST(logInfo_, GetRequestLogResponseBody::LogInfo) };
    inline GetRequestLogResponseBody::LogInfo getLogInfo() { DARABONBA_PTR_GET(logInfo_, GetRequestLogResponseBody::LogInfo) };
    inline GetRequestLogResponseBody& setLogInfo(const GetRequestLogResponseBody::LogInfo & logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };
    inline GetRequestLogResponseBody& setLogInfo(GetRequestLogResponseBody::LogInfo && logInfo) { DARABONBA_PTR_SET_RVALUE(logInfo_, logInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRequestLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the API request log.
    shared_ptr<GetRequestLogResponseBody::LogInfo> logInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
