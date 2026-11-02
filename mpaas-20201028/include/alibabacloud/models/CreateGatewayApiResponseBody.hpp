// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYAPIRESPONSEBODY_HPP_
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
  class CreateGatewayApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Api, api_);
      DARABONBA_PTR_TO_JSON(ErrorField, errorField_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Api, api_);
      DARABONBA_PTR_FROM_JSON(ErrorField, errorField_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateGatewayApiResponseBody() = default ;
    CreateGatewayApiResponseBody(const CreateGatewayApiResponseBody &) = default ;
    CreateGatewayApiResponseBody(CreateGatewayApiResponseBody &&) = default ;
    CreateGatewayApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayApiResponseBody() = default ;
    CreateGatewayApiResponseBody& operator=(const CreateGatewayApiResponseBody &) = default ;
    CreateGatewayApiResponseBody& operator=(CreateGatewayApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Api : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Api& obj) { 
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(ApiName, apiName_);
        DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
        DARABONBA_PTR_TO_JSON(ApiType, apiType_);
        DARABONBA_PTR_TO_JSON(AuthRuleName, authRuleName_);
        DARABONBA_PTR_TO_JSON(CacheRule, cacheRule_);
        DARABONBA_PTR_TO_JSON(Charset, charset_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(DefaultLimitRule, defaultLimitRule_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(HeaderRules, headerRules_);
        DARABONBA_PTR_TO_JSON(InterfaceType, interfaceType_);
        DARABONBA_PTR_TO_JSON(LimitRule, limitRule_);
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(MethodName, methodName_);
        DARABONBA_PTR_TO_JSON(MigrateRule, migrateRule_);
        DARABONBA_PTR_TO_JSON(MockRule, mockRule_);
        DARABONBA_PTR_TO_JSON(NeedEncrypt, needEncrypt_);
        DARABONBA_PTR_TO_JSON(NeedJsonp, needJsonp_);
        DARABONBA_PTR_TO_JSON(NeedSign, needSign_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(RequestBodyModel, requestBodyModel_);
        DARABONBA_PTR_TO_JSON(RequestParams, requestParams_);
        DARABONBA_PTR_TO_JSON(ResponseBodyModel, responseBodyModel_);
        DARABONBA_PTR_TO_JSON(RpcParameterTypes, rpcParameterTypes_);
        DARABONBA_PTR_TO_JSON(Serialization, serialization_);
        DARABONBA_PTR_TO_JSON(SysName, sysName_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      };
      friend void from_json(const Darabonba::Json& j, Api& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
        DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
        DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
        DARABONBA_PTR_FROM_JSON(AuthRuleName, authRuleName_);
        DARABONBA_PTR_FROM_JSON(CacheRule, cacheRule_);
        DARABONBA_PTR_FROM_JSON(Charset, charset_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(DefaultLimitRule, defaultLimitRule_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(HeaderRules, headerRules_);
        DARABONBA_PTR_FROM_JSON(InterfaceType, interfaceType_);
        DARABONBA_PTR_FROM_JSON(LimitRule, limitRule_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
        DARABONBA_PTR_FROM_JSON(MigrateRule, migrateRule_);
        DARABONBA_PTR_FROM_JSON(MockRule, mockRule_);
        DARABONBA_PTR_FROM_JSON(NeedEncrypt, needEncrypt_);
        DARABONBA_PTR_FROM_JSON(NeedJsonp, needJsonp_);
        DARABONBA_PTR_FROM_JSON(NeedSign, needSign_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(RequestBodyModel, requestBodyModel_);
        DARABONBA_PTR_FROM_JSON(RequestParams, requestParams_);
        DARABONBA_PTR_FROM_JSON(ResponseBodyModel, responseBodyModel_);
        DARABONBA_PTR_FROM_JSON(RpcParameterTypes, rpcParameterTypes_);
        DARABONBA_PTR_FROM_JSON(Serialization, serialization_);
        DARABONBA_PTR_FROM_JSON(SysName, sysName_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      };
      Api() = default ;
      Api(const Api &) = default ;
      Api(Api &&) = default ;
      Api(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Api() = default ;
      Api& operator=(const Api &) = default ;
      Api& operator=(Api &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RequestParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestParams& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RefType, refType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RequestParams& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RefType, refType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->location_ == nullptr && this->name_ == nullptr && this->refType_ == nullptr && this->type_ == nullptr; };
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


      protected:
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> location_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> refType_ {};
        shared_ptr<string> type_ {};
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
        inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
        inline MockRule& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MockRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> mockData_ {};
        shared_ptr<bool> needMock_ {};
        shared_ptr<int32_t> percentage_ {};
        shared_ptr<string> type_ {};
      };

      class MigrateRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MigrateRule& obj) { 
          DARABONBA_PTR_TO_JSON(FlowPercent, flowPercent_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(NeedMigrate, needMigrate_);
          DARABONBA_PTR_TO_JSON(NeedSwitchCompletely, needSwitchCompletely_);
          DARABONBA_PTR_TO_JSON(UpstreamType, upstreamType_);
        };
        friend void from_json(const Darabonba::Json& j, MigrateRule& obj) { 
          DARABONBA_PTR_FROM_JSON(FlowPercent, flowPercent_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(NeedMigrate, needMigrate_);
          DARABONBA_PTR_FROM_JSON(NeedSwitchCompletely, needSwitchCompletely_);
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
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->needMigrate_ == nullptr && this->needSwitchCompletely_ == nullptr && this->upstreamType_ == nullptr; };
        // flowPercent Field Functions 
        bool hasFlowPercent() const { return this->flowPercent_ != nullptr;};
        void deleteFlowPercent() { this->flowPercent_ = nullptr;};
        inline int32_t getFlowPercent() const { DARABONBA_PTR_GET_DEFAULT(flowPercent_, 0) };
        inline MigrateRule& setFlowPercent(int32_t flowPercent) { DARABONBA_PTR_SET_VALUE(flowPercent_, flowPercent) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline MigrateRule& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline MigrateRule& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


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


        // upstreamType Field Functions 
        bool hasUpstreamType() const { return this->upstreamType_ != nullptr;};
        void deleteUpstreamType() { this->upstreamType_ = nullptr;};
        inline string getUpstreamType() const { DARABONBA_PTR_GET_DEFAULT(upstreamType_, "") };
        inline MigrateRule& setUpstreamType(string upstreamType) { DARABONBA_PTR_SET_VALUE(upstreamType_, upstreamType) };


      protected:
        shared_ptr<int32_t> flowPercent_ {};
        shared_ptr<int64_t> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<bool> needMigrate_ {};
        shared_ptr<bool> needSwitchCompletely_ {};
        shared_ptr<string> upstreamType_ {};
      };

      class LimitRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LimitRule& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultResponse, defaultResponse_);
          DARABONBA_PTR_TO_JSON(Limit, limit_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
        };
        friend void from_json(const Darabonba::Json& j, LimitRule& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultResponse, defaultResponse_);
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
        && this->limit_ == nullptr && this->mode_ == nullptr; };
        // defaultResponse Field Functions 
        bool hasDefaultResponse() const { return this->defaultResponse_ != nullptr;};
        void deleteDefaultResponse() { this->defaultResponse_ = nullptr;};
        inline string getDefaultResponse() const { DARABONBA_PTR_GET_DEFAULT(defaultResponse_, "") };
        inline LimitRule& setDefaultResponse(string defaultResponse) { DARABONBA_PTR_SET_VALUE(defaultResponse_, defaultResponse) };


        // limit Field Functions 
        bool hasLimit() const { return this->limit_ != nullptr;};
        void deleteLimit() { this->limit_ = nullptr;};
        inline double getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0.0) };
        inline LimitRule& setLimit(double limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline LimitRule& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      protected:
        shared_ptr<string> defaultResponse_ {};
        shared_ptr<double> limit_ {};
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

      class DefaultLimitRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DefaultLimitRule& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultLimit, defaultLimit_);
        };
        friend void from_json(const Darabonba::Json& j, DefaultLimitRule& obj) { 
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
        virtual bool empty() const override { return this->defaultLimit_ == nullptr; };
        // defaultLimit Field Functions 
        bool hasDefaultLimit() const { return this->defaultLimit_ != nullptr;};
        void deleteDefaultLimit() { this->defaultLimit_ = nullptr;};
        inline bool getDefaultLimit() const { DARABONBA_PTR_GET_DEFAULT(defaultLimit_, false) };
        inline DefaultLimitRule& setDefaultLimit(bool defaultLimit) { DARABONBA_PTR_SET_VALUE(defaultLimit_, defaultLimit) };


      protected:
        shared_ptr<bool> defaultLimit_ {};
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

      virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->apiStatus_ == nullptr && this->apiType_ == nullptr && this->authRuleName_ == nullptr && this->cacheRule_ == nullptr
        && this->charset_ == nullptr && this->contentType_ == nullptr && this->defaultLimitRule_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr
        && this->headerRules_ == nullptr && this->interfaceType_ == nullptr && this->limitRule_ == nullptr && this->method_ == nullptr && this->methodName_ == nullptr
        && this->migrateRule_ == nullptr && this->mockRule_ == nullptr && this->needEncrypt_ == nullptr && this->needJsonp_ == nullptr && this->needSign_ == nullptr
        && this->operationType_ == nullptr && this->path_ == nullptr && this->requestBodyModel_ == nullptr && this->requestParams_ == nullptr && this->responseBodyModel_ == nullptr
        && this->rpcParameterTypes_ == nullptr && this->serialization_ == nullptr && this->sysName_ == nullptr && this->timeout_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
      inline Api& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline Api& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // apiStatus Field Functions 
      bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
      void deleteApiStatus() { this->apiStatus_ = nullptr;};
      inline string getApiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
      inline Api& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


      // apiType Field Functions 
      bool hasApiType() const { return this->apiType_ != nullptr;};
      void deleteApiType() { this->apiType_ = nullptr;};
      inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
      inline Api& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


      // authRuleName Field Functions 
      bool hasAuthRuleName() const { return this->authRuleName_ != nullptr;};
      void deleteAuthRuleName() { this->authRuleName_ = nullptr;};
      inline string getAuthRuleName() const { DARABONBA_PTR_GET_DEFAULT(authRuleName_, "") };
      inline Api& setAuthRuleName(string authRuleName) { DARABONBA_PTR_SET_VALUE(authRuleName_, authRuleName) };


      // cacheRule Field Functions 
      bool hasCacheRule() const { return this->cacheRule_ != nullptr;};
      void deleteCacheRule() { this->cacheRule_ = nullptr;};
      inline const Api::CacheRule & getCacheRule() const { DARABONBA_PTR_GET_CONST(cacheRule_, Api::CacheRule) };
      inline Api::CacheRule getCacheRule() { DARABONBA_PTR_GET(cacheRule_, Api::CacheRule) };
      inline Api& setCacheRule(const Api::CacheRule & cacheRule) { DARABONBA_PTR_SET_VALUE(cacheRule_, cacheRule) };
      inline Api& setCacheRule(Api::CacheRule && cacheRule) { DARABONBA_PTR_SET_RVALUE(cacheRule_, cacheRule) };


      // charset Field Functions 
      bool hasCharset() const { return this->charset_ != nullptr;};
      void deleteCharset() { this->charset_ = nullptr;};
      inline string getCharset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
      inline Api& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Api& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // defaultLimitRule Field Functions 
      bool hasDefaultLimitRule() const { return this->defaultLimitRule_ != nullptr;};
      void deleteDefaultLimitRule() { this->defaultLimitRule_ = nullptr;};
      inline const Api::DefaultLimitRule & getDefaultLimitRule() const { DARABONBA_PTR_GET_CONST(defaultLimitRule_, Api::DefaultLimitRule) };
      inline Api::DefaultLimitRule getDefaultLimitRule() { DARABONBA_PTR_GET(defaultLimitRule_, Api::DefaultLimitRule) };
      inline Api& setDefaultLimitRule(const Api::DefaultLimitRule & defaultLimitRule) { DARABONBA_PTR_SET_VALUE(defaultLimitRule_, defaultLimitRule) };
      inline Api& setDefaultLimitRule(Api::DefaultLimitRule && defaultLimitRule) { DARABONBA_PTR_SET_RVALUE(defaultLimitRule_, defaultLimitRule) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Api& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline Api& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // headerRules Field Functions 
      bool hasHeaderRules() const { return this->headerRules_ != nullptr;};
      void deleteHeaderRules() { this->headerRules_ = nullptr;};
      inline const vector<Api::HeaderRules> & getHeaderRules() const { DARABONBA_PTR_GET_CONST(headerRules_, vector<Api::HeaderRules>) };
      inline vector<Api::HeaderRules> getHeaderRules() { DARABONBA_PTR_GET(headerRules_, vector<Api::HeaderRules>) };
      inline Api& setHeaderRules(const vector<Api::HeaderRules> & headerRules) { DARABONBA_PTR_SET_VALUE(headerRules_, headerRules) };
      inline Api& setHeaderRules(vector<Api::HeaderRules> && headerRules) { DARABONBA_PTR_SET_RVALUE(headerRules_, headerRules) };


      // interfaceType Field Functions 
      bool hasInterfaceType() const { return this->interfaceType_ != nullptr;};
      void deleteInterfaceType() { this->interfaceType_ = nullptr;};
      inline string getInterfaceType() const { DARABONBA_PTR_GET_DEFAULT(interfaceType_, "") };
      inline Api& setInterfaceType(string interfaceType) { DARABONBA_PTR_SET_VALUE(interfaceType_, interfaceType) };


      // limitRule Field Functions 
      bool hasLimitRule() const { return this->limitRule_ != nullptr;};
      void deleteLimitRule() { this->limitRule_ = nullptr;};
      inline const Api::LimitRule & getLimitRule() const { DARABONBA_PTR_GET_CONST(limitRule_, Api::LimitRule) };
      inline Api::LimitRule getLimitRule() { DARABONBA_PTR_GET(limitRule_, Api::LimitRule) };
      inline Api& setLimitRule(const Api::LimitRule & limitRule) { DARABONBA_PTR_SET_VALUE(limitRule_, limitRule) };
      inline Api& setLimitRule(Api::LimitRule && limitRule) { DARABONBA_PTR_SET_RVALUE(limitRule_, limitRule) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Api& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // methodName Field Functions 
      bool hasMethodName() const { return this->methodName_ != nullptr;};
      void deleteMethodName() { this->methodName_ = nullptr;};
      inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
      inline Api& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


      // migrateRule Field Functions 
      bool hasMigrateRule() const { return this->migrateRule_ != nullptr;};
      void deleteMigrateRule() { this->migrateRule_ = nullptr;};
      inline const Api::MigrateRule & getMigrateRule() const { DARABONBA_PTR_GET_CONST(migrateRule_, Api::MigrateRule) };
      inline Api::MigrateRule getMigrateRule() { DARABONBA_PTR_GET(migrateRule_, Api::MigrateRule) };
      inline Api& setMigrateRule(const Api::MigrateRule & migrateRule) { DARABONBA_PTR_SET_VALUE(migrateRule_, migrateRule) };
      inline Api& setMigrateRule(Api::MigrateRule && migrateRule) { DARABONBA_PTR_SET_RVALUE(migrateRule_, migrateRule) };


      // mockRule Field Functions 
      bool hasMockRule() const { return this->mockRule_ != nullptr;};
      void deleteMockRule() { this->mockRule_ = nullptr;};
      inline const Api::MockRule & getMockRule() const { DARABONBA_PTR_GET_CONST(mockRule_, Api::MockRule) };
      inline Api::MockRule getMockRule() { DARABONBA_PTR_GET(mockRule_, Api::MockRule) };
      inline Api& setMockRule(const Api::MockRule & mockRule) { DARABONBA_PTR_SET_VALUE(mockRule_, mockRule) };
      inline Api& setMockRule(Api::MockRule && mockRule) { DARABONBA_PTR_SET_RVALUE(mockRule_, mockRule) };


      // needEncrypt Field Functions 
      bool hasNeedEncrypt() const { return this->needEncrypt_ != nullptr;};
      void deleteNeedEncrypt() { this->needEncrypt_ = nullptr;};
      inline bool getNeedEncrypt() const { DARABONBA_PTR_GET_DEFAULT(needEncrypt_, false) };
      inline Api& setNeedEncrypt(bool needEncrypt) { DARABONBA_PTR_SET_VALUE(needEncrypt_, needEncrypt) };


      // needJsonp Field Functions 
      bool hasNeedJsonp() const { return this->needJsonp_ != nullptr;};
      void deleteNeedJsonp() { this->needJsonp_ = nullptr;};
      inline bool getNeedJsonp() const { DARABONBA_PTR_GET_DEFAULT(needJsonp_, false) };
      inline Api& setNeedJsonp(bool needJsonp) { DARABONBA_PTR_SET_VALUE(needJsonp_, needJsonp) };


      // needSign Field Functions 
      bool hasNeedSign() const { return this->needSign_ != nullptr;};
      void deleteNeedSign() { this->needSign_ = nullptr;};
      inline bool getNeedSign() const { DARABONBA_PTR_GET_DEFAULT(needSign_, false) };
      inline Api& setNeedSign(bool needSign) { DARABONBA_PTR_SET_VALUE(needSign_, needSign) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline Api& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Api& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // requestBodyModel Field Functions 
      bool hasRequestBodyModel() const { return this->requestBodyModel_ != nullptr;};
      void deleteRequestBodyModel() { this->requestBodyModel_ = nullptr;};
      inline string getRequestBodyModel() const { DARABONBA_PTR_GET_DEFAULT(requestBodyModel_, "") };
      inline Api& setRequestBodyModel(string requestBodyModel) { DARABONBA_PTR_SET_VALUE(requestBodyModel_, requestBodyModel) };


      // requestParams Field Functions 
      bool hasRequestParams() const { return this->requestParams_ != nullptr;};
      void deleteRequestParams() { this->requestParams_ = nullptr;};
      inline const vector<Api::RequestParams> & getRequestParams() const { DARABONBA_PTR_GET_CONST(requestParams_, vector<Api::RequestParams>) };
      inline vector<Api::RequestParams> getRequestParams() { DARABONBA_PTR_GET(requestParams_, vector<Api::RequestParams>) };
      inline Api& setRequestParams(const vector<Api::RequestParams> & requestParams) { DARABONBA_PTR_SET_VALUE(requestParams_, requestParams) };
      inline Api& setRequestParams(vector<Api::RequestParams> && requestParams) { DARABONBA_PTR_SET_RVALUE(requestParams_, requestParams) };


      // responseBodyModel Field Functions 
      bool hasResponseBodyModel() const { return this->responseBodyModel_ != nullptr;};
      void deleteResponseBodyModel() { this->responseBodyModel_ = nullptr;};
      inline string getResponseBodyModel() const { DARABONBA_PTR_GET_DEFAULT(responseBodyModel_, "") };
      inline Api& setResponseBodyModel(string responseBodyModel) { DARABONBA_PTR_SET_VALUE(responseBodyModel_, responseBodyModel) };


      // rpcParameterTypes Field Functions 
      bool hasRpcParameterTypes() const { return this->rpcParameterTypes_ != nullptr;};
      void deleteRpcParameterTypes() { this->rpcParameterTypes_ = nullptr;};
      inline const vector<string> & getRpcParameterTypes() const { DARABONBA_PTR_GET_CONST(rpcParameterTypes_, vector<string>) };
      inline vector<string> getRpcParameterTypes() { DARABONBA_PTR_GET(rpcParameterTypes_, vector<string>) };
      inline Api& setRpcParameterTypes(const vector<string> & rpcParameterTypes) { DARABONBA_PTR_SET_VALUE(rpcParameterTypes_, rpcParameterTypes) };
      inline Api& setRpcParameterTypes(vector<string> && rpcParameterTypes) { DARABONBA_PTR_SET_RVALUE(rpcParameterTypes_, rpcParameterTypes) };


      // serialization Field Functions 
      bool hasSerialization() const { return this->serialization_ != nullptr;};
      void deleteSerialization() { this->serialization_ = nullptr;};
      inline string getSerialization() const { DARABONBA_PTR_GET_DEFAULT(serialization_, "") };
      inline Api& setSerialization(string serialization) { DARABONBA_PTR_SET_VALUE(serialization_, serialization) };


      // sysName Field Functions 
      bool hasSysName() const { return this->sysName_ != nullptr;};
      void deleteSysName() { this->sysName_ = nullptr;};
      inline string getSysName() const { DARABONBA_PTR_GET_DEFAULT(sysName_, "") };
      inline Api& setSysName(string sysName) { DARABONBA_PTR_SET_VALUE(sysName_, sysName) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline Api& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    protected:
      shared_ptr<int64_t> apiId_ {};
      shared_ptr<string> apiName_ {};
      shared_ptr<string> apiStatus_ {};
      shared_ptr<string> apiType_ {};
      shared_ptr<string> authRuleName_ {};
      shared_ptr<Api::CacheRule> cacheRule_ {};
      shared_ptr<string> charset_ {};
      shared_ptr<string> contentType_ {};
      shared_ptr<Api::DefaultLimitRule> defaultLimitRule_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int64_t> groupId_ {};
      shared_ptr<vector<Api::HeaderRules>> headerRules_ {};
      shared_ptr<string> interfaceType_ {};
      shared_ptr<Api::LimitRule> limitRule_ {};
      shared_ptr<string> method_ {};
      shared_ptr<string> methodName_ {};
      shared_ptr<Api::MigrateRule> migrateRule_ {};
      shared_ptr<Api::MockRule> mockRule_ {};
      shared_ptr<bool> needEncrypt_ {};
      shared_ptr<bool> needJsonp_ {};
      shared_ptr<bool> needSign_ {};
      shared_ptr<string> operationType_ {};
      shared_ptr<string> path_ {};
      shared_ptr<string> requestBodyModel_ {};
      shared_ptr<vector<Api::RequestParams>> requestParams_ {};
      shared_ptr<string> responseBodyModel_ {};
      shared_ptr<vector<string>> rpcParameterTypes_ {};
      shared_ptr<string> serialization_ {};
      shared_ptr<string> sysName_ {};
      shared_ptr<int32_t> timeout_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->api_ == nullptr && this->errorField_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->resultCode_ == nullptr
        && this->resultMessage_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CreateGatewayApiResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline const CreateGatewayApiResponseBody::Api & getApi() const { DARABONBA_PTR_GET_CONST(api_, CreateGatewayApiResponseBody::Api) };
    inline CreateGatewayApiResponseBody::Api getApi() { DARABONBA_PTR_GET(api_, CreateGatewayApiResponseBody::Api) };
    inline CreateGatewayApiResponseBody& setApi(const CreateGatewayApiResponseBody::Api & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
    inline CreateGatewayApiResponseBody& setApi(CreateGatewayApiResponseBody::Api && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


    // errorField Field Functions 
    bool hasErrorField() const { return this->errorField_ != nullptr;};
    void deleteErrorField() { this->errorField_ = nullptr;};
    inline string getErrorField() const { DARABONBA_PTR_GET_DEFAULT(errorField_, "") };
    inline CreateGatewayApiResponseBody& setErrorField(string errorField) { DARABONBA_PTR_SET_VALUE(errorField_, errorField) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateGatewayApiResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGatewayApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CreateGatewayApiResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline CreateGatewayApiResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateGatewayApiResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<CreateGatewayApiResponseBody::Api> api_ {};
    shared_ptr<string> errorField_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
