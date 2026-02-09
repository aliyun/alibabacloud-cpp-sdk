// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMGSAPIRESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMgsApirestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMgsApirestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMgsApirestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryMgsApirestResponseBody() = default ;
    QueryMgsApirestResponseBody(const QueryMgsApirestResponseBody &) = default ;
    QueryMgsApirestResponseBody(QueryMgsApirestResponseBody &&) = default ;
    QueryMgsApirestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMgsApirestResponseBody() = default ;
    QueryMgsApirestResponseBody& operator=(const QueryMgsApirestResponseBody &) = default ;
    QueryMgsApirestResponseBody& operator=(QueryMgsApirestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Value : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Value& obj) { 
          DARABONBA_PTR_TO_JSON(ApiInvoker, apiInvoker_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
          DARABONBA_PTR_TO_JSON(ApiType, apiType_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AuthRuleName, authRuleName_);
          DARABONBA_PTR_TO_JSON(CacheRule, cacheRule_);
          DARABONBA_PTR_TO_JSON(Charset, charset_);
          DARABONBA_PTR_TO_JSON(CircuitBreakerRule, circuitBreakerRule_);
          DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          DARABONBA_PTR_TO_JSON(DefaultLimitRule, defaultLimitRule_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(HeaderRule, headerRule_);
          DARABONBA_PTR_TO_JSON(HeaderRules, headerRules_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InterfaceType, interfaceType_);
          DARABONBA_PTR_TO_JSON(LimitRule, limitRule_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(MethodName, methodName_);
          DARABONBA_PTR_TO_JSON(MigrateRule, migrateRule_);
          DARABONBA_PTR_TO_JSON(MockRule, mockRule_);
          DARABONBA_PTR_TO_JSON(NeedETag, needETag_);
          DARABONBA_PTR_TO_JSON(NeedEncrypt, needEncrypt_);
          DARABONBA_PTR_TO_JSON(NeedJsonp, needJsonp_);
          DARABONBA_PTR_TO_JSON(NeedSign, needSign_);
          DARABONBA_PTR_TO_JSON(OperationType, operationType_);
          DARABONBA_PTR_TO_JSON(ParamGetMethod, paramGetMethod_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(RequestBodyModel, requestBodyModel_);
          DARABONBA_PTR_TO_JSON(RequestParams, requestParams_);
          DARABONBA_PTR_TO_JSON(ResponseBodyModel, responseBodyModel_);
          DARABONBA_PTR_TO_JSON(SysId, sysId_);
          DARABONBA_PTR_TO_JSON(SysName, sysName_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, Value& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiInvoker, apiInvoker_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
          DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AuthRuleName, authRuleName_);
          DARABONBA_PTR_FROM_JSON(CacheRule, cacheRule_);
          DARABONBA_PTR_FROM_JSON(Charset, charset_);
          DARABONBA_PTR_FROM_JSON(CircuitBreakerRule, circuitBreakerRule_);
          DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          DARABONBA_PTR_FROM_JSON(DefaultLimitRule, defaultLimitRule_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(HeaderRule, headerRule_);
          DARABONBA_PTR_FROM_JSON(HeaderRules, headerRules_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InterfaceType, interfaceType_);
          DARABONBA_PTR_FROM_JSON(LimitRule, limitRule_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
          DARABONBA_PTR_FROM_JSON(MigrateRule, migrateRule_);
          DARABONBA_PTR_FROM_JSON(MockRule, mockRule_);
          DARABONBA_PTR_FROM_JSON(NeedETag, needETag_);
          DARABONBA_PTR_FROM_JSON(NeedEncrypt, needEncrypt_);
          DARABONBA_PTR_FROM_JSON(NeedJsonp, needJsonp_);
          DARABONBA_PTR_FROM_JSON(NeedSign, needSign_);
          DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
          DARABONBA_PTR_FROM_JSON(ParamGetMethod, paramGetMethod_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(RequestBodyModel, requestBodyModel_);
          DARABONBA_PTR_FROM_JSON(RequestParams, requestParams_);
          DARABONBA_PTR_FROM_JSON(ResponseBodyModel, responseBodyModel_);
          DARABONBA_PTR_FROM_JSON(SysId, sysId_);
          DARABONBA_PTR_FROM_JSON(SysName, sysName_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        };
        Value() = default ;
        Value(const Value &) = default ;
        Value(Value &&) = default ;
        Value(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Value() = default ;
        Value& operator=(const Value &) = default ;
        Value& operator=(Value &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RequestParams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RequestParams& obj) { 
            DARABONBA_PTR_TO_JSON(ApiId, apiId_);
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RefType, refType_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          };
          friend void from_json(const Darabonba::Json& j, RequestParams& obj) { 
            DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RefType, refType_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          };
          RequestParams() = default ;
          RequestParams(const RequestParams &) = default ;
          RequestParams(RequestParams &&) = default ;
          RequestParams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RequestParams() = default ;
          RequestParams& operator=(const RequestParams &) = default ;
          RequestParams& operator=(RequestParams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->apiId_ == nullptr
        && this->appId_ == nullptr && this->defaultValue_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->location_ == nullptr
        && this->name_ == nullptr && this->refType_ == nullptr && this->type_ == nullptr && this->workspaceId_ == nullptr; };
          // apiId Field Functions 
          bool hasApiId() const { return this->apiId_ != nullptr;};
          void deleteApiId() { this->apiId_ = nullptr;};
          inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
          inline RequestParams& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline RequestParams& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline RequestParams& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline RequestParams& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline RequestParams& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline RequestParams& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RequestParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // refType Field Functions 
          bool hasRefType() const { return this->refType_ != nullptr;};
          void deleteRefType() { this->refType_ = nullptr;};
          inline string getRefType() const { DARABONBA_PTR_GET_DEFAULT(refType_, "") };
          inline RequestParams& setRefType(string refType) { DARABONBA_PTR_SET_VALUE(refType_, refType) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline RequestParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // workspaceId Field Functions 
          bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
          void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
          inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
          inline RequestParams& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        protected:
          shared_ptr<string> apiId_ {};
          shared_ptr<string> appId_ {};
          shared_ptr<string> defaultValue_ {};
          shared_ptr<string> description_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> location_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> refType_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> workspaceId_ {};
        };

        class MockRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MockRule& obj) { 
            DARABONBA_PTR_TO_JSON(MockData, mockData_);
            DARABONBA_PTR_TO_JSON(NeedMock, needMock_);
            DARABONBA_PTR_TO_JSON(Percentage, percentage_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, MockRule& obj) { 
            DARABONBA_PTR_FROM_JSON(MockData, mockData_);
            DARABONBA_PTR_FROM_JSON(NeedMock, needMock_);
            DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          MockRule() = default ;
          MockRule(const MockRule &) = default ;
          MockRule(MockRule &&) = default ;
          MockRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MockRule() = default ;
          MockRule& operator=(const MockRule &) = default ;
          MockRule& operator=(MockRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->mockData_ == nullptr
        && this->needMock_ == nullptr && this->percentage_ == nullptr && this->type_ == nullptr; };
          // mockData Field Functions 
          bool hasMockData() const { return this->mockData_ != nullptr;};
          void deleteMockData() { this->mockData_ = nullptr;};
          inline string getMockData() const { DARABONBA_PTR_GET_DEFAULT(mockData_, "") };
          inline MockRule& setMockData(string mockData) { DARABONBA_PTR_SET_VALUE(mockData_, mockData) };


          // needMock Field Functions 
          bool hasNeedMock() const { return this->needMock_ != nullptr;};
          void deleteNeedMock() { this->needMock_ = nullptr;};
          inline bool getNeedMock() const { DARABONBA_PTR_GET_DEFAULT(needMock_, false) };
          inline MockRule& setNeedMock(bool needMock) { DARABONBA_PTR_SET_VALUE(needMock_, needMock) };


          // percentage Field Functions 
          bool hasPercentage() const { return this->percentage_ != nullptr;};
          void deletePercentage() { this->percentage_ = nullptr;};
          inline int64_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0L) };
          inline MockRule& setPercentage(int64_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline MockRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> mockData_ {};
          shared_ptr<bool> needMock_ {};
          shared_ptr<int64_t> percentage_ {};
          shared_ptr<string> type_ {};
        };

        class MigrateRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MigrateRule& obj) { 
            DARABONBA_PTR_TO_JSON(FlowPercent, flowPercent_);
            DARABONBA_PTR_TO_JSON(NeedMigrate, needMigrate_);
            DARABONBA_PTR_TO_JSON(NeedSwitchCompletely, needSwitchCompletely_);
            DARABONBA_PTR_TO_JSON(SysId, sysId_);
            DARABONBA_PTR_TO_JSON(SysName, sysName_);
            DARABONBA_PTR_TO_JSON(UpstreamType, upstreamType_);
          };
          friend void from_json(const Darabonba::Json& j, MigrateRule& obj) { 
            DARABONBA_PTR_FROM_JSON(FlowPercent, flowPercent_);
            DARABONBA_PTR_FROM_JSON(NeedMigrate, needMigrate_);
            DARABONBA_PTR_FROM_JSON(NeedSwitchCompletely, needSwitchCompletely_);
            DARABONBA_PTR_FROM_JSON(SysId, sysId_);
            DARABONBA_PTR_FROM_JSON(SysName, sysName_);
            DARABONBA_PTR_FROM_JSON(UpstreamType, upstreamType_);
          };
          MigrateRule() = default ;
          MigrateRule(const MigrateRule &) = default ;
          MigrateRule(MigrateRule &&) = default ;
          MigrateRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MigrateRule() = default ;
          MigrateRule& operator=(const MigrateRule &) = default ;
          MigrateRule& operator=(MigrateRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->flowPercent_ == nullptr
        && this->needMigrate_ == nullptr && this->needSwitchCompletely_ == nullptr && this->sysId_ == nullptr && this->sysName_ == nullptr && this->upstreamType_ == nullptr; };
          // flowPercent Field Functions 
          bool hasFlowPercent() const { return this->flowPercent_ != nullptr;};
          void deleteFlowPercent() { this->flowPercent_ = nullptr;};
          inline int64_t getFlowPercent() const { DARABONBA_PTR_GET_DEFAULT(flowPercent_, 0L) };
          inline MigrateRule& setFlowPercent(int64_t flowPercent) { DARABONBA_PTR_SET_VALUE(flowPercent_, flowPercent) };


          // needMigrate Field Functions 
          bool hasNeedMigrate() const { return this->needMigrate_ != nullptr;};
          void deleteNeedMigrate() { this->needMigrate_ = nullptr;};
          inline bool getNeedMigrate() const { DARABONBA_PTR_GET_DEFAULT(needMigrate_, false) };
          inline MigrateRule& setNeedMigrate(bool needMigrate) { DARABONBA_PTR_SET_VALUE(needMigrate_, needMigrate) };


          // needSwitchCompletely Field Functions 
          bool hasNeedSwitchCompletely() const { return this->needSwitchCompletely_ != nullptr;};
          void deleteNeedSwitchCompletely() { this->needSwitchCompletely_ = nullptr;};
          inline bool getNeedSwitchCompletely() const { DARABONBA_PTR_GET_DEFAULT(needSwitchCompletely_, false) };
          inline MigrateRule& setNeedSwitchCompletely(bool needSwitchCompletely) { DARABONBA_PTR_SET_VALUE(needSwitchCompletely_, needSwitchCompletely) };


          // sysId Field Functions 
          bool hasSysId() const { return this->sysId_ != nullptr;};
          void deleteSysId() { this->sysId_ = nullptr;};
          inline int64_t getSysId() const { DARABONBA_PTR_GET_DEFAULT(sysId_, 0L) };
          inline MigrateRule& setSysId(int64_t sysId) { DARABONBA_PTR_SET_VALUE(sysId_, sysId) };


          // sysName Field Functions 
          bool hasSysName() const { return this->sysName_ != nullptr;};
          void deleteSysName() { this->sysName_ = nullptr;};
          inline string getSysName() const { DARABONBA_PTR_GET_DEFAULT(sysName_, "") };
          inline MigrateRule& setSysName(string sysName) { DARABONBA_PTR_SET_VALUE(sysName_, sysName) };


          // upstreamType Field Functions 
          bool hasUpstreamType() const { return this->upstreamType_ != nullptr;};
          void deleteUpstreamType() { this->upstreamType_ = nullptr;};
          inline string getUpstreamType() const { DARABONBA_PTR_GET_DEFAULT(upstreamType_, "") };
          inline MigrateRule& setUpstreamType(string upstreamType) { DARABONBA_PTR_SET_VALUE(upstreamType_, upstreamType) };


        protected:
          shared_ptr<int64_t> flowPercent_ {};
          shared_ptr<bool> needMigrate_ {};
          shared_ptr<bool> needSwitchCompletely_ {};
          shared_ptr<int64_t> sysId_ {};
          shared_ptr<string> sysName_ {};
          shared_ptr<string> upstreamType_ {};
        };

        class LimitRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LimitRule& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultResponse, defaultResponse_);
            DARABONBA_PTR_TO_JSON(I18nResponse, i18nResponse_);
            DARABONBA_PTR_TO_JSON(Interval, interval_);
            DARABONBA_PTR_TO_JSON(Limit, limit_);
            DARABONBA_PTR_TO_JSON(Mode, mode_);
          };
          friend void from_json(const Darabonba::Json& j, LimitRule& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultResponse, defaultResponse_);
            DARABONBA_PTR_FROM_JSON(I18nResponse, i18nResponse_);
            DARABONBA_PTR_FROM_JSON(Interval, interval_);
            DARABONBA_PTR_FROM_JSON(Limit, limit_);
            DARABONBA_PTR_FROM_JSON(Mode, mode_);
          };
          LimitRule() = default ;
          LimitRule(const LimitRule &) = default ;
          LimitRule(LimitRule &&) = default ;
          LimitRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LimitRule() = default ;
          LimitRule& operator=(const LimitRule &) = default ;
          LimitRule& operator=(LimitRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultResponse_ == nullptr
        && this->i18nResponse_ == nullptr && this->interval_ == nullptr && this->limit_ == nullptr && this->mode_ == nullptr; };
          // defaultResponse Field Functions 
          bool hasDefaultResponse() const { return this->defaultResponse_ != nullptr;};
          void deleteDefaultResponse() { this->defaultResponse_ = nullptr;};
          inline string getDefaultResponse() const { DARABONBA_PTR_GET_DEFAULT(defaultResponse_, "") };
          inline LimitRule& setDefaultResponse(string defaultResponse) { DARABONBA_PTR_SET_VALUE(defaultResponse_, defaultResponse) };


          // i18nResponse Field Functions 
          bool hasI18nResponse() const { return this->i18nResponse_ != nullptr;};
          void deleteI18nResponse() { this->i18nResponse_ = nullptr;};
          inline string getI18nResponse() const { DARABONBA_PTR_GET_DEFAULT(i18nResponse_, "") };
          inline LimitRule& setI18nResponse(string i18nResponse) { DARABONBA_PTR_SET_VALUE(i18nResponse_, i18nResponse) };


          // interval Field Functions 
          bool hasInterval() const { return this->interval_ != nullptr;};
          void deleteInterval() { this->interval_ = nullptr;};
          inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
          inline LimitRule& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


          // limit Field Functions 
          bool hasLimit() const { return this->limit_ != nullptr;};
          void deleteLimit() { this->limit_ = nullptr;};
          inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
          inline LimitRule& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


          // mode Field Functions 
          bool hasMode() const { return this->mode_ != nullptr;};
          void deleteMode() { this->mode_ = nullptr;};
          inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
          inline LimitRule& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        protected:
          shared_ptr<string> defaultResponse_ {};
          shared_ptr<string> i18nResponse_ {};
          shared_ptr<int64_t> interval_ {};
          shared_ptr<int64_t> limit_ {};
          shared_ptr<string> mode_ {};
        };

        class HeaderRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HeaderRules& obj) { 
            DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HeaderRules& obj) { 
            DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          HeaderRules() = default ;
          HeaderRules(const HeaderRules &) = default ;
          HeaderRules(HeaderRules &&) = default ;
          HeaderRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HeaderRules() = default ;
          HeaderRules& operator=(const HeaderRules &) = default ;
          HeaderRules& operator=(HeaderRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->headerKey_ == nullptr
        && this->location_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // headerKey Field Functions 
          bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
          void deleteHeaderKey() { this->headerKey_ = nullptr;};
          inline string getHeaderKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
          inline HeaderRules& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline HeaderRules& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline HeaderRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline HeaderRules& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> headerKey_ {};
          shared_ptr<string> location_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
        };

        class HeaderRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HeaderRule& obj) { 
            DARABONBA_PTR_TO_JSON(HeaderKey, headerKey_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HeaderRule& obj) { 
            DARABONBA_PTR_FROM_JSON(HeaderKey, headerKey_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          HeaderRule() = default ;
          HeaderRule(const HeaderRule &) = default ;
          HeaderRule(HeaderRule &&) = default ;
          HeaderRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HeaderRule() = default ;
          HeaderRule& operator=(const HeaderRule &) = default ;
          HeaderRule& operator=(HeaderRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->headerKey_ == nullptr
        && this->location_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // headerKey Field Functions 
          bool hasHeaderKey() const { return this->headerKey_ != nullptr;};
          void deleteHeaderKey() { this->headerKey_ = nullptr;};
          inline string getHeaderKey() const { DARABONBA_PTR_GET_DEFAULT(headerKey_, "") };
          inline HeaderRule& setHeaderKey(string headerKey) { DARABONBA_PTR_SET_VALUE(headerKey_, headerKey) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline HeaderRule& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline HeaderRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline HeaderRule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> headerKey_ {};
          shared_ptr<string> location_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
        };

        class DefaultLimitRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DefaultLimitRule& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigId, configId_);
            DARABONBA_PTR_TO_JSON(DefaultLimit, defaultLimit_);
          };
          friend void from_json(const Darabonba::Json& j, DefaultLimitRule& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
            DARABONBA_PTR_FROM_JSON(DefaultLimit, defaultLimit_);
          };
          DefaultLimitRule() = default ;
          DefaultLimitRule(const DefaultLimitRule &) = default ;
          DefaultLimitRule(DefaultLimitRule &&) = default ;
          DefaultLimitRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DefaultLimitRule() = default ;
          DefaultLimitRule& operator=(const DefaultLimitRule &) = default ;
          DefaultLimitRule& operator=(DefaultLimitRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->configId_ == nullptr
        && this->defaultLimit_ == nullptr; };
          // configId Field Functions 
          bool hasConfigId() const { return this->configId_ != nullptr;};
          void deleteConfigId() { this->configId_ = nullptr;};
          inline int32_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0) };
          inline DefaultLimitRule& setConfigId(int32_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


          // defaultLimit Field Functions 
          bool hasDefaultLimit() const { return this->defaultLimit_ != nullptr;};
          void deleteDefaultLimit() { this->defaultLimit_ = nullptr;};
          inline bool getDefaultLimit() const { DARABONBA_PTR_GET_DEFAULT(defaultLimit_, false) };
          inline DefaultLimitRule& setDefaultLimit(bool defaultLimit) { DARABONBA_PTR_SET_VALUE(defaultLimit_, defaultLimit) };


        protected:
          shared_ptr<int32_t> configId_ {};
          shared_ptr<bool> defaultLimit_ {};
        };

        class CircuitBreakerRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CircuitBreakerRule& obj) { 
            DARABONBA_PTR_TO_JSON(AppId, appId_);
            DARABONBA_PTR_TO_JSON(DefaultResponse, defaultResponse_);
            DARABONBA_PTR_TO_JSON(ErrorThreshold, errorThreshold_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Model, model_);
            DARABONBA_PTR_TO_JSON(OpenTimeoutSeconds, openTimeoutSeconds_);
            DARABONBA_PTR_TO_JSON(SlowRatioThreshold, slowRatioThreshold_);
            DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
            DARABONBA_PTR_TO_JSON(WindowsInSeconds, windowsInSeconds_);
            DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          };
          friend void from_json(const Darabonba::Json& j, CircuitBreakerRule& obj) { 
            DARABONBA_PTR_FROM_JSON(AppId, appId_);
            DARABONBA_PTR_FROM_JSON(DefaultResponse, defaultResponse_);
            DARABONBA_PTR_FROM_JSON(ErrorThreshold, errorThreshold_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Model, model_);
            DARABONBA_PTR_FROM_JSON(OpenTimeoutSeconds, openTimeoutSeconds_);
            DARABONBA_PTR_FROM_JSON(SlowRatioThreshold, slowRatioThreshold_);
            DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
            DARABONBA_PTR_FROM_JSON(WindowsInSeconds, windowsInSeconds_);
            DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          };
          CircuitBreakerRule() = default ;
          CircuitBreakerRule(const CircuitBreakerRule &) = default ;
          CircuitBreakerRule(CircuitBreakerRule &&) = default ;
          CircuitBreakerRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CircuitBreakerRule() = default ;
          CircuitBreakerRule& operator=(const CircuitBreakerRule &) = default ;
          CircuitBreakerRule& operator=(CircuitBreakerRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->appId_ == nullptr
        && this->defaultResponse_ == nullptr && this->errorThreshold_ == nullptr && this->id_ == nullptr && this->model_ == nullptr && this->openTimeoutSeconds_ == nullptr
        && this->slowRatioThreshold_ == nullptr && this->switchStatus_ == nullptr && this->windowsInSeconds_ == nullptr && this->workspaceId_ == nullptr; };
          // appId Field Functions 
          bool hasAppId() const { return this->appId_ != nullptr;};
          void deleteAppId() { this->appId_ = nullptr;};
          inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
          inline CircuitBreakerRule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


          // defaultResponse Field Functions 
          bool hasDefaultResponse() const { return this->defaultResponse_ != nullptr;};
          void deleteDefaultResponse() { this->defaultResponse_ = nullptr;};
          inline string getDefaultResponse() const { DARABONBA_PTR_GET_DEFAULT(defaultResponse_, "") };
          inline CircuitBreakerRule& setDefaultResponse(string defaultResponse) { DARABONBA_PTR_SET_VALUE(defaultResponse_, defaultResponse) };


          // errorThreshold Field Functions 
          bool hasErrorThreshold() const { return this->errorThreshold_ != nullptr;};
          void deleteErrorThreshold() { this->errorThreshold_ = nullptr;};
          inline int64_t getErrorThreshold() const { DARABONBA_PTR_GET_DEFAULT(errorThreshold_, 0L) };
          inline CircuitBreakerRule& setErrorThreshold(int64_t errorThreshold) { DARABONBA_PTR_SET_VALUE(errorThreshold_, errorThreshold) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline CircuitBreakerRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // model Field Functions 
          bool hasModel() const { return this->model_ != nullptr;};
          void deleteModel() { this->model_ = nullptr;};
          inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
          inline CircuitBreakerRule& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


          // openTimeoutSeconds Field Functions 
          bool hasOpenTimeoutSeconds() const { return this->openTimeoutSeconds_ != nullptr;};
          void deleteOpenTimeoutSeconds() { this->openTimeoutSeconds_ = nullptr;};
          inline int64_t getOpenTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(openTimeoutSeconds_, 0L) };
          inline CircuitBreakerRule& setOpenTimeoutSeconds(int64_t openTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(openTimeoutSeconds_, openTimeoutSeconds) };


          // slowRatioThreshold Field Functions 
          bool hasSlowRatioThreshold() const { return this->slowRatioThreshold_ != nullptr;};
          void deleteSlowRatioThreshold() { this->slowRatioThreshold_ = nullptr;};
          inline double getSlowRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(slowRatioThreshold_, 0.0) };
          inline CircuitBreakerRule& setSlowRatioThreshold(double slowRatioThreshold) { DARABONBA_PTR_SET_VALUE(slowRatioThreshold_, slowRatioThreshold) };


          // switchStatus Field Functions 
          bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
          void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
          inline string getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
          inline CircuitBreakerRule& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


          // windowsInSeconds Field Functions 
          bool hasWindowsInSeconds() const { return this->windowsInSeconds_ != nullptr;};
          void deleteWindowsInSeconds() { this->windowsInSeconds_ = nullptr;};
          inline int64_t getWindowsInSeconds() const { DARABONBA_PTR_GET_DEFAULT(windowsInSeconds_, 0L) };
          inline CircuitBreakerRule& setWindowsInSeconds(int64_t windowsInSeconds) { DARABONBA_PTR_SET_VALUE(windowsInSeconds_, windowsInSeconds) };


          // workspaceId Field Functions 
          bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
          void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
          inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
          inline CircuitBreakerRule& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        protected:
          shared_ptr<string> appId_ {};
          shared_ptr<string> defaultResponse_ {};
          shared_ptr<int64_t> errorThreshold_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> model_ {};
          shared_ptr<int64_t> openTimeoutSeconds_ {};
          shared_ptr<double> slowRatioThreshold_ {};
          shared_ptr<string> switchStatus_ {};
          shared_ptr<int64_t> windowsInSeconds_ {};
          shared_ptr<string> workspaceId_ {};
        };

        class CacheRule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CacheRule& obj) { 
            DARABONBA_PTR_TO_JSON(CacheKey, cacheKey_);
            DARABONBA_PTR_TO_JSON(NeedCache, needCache_);
            DARABONBA_PTR_TO_JSON(Ttl, ttl_);
          };
          friend void from_json(const Darabonba::Json& j, CacheRule& obj) { 
            DARABONBA_PTR_FROM_JSON(CacheKey, cacheKey_);
            DARABONBA_PTR_FROM_JSON(NeedCache, needCache_);
            DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
          };
          CacheRule() = default ;
          CacheRule(const CacheRule &) = default ;
          CacheRule(CacheRule &&) = default ;
          CacheRule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CacheRule() = default ;
          CacheRule& operator=(const CacheRule &) = default ;
          CacheRule& operator=(CacheRule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cacheKey_ == nullptr
        && this->needCache_ == nullptr && this->ttl_ == nullptr; };
          // cacheKey Field Functions 
          bool hasCacheKey() const { return this->cacheKey_ != nullptr;};
          void deleteCacheKey() { this->cacheKey_ = nullptr;};
          inline string getCacheKey() const { DARABONBA_PTR_GET_DEFAULT(cacheKey_, "") };
          inline CacheRule& setCacheKey(string cacheKey) { DARABONBA_PTR_SET_VALUE(cacheKey_, cacheKey) };


          // needCache Field Functions 
          bool hasNeedCache() const { return this->needCache_ != nullptr;};
          void deleteNeedCache() { this->needCache_ = nullptr;};
          inline bool getNeedCache() const { DARABONBA_PTR_GET_DEFAULT(needCache_, false) };
          inline CacheRule& setNeedCache(bool needCache) { DARABONBA_PTR_SET_VALUE(needCache_, needCache) };


          // ttl Field Functions 
          bool hasTtl() const { return this->ttl_ != nullptr;};
          void deleteTtl() { this->ttl_ = nullptr;};
          inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
          inline CacheRule& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


        protected:
          shared_ptr<string> cacheKey_ {};
          shared_ptr<bool> needCache_ {};
          shared_ptr<int64_t> ttl_ {};
        };

        class ApiInvoker : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApiInvoker& obj) { 
            DARABONBA_PTR_TO_JSON(HttpInvoker, httpInvoker_);
            DARABONBA_PTR_TO_JSON(RpcInvoker, rpcInvoker_);
          };
          friend void from_json(const Darabonba::Json& j, ApiInvoker& obj) { 
            DARABONBA_PTR_FROM_JSON(HttpInvoker, httpInvoker_);
            DARABONBA_PTR_FROM_JSON(RpcInvoker, rpcInvoker_);
          };
          ApiInvoker() = default ;
          ApiInvoker(const ApiInvoker &) = default ;
          ApiInvoker(ApiInvoker &&) = default ;
          ApiInvoker(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ApiInvoker() = default ;
          ApiInvoker& operator=(const ApiInvoker &) = default ;
          ApiInvoker& operator=(ApiInvoker &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class HttpInvoker : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HttpInvoker& obj) { 
              DARABONBA_PTR_TO_JSON(Charset, charset_);
              DARABONBA_PTR_TO_JSON(ContentType, contentType_);
              DARABONBA_PTR_TO_JSON(Host, host_);
              DARABONBA_PTR_TO_JSON(Method, method_);
              DARABONBA_PTR_TO_JSON(Path, path_);
            };
            friend void from_json(const Darabonba::Json& j, HttpInvoker& obj) { 
              DARABONBA_PTR_FROM_JSON(Charset, charset_);
              DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
              DARABONBA_PTR_FROM_JSON(Host, host_);
              DARABONBA_PTR_FROM_JSON(Method, method_);
              DARABONBA_PTR_FROM_JSON(Path, path_);
            };
            HttpInvoker() = default ;
            HttpInvoker(const HttpInvoker &) = default ;
            HttpInvoker(HttpInvoker &&) = default ;
            HttpInvoker(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HttpInvoker() = default ;
            HttpInvoker& operator=(const HttpInvoker &) = default ;
            HttpInvoker& operator=(HttpInvoker &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->charset_ == nullptr
        && this->contentType_ == nullptr && this->host_ == nullptr && this->method_ == nullptr && this->path_ == nullptr; };
            // charset Field Functions 
            bool hasCharset() const { return this->charset_ != nullptr;};
            void deleteCharset() { this->charset_ = nullptr;};
            inline string getCharset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
            inline HttpInvoker& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


            // contentType Field Functions 
            bool hasContentType() const { return this->contentType_ != nullptr;};
            void deleteContentType() { this->contentType_ = nullptr;};
            inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
            inline HttpInvoker& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


            // host Field Functions 
            bool hasHost() const { return this->host_ != nullptr;};
            void deleteHost() { this->host_ = nullptr;};
            inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
            inline HttpInvoker& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


            // method Field Functions 
            bool hasMethod() const { return this->method_ != nullptr;};
            void deleteMethod() { this->method_ = nullptr;};
            inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
            inline HttpInvoker& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


            // path Field Functions 
            bool hasPath() const { return this->path_ != nullptr;};
            void deletePath() { this->path_ = nullptr;};
            inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
            inline HttpInvoker& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          protected:
            shared_ptr<string> charset_ {};
            shared_ptr<string> contentType_ {};
            shared_ptr<string> host_ {};
            shared_ptr<string> method_ {};
            shared_ptr<string> path_ {};
          };

          virtual bool empty() const override { return this->httpInvoker_ == nullptr
        && this->rpcInvoker_ == nullptr; };
          // httpInvoker Field Functions 
          bool hasHttpInvoker() const { return this->httpInvoker_ != nullptr;};
          void deleteHttpInvoker() { this->httpInvoker_ = nullptr;};
          inline const ApiInvoker::HttpInvoker & getHttpInvoker() const { DARABONBA_PTR_GET_CONST(httpInvoker_, ApiInvoker::HttpInvoker) };
          inline ApiInvoker::HttpInvoker getHttpInvoker() { DARABONBA_PTR_GET(httpInvoker_, ApiInvoker::HttpInvoker) };
          inline ApiInvoker& setHttpInvoker(const ApiInvoker::HttpInvoker & httpInvoker) { DARABONBA_PTR_SET_VALUE(httpInvoker_, httpInvoker) };
          inline ApiInvoker& setHttpInvoker(ApiInvoker::HttpInvoker && httpInvoker) { DARABONBA_PTR_SET_RVALUE(httpInvoker_, httpInvoker) };


          // rpcInvoker Field Functions 
          bool hasRpcInvoker() const { return this->rpcInvoker_ != nullptr;};
          void deleteRpcInvoker() { this->rpcInvoker_ = nullptr;};
          inline string getRpcInvoker() const { DARABONBA_PTR_GET_DEFAULT(rpcInvoker_, "") };
          inline ApiInvoker& setRpcInvoker(string rpcInvoker) { DARABONBA_PTR_SET_VALUE(rpcInvoker_, rpcInvoker) };


        protected:
          shared_ptr<ApiInvoker::HttpInvoker> httpInvoker_ {};
          shared_ptr<string> rpcInvoker_ {};
        };

        virtual bool empty() const override { return this->apiInvoker_ == nullptr
        && this->apiName_ == nullptr && this->apiStatus_ == nullptr && this->apiType_ == nullptr && this->appId_ == nullptr && this->authRuleName_ == nullptr
        && this->cacheRule_ == nullptr && this->charset_ == nullptr && this->circuitBreakerRule_ == nullptr && this->contentType_ == nullptr && this->defaultLimitRule_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->headerRule_ == nullptr && this->headerRules_ == nullptr
        && this->host_ == nullptr && this->id_ == nullptr && this->interfaceType_ == nullptr && this->limitRule_ == nullptr && this->method_ == nullptr
        && this->methodName_ == nullptr && this->migrateRule_ == nullptr && this->mockRule_ == nullptr && this->needETag_ == nullptr && this->needEncrypt_ == nullptr
        && this->needJsonp_ == nullptr && this->needSign_ == nullptr && this->operationType_ == nullptr && this->paramGetMethod_ == nullptr && this->path_ == nullptr
        && this->requestBodyModel_ == nullptr && this->requestParams_ == nullptr && this->responseBodyModel_ == nullptr && this->sysId_ == nullptr && this->sysName_ == nullptr
        && this->timeout_ == nullptr && this->workspaceId_ == nullptr; };
        // apiInvoker Field Functions 
        bool hasApiInvoker() const { return this->apiInvoker_ != nullptr;};
        void deleteApiInvoker() { this->apiInvoker_ = nullptr;};
        inline const Value::ApiInvoker & getApiInvoker() const { DARABONBA_PTR_GET_CONST(apiInvoker_, Value::ApiInvoker) };
        inline Value::ApiInvoker getApiInvoker() { DARABONBA_PTR_GET(apiInvoker_, Value::ApiInvoker) };
        inline Value& setApiInvoker(const Value::ApiInvoker & apiInvoker) { DARABONBA_PTR_SET_VALUE(apiInvoker_, apiInvoker) };
        inline Value& setApiInvoker(Value::ApiInvoker && apiInvoker) { DARABONBA_PTR_SET_RVALUE(apiInvoker_, apiInvoker) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline Value& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // apiStatus Field Functions 
        bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
        void deleteApiStatus() { this->apiStatus_ = nullptr;};
        inline string getApiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
        inline Value& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


        // apiType Field Functions 
        bool hasApiType() const { return this->apiType_ != nullptr;};
        void deleteApiType() { this->apiType_ = nullptr;};
        inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
        inline Value& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Value& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // authRuleName Field Functions 
        bool hasAuthRuleName() const { return this->authRuleName_ != nullptr;};
        void deleteAuthRuleName() { this->authRuleName_ = nullptr;};
        inline string getAuthRuleName() const { DARABONBA_PTR_GET_DEFAULT(authRuleName_, "") };
        inline Value& setAuthRuleName(string authRuleName) { DARABONBA_PTR_SET_VALUE(authRuleName_, authRuleName) };


        // cacheRule Field Functions 
        bool hasCacheRule() const { return this->cacheRule_ != nullptr;};
        void deleteCacheRule() { this->cacheRule_ = nullptr;};
        inline const Value::CacheRule & getCacheRule() const { DARABONBA_PTR_GET_CONST(cacheRule_, Value::CacheRule) };
        inline Value::CacheRule getCacheRule() { DARABONBA_PTR_GET(cacheRule_, Value::CacheRule) };
        inline Value& setCacheRule(const Value::CacheRule & cacheRule) { DARABONBA_PTR_SET_VALUE(cacheRule_, cacheRule) };
        inline Value& setCacheRule(Value::CacheRule && cacheRule) { DARABONBA_PTR_SET_RVALUE(cacheRule_, cacheRule) };


        // charset Field Functions 
        bool hasCharset() const { return this->charset_ != nullptr;};
        void deleteCharset() { this->charset_ = nullptr;};
        inline string getCharset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
        inline Value& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


        // circuitBreakerRule Field Functions 
        bool hasCircuitBreakerRule() const { return this->circuitBreakerRule_ != nullptr;};
        void deleteCircuitBreakerRule() { this->circuitBreakerRule_ = nullptr;};
        inline const Value::CircuitBreakerRule & getCircuitBreakerRule() const { DARABONBA_PTR_GET_CONST(circuitBreakerRule_, Value::CircuitBreakerRule) };
        inline Value::CircuitBreakerRule getCircuitBreakerRule() { DARABONBA_PTR_GET(circuitBreakerRule_, Value::CircuitBreakerRule) };
        inline Value& setCircuitBreakerRule(const Value::CircuitBreakerRule & circuitBreakerRule) { DARABONBA_PTR_SET_VALUE(circuitBreakerRule_, circuitBreakerRule) };
        inline Value& setCircuitBreakerRule(Value::CircuitBreakerRule && circuitBreakerRule) { DARABONBA_PTR_SET_RVALUE(circuitBreakerRule_, circuitBreakerRule) };


        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
        inline Value& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


        // defaultLimitRule Field Functions 
        bool hasDefaultLimitRule() const { return this->defaultLimitRule_ != nullptr;};
        void deleteDefaultLimitRule() { this->defaultLimitRule_ = nullptr;};
        inline const Value::DefaultLimitRule & getDefaultLimitRule() const { DARABONBA_PTR_GET_CONST(defaultLimitRule_, Value::DefaultLimitRule) };
        inline Value::DefaultLimitRule getDefaultLimitRule() { DARABONBA_PTR_GET(defaultLimitRule_, Value::DefaultLimitRule) };
        inline Value& setDefaultLimitRule(const Value::DefaultLimitRule & defaultLimitRule) { DARABONBA_PTR_SET_VALUE(defaultLimitRule_, defaultLimitRule) };
        inline Value& setDefaultLimitRule(Value::DefaultLimitRule && defaultLimitRule) { DARABONBA_PTR_SET_RVALUE(defaultLimitRule_, defaultLimitRule) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Value& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Value& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Value& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // headerRule Field Functions 
        bool hasHeaderRule() const { return this->headerRule_ != nullptr;};
        void deleteHeaderRule() { this->headerRule_ = nullptr;};
        inline const vector<Value::HeaderRule> & getHeaderRule() const { DARABONBA_PTR_GET_CONST(headerRule_, vector<Value::HeaderRule>) };
        inline vector<Value::HeaderRule> getHeaderRule() { DARABONBA_PTR_GET(headerRule_, vector<Value::HeaderRule>) };
        inline Value& setHeaderRule(const vector<Value::HeaderRule> & headerRule) { DARABONBA_PTR_SET_VALUE(headerRule_, headerRule) };
        inline Value& setHeaderRule(vector<Value::HeaderRule> && headerRule) { DARABONBA_PTR_SET_RVALUE(headerRule_, headerRule) };


        // headerRules Field Functions 
        bool hasHeaderRules() const { return this->headerRules_ != nullptr;};
        void deleteHeaderRules() { this->headerRules_ = nullptr;};
        inline const vector<Value::HeaderRules> & getHeaderRules() const { DARABONBA_PTR_GET_CONST(headerRules_, vector<Value::HeaderRules>) };
        inline vector<Value::HeaderRules> getHeaderRules() { DARABONBA_PTR_GET(headerRules_, vector<Value::HeaderRules>) };
        inline Value& setHeaderRules(const vector<Value::HeaderRules> & headerRules) { DARABONBA_PTR_SET_VALUE(headerRules_, headerRules) };
        inline Value& setHeaderRules(vector<Value::HeaderRules> && headerRules) { DARABONBA_PTR_SET_RVALUE(headerRules_, headerRules) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline Value& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Value& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // interfaceType Field Functions 
        bool hasInterfaceType() const { return this->interfaceType_ != nullptr;};
        void deleteInterfaceType() { this->interfaceType_ = nullptr;};
        inline string getInterfaceType() const { DARABONBA_PTR_GET_DEFAULT(interfaceType_, "") };
        inline Value& setInterfaceType(string interfaceType) { DARABONBA_PTR_SET_VALUE(interfaceType_, interfaceType) };


        // limitRule Field Functions 
        bool hasLimitRule() const { return this->limitRule_ != nullptr;};
        void deleteLimitRule() { this->limitRule_ = nullptr;};
        inline const Value::LimitRule & getLimitRule() const { DARABONBA_PTR_GET_CONST(limitRule_, Value::LimitRule) };
        inline Value::LimitRule getLimitRule() { DARABONBA_PTR_GET(limitRule_, Value::LimitRule) };
        inline Value& setLimitRule(const Value::LimitRule & limitRule) { DARABONBA_PTR_SET_VALUE(limitRule_, limitRule) };
        inline Value& setLimitRule(Value::LimitRule && limitRule) { DARABONBA_PTR_SET_RVALUE(limitRule_, limitRule) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline Value& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // methodName Field Functions 
        bool hasMethodName() const { return this->methodName_ != nullptr;};
        void deleteMethodName() { this->methodName_ = nullptr;};
        inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
        inline Value& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


        // migrateRule Field Functions 
        bool hasMigrateRule() const { return this->migrateRule_ != nullptr;};
        void deleteMigrateRule() { this->migrateRule_ = nullptr;};
        inline const Value::MigrateRule & getMigrateRule() const { DARABONBA_PTR_GET_CONST(migrateRule_, Value::MigrateRule) };
        inline Value::MigrateRule getMigrateRule() { DARABONBA_PTR_GET(migrateRule_, Value::MigrateRule) };
        inline Value& setMigrateRule(const Value::MigrateRule & migrateRule) { DARABONBA_PTR_SET_VALUE(migrateRule_, migrateRule) };
        inline Value& setMigrateRule(Value::MigrateRule && migrateRule) { DARABONBA_PTR_SET_RVALUE(migrateRule_, migrateRule) };


        // mockRule Field Functions 
        bool hasMockRule() const { return this->mockRule_ != nullptr;};
        void deleteMockRule() { this->mockRule_ = nullptr;};
        inline const Value::MockRule & getMockRule() const { DARABONBA_PTR_GET_CONST(mockRule_, Value::MockRule) };
        inline Value::MockRule getMockRule() { DARABONBA_PTR_GET(mockRule_, Value::MockRule) };
        inline Value& setMockRule(const Value::MockRule & mockRule) { DARABONBA_PTR_SET_VALUE(mockRule_, mockRule) };
        inline Value& setMockRule(Value::MockRule && mockRule) { DARABONBA_PTR_SET_RVALUE(mockRule_, mockRule) };


        // needETag Field Functions 
        bool hasNeedETag() const { return this->needETag_ != nullptr;};
        void deleteNeedETag() { this->needETag_ = nullptr;};
        inline string getNeedETag() const { DARABONBA_PTR_GET_DEFAULT(needETag_, "") };
        inline Value& setNeedETag(string needETag) { DARABONBA_PTR_SET_VALUE(needETag_, needETag) };


        // needEncrypt Field Functions 
        bool hasNeedEncrypt() const { return this->needEncrypt_ != nullptr;};
        void deleteNeedEncrypt() { this->needEncrypt_ = nullptr;};
        inline string getNeedEncrypt() const { DARABONBA_PTR_GET_DEFAULT(needEncrypt_, "") };
        inline Value& setNeedEncrypt(string needEncrypt) { DARABONBA_PTR_SET_VALUE(needEncrypt_, needEncrypt) };


        // needJsonp Field Functions 
        bool hasNeedJsonp() const { return this->needJsonp_ != nullptr;};
        void deleteNeedJsonp() { this->needJsonp_ = nullptr;};
        inline string getNeedJsonp() const { DARABONBA_PTR_GET_DEFAULT(needJsonp_, "") };
        inline Value& setNeedJsonp(string needJsonp) { DARABONBA_PTR_SET_VALUE(needJsonp_, needJsonp) };


        // needSign Field Functions 
        bool hasNeedSign() const { return this->needSign_ != nullptr;};
        void deleteNeedSign() { this->needSign_ = nullptr;};
        inline string getNeedSign() const { DARABONBA_PTR_GET_DEFAULT(needSign_, "") };
        inline Value& setNeedSign(string needSign) { DARABONBA_PTR_SET_VALUE(needSign_, needSign) };


        // operationType Field Functions 
        bool hasOperationType() const { return this->operationType_ != nullptr;};
        void deleteOperationType() { this->operationType_ = nullptr;};
        inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
        inline Value& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


        // paramGetMethod Field Functions 
        bool hasParamGetMethod() const { return this->paramGetMethod_ != nullptr;};
        void deleteParamGetMethod() { this->paramGetMethod_ = nullptr;};
        inline string getParamGetMethod() const { DARABONBA_PTR_GET_DEFAULT(paramGetMethod_, "") };
        inline Value& setParamGetMethod(string paramGetMethod) { DARABONBA_PTR_SET_VALUE(paramGetMethod_, paramGetMethod) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Value& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // requestBodyModel Field Functions 
        bool hasRequestBodyModel() const { return this->requestBodyModel_ != nullptr;};
        void deleteRequestBodyModel() { this->requestBodyModel_ = nullptr;};
        inline string getRequestBodyModel() const { DARABONBA_PTR_GET_DEFAULT(requestBodyModel_, "") };
        inline Value& setRequestBodyModel(string requestBodyModel) { DARABONBA_PTR_SET_VALUE(requestBodyModel_, requestBodyModel) };


        // requestParams Field Functions 
        bool hasRequestParams() const { return this->requestParams_ != nullptr;};
        void deleteRequestParams() { this->requestParams_ = nullptr;};
        inline const vector<Value::RequestParams> & getRequestParams() const { DARABONBA_PTR_GET_CONST(requestParams_, vector<Value::RequestParams>) };
        inline vector<Value::RequestParams> getRequestParams() { DARABONBA_PTR_GET(requestParams_, vector<Value::RequestParams>) };
        inline Value& setRequestParams(const vector<Value::RequestParams> & requestParams) { DARABONBA_PTR_SET_VALUE(requestParams_, requestParams) };
        inline Value& setRequestParams(vector<Value::RequestParams> && requestParams) { DARABONBA_PTR_SET_RVALUE(requestParams_, requestParams) };


        // responseBodyModel Field Functions 
        bool hasResponseBodyModel() const { return this->responseBodyModel_ != nullptr;};
        void deleteResponseBodyModel() { this->responseBodyModel_ = nullptr;};
        inline string getResponseBodyModel() const { DARABONBA_PTR_GET_DEFAULT(responseBodyModel_, "") };
        inline Value& setResponseBodyModel(string responseBodyModel) { DARABONBA_PTR_SET_VALUE(responseBodyModel_, responseBodyModel) };


        // sysId Field Functions 
        bool hasSysId() const { return this->sysId_ != nullptr;};
        void deleteSysId() { this->sysId_ = nullptr;};
        inline int64_t getSysId() const { DARABONBA_PTR_GET_DEFAULT(sysId_, 0L) };
        inline Value& setSysId(int64_t sysId) { DARABONBA_PTR_SET_VALUE(sysId_, sysId) };


        // sysName Field Functions 
        bool hasSysName() const { return this->sysName_ != nullptr;};
        void deleteSysName() { this->sysName_ = nullptr;};
        inline string getSysName() const { DARABONBA_PTR_GET_DEFAULT(sysName_, "") };
        inline Value& setSysName(string sysName) { DARABONBA_PTR_SET_VALUE(sysName_, sysName) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline string getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
        inline Value& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Value& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        shared_ptr<Value::ApiInvoker> apiInvoker_ {};
        shared_ptr<string> apiName_ {};
        shared_ptr<string> apiStatus_ {};
        shared_ptr<string> apiType_ {};
        shared_ptr<string> appId_ {};
        shared_ptr<string> authRuleName_ {};
        shared_ptr<Value::CacheRule> cacheRule_ {};
        shared_ptr<string> charset_ {};
        shared_ptr<Value::CircuitBreakerRule> circuitBreakerRule_ {};
        shared_ptr<string> contentType_ {};
        shared_ptr<Value::DefaultLimitRule> defaultLimitRule_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<vector<Value::HeaderRule>> headerRule_ {};
        shared_ptr<vector<Value::HeaderRules>> headerRules_ {};
        shared_ptr<string> host_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> interfaceType_ {};
        shared_ptr<Value::LimitRule> limitRule_ {};
        shared_ptr<string> method_ {};
        shared_ptr<string> methodName_ {};
        shared_ptr<Value::MigrateRule> migrateRule_ {};
        shared_ptr<Value::MockRule> mockRule_ {};
        shared_ptr<string> needETag_ {};
        shared_ptr<string> needEncrypt_ {};
        shared_ptr<string> needJsonp_ {};
        shared_ptr<string> needSign_ {};
        shared_ptr<string> operationType_ {};
        shared_ptr<string> paramGetMethod_ {};
        shared_ptr<string> path_ {};
        shared_ptr<string> requestBodyModel_ {};
        shared_ptr<vector<Value::RequestParams>> requestParams_ {};
        shared_ptr<string> responseBodyModel_ {};
        shared_ptr<int64_t> sysId_ {};
        shared_ptr<string> sysName_ {};
        shared_ptr<string> timeout_ {};
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->success_ == nullptr && this->value_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline ResultContent& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const ResultContent::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, ResultContent::Value) };
      inline ResultContent::Value getValue() { DARABONBA_PTR_GET(value_, ResultContent::Value) };
      inline ResultContent& setValue(const ResultContent::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline ResultContent& setValue(ResultContent::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      shared_ptr<string> errorMessage_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<ResultContent::Value> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMgsApirestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryMgsApirestResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const QueryMgsApirestResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, QueryMgsApirestResponseBody::ResultContent) };
    inline QueryMgsApirestResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, QueryMgsApirestResponseBody::ResultContent) };
    inline QueryMgsApirestResponseBody& setResultContent(const QueryMgsApirestResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline QueryMgsApirestResponseBody& setResultContent(QueryMgsApirestResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryMgsApirestResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<QueryMgsApirestResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
