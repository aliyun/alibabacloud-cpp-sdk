// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODY_HPP_
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
  class DescribeApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BackendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(BackendEnable, backendEnable_);
      DARABONBA_PTR_TO_JSON(ConstantParameters, constantParameters_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CustomSystemParameters, customSystemParameters_);
      DARABONBA_PTR_TO_JSON(DeployedInfos, deployedInfos_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_TO_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_TO_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_TO_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Mock, mock_);
      DARABONBA_PTR_TO_JSON(MockResult, mockResult_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(OpenIdConnectConfig, openIdConnectConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_TO_JSON(ResultBodyModel, resultBodyModel_);
      DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_TO_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_TO_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
      DARABONBA_PTR_TO_JSON(WebSocketApiType, webSocketApiType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowSignatureMethod, allowSignatureMethod_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppCodeAuthType, appCodeAuthType_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BackendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(BackendEnable, backendEnable_);
      DARABONBA_PTR_FROM_JSON(ConstantParameters, constantParameters_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CustomSystemParameters, customSystemParameters_);
      DARABONBA_PTR_FROM_JSON(DeployedInfos, deployedInfos_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_FROM_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_FROM_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_FROM_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Mock, mock_);
      DARABONBA_PTR_FROM_JSON(MockResult, mockResult_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(OpenIdConnectConfig, openIdConnectConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_FROM_JSON(ResultBodyModel, resultBodyModel_);
      DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
      DARABONBA_PTR_FROM_JSON(ServiceParametersMap, serviceParametersMap_);
      DARABONBA_PTR_FROM_JSON(SystemParameters, systemParameters_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(WebSocketApiType, webSocketApiType_);
    };
    DescribeApiResponseBody() = default ;
    DescribeApiResponseBody(const DescribeApiResponseBody &) = default ;
    DescribeApiResponseBody(DescribeApiResponseBody &&) = default ;
    DescribeApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBody() = default ;
    DescribeApiResponseBody& operator=(const DescribeApiResponseBody &) = default ;
    DescribeApiResponseBody& operator=(DescribeApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagList& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, TagList& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      TagList() = default ;
      TagList(const TagList &) = default ;
      TagList(TagList &&) = default ;
      TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagList() = default ;
      TagList& operator=(const TagList &) = default ;
      TagList& operator=(TagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // Label key.
        shared_ptr<string> tagKey_ {};
        // Label value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<TagList::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<TagList::Tag>) };
      inline vector<TagList::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<TagList::Tag>) };
      inline TagList& setTag(const vector<TagList::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline TagList& setTag(vector<TagList::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<TagList::Tag>> tag_ {};
    };

    class SystemParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemParameters& obj) { 
        DARABONBA_PTR_TO_JSON(SystemParameter, systemParameter_);
      };
      friend void from_json(const Darabonba::Json& j, SystemParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(SystemParameter, systemParameter_);
      };
      SystemParameters() = default ;
      SystemParameters(const SystemParameters &) = default ;
      SystemParameters(SystemParameters &&) = default ;
      SystemParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemParameters() = default ;
      SystemParameters& operator=(const SystemParameters &) = default ;
      SystemParameters& operator=(SystemParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemParameter& obj) { 
          DARABONBA_PTR_TO_JSON(DemoValue, demoValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
        };
        friend void from_json(const Darabonba::Json& j, SystemParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(DemoValue, demoValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
        };
        SystemParameter() = default ;
        SystemParameter(const SystemParameter &) = default ;
        SystemParameter(SystemParameter &&) = default ;
        SystemParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemParameter() = default ;
        SystemParameter& operator=(const SystemParameter &) = default ;
        SystemParameter& operator=(SystemParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->demoValue_ == nullptr
        && this->description_ == nullptr && this->location_ == nullptr && this->parameterName_ == nullptr && this->serviceParameterName_ == nullptr; };
        // demoValue Field Functions 
        bool hasDemoValue() const { return this->demoValue_ != nullptr;};
        void deleteDemoValue() { this->demoValue_ = nullptr;};
        inline string getDemoValue() const { DARABONBA_PTR_GET_DEFAULT(demoValue_, "") };
        inline SystemParameter& setDemoValue(string demoValue) { DARABONBA_PTR_SET_VALUE(demoValue_, demoValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SystemParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline SystemParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline SystemParameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // serviceParameterName Field Functions 
        bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
        void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
        inline string getServiceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
        inline SystemParameter& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


      protected:
        // The example value.
        shared_ptr<string> demoValue_ {};
        // The parameter description.
        shared_ptr<string> description_ {};
        // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
        shared_ptr<string> location_ {};
        // The system parameter. Valid values: CaClientIp, CaDomain, CaRequestHandleTime, CaAppId, CaRequestId, CaHttpSchema, and CaProxy.
        shared_ptr<string> parameterName_ {};
        // The mapped parameter name in the backend service.
        shared_ptr<string> serviceParameterName_ {};
      };

      virtual bool empty() const override { return this->systemParameter_ == nullptr; };
      // systemParameter Field Functions 
      bool hasSystemParameter() const { return this->systemParameter_ != nullptr;};
      void deleteSystemParameter() { this->systemParameter_ = nullptr;};
      inline const vector<SystemParameters::SystemParameter> & getSystemParameter() const { DARABONBA_PTR_GET_CONST(systemParameter_, vector<SystemParameters::SystemParameter>) };
      inline vector<SystemParameters::SystemParameter> getSystemParameter() { DARABONBA_PTR_GET(systemParameter_, vector<SystemParameters::SystemParameter>) };
      inline SystemParameters& setSystemParameter(const vector<SystemParameters::SystemParameter> & systemParameter) { DARABONBA_PTR_SET_VALUE(systemParameter_, systemParameter) };
      inline SystemParameters& setSystemParameter(vector<SystemParameters::SystemParameter> && systemParameter) { DARABONBA_PTR_SET_RVALUE(systemParameter_, systemParameter) };


    protected:
      shared_ptr<vector<SystemParameters::SystemParameter>> systemParameter_ {};
    };

    class ServiceParametersMap : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceParametersMap& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceParameterMap, serviceParameterMap_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceParametersMap& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceParameterMap, serviceParameterMap_);
      };
      ServiceParametersMap() = default ;
      ServiceParametersMap(const ServiceParametersMap &) = default ;
      ServiceParametersMap(ServiceParametersMap &&) = default ;
      ServiceParametersMap(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceParametersMap() = default ;
      ServiceParametersMap& operator=(const ServiceParametersMap &) = default ;
      ServiceParametersMap& operator=(ServiceParametersMap &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServiceParameterMap : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceParameterMap& obj) { 
          DARABONBA_PTR_TO_JSON(RequestParameterName, requestParameterName_);
          DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceParameterMap& obj) { 
          DARABONBA_PTR_FROM_JSON(RequestParameterName, requestParameterName_);
          DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
        };
        ServiceParameterMap() = default ;
        ServiceParameterMap(const ServiceParameterMap &) = default ;
        ServiceParameterMap(ServiceParameterMap &&) = default ;
        ServiceParameterMap(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceParameterMap() = default ;
        ServiceParameterMap& operator=(const ServiceParameterMap &) = default ;
        ServiceParameterMap& operator=(ServiceParameterMap &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requestParameterName_ == nullptr
        && this->serviceParameterName_ == nullptr; };
        // requestParameterName Field Functions 
        bool hasRequestParameterName() const { return this->requestParameterName_ != nullptr;};
        void deleteRequestParameterName() { this->requestParameterName_ = nullptr;};
        inline string getRequestParameterName() const { DARABONBA_PTR_GET_DEFAULT(requestParameterName_, "") };
        inline ServiceParameterMap& setRequestParameterName(string requestParameterName) { DARABONBA_PTR_SET_VALUE(requestParameterName_, requestParameterName) };


        // serviceParameterName Field Functions 
        bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
        void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
        inline string getServiceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
        inline ServiceParameterMap& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


      protected:
        // The corresponding frontend parameter name. The value must be contained in RequestParametersObject and match RequestParam.ApiParameterName.
        shared_ptr<string> requestParameterName_ {};
        // The mapped parameter name in the backend service.
        shared_ptr<string> serviceParameterName_ {};
      };

      virtual bool empty() const override { return this->serviceParameterMap_ == nullptr; };
      // serviceParameterMap Field Functions 
      bool hasServiceParameterMap() const { return this->serviceParameterMap_ != nullptr;};
      void deleteServiceParameterMap() { this->serviceParameterMap_ = nullptr;};
      inline const vector<ServiceParametersMap::ServiceParameterMap> & getServiceParameterMap() const { DARABONBA_PTR_GET_CONST(serviceParameterMap_, vector<ServiceParametersMap::ServiceParameterMap>) };
      inline vector<ServiceParametersMap::ServiceParameterMap> getServiceParameterMap() { DARABONBA_PTR_GET(serviceParameterMap_, vector<ServiceParametersMap::ServiceParameterMap>) };
      inline ServiceParametersMap& setServiceParameterMap(const vector<ServiceParametersMap::ServiceParameterMap> & serviceParameterMap) { DARABONBA_PTR_SET_VALUE(serviceParameterMap_, serviceParameterMap) };
      inline ServiceParametersMap& setServiceParameterMap(vector<ServiceParametersMap::ServiceParameterMap> && serviceParameterMap) { DARABONBA_PTR_SET_RVALUE(serviceParameterMap_, serviceParameterMap) };


    protected:
      shared_ptr<vector<ServiceParametersMap::ServiceParameterMap>> serviceParameterMap_ {};
    };

    class ServiceParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceParameter, serviceParameter_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceParameter, serviceParameter_);
      };
      ServiceParameters() = default ;
      ServiceParameters(const ServiceParameters &) = default ;
      ServiceParameters(ServiceParameters &&) = default ;
      ServiceParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceParameters() = default ;
      ServiceParameters& operator=(const ServiceParameters &) = default ;
      ServiceParameters& operator=(ServiceParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServiceParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceParameter& obj) { 
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(ParameterType, parameterType_);
          DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(ParameterType, parameterType_);
          DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
        };
        ServiceParameter() = default ;
        ServiceParameter(const ServiceParameter &) = default ;
        ServiceParameter(ServiceParameter &&) = default ;
        ServiceParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceParameter() = default ;
        ServiceParameter& operator=(const ServiceParameter &) = default ;
        ServiceParameter& operator=(ServiceParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->location_ == nullptr
        && this->parameterType_ == nullptr && this->serviceParameterName_ == nullptr; };
        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline ServiceParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // parameterType Field Functions 
        bool hasParameterType() const { return this->parameterType_ != nullptr;};
        void deleteParameterType() { this->parameterType_ = nullptr;};
        inline string getParameterType() const { DARABONBA_PTR_GET_DEFAULT(parameterType_, "") };
        inline ServiceParameter& setParameterType(string parameterType) { DARABONBA_PTR_SET_VALUE(parameterType_, parameterType) };


        // serviceParameterName Field Functions 
        bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
        void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
        inline string getServiceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
        inline ServiceParameter& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


      protected:
        // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
        shared_ptr<string> location_ {};
        // The data type of the parameter. Valid values: STRING, NUMBER, and BOOLEAN.
        shared_ptr<string> parameterType_ {};
        // The mapped parameter name in the backend service.
        shared_ptr<string> serviceParameterName_ {};
      };

      virtual bool empty() const override { return this->serviceParameter_ == nullptr; };
      // serviceParameter Field Functions 
      bool hasServiceParameter() const { return this->serviceParameter_ != nullptr;};
      void deleteServiceParameter() { this->serviceParameter_ = nullptr;};
      inline const vector<ServiceParameters::ServiceParameter> & getServiceParameter() const { DARABONBA_PTR_GET_CONST(serviceParameter_, vector<ServiceParameters::ServiceParameter>) };
      inline vector<ServiceParameters::ServiceParameter> getServiceParameter() { DARABONBA_PTR_GET(serviceParameter_, vector<ServiceParameters::ServiceParameter>) };
      inline ServiceParameters& setServiceParameter(const vector<ServiceParameters::ServiceParameter> & serviceParameter) { DARABONBA_PTR_SET_VALUE(serviceParameter_, serviceParameter) };
      inline ServiceParameters& setServiceParameter(vector<ServiceParameters::ServiceParameter> && serviceParameter) { DARABONBA_PTR_SET_RVALUE(serviceParameter_, serviceParameter) };


    protected:
      shared_ptr<vector<ServiceParameters::ServiceParameter>> serviceParameter_ {};
    };

    class ServiceConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AoneAppName, aoneAppName_);
        DARABONBA_PTR_TO_JSON(ContentTypeCatagory, contentTypeCatagory_);
        DARABONBA_PTR_TO_JSON(ContentTypeValue, contentTypeValue_);
        DARABONBA_PTR_TO_JSON(EventBridgeConfig, eventBridgeConfig_);
        DARABONBA_PTR_TO_JSON(FunctionComputeConfig, functionComputeConfig_);
        DARABONBA_PTR_TO_JSON(Mock, mock_);
        DARABONBA_PTR_TO_JSON(MockHeaders, mockHeaders_);
        DARABONBA_PTR_TO_JSON(MockResult, mockResult_);
        DARABONBA_PTR_TO_JSON(MockStatusCode, mockStatusCode_);
        DARABONBA_PTR_TO_JSON(OssConfig, ossConfig_);
        DARABONBA_PTR_TO_JSON(ServiceAddress, serviceAddress_);
        DARABONBA_PTR_TO_JSON(ServiceHttpMethod, serviceHttpMethod_);
        DARABONBA_PTR_TO_JSON(ServicePath, servicePath_);
        DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_TO_JSON(ServiceTimeout, serviceTimeout_);
        DARABONBA_PTR_TO_JSON(ServiceVpcEnable, serviceVpcEnable_);
        DARABONBA_PTR_TO_JSON(VpcConfig, vpcConfig_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AoneAppName, aoneAppName_);
        DARABONBA_PTR_FROM_JSON(ContentTypeCatagory, contentTypeCatagory_);
        DARABONBA_PTR_FROM_JSON(ContentTypeValue, contentTypeValue_);
        DARABONBA_PTR_FROM_JSON(EventBridgeConfig, eventBridgeConfig_);
        DARABONBA_PTR_FROM_JSON(FunctionComputeConfig, functionComputeConfig_);
        DARABONBA_PTR_FROM_JSON(Mock, mock_);
        DARABONBA_PTR_FROM_JSON(MockHeaders, mockHeaders_);
        DARABONBA_PTR_FROM_JSON(MockResult, mockResult_);
        DARABONBA_PTR_FROM_JSON(MockStatusCode, mockStatusCode_);
        DARABONBA_PTR_FROM_JSON(OssConfig, ossConfig_);
        DARABONBA_PTR_FROM_JSON(ServiceAddress, serviceAddress_);
        DARABONBA_PTR_FROM_JSON(ServiceHttpMethod, serviceHttpMethod_);
        DARABONBA_PTR_FROM_JSON(ServicePath, servicePath_);
        DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_FROM_JSON(ServiceTimeout, serviceTimeout_);
        DARABONBA_PTR_FROM_JSON(ServiceVpcEnable, serviceVpcEnable_);
        DARABONBA_PTR_FROM_JSON(VpcConfig, vpcConfig_);
      };
      ServiceConfig() = default ;
      ServiceConfig(const ServiceConfig &) = default ;
      ServiceConfig(ServiceConfig &&) = default ;
      ServiceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceConfig() = default ;
      ServiceConfig& operator=(const ServiceConfig &) = default ;
      ServiceConfig& operator=(ServiceConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcConfig& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcScheme, vpcScheme_);
        };
        friend void from_json(const Darabonba::Json& j, VpcConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcScheme, vpcScheme_);
        };
        VpcConfig() = default ;
        VpcConfig(const VpcConfig &) = default ;
        VpcConfig(VpcConfig &&) = default ;
        VpcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcConfig() = default ;
        VpcConfig& operator=(const VpcConfig &) = default ;
        VpcConfig& operator=(VpcConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->name_ == nullptr && this->port_ == nullptr && this->vpcId_ == nullptr && this->vpcScheme_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline VpcConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VpcConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline VpcConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VpcConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcScheme Field Functions 
        bool hasVpcScheme() const { return this->vpcScheme_ != nullptr;};
        void deleteVpcScheme() { this->vpcScheme_ = nullptr;};
        inline string getVpcScheme() const { DARABONBA_PTR_GET_DEFAULT(vpcScheme_, "") };
        inline VpcConfig& setVpcScheme(string vpcScheme) { DARABONBA_PTR_SET_VALUE(vpcScheme_, vpcScheme) };


      protected:
        // The ID of the ECS or SLB instance in the VPC.
        shared_ptr<string> instanceId_ {};
        // The name of the VPC access authorization.
        shared_ptr<string> name_ {};
        // The port number that corresponds to the instance.
        shared_ptr<int32_t> port_ {};
        // The ID of the VPC.
        shared_ptr<string> vpcId_ {};
        // The VPC protocol.
        shared_ptr<string> vpcScheme_ {};
      };

      class OssConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(OssRegionId, ossRegionId_);
        };
        friend void from_json(const Darabonba::Json& j, OssConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(OssRegionId, ossRegionId_);
        };
        OssConfig() = default ;
        OssConfig(const OssConfig &) = default ;
        OssConfig(OssConfig &&) = default ;
        OssConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssConfig() = default ;
        OssConfig& operator=(const OssConfig &) = default ;
        OssConfig& operator=(OssConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->bucketName_ == nullptr && this->key_ == nullptr && this->ossRegionId_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline OssConfig& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline OssConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // ossRegionId Field Functions 
        bool hasOssRegionId() const { return this->ossRegionId_ != nullptr;};
        void deleteOssRegionId() { this->ossRegionId_ = nullptr;};
        inline string getOssRegionId() const { DARABONBA_PTR_GET_DEFAULT(ossRegionId_, "") };
        inline OssConfig& setOssRegionId(string ossRegionId) { DARABONBA_PTR_SET_VALUE(ossRegionId_, ossRegionId) };


      protected:
        // The operation options on OSS. Valid values:
        // 
        // *   GetObject
        // *   PostObject
        // *   DeleteObject
        // *   PutObject
        // *   HeadObject
        // *   GetObjectMeta
        // *   AppendObject
        shared_ptr<string> action_ {};
        // The OSS bucket.
        shared_ptr<string> bucketName_ {};
        // The stored object or folder path.
        shared_ptr<string> key_ {};
        // The ID of the region where the OSS instance is located.
        shared_ptr<string> ossRegionId_ {};
      };

      class MockHeaders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MockHeaders& obj) { 
          DARABONBA_PTR_TO_JSON(MockHeader, mockHeader_);
        };
        friend void from_json(const Darabonba::Json& j, MockHeaders& obj) { 
          DARABONBA_PTR_FROM_JSON(MockHeader, mockHeader_);
        };
        MockHeaders() = default ;
        MockHeaders(const MockHeaders &) = default ;
        MockHeaders(MockHeaders &&) = default ;
        MockHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MockHeaders() = default ;
        MockHeaders& operator=(const MockHeaders &) = default ;
        MockHeaders& operator=(MockHeaders &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MockHeader : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MockHeader& obj) { 
            DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
            DARABONBA_PTR_TO_JSON(HeaderValue, headerValue_);
          };
          friend void from_json(const Darabonba::Json& j, MockHeader& obj) { 
            DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
            DARABONBA_PTR_FROM_JSON(HeaderValue, headerValue_);
          };
          MockHeader() = default ;
          MockHeader(const MockHeader &) = default ;
          MockHeader(MockHeader &&) = default ;
          MockHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MockHeader() = default ;
          MockHeader& operator=(const MockHeader &) = default ;
          MockHeader& operator=(MockHeader &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->headerName_ == nullptr
        && this->headerValue_ == nullptr; };
          // headerName Field Functions 
          bool hasHeaderName() const { return this->headerName_ != nullptr;};
          void deleteHeaderName() { this->headerName_ = nullptr;};
          inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
          inline MockHeader& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


          // headerValue Field Functions 
          bool hasHeaderValue() const { return this->headerValue_ != nullptr;};
          void deleteHeaderValue() { this->headerValue_ = nullptr;};
          inline string getHeaderValue() const { DARABONBA_PTR_GET_DEFAULT(headerValue_, "") };
          inline MockHeader& setHeaderValue(string headerValue) { DARABONBA_PTR_SET_VALUE(headerValue_, headerValue) };


        protected:
          // The HTTP header.
          shared_ptr<string> headerName_ {};
          // The value of the HTTP header.
          shared_ptr<string> headerValue_ {};
        };

        virtual bool empty() const override { return this->mockHeader_ == nullptr; };
        // mockHeader Field Functions 
        bool hasMockHeader() const { return this->mockHeader_ != nullptr;};
        void deleteMockHeader() { this->mockHeader_ = nullptr;};
        inline const vector<MockHeaders::MockHeader> & getMockHeader() const { DARABONBA_PTR_GET_CONST(mockHeader_, vector<MockHeaders::MockHeader>) };
        inline vector<MockHeaders::MockHeader> getMockHeader() { DARABONBA_PTR_GET(mockHeader_, vector<MockHeaders::MockHeader>) };
        inline MockHeaders& setMockHeader(const vector<MockHeaders::MockHeader> & mockHeader) { DARABONBA_PTR_SET_VALUE(mockHeader_, mockHeader) };
        inline MockHeaders& setMockHeader(vector<MockHeaders::MockHeader> && mockHeader) { DARABONBA_PTR_SET_RVALUE(mockHeader_, mockHeader) };


      protected:
        shared_ptr<vector<MockHeaders::MockHeader>> mockHeader_ {};
      };

      class FunctionComputeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionComputeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ContentTypeCatagory, contentTypeCatagory_);
          DARABONBA_PTR_TO_JSON(ContentTypeValue, contentTypeValue_);
          DARABONBA_PTR_TO_JSON(FcBaseUrl, fcBaseUrl_);
          DARABONBA_PTR_TO_JSON(FcType, fcType_);
          DARABONBA_PTR_TO_JSON(FcVersion, fcVersion_);
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(OnlyBusinessPath, onlyBusinessPath_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(TriggerName, triggerName_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionComputeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ContentTypeCatagory, contentTypeCatagory_);
          DARABONBA_PTR_FROM_JSON(ContentTypeValue, contentTypeValue_);
          DARABONBA_PTR_FROM_JSON(FcBaseUrl, fcBaseUrl_);
          DARABONBA_PTR_FROM_JSON(FcType, fcType_);
          DARABONBA_PTR_FROM_JSON(FcVersion, fcVersion_);
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(OnlyBusinessPath, onlyBusinessPath_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(TriggerName, triggerName_);
        };
        FunctionComputeConfig() = default ;
        FunctionComputeConfig(const FunctionComputeConfig &) = default ;
        FunctionComputeConfig(FunctionComputeConfig &&) = default ;
        FunctionComputeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionComputeConfig() = default ;
        FunctionComputeConfig& operator=(const FunctionComputeConfig &) = default ;
        FunctionComputeConfig& operator=(FunctionComputeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contentTypeCatagory_ == nullptr
        && this->contentTypeValue_ == nullptr && this->fcBaseUrl_ == nullptr && this->fcType_ == nullptr && this->fcVersion_ == nullptr && this->functionName_ == nullptr
        && this->method_ == nullptr && this->onlyBusinessPath_ == nullptr && this->path_ == nullptr && this->qualifier_ == nullptr && this->regionId_ == nullptr
        && this->roleArn_ == nullptr && this->serviceName_ == nullptr && this->triggerName_ == nullptr; };
        // contentTypeCatagory Field Functions 
        bool hasContentTypeCatagory() const { return this->contentTypeCatagory_ != nullptr;};
        void deleteContentTypeCatagory() { this->contentTypeCatagory_ = nullptr;};
        inline string getContentTypeCatagory() const { DARABONBA_PTR_GET_DEFAULT(contentTypeCatagory_, "") };
        inline FunctionComputeConfig& setContentTypeCatagory(string contentTypeCatagory) { DARABONBA_PTR_SET_VALUE(contentTypeCatagory_, contentTypeCatagory) };


        // contentTypeValue Field Functions 
        bool hasContentTypeValue() const { return this->contentTypeValue_ != nullptr;};
        void deleteContentTypeValue() { this->contentTypeValue_ = nullptr;};
        inline string getContentTypeValue() const { DARABONBA_PTR_GET_DEFAULT(contentTypeValue_, "") };
        inline FunctionComputeConfig& setContentTypeValue(string contentTypeValue) { DARABONBA_PTR_SET_VALUE(contentTypeValue_, contentTypeValue) };


        // fcBaseUrl Field Functions 
        bool hasFcBaseUrl() const { return this->fcBaseUrl_ != nullptr;};
        void deleteFcBaseUrl() { this->fcBaseUrl_ = nullptr;};
        inline string getFcBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(fcBaseUrl_, "") };
        inline FunctionComputeConfig& setFcBaseUrl(string fcBaseUrl) { DARABONBA_PTR_SET_VALUE(fcBaseUrl_, fcBaseUrl) };


        // fcType Field Functions 
        bool hasFcType() const { return this->fcType_ != nullptr;};
        void deleteFcType() { this->fcType_ = nullptr;};
        inline string getFcType() const { DARABONBA_PTR_GET_DEFAULT(fcType_, "") };
        inline FunctionComputeConfig& setFcType(string fcType) { DARABONBA_PTR_SET_VALUE(fcType_, fcType) };


        // fcVersion Field Functions 
        bool hasFcVersion() const { return this->fcVersion_ != nullptr;};
        void deleteFcVersion() { this->fcVersion_ = nullptr;};
        inline string getFcVersion() const { DARABONBA_PTR_GET_DEFAULT(fcVersion_, "") };
        inline FunctionComputeConfig& setFcVersion(string fcVersion) { DARABONBA_PTR_SET_VALUE(fcVersion_, fcVersion) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline FunctionComputeConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline FunctionComputeConfig& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // onlyBusinessPath Field Functions 
        bool hasOnlyBusinessPath() const { return this->onlyBusinessPath_ != nullptr;};
        void deleteOnlyBusinessPath() { this->onlyBusinessPath_ = nullptr;};
        inline bool getOnlyBusinessPath() const { DARABONBA_PTR_GET_DEFAULT(onlyBusinessPath_, false) };
        inline FunctionComputeConfig& setOnlyBusinessPath(bool onlyBusinessPath) { DARABONBA_PTR_SET_VALUE(onlyBusinessPath_, onlyBusinessPath) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline FunctionComputeConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // qualifier Field Functions 
        bool hasQualifier() const { return this->qualifier_ != nullptr;};
        void deleteQualifier() { this->qualifier_ = nullptr;};
        inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
        inline FunctionComputeConfig& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline FunctionComputeConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // roleArn Field Functions 
        bool hasRoleArn() const { return this->roleArn_ != nullptr;};
        void deleteRoleArn() { this->roleArn_ = nullptr;};
        inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
        inline FunctionComputeConfig& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline FunctionComputeConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // triggerName Field Functions 
        bool hasTriggerName() const { return this->triggerName_ != nullptr;};
        void deleteTriggerName() { this->triggerName_ = nullptr;};
        inline string getTriggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
        inline FunctionComputeConfig& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


      protected:
        // The ContentType header type used when you call the backend service over HTTP.
        // 
        // *   **DEFAULT**: the default header type in API Gateway
        // *   **CUSTOM**: a custom header type
        // *   **CLIENT**: the ContentType header type of the client
        shared_ptr<string> contentTypeCatagory_ {};
        // The value of the ContentType header when the ContentTypeCatagory parameter is set to DEFAULT or CUSTOM.
        shared_ptr<string> contentTypeValue_ {};
        // The root path of Function Compute.
        shared_ptr<string> fcBaseUrl_ {};
        // The type of the Function Compute instance.
        shared_ptr<string> fcType_ {};
        shared_ptr<string> fcVersion_ {};
        // The function name defined in Function Compute.
        shared_ptr<string> functionName_ {};
        // The request method.
        shared_ptr<string> method_ {};
        // The backend only receives the service path.
        shared_ptr<bool> onlyBusinessPath_ {};
        // The API request path.
        shared_ptr<string> path_ {};
        // The alias of the function.
        shared_ptr<string> qualifier_ {};
        // The region where the Function Compute instance is located.
        shared_ptr<string> regionId_ {};
        // The Alibaba Cloud Resource Name (ARN) of the RAM role to be assumed by API Gateway to access Function Compute.
        shared_ptr<string> roleArn_ {};
        // The service name defined in Function Compute.
        shared_ptr<string> serviceName_ {};
        // The name of the trigger.
        // 
        // You can specify the TriggerName or TriggerUrl parameter. The TriggerName parameter is optional.
        shared_ptr<string> triggerName_ {};
      };

      class EventBridgeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventBridgeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EventBridgeRegionId, eventBridgeRegionId_);
          DARABONBA_PTR_TO_JSON(EventBus, eventBus_);
          DARABONBA_PTR_TO_JSON(EventSource, eventSource_);
          DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        };
        friend void from_json(const Darabonba::Json& j, EventBridgeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EventBridgeRegionId, eventBridgeRegionId_);
          DARABONBA_PTR_FROM_JSON(EventBus, eventBus_);
          DARABONBA_PTR_FROM_JSON(EventSource, eventSource_);
          DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        };
        EventBridgeConfig() = default ;
        EventBridgeConfig(const EventBridgeConfig &) = default ;
        EventBridgeConfig(EventBridgeConfig &&) = default ;
        EventBridgeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventBridgeConfig() = default ;
        EventBridgeConfig& operator=(const EventBridgeConfig &) = default ;
        EventBridgeConfig& operator=(EventBridgeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventBridgeRegionId_ == nullptr
        && this->eventBus_ == nullptr && this->eventSource_ == nullptr && this->roleArn_ == nullptr; };
        // eventBridgeRegionId Field Functions 
        bool hasEventBridgeRegionId() const { return this->eventBridgeRegionId_ != nullptr;};
        void deleteEventBridgeRegionId() { this->eventBridgeRegionId_ = nullptr;};
        inline string getEventBridgeRegionId() const { DARABONBA_PTR_GET_DEFAULT(eventBridgeRegionId_, "") };
        inline EventBridgeConfig& setEventBridgeRegionId(string eventBridgeRegionId) { DARABONBA_PTR_SET_VALUE(eventBridgeRegionId_, eventBridgeRegionId) };


        // eventBus Field Functions 
        bool hasEventBus() const { return this->eventBus_ != nullptr;};
        void deleteEventBus() { this->eventBus_ = nullptr;};
        inline string getEventBus() const { DARABONBA_PTR_GET_DEFAULT(eventBus_, "") };
        inline EventBridgeConfig& setEventBus(string eventBus) { DARABONBA_PTR_SET_VALUE(eventBus_, eventBus) };


        // eventSource Field Functions 
        bool hasEventSource() const { return this->eventSource_ != nullptr;};
        void deleteEventSource() { this->eventSource_ = nullptr;};
        inline string getEventSource() const { DARABONBA_PTR_GET_DEFAULT(eventSource_, "") };
        inline EventBridgeConfig& setEventSource(string eventSource) { DARABONBA_PTR_SET_VALUE(eventSource_, eventSource) };


        // roleArn Field Functions 
        bool hasRoleArn() const { return this->roleArn_ != nullptr;};
        void deleteRoleArn() { this->roleArn_ = nullptr;};
        inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
        inline EventBridgeConfig& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      protected:
        // The ID of the region where the EventBridge instance is located.
        shared_ptr<string> eventBridgeRegionId_ {};
        // The event bus.
        shared_ptr<string> eventBus_ {};
        // The event source.
        shared_ptr<string> eventSource_ {};
        // The Arn that is authorized by a RAM user to EventBridge.
        shared_ptr<string> roleArn_ {};
      };

      virtual bool empty() const override { return this->aoneAppName_ == nullptr
        && this->contentTypeCatagory_ == nullptr && this->contentTypeValue_ == nullptr && this->eventBridgeConfig_ == nullptr && this->functionComputeConfig_ == nullptr && this->mock_ == nullptr
        && this->mockHeaders_ == nullptr && this->mockResult_ == nullptr && this->mockStatusCode_ == nullptr && this->ossConfig_ == nullptr && this->serviceAddress_ == nullptr
        && this->serviceHttpMethod_ == nullptr && this->servicePath_ == nullptr && this->serviceProtocol_ == nullptr && this->serviceTimeout_ == nullptr && this->serviceVpcEnable_ == nullptr
        && this->vpcConfig_ == nullptr; };
      // aoneAppName Field Functions 
      bool hasAoneAppName() const { return this->aoneAppName_ != nullptr;};
      void deleteAoneAppName() { this->aoneAppName_ = nullptr;};
      inline string getAoneAppName() const { DARABONBA_PTR_GET_DEFAULT(aoneAppName_, "") };
      inline ServiceConfig& setAoneAppName(string aoneAppName) { DARABONBA_PTR_SET_VALUE(aoneAppName_, aoneAppName) };


      // contentTypeCatagory Field Functions 
      bool hasContentTypeCatagory() const { return this->contentTypeCatagory_ != nullptr;};
      void deleteContentTypeCatagory() { this->contentTypeCatagory_ = nullptr;};
      inline string getContentTypeCatagory() const { DARABONBA_PTR_GET_DEFAULT(contentTypeCatagory_, "") };
      inline ServiceConfig& setContentTypeCatagory(string contentTypeCatagory) { DARABONBA_PTR_SET_VALUE(contentTypeCatagory_, contentTypeCatagory) };


      // contentTypeValue Field Functions 
      bool hasContentTypeValue() const { return this->contentTypeValue_ != nullptr;};
      void deleteContentTypeValue() { this->contentTypeValue_ = nullptr;};
      inline string getContentTypeValue() const { DARABONBA_PTR_GET_DEFAULT(contentTypeValue_, "") };
      inline ServiceConfig& setContentTypeValue(string contentTypeValue) { DARABONBA_PTR_SET_VALUE(contentTypeValue_, contentTypeValue) };


      // eventBridgeConfig Field Functions 
      bool hasEventBridgeConfig() const { return this->eventBridgeConfig_ != nullptr;};
      void deleteEventBridgeConfig() { this->eventBridgeConfig_ = nullptr;};
      inline const ServiceConfig::EventBridgeConfig & getEventBridgeConfig() const { DARABONBA_PTR_GET_CONST(eventBridgeConfig_, ServiceConfig::EventBridgeConfig) };
      inline ServiceConfig::EventBridgeConfig getEventBridgeConfig() { DARABONBA_PTR_GET(eventBridgeConfig_, ServiceConfig::EventBridgeConfig) };
      inline ServiceConfig& setEventBridgeConfig(const ServiceConfig::EventBridgeConfig & eventBridgeConfig) { DARABONBA_PTR_SET_VALUE(eventBridgeConfig_, eventBridgeConfig) };
      inline ServiceConfig& setEventBridgeConfig(ServiceConfig::EventBridgeConfig && eventBridgeConfig) { DARABONBA_PTR_SET_RVALUE(eventBridgeConfig_, eventBridgeConfig) };


      // functionComputeConfig Field Functions 
      bool hasFunctionComputeConfig() const { return this->functionComputeConfig_ != nullptr;};
      void deleteFunctionComputeConfig() { this->functionComputeConfig_ = nullptr;};
      inline const ServiceConfig::FunctionComputeConfig & getFunctionComputeConfig() const { DARABONBA_PTR_GET_CONST(functionComputeConfig_, ServiceConfig::FunctionComputeConfig) };
      inline ServiceConfig::FunctionComputeConfig getFunctionComputeConfig() { DARABONBA_PTR_GET(functionComputeConfig_, ServiceConfig::FunctionComputeConfig) };
      inline ServiceConfig& setFunctionComputeConfig(const ServiceConfig::FunctionComputeConfig & functionComputeConfig) { DARABONBA_PTR_SET_VALUE(functionComputeConfig_, functionComputeConfig) };
      inline ServiceConfig& setFunctionComputeConfig(ServiceConfig::FunctionComputeConfig && functionComputeConfig) { DARABONBA_PTR_SET_RVALUE(functionComputeConfig_, functionComputeConfig) };


      // mock Field Functions 
      bool hasMock() const { return this->mock_ != nullptr;};
      void deleteMock() { this->mock_ = nullptr;};
      inline string getMock() const { DARABONBA_PTR_GET_DEFAULT(mock_, "") };
      inline ServiceConfig& setMock(string mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };


      // mockHeaders Field Functions 
      bool hasMockHeaders() const { return this->mockHeaders_ != nullptr;};
      void deleteMockHeaders() { this->mockHeaders_ = nullptr;};
      inline const ServiceConfig::MockHeaders & getMockHeaders() const { DARABONBA_PTR_GET_CONST(mockHeaders_, ServiceConfig::MockHeaders) };
      inline ServiceConfig::MockHeaders getMockHeaders() { DARABONBA_PTR_GET(mockHeaders_, ServiceConfig::MockHeaders) };
      inline ServiceConfig& setMockHeaders(const ServiceConfig::MockHeaders & mockHeaders) { DARABONBA_PTR_SET_VALUE(mockHeaders_, mockHeaders) };
      inline ServiceConfig& setMockHeaders(ServiceConfig::MockHeaders && mockHeaders) { DARABONBA_PTR_SET_RVALUE(mockHeaders_, mockHeaders) };


      // mockResult Field Functions 
      bool hasMockResult() const { return this->mockResult_ != nullptr;};
      void deleteMockResult() { this->mockResult_ = nullptr;};
      inline string getMockResult() const { DARABONBA_PTR_GET_DEFAULT(mockResult_, "") };
      inline ServiceConfig& setMockResult(string mockResult) { DARABONBA_PTR_SET_VALUE(mockResult_, mockResult) };


      // mockStatusCode Field Functions 
      bool hasMockStatusCode() const { return this->mockStatusCode_ != nullptr;};
      void deleteMockStatusCode() { this->mockStatusCode_ = nullptr;};
      inline int32_t getMockStatusCode() const { DARABONBA_PTR_GET_DEFAULT(mockStatusCode_, 0) };
      inline ServiceConfig& setMockStatusCode(int32_t mockStatusCode) { DARABONBA_PTR_SET_VALUE(mockStatusCode_, mockStatusCode) };


      // ossConfig Field Functions 
      bool hasOssConfig() const { return this->ossConfig_ != nullptr;};
      void deleteOssConfig() { this->ossConfig_ = nullptr;};
      inline const ServiceConfig::OssConfig & getOssConfig() const { DARABONBA_PTR_GET_CONST(ossConfig_, ServiceConfig::OssConfig) };
      inline ServiceConfig::OssConfig getOssConfig() { DARABONBA_PTR_GET(ossConfig_, ServiceConfig::OssConfig) };
      inline ServiceConfig& setOssConfig(const ServiceConfig::OssConfig & ossConfig) { DARABONBA_PTR_SET_VALUE(ossConfig_, ossConfig) };
      inline ServiceConfig& setOssConfig(ServiceConfig::OssConfig && ossConfig) { DARABONBA_PTR_SET_RVALUE(ossConfig_, ossConfig) };


      // serviceAddress Field Functions 
      bool hasServiceAddress() const { return this->serviceAddress_ != nullptr;};
      void deleteServiceAddress() { this->serviceAddress_ = nullptr;};
      inline string getServiceAddress() const { DARABONBA_PTR_GET_DEFAULT(serviceAddress_, "") };
      inline ServiceConfig& setServiceAddress(string serviceAddress) { DARABONBA_PTR_SET_VALUE(serviceAddress_, serviceAddress) };


      // serviceHttpMethod Field Functions 
      bool hasServiceHttpMethod() const { return this->serviceHttpMethod_ != nullptr;};
      void deleteServiceHttpMethod() { this->serviceHttpMethod_ = nullptr;};
      inline string getServiceHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(serviceHttpMethod_, "") };
      inline ServiceConfig& setServiceHttpMethod(string serviceHttpMethod) { DARABONBA_PTR_SET_VALUE(serviceHttpMethod_, serviceHttpMethod) };


      // servicePath Field Functions 
      bool hasServicePath() const { return this->servicePath_ != nullptr;};
      void deleteServicePath() { this->servicePath_ = nullptr;};
      inline string getServicePath() const { DARABONBA_PTR_GET_DEFAULT(servicePath_, "") };
      inline ServiceConfig& setServicePath(string servicePath) { DARABONBA_PTR_SET_VALUE(servicePath_, servicePath) };


      // serviceProtocol Field Functions 
      bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
      void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
      inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
      inline ServiceConfig& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


      // serviceTimeout Field Functions 
      bool hasServiceTimeout() const { return this->serviceTimeout_ != nullptr;};
      void deleteServiceTimeout() { this->serviceTimeout_ = nullptr;};
      inline int32_t getServiceTimeout() const { DARABONBA_PTR_GET_DEFAULT(serviceTimeout_, 0) };
      inline ServiceConfig& setServiceTimeout(int32_t serviceTimeout) { DARABONBA_PTR_SET_VALUE(serviceTimeout_, serviceTimeout) };


      // serviceVpcEnable Field Functions 
      bool hasServiceVpcEnable() const { return this->serviceVpcEnable_ != nullptr;};
      void deleteServiceVpcEnable() { this->serviceVpcEnable_ = nullptr;};
      inline string getServiceVpcEnable() const { DARABONBA_PTR_GET_DEFAULT(serviceVpcEnable_, "") };
      inline ServiceConfig& setServiceVpcEnable(string serviceVpcEnable) { DARABONBA_PTR_SET_VALUE(serviceVpcEnable_, serviceVpcEnable) };


      // vpcConfig Field Functions 
      bool hasVpcConfig() const { return this->vpcConfig_ != nullptr;};
      void deleteVpcConfig() { this->vpcConfig_ = nullptr;};
      inline const ServiceConfig::VpcConfig & getVpcConfig() const { DARABONBA_PTR_GET_CONST(vpcConfig_, ServiceConfig::VpcConfig) };
      inline ServiceConfig::VpcConfig getVpcConfig() { DARABONBA_PTR_GET(vpcConfig_, ServiceConfig::VpcConfig) };
      inline ServiceConfig& setVpcConfig(const ServiceConfig::VpcConfig & vpcConfig) { DARABONBA_PTR_SET_VALUE(vpcConfig_, vpcConfig) };
      inline ServiceConfig& setVpcConfig(ServiceConfig::VpcConfig && vpcConfig) { DARABONBA_PTR_SET_RVALUE(vpcConfig_, vpcConfig) };


    protected:
      // The application name in AONE.
      shared_ptr<string> aoneAppName_ {};
      // The ContentType header type used when you call the backend service over HTTP.
      // 
      // *   **DEFAULT**: the default header type in API Gateway
      // *   **CUSTOM**: a custom header type
      // *   **CLIENT**: the ContentType header type of the client
      shared_ptr<string> contentTypeCatagory_ {};
      // The value of the ContentType header when the ServiceProtocol parameter is set to HTTP and the ContentTypeCatagory parameter is set to DEFAULT or CUSTOM.
      shared_ptr<string> contentTypeValue_ {};
      // Configuration items of EventBridge
      shared_ptr<ServiceConfig::EventBridgeConfig> eventBridgeConfig_ {};
      // Backend configuration items when the backend service is Function Compute
      shared_ptr<ServiceConfig::FunctionComputeConfig> functionComputeConfig_ {};
      // Specifies whether to enable the Mock mode. Valid values:
      // 
      // *   **TRUE**: The Mock mode is enabled.
      // *   **FALSE**: The Mock mode is not enabled.
      shared_ptr<string> mock_ {};
      // The simulated headers.
      shared_ptr<ServiceConfig::MockHeaders> mockHeaders_ {};
      // The result returned when the Mock mode is enabled.
      shared_ptr<string> mockResult_ {};
      // The status code returned for service mocking.
      shared_ptr<int32_t> mockStatusCode_ {};
      // The information returned when the backend service is Object Storage Service (OSS).
      shared_ptr<ServiceConfig::OssConfig> ossConfig_ {};
      // The URL used to call the back-end service. If the complete back-end service URL is `http://api.a.com:8080/object/add?key1=value1&key2=value2`, the value of ServiceAddress is **http://api.a.com:8080**.``
      shared_ptr<string> serviceAddress_ {};
      // The HTTP method used to call a backend service. Valid values: GET, POST, DELETE, PUT, HEADER, TRACE, PATCH, CONNECT, and OPTIONS.
      shared_ptr<string> serviceHttpMethod_ {};
      shared_ptr<string> servicePath_ {};
      // The protocol used by the backend service. Valid values: HTTP and HTTPS.
      shared_ptr<string> serviceProtocol_ {};
      // The timeout period of the backend service. Unit: milliseconds.
      shared_ptr<int32_t> serviceTimeout_ {};
      // Specifies whether to enable the VPC channel. Valid values:
      // 
      // *   **TRUE**: The VPC channel is enabled. You must create the corresponding VPC access authorization before you can enable a VPC channel.
      // *   **FALSE**: The VPC channel is not enabled.
      shared_ptr<string> serviceVpcEnable_ {};
      // Configuration items related to VPC channels
      shared_ptr<ServiceConfig::VpcConfig> vpcConfig_ {};
    };

    class RequestParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestParameters& obj) { 
        DARABONBA_PTR_TO_JSON(RequestParameter, requestParameter_);
      };
      friend void from_json(const Darabonba::Json& j, RequestParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(RequestParameter, requestParameter_);
      };
      RequestParameters() = default ;
      RequestParameters(const RequestParameters &) = default ;
      RequestParameters(RequestParameters &&) = default ;
      RequestParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestParameters() = default ;
      RequestParameters& operator=(const RequestParameters &) = default ;
      RequestParameters& operator=(RequestParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RequestParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestParameter& obj) { 
          DARABONBA_PTR_TO_JSON(ApiParameterName, apiParameterName_);
          DARABONBA_PTR_TO_JSON(ArrayItemsType, arrayItemsType_);
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(DemoValue, demoValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DocOrder, docOrder_);
          DARABONBA_PTR_TO_JSON(DocShow, docShow_);
          DARABONBA_PTR_TO_JSON(EnumValue, enumValue_);
          DARABONBA_PTR_TO_JSON(JsonScheme, jsonScheme_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
          DARABONBA_PTR_TO_JSON(MinLength, minLength_);
          DARABONBA_PTR_TO_JSON(MinValue, minValue_);
          DARABONBA_PTR_TO_JSON(ParameterType, parameterType_);
          DARABONBA_PTR_TO_JSON(RegularExpression, regularExpression_);
          DARABONBA_PTR_TO_JSON(Required, required_);
        };
        friend void from_json(const Darabonba::Json& j, RequestParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiParameterName, apiParameterName_);
          DARABONBA_PTR_FROM_JSON(ArrayItemsType, arrayItemsType_);
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(DemoValue, demoValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DocOrder, docOrder_);
          DARABONBA_PTR_FROM_JSON(DocShow, docShow_);
          DARABONBA_PTR_FROM_JSON(EnumValue, enumValue_);
          DARABONBA_PTR_FROM_JSON(JsonScheme, jsonScheme_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
          DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
          DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
          DARABONBA_PTR_FROM_JSON(ParameterType, parameterType_);
          DARABONBA_PTR_FROM_JSON(RegularExpression, regularExpression_);
          DARABONBA_PTR_FROM_JSON(Required, required_);
        };
        RequestParameter() = default ;
        RequestParameter(const RequestParameter &) = default ;
        RequestParameter(RequestParameter &&) = default ;
        RequestParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RequestParameter() = default ;
        RequestParameter& operator=(const RequestParameter &) = default ;
        RequestParameter& operator=(RequestParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiParameterName_ == nullptr
        && this->arrayItemsType_ == nullptr && this->defaultValue_ == nullptr && this->demoValue_ == nullptr && this->description_ == nullptr && this->docOrder_ == nullptr
        && this->docShow_ == nullptr && this->enumValue_ == nullptr && this->jsonScheme_ == nullptr && this->location_ == nullptr && this->maxLength_ == nullptr
        && this->maxValue_ == nullptr && this->minLength_ == nullptr && this->minValue_ == nullptr && this->parameterType_ == nullptr && this->regularExpression_ == nullptr
        && this->required_ == nullptr; };
        // apiParameterName Field Functions 
        bool hasApiParameterName() const { return this->apiParameterName_ != nullptr;};
        void deleteApiParameterName() { this->apiParameterName_ = nullptr;};
        inline string getApiParameterName() const { DARABONBA_PTR_GET_DEFAULT(apiParameterName_, "") };
        inline RequestParameter& setApiParameterName(string apiParameterName) { DARABONBA_PTR_SET_VALUE(apiParameterName_, apiParameterName) };


        // arrayItemsType Field Functions 
        bool hasArrayItemsType() const { return this->arrayItemsType_ != nullptr;};
        void deleteArrayItemsType() { this->arrayItemsType_ = nullptr;};
        inline string getArrayItemsType() const { DARABONBA_PTR_GET_DEFAULT(arrayItemsType_, "") };
        inline RequestParameter& setArrayItemsType(string arrayItemsType) { DARABONBA_PTR_SET_VALUE(arrayItemsType_, arrayItemsType) };


        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline RequestParameter& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // demoValue Field Functions 
        bool hasDemoValue() const { return this->demoValue_ != nullptr;};
        void deleteDemoValue() { this->demoValue_ = nullptr;};
        inline string getDemoValue() const { DARABONBA_PTR_GET_DEFAULT(demoValue_, "") };
        inline RequestParameter& setDemoValue(string demoValue) { DARABONBA_PTR_SET_VALUE(demoValue_, demoValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RequestParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // docOrder Field Functions 
        bool hasDocOrder() const { return this->docOrder_ != nullptr;};
        void deleteDocOrder() { this->docOrder_ = nullptr;};
        inline int32_t getDocOrder() const { DARABONBA_PTR_GET_DEFAULT(docOrder_, 0) };
        inline RequestParameter& setDocOrder(int32_t docOrder) { DARABONBA_PTR_SET_VALUE(docOrder_, docOrder) };


        // docShow Field Functions 
        bool hasDocShow() const { return this->docShow_ != nullptr;};
        void deleteDocShow() { this->docShow_ = nullptr;};
        inline string getDocShow() const { DARABONBA_PTR_GET_DEFAULT(docShow_, "") };
        inline RequestParameter& setDocShow(string docShow) { DARABONBA_PTR_SET_VALUE(docShow_, docShow) };


        // enumValue Field Functions 
        bool hasEnumValue() const { return this->enumValue_ != nullptr;};
        void deleteEnumValue() { this->enumValue_ = nullptr;};
        inline string getEnumValue() const { DARABONBA_PTR_GET_DEFAULT(enumValue_, "") };
        inline RequestParameter& setEnumValue(string enumValue) { DARABONBA_PTR_SET_VALUE(enumValue_, enumValue) };


        // jsonScheme Field Functions 
        bool hasJsonScheme() const { return this->jsonScheme_ != nullptr;};
        void deleteJsonScheme() { this->jsonScheme_ = nullptr;};
        inline string getJsonScheme() const { DARABONBA_PTR_GET_DEFAULT(jsonScheme_, "") };
        inline RequestParameter& setJsonScheme(string jsonScheme) { DARABONBA_PTR_SET_VALUE(jsonScheme_, jsonScheme) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline RequestParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // maxLength Field Functions 
        bool hasMaxLength() const { return this->maxLength_ != nullptr;};
        void deleteMaxLength() { this->maxLength_ = nullptr;};
        inline int64_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
        inline RequestParameter& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


        // maxValue Field Functions 
        bool hasMaxValue() const { return this->maxValue_ != nullptr;};
        void deleteMaxValue() { this->maxValue_ = nullptr;};
        inline int64_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0L) };
        inline RequestParameter& setMaxValue(int64_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


        // minLength Field Functions 
        bool hasMinLength() const { return this->minLength_ != nullptr;};
        void deleteMinLength() { this->minLength_ = nullptr;};
        inline int64_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0L) };
        inline RequestParameter& setMinLength(int64_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


        // minValue Field Functions 
        bool hasMinValue() const { return this->minValue_ != nullptr;};
        void deleteMinValue() { this->minValue_ = nullptr;};
        inline int64_t getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0L) };
        inline RequestParameter& setMinValue(int64_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        // parameterType Field Functions 
        bool hasParameterType() const { return this->parameterType_ != nullptr;};
        void deleteParameterType() { this->parameterType_ = nullptr;};
        inline string getParameterType() const { DARABONBA_PTR_GET_DEFAULT(parameterType_, "") };
        inline RequestParameter& setParameterType(string parameterType) { DARABONBA_PTR_SET_VALUE(parameterType_, parameterType) };


        // regularExpression Field Functions 
        bool hasRegularExpression() const { return this->regularExpression_ != nullptr;};
        void deleteRegularExpression() { this->regularExpression_ = nullptr;};
        inline string getRegularExpression() const { DARABONBA_PTR_GET_DEFAULT(regularExpression_, "") };
        inline RequestParameter& setRegularExpression(string regularExpression) { DARABONBA_PTR_SET_VALUE(regularExpression_, regularExpression) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline string getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, "") };
        inline RequestParameter& setRequired(string required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      protected:
        // The parameter name.
        shared_ptr<string> apiParameterName_ {};
        // The type of the array element.
        shared_ptr<string> arrayItemsType_ {};
        // The default value.
        shared_ptr<string> defaultValue_ {};
        // The example value.
        shared_ptr<string> demoValue_ {};
        // The parameter description.
        shared_ptr<string> description_ {};
        // The order in which the parameter is sorted in the document.
        shared_ptr<int32_t> docOrder_ {};
        // Indicates whether the document is public. Valid values: **PUBLIC** and **PRIVATE**.
        shared_ptr<string> docShow_ {};
        // The hash values that are supported when **ParameterType** is set to Int, Long, Float, Double, or String. Separate values with commas (,). Examples: 1,2,3,4,9 and A,B,C,E,F.
        shared_ptr<string> enumValue_ {};
        // The JSON Schema used for JSON validation when **ParameterType** is set to String.
        shared_ptr<string> jsonScheme_ {};
        // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
        shared_ptr<string> location_ {};
        // The maximum parameter length when **ParameterType** is set to String.
        shared_ptr<int64_t> maxLength_ {};
        // The maximum parameter value when **ParameterType** is set to Int, Long, Float, or Double.
        shared_ptr<int64_t> maxValue_ {};
        // The minimum parameter length when **ParameterType** is set to String.
        shared_ptr<int64_t> minLength_ {};
        // The minimum parameter value when **ParameterType** is set to Int, Long, Float, or Double.
        shared_ptr<int64_t> minValue_ {};
        // The data type of the parameter. Valid values: String, Int, Long, Float, Double, and Boolean.
        shared_ptr<string> parameterType_ {};
        // The regular expression that is used for parameter validation when **ParameterType** is set to String.
        shared_ptr<string> regularExpression_ {};
        // Indicates whether the parameter is required. Valid values: **REQUIRED** and **OPTIONAL**.
        shared_ptr<string> required_ {};
      };

      virtual bool empty() const override { return this->requestParameter_ == nullptr; };
      // requestParameter Field Functions 
      bool hasRequestParameter() const { return this->requestParameter_ != nullptr;};
      void deleteRequestParameter() { this->requestParameter_ = nullptr;};
      inline const vector<RequestParameters::RequestParameter> & getRequestParameter() const { DARABONBA_PTR_GET_CONST(requestParameter_, vector<RequestParameters::RequestParameter>) };
      inline vector<RequestParameters::RequestParameter> getRequestParameter() { DARABONBA_PTR_GET(requestParameter_, vector<RequestParameters::RequestParameter>) };
      inline RequestParameters& setRequestParameter(const vector<RequestParameters::RequestParameter> & requestParameter) { DARABONBA_PTR_SET_VALUE(requestParameter_, requestParameter) };
      inline RequestParameters& setRequestParameter(vector<RequestParameters::RequestParameter> && requestParameter) { DARABONBA_PTR_SET_RVALUE(requestParameter_, requestParameter) };


    protected:
      shared_ptr<vector<RequestParameters::RequestParameter>> requestParameter_ {};
    };

    class RequestConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BodyFormat, bodyFormat_);
        DARABONBA_PTR_TO_JSON(BodyModel, bodyModel_);
        DARABONBA_PTR_TO_JSON(EscapePathParam, escapePathParam_);
        DARABONBA_PTR_TO_JSON(PostBodyDescription, postBodyDescription_);
        DARABONBA_PTR_TO_JSON(RequestHttpMethod, requestHttpMethod_);
        DARABONBA_PTR_TO_JSON(RequestMode, requestMode_);
        DARABONBA_PTR_TO_JSON(RequestPath, requestPath_);
        DARABONBA_PTR_TO_JSON(RequestProtocol, requestProtocol_);
      };
      friend void from_json(const Darabonba::Json& j, RequestConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BodyFormat, bodyFormat_);
        DARABONBA_PTR_FROM_JSON(BodyModel, bodyModel_);
        DARABONBA_PTR_FROM_JSON(EscapePathParam, escapePathParam_);
        DARABONBA_PTR_FROM_JSON(PostBodyDescription, postBodyDescription_);
        DARABONBA_PTR_FROM_JSON(RequestHttpMethod, requestHttpMethod_);
        DARABONBA_PTR_FROM_JSON(RequestMode, requestMode_);
        DARABONBA_PTR_FROM_JSON(RequestPath, requestPath_);
        DARABONBA_PTR_FROM_JSON(RequestProtocol, requestProtocol_);
      };
      RequestConfig() = default ;
      RequestConfig(const RequestConfig &) = default ;
      RequestConfig(RequestConfig &&) = default ;
      RequestConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestConfig() = default ;
      RequestConfig& operator=(const RequestConfig &) = default ;
      RequestConfig& operator=(RequestConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bodyFormat_ == nullptr
        && this->bodyModel_ == nullptr && this->escapePathParam_ == nullptr && this->postBodyDescription_ == nullptr && this->requestHttpMethod_ == nullptr && this->requestMode_ == nullptr
        && this->requestPath_ == nullptr && this->requestProtocol_ == nullptr; };
      // bodyFormat Field Functions 
      bool hasBodyFormat() const { return this->bodyFormat_ != nullptr;};
      void deleteBodyFormat() { this->bodyFormat_ = nullptr;};
      inline string getBodyFormat() const { DARABONBA_PTR_GET_DEFAULT(bodyFormat_, "") };
      inline RequestConfig& setBodyFormat(string bodyFormat) { DARABONBA_PTR_SET_VALUE(bodyFormat_, bodyFormat) };


      // bodyModel Field Functions 
      bool hasBodyModel() const { return this->bodyModel_ != nullptr;};
      void deleteBodyModel() { this->bodyModel_ = nullptr;};
      inline string getBodyModel() const { DARABONBA_PTR_GET_DEFAULT(bodyModel_, "") };
      inline RequestConfig& setBodyModel(string bodyModel) { DARABONBA_PTR_SET_VALUE(bodyModel_, bodyModel) };


      // escapePathParam Field Functions 
      bool hasEscapePathParam() const { return this->escapePathParam_ != nullptr;};
      void deleteEscapePathParam() { this->escapePathParam_ = nullptr;};
      inline bool getEscapePathParam() const { DARABONBA_PTR_GET_DEFAULT(escapePathParam_, false) };
      inline RequestConfig& setEscapePathParam(bool escapePathParam) { DARABONBA_PTR_SET_VALUE(escapePathParam_, escapePathParam) };


      // postBodyDescription Field Functions 
      bool hasPostBodyDescription() const { return this->postBodyDescription_ != nullptr;};
      void deletePostBodyDescription() { this->postBodyDescription_ = nullptr;};
      inline string getPostBodyDescription() const { DARABONBA_PTR_GET_DEFAULT(postBodyDescription_, "") };
      inline RequestConfig& setPostBodyDescription(string postBodyDescription) { DARABONBA_PTR_SET_VALUE(postBodyDescription_, postBodyDescription) };


      // requestHttpMethod Field Functions 
      bool hasRequestHttpMethod() const { return this->requestHttpMethod_ != nullptr;};
      void deleteRequestHttpMethod() { this->requestHttpMethod_ = nullptr;};
      inline string getRequestHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(requestHttpMethod_, "") };
      inline RequestConfig& setRequestHttpMethod(string requestHttpMethod) { DARABONBA_PTR_SET_VALUE(requestHttpMethod_, requestHttpMethod) };


      // requestMode Field Functions 
      bool hasRequestMode() const { return this->requestMode_ != nullptr;};
      void deleteRequestMode() { this->requestMode_ = nullptr;};
      inline string getRequestMode() const { DARABONBA_PTR_GET_DEFAULT(requestMode_, "") };
      inline RequestConfig& setRequestMode(string requestMode) { DARABONBA_PTR_SET_VALUE(requestMode_, requestMode) };


      // requestPath Field Functions 
      bool hasRequestPath() const { return this->requestPath_ != nullptr;};
      void deleteRequestPath() { this->requestPath_ = nullptr;};
      inline string getRequestPath() const { DARABONBA_PTR_GET_DEFAULT(requestPath_, "") };
      inline RequestConfig& setRequestPath(string requestPath) { DARABONBA_PTR_SET_VALUE(requestPath_, requestPath) };


      // requestProtocol Field Functions 
      bool hasRequestProtocol() const { return this->requestProtocol_ != nullptr;};
      void deleteRequestProtocol() { this->requestProtocol_ = nullptr;};
      inline string getRequestProtocol() const { DARABONBA_PTR_GET_DEFAULT(requestProtocol_, "") };
      inline RequestConfig& setRequestProtocol(string requestProtocol) { DARABONBA_PTR_SET_VALUE(requestProtocol_, requestProtocol) };


    protected:
      // This parameter takes effect only when the RequestMode parameter is set to MAPPING.********
      // 
      // The server data transmission method used for POST and PUT requests. Valid values: FORM and STREAM. FORM indicates that data in key-value pairs is transmitted as forms. STREAM indicates that data is transmitted as byte streams.
      shared_ptr<string> bodyFormat_ {};
      // The body model.
      shared_ptr<string> bodyModel_ {};
      // Whether to escape the Path parameter, if true, the [param] on the Path will be treated as a regular character.
      shared_ptr<bool> escapePathParam_ {};
      // The description of the request body.
      shared_ptr<string> postBodyDescription_ {};
      // The HTTP method used to make the request. Valid values: GET, POST, DELETE, PUT, HEADER, TRACE, PATCH, CONNECT, and OPTIONS.
      shared_ptr<string> requestHttpMethod_ {};
      // The request mode. Valid values: MAPPING and PASSTHROUGH.
      shared_ptr<string> requestMode_ {};
      // The API request path. If the complete API URL is `http://api.a.com:8080/object/add?key1=value1&key2=value2`, the API request path is ` /object/add  `.
      shared_ptr<string> requestPath_ {};
      // The protocol type supported by the API. Valid values: HTTP and HTTPS. Separate multiple values with commas (,), such as "HTTP,HTTPS".
      shared_ptr<string> requestProtocol_ {};
    };

    class OpenIdConnectConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenIdConnectConfig& obj) { 
        DARABONBA_PTR_TO_JSON(IdTokenParamName, idTokenParamName_);
        DARABONBA_PTR_TO_JSON(OpenIdApiType, openIdApiType_);
        DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
        DARABONBA_PTR_TO_JSON(PublicKeyId, publicKeyId_);
      };
      friend void from_json(const Darabonba::Json& j, OpenIdConnectConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(IdTokenParamName, idTokenParamName_);
        DARABONBA_PTR_FROM_JSON(OpenIdApiType, openIdApiType_);
        DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
        DARABONBA_PTR_FROM_JSON(PublicKeyId, publicKeyId_);
      };
      OpenIdConnectConfig() = default ;
      OpenIdConnectConfig(const OpenIdConnectConfig &) = default ;
      OpenIdConnectConfig(OpenIdConnectConfig &&) = default ;
      OpenIdConnectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenIdConnectConfig() = default ;
      OpenIdConnectConfig& operator=(const OpenIdConnectConfig &) = default ;
      OpenIdConnectConfig& operator=(OpenIdConnectConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->idTokenParamName_ == nullptr
        && this->openIdApiType_ == nullptr && this->publicKey_ == nullptr && this->publicKeyId_ == nullptr; };
      // idTokenParamName Field Functions 
      bool hasIdTokenParamName() const { return this->idTokenParamName_ != nullptr;};
      void deleteIdTokenParamName() { this->idTokenParamName_ = nullptr;};
      inline string getIdTokenParamName() const { DARABONBA_PTR_GET_DEFAULT(idTokenParamName_, "") };
      inline OpenIdConnectConfig& setIdTokenParamName(string idTokenParamName) { DARABONBA_PTR_SET_VALUE(idTokenParamName_, idTokenParamName) };


      // openIdApiType Field Functions 
      bool hasOpenIdApiType() const { return this->openIdApiType_ != nullptr;};
      void deleteOpenIdApiType() { this->openIdApiType_ = nullptr;};
      inline string getOpenIdApiType() const { DARABONBA_PTR_GET_DEFAULT(openIdApiType_, "") };
      inline OpenIdConnectConfig& setOpenIdApiType(string openIdApiType) { DARABONBA_PTR_SET_VALUE(openIdApiType_, openIdApiType) };


      // publicKey Field Functions 
      bool hasPublicKey() const { return this->publicKey_ != nullptr;};
      void deletePublicKey() { this->publicKey_ = nullptr;};
      inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
      inline OpenIdConnectConfig& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


      // publicKeyId Field Functions 
      bool hasPublicKeyId() const { return this->publicKeyId_ != nullptr;};
      void deletePublicKeyId() { this->publicKeyId_ = nullptr;};
      inline string getPublicKeyId() const { DARABONBA_PTR_GET_DEFAULT(publicKeyId_, "") };
      inline OpenIdConnectConfig& setPublicKeyId(string publicKeyId) { DARABONBA_PTR_SET_VALUE(publicKeyId_, publicKeyId) };


    protected:
      // The name of the parameter that corresponds to the token.
      shared_ptr<string> idTokenParamName_ {};
      // The OpenID Connect mode. Valid values:
      // 
      // *   **IDTOKEN**: indicates the APIs that are called by clients to obtain tokens. If you specify this value, the PublicKeyId parameter and the PublicKey parameter are required.
      // *   **BUSINESS**: indicates business APIs. Tokens are used to call the business APIs. If you specify this value, the IdTokenParamName parameter is required.
      shared_ptr<string> openIdApiType_ {};
      // The public key.
      shared_ptr<string> publicKey_ {};
      // The ID of the public key.
      shared_ptr<string> publicKeyId_ {};
    };

    class ErrorCodeSamples : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorCodeSamples& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCodeSample, errorCodeSample_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorCodeSamples& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCodeSample, errorCodeSample_);
      };
      ErrorCodeSamples() = default ;
      ErrorCodeSamples(const ErrorCodeSamples &) = default ;
      ErrorCodeSamples(ErrorCodeSamples &&) = default ;
      ErrorCodeSamples(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorCodeSamples() = default ;
      ErrorCodeSamples& operator=(const ErrorCodeSamples &) = default ;
      ErrorCodeSamples& operator=(ErrorCodeSamples &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ErrorCodeSample : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorCodeSample& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Model, model_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorCodeSample& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
        };
        ErrorCodeSample() = default ;
        ErrorCodeSample(const ErrorCodeSample &) = default ;
        ErrorCodeSample(ErrorCodeSample &&) = default ;
        ErrorCodeSample(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorCodeSample() = default ;
        ErrorCodeSample& operator=(const ErrorCodeSample &) = default ;
        ErrorCodeSample& operator=(ErrorCodeSample &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->message_ == nullptr && this->model_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ErrorCodeSample& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ErrorCodeSample& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ErrorCodeSample& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline ErrorCodeSample& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      protected:
        // The returned error code.
        shared_ptr<string> code_ {};
        // The error description.
        shared_ptr<string> description_ {};
        // The returned error message.
        shared_ptr<string> message_ {};
        // The model.
        shared_ptr<string> model_ {};
      };

      virtual bool empty() const override { return this->errorCodeSample_ == nullptr; };
      // errorCodeSample Field Functions 
      bool hasErrorCodeSample() const { return this->errorCodeSample_ != nullptr;};
      void deleteErrorCodeSample() { this->errorCodeSample_ = nullptr;};
      inline const vector<ErrorCodeSamples::ErrorCodeSample> & getErrorCodeSample() const { DARABONBA_PTR_GET_CONST(errorCodeSample_, vector<ErrorCodeSamples::ErrorCodeSample>) };
      inline vector<ErrorCodeSamples::ErrorCodeSample> getErrorCodeSample() { DARABONBA_PTR_GET(errorCodeSample_, vector<ErrorCodeSamples::ErrorCodeSample>) };
      inline ErrorCodeSamples& setErrorCodeSample(const vector<ErrorCodeSamples::ErrorCodeSample> & errorCodeSample) { DARABONBA_PTR_SET_VALUE(errorCodeSample_, errorCodeSample) };
      inline ErrorCodeSamples& setErrorCodeSample(vector<ErrorCodeSamples::ErrorCodeSample> && errorCodeSample) { DARABONBA_PTR_SET_RVALUE(errorCodeSample_, errorCodeSample) };


    protected:
      shared_ptr<vector<ErrorCodeSamples::ErrorCodeSample>> errorCodeSample_ {};
    };

    class DeployedInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeployedInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DeployedInfo, deployedInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DeployedInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DeployedInfo, deployedInfo_);
      };
      DeployedInfos() = default ;
      DeployedInfos(const DeployedInfos &) = default ;
      DeployedInfos(DeployedInfos &&) = default ;
      DeployedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeployedInfos() = default ;
      DeployedInfos& operator=(const DeployedInfos &) = default ;
      DeployedInfos& operator=(DeployedInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeployedInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeployedInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DeployedStatus, deployedStatus_);
          DARABONBA_PTR_TO_JSON(EffectiveVersion, effectiveVersion_);
          DARABONBA_PTR_TO_JSON(StageName, stageName_);
        };
        friend void from_json(const Darabonba::Json& j, DeployedInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DeployedStatus, deployedStatus_);
          DARABONBA_PTR_FROM_JSON(EffectiveVersion, effectiveVersion_);
          DARABONBA_PTR_FROM_JSON(StageName, stageName_);
        };
        DeployedInfo() = default ;
        DeployedInfo(const DeployedInfo &) = default ;
        DeployedInfo(DeployedInfo &&) = default ;
        DeployedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeployedInfo() = default ;
        DeployedInfo& operator=(const DeployedInfo &) = default ;
        DeployedInfo& operator=(DeployedInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deployedStatus_ == nullptr
        && this->effectiveVersion_ == nullptr && this->stageName_ == nullptr; };
        // deployedStatus Field Functions 
        bool hasDeployedStatus() const { return this->deployedStatus_ != nullptr;};
        void deleteDeployedStatus() { this->deployedStatus_ = nullptr;};
        inline string getDeployedStatus() const { DARABONBA_PTR_GET_DEFAULT(deployedStatus_, "") };
        inline DeployedInfo& setDeployedStatus(string deployedStatus) { DARABONBA_PTR_SET_VALUE(deployedStatus_, deployedStatus) };


        // effectiveVersion Field Functions 
        bool hasEffectiveVersion() const { return this->effectiveVersion_ != nullptr;};
        void deleteEffectiveVersion() { this->effectiveVersion_ = nullptr;};
        inline string getEffectiveVersion() const { DARABONBA_PTR_GET_DEFAULT(effectiveVersion_, "") };
        inline DeployedInfo& setEffectiveVersion(string effectiveVersion) { DARABONBA_PTR_SET_VALUE(effectiveVersion_, effectiveVersion) };


        // stageName Field Functions 
        bool hasStageName() const { return this->stageName_ != nullptr;};
        void deleteStageName() { this->stageName_ = nullptr;};
        inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
        inline DeployedInfo& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


      protected:
        // The deployment status. Valid values: DEPLOYED and NONDEPLOYED.
        shared_ptr<string> deployedStatus_ {};
        // The effective version.
        shared_ptr<string> effectiveVersion_ {};
        // The environment to which the API is published. Valid values: RELEASE and TEST.
        shared_ptr<string> stageName_ {};
      };

      virtual bool empty() const override { return this->deployedInfo_ == nullptr; };
      // deployedInfo Field Functions 
      bool hasDeployedInfo() const { return this->deployedInfo_ != nullptr;};
      void deleteDeployedInfo() { this->deployedInfo_ = nullptr;};
      inline const vector<DeployedInfos::DeployedInfo> & getDeployedInfo() const { DARABONBA_PTR_GET_CONST(deployedInfo_, vector<DeployedInfos::DeployedInfo>) };
      inline vector<DeployedInfos::DeployedInfo> getDeployedInfo() { DARABONBA_PTR_GET(deployedInfo_, vector<DeployedInfos::DeployedInfo>) };
      inline DeployedInfos& setDeployedInfo(const vector<DeployedInfos::DeployedInfo> & deployedInfo) { DARABONBA_PTR_SET_VALUE(deployedInfo_, deployedInfo) };
      inline DeployedInfos& setDeployedInfo(vector<DeployedInfos::DeployedInfo> && deployedInfo) { DARABONBA_PTR_SET_RVALUE(deployedInfo_, deployedInfo) };


    protected:
      shared_ptr<vector<DeployedInfos::DeployedInfo>> deployedInfo_ {};
    };

    class CustomSystemParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomSystemParameters& obj) { 
        DARABONBA_PTR_TO_JSON(CustomSystemParameter, customSystemParameter_);
      };
      friend void from_json(const Darabonba::Json& j, CustomSystemParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomSystemParameter, customSystemParameter_);
      };
      CustomSystemParameters() = default ;
      CustomSystemParameters(const CustomSystemParameters &) = default ;
      CustomSystemParameters(CustomSystemParameters &&) = default ;
      CustomSystemParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomSystemParameters() = default ;
      CustomSystemParameters& operator=(const CustomSystemParameters &) = default ;
      CustomSystemParameters& operator=(CustomSystemParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomSystemParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomSystemParameter& obj) { 
          DARABONBA_PTR_TO_JSON(DemoValue, demoValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
        };
        friend void from_json(const Darabonba::Json& j, CustomSystemParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(DemoValue, demoValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
        };
        CustomSystemParameter() = default ;
        CustomSystemParameter(const CustomSystemParameter &) = default ;
        CustomSystemParameter(CustomSystemParameter &&) = default ;
        CustomSystemParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomSystemParameter() = default ;
        CustomSystemParameter& operator=(const CustomSystemParameter &) = default ;
        CustomSystemParameter& operator=(CustomSystemParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->demoValue_ == nullptr
        && this->description_ == nullptr && this->location_ == nullptr && this->parameterName_ == nullptr && this->serviceParameterName_ == nullptr; };
        // demoValue Field Functions 
        bool hasDemoValue() const { return this->demoValue_ != nullptr;};
        void deleteDemoValue() { this->demoValue_ = nullptr;};
        inline string getDemoValue() const { DARABONBA_PTR_GET_DEFAULT(demoValue_, "") };
        inline CustomSystemParameter& setDemoValue(string demoValue) { DARABONBA_PTR_SET_VALUE(demoValue_, demoValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CustomSystemParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline CustomSystemParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline CustomSystemParameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


        // serviceParameterName Field Functions 
        bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
        void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
        inline string getServiceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
        inline CustomSystemParameter& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


      protected:
        // The example value.
        shared_ptr<string> demoValue_ {};
        // The parameter description.
        shared_ptr<string> description_ {};
        // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
        shared_ptr<string> location_ {};
        // The name of the system parameter. Valid values: CaClientIp, CaDomain, CaRequestHandleTime, CaAppId, CaRequestId, CaHttpSchema, and CaProxy.
        shared_ptr<string> parameterName_ {};
        // The mapped parameter name in the backend service.
        shared_ptr<string> serviceParameterName_ {};
      };

      virtual bool empty() const override { return this->customSystemParameter_ == nullptr; };
      // customSystemParameter Field Functions 
      bool hasCustomSystemParameter() const { return this->customSystemParameter_ != nullptr;};
      void deleteCustomSystemParameter() { this->customSystemParameter_ = nullptr;};
      inline const vector<CustomSystemParameters::CustomSystemParameter> & getCustomSystemParameter() const { DARABONBA_PTR_GET_CONST(customSystemParameter_, vector<CustomSystemParameters::CustomSystemParameter>) };
      inline vector<CustomSystemParameters::CustomSystemParameter> getCustomSystemParameter() { DARABONBA_PTR_GET(customSystemParameter_, vector<CustomSystemParameters::CustomSystemParameter>) };
      inline CustomSystemParameters& setCustomSystemParameter(const vector<CustomSystemParameters::CustomSystemParameter> & customSystemParameter) { DARABONBA_PTR_SET_VALUE(customSystemParameter_, customSystemParameter) };
      inline CustomSystemParameters& setCustomSystemParameter(vector<CustomSystemParameters::CustomSystemParameter> && customSystemParameter) { DARABONBA_PTR_SET_RVALUE(customSystemParameter_, customSystemParameter) };


    protected:
      shared_ptr<vector<CustomSystemParameters::CustomSystemParameter>> customSystemParameter_ {};
    };

    class ConstantParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConstantParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ConstantParameter, constantParameter_);
      };
      friend void from_json(const Darabonba::Json& j, ConstantParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ConstantParameter, constantParameter_);
      };
      ConstantParameters() = default ;
      ConstantParameters(const ConstantParameters &) = default ;
      ConstantParameters(ConstantParameters &&) = default ;
      ConstantParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConstantParameters() = default ;
      ConstantParameters& operator=(const ConstantParameters &) = default ;
      ConstantParameters& operator=(ConstantParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConstantParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConstantParameter& obj) { 
          DARABONBA_PTR_TO_JSON(ConstantValue, constantValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(ServiceParameterName, serviceParameterName_);
        };
        friend void from_json(const Darabonba::Json& j, ConstantParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(ConstantValue, constantValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(ServiceParameterName, serviceParameterName_);
        };
        ConstantParameter() = default ;
        ConstantParameter(const ConstantParameter &) = default ;
        ConstantParameter(ConstantParameter &&) = default ;
        ConstantParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConstantParameter() = default ;
        ConstantParameter& operator=(const ConstantParameter &) = default ;
        ConstantParameter& operator=(ConstantParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->constantValue_ == nullptr
        && this->description_ == nullptr && this->location_ == nullptr && this->serviceParameterName_ == nullptr; };
        // constantValue Field Functions 
        bool hasConstantValue() const { return this->constantValue_ != nullptr;};
        void deleteConstantValue() { this->constantValue_ = nullptr;};
        inline string getConstantValue() const { DARABONBA_PTR_GET_DEFAULT(constantValue_, "") };
        inline ConstantParameter& setConstantValue(string constantValue) { DARABONBA_PTR_SET_VALUE(constantValue_, constantValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ConstantParameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline ConstantParameter& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // serviceParameterName Field Functions 
        bool hasServiceParameterName() const { return this->serviceParameterName_ != nullptr;};
        void deleteServiceParameterName() { this->serviceParameterName_ = nullptr;};
        inline string getServiceParameterName() const { DARABONBA_PTR_GET_DEFAULT(serviceParameterName_, "") };
        inline ConstantParameter& setServiceParameterName(string serviceParameterName) { DARABONBA_PTR_SET_VALUE(serviceParameterName_, serviceParameterName) };


      protected:
        // The constant parameter value.
        shared_ptr<string> constantValue_ {};
        // The parameter description.
        shared_ptr<string> description_ {};
        // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
        shared_ptr<string> location_ {};
        // The mapped parameter name in the backend service.
        shared_ptr<string> serviceParameterName_ {};
      };

      virtual bool empty() const override { return this->constantParameter_ == nullptr; };
      // constantParameter Field Functions 
      bool hasConstantParameter() const { return this->constantParameter_ != nullptr;};
      void deleteConstantParameter() { this->constantParameter_ = nullptr;};
      inline const vector<ConstantParameters::ConstantParameter> & getConstantParameter() const { DARABONBA_PTR_GET_CONST(constantParameter_, vector<ConstantParameters::ConstantParameter>) };
      inline vector<ConstantParameters::ConstantParameter> getConstantParameter() { DARABONBA_PTR_GET(constantParameter_, vector<ConstantParameters::ConstantParameter>) };
      inline ConstantParameters& setConstantParameter(const vector<ConstantParameters::ConstantParameter> & constantParameter) { DARABONBA_PTR_SET_VALUE(constantParameter_, constantParameter) };
      inline ConstantParameters& setConstantParameter(vector<ConstantParameters::ConstantParameter> && constantParameter) { DARABONBA_PTR_SET_RVALUE(constantParameter_, constantParameter) };


    protected:
      shared_ptr<vector<ConstantParameters::ConstantParameter>> constantParameter_ {};
    };

    class BackendConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BackendId, backendId_);
        DARABONBA_PTR_TO_JSON(BackendName, backendName_);
        DARABONBA_PTR_TO_JSON(BackendType, backendType_);
      };
      friend void from_json(const Darabonba::Json& j, BackendConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
        DARABONBA_PTR_FROM_JSON(BackendName, backendName_);
        DARABONBA_PTR_FROM_JSON(BackendType, backendType_);
      };
      BackendConfig() = default ;
      BackendConfig(const BackendConfig &) = default ;
      BackendConfig(BackendConfig &&) = default ;
      BackendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendConfig() = default ;
      BackendConfig& operator=(const BackendConfig &) = default ;
      BackendConfig& operator=(BackendConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backendId_ == nullptr
        && this->backendName_ == nullptr && this->backendType_ == nullptr; };
      // backendId Field Functions 
      bool hasBackendId() const { return this->backendId_ != nullptr;};
      void deleteBackendId() { this->backendId_ = nullptr;};
      inline string getBackendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
      inline BackendConfig& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


      // backendName Field Functions 
      bool hasBackendName() const { return this->backendName_ != nullptr;};
      void deleteBackendName() { this->backendName_ = nullptr;};
      inline string getBackendName() const { DARABONBA_PTR_GET_DEFAULT(backendName_, "") };
      inline BackendConfig& setBackendName(string backendName) { DARABONBA_PTR_SET_VALUE(backendName_, backendName) };


      // backendType Field Functions 
      bool hasBackendType() const { return this->backendType_ != nullptr;};
      void deleteBackendType() { this->backendType_ = nullptr;};
      inline string getBackendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
      inline BackendConfig& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    protected:
      // The ID of the backend service.
      shared_ptr<string> backendId_ {};
      // The name of the backend service.
      shared_ptr<string> backendName_ {};
      // Backend service type
      shared_ptr<string> backendType_ {};
    };

    virtual bool empty() const override { return this->allowSignatureMethod_ == nullptr
        && this->apiId_ == nullptr && this->apiName_ == nullptr && this->appCodeAuthType_ == nullptr && this->authType_ == nullptr && this->backendConfig_ == nullptr
        && this->backendEnable_ == nullptr && this->constantParameters_ == nullptr && this->createdTime_ == nullptr && this->customSystemParameters_ == nullptr && this->deployedInfos_ == nullptr
        && this->description_ == nullptr && this->disableInternet_ == nullptr && this->errorCodeSamples_ == nullptr && this->failResultSample_ == nullptr && this->forceNonceCheck_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr && this->mock_ == nullptr && this->mockResult_ == nullptr && this->modifiedTime_ == nullptr
        && this->openIdConnectConfig_ == nullptr && this->regionId_ == nullptr && this->requestConfig_ == nullptr && this->requestId_ == nullptr && this->requestParameters_ == nullptr
        && this->resultBodyModel_ == nullptr && this->resultSample_ == nullptr && this->resultType_ == nullptr && this->serviceConfig_ == nullptr && this->serviceParameters_ == nullptr
        && this->serviceParametersMap_ == nullptr && this->systemParameters_ == nullptr && this->tagList_ == nullptr && this->visibility_ == nullptr && this->webSocketApiType_ == nullptr; };
    // allowSignatureMethod Field Functions 
    bool hasAllowSignatureMethod() const { return this->allowSignatureMethod_ != nullptr;};
    void deleteAllowSignatureMethod() { this->allowSignatureMethod_ = nullptr;};
    inline string getAllowSignatureMethod() const { DARABONBA_PTR_GET_DEFAULT(allowSignatureMethod_, "") };
    inline DescribeApiResponseBody& setAllowSignatureMethod(string allowSignatureMethod) { DARABONBA_PTR_SET_VALUE(allowSignatureMethod_, allowSignatureMethod) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiResponseBody& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiResponseBody& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appCodeAuthType Field Functions 
    bool hasAppCodeAuthType() const { return this->appCodeAuthType_ != nullptr;};
    void deleteAppCodeAuthType() { this->appCodeAuthType_ = nullptr;};
    inline string getAppCodeAuthType() const { DARABONBA_PTR_GET_DEFAULT(appCodeAuthType_, "") };
    inline DescribeApiResponseBody& setAppCodeAuthType(string appCodeAuthType) { DARABONBA_PTR_SET_VALUE(appCodeAuthType_, appCodeAuthType) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeApiResponseBody& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const DescribeApiResponseBody::BackendConfig & getBackendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, DescribeApiResponseBody::BackendConfig) };
    inline DescribeApiResponseBody::BackendConfig getBackendConfig() { DARABONBA_PTR_GET(backendConfig_, DescribeApiResponseBody::BackendConfig) };
    inline DescribeApiResponseBody& setBackendConfig(const DescribeApiResponseBody::BackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline DescribeApiResponseBody& setBackendConfig(DescribeApiResponseBody::BackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // backendEnable Field Functions 
    bool hasBackendEnable() const { return this->backendEnable_ != nullptr;};
    void deleteBackendEnable() { this->backendEnable_ = nullptr;};
    inline bool getBackendEnable() const { DARABONBA_PTR_GET_DEFAULT(backendEnable_, false) };
    inline DescribeApiResponseBody& setBackendEnable(bool backendEnable) { DARABONBA_PTR_SET_VALUE(backendEnable_, backendEnable) };


    // constantParameters Field Functions 
    bool hasConstantParameters() const { return this->constantParameters_ != nullptr;};
    void deleteConstantParameters() { this->constantParameters_ = nullptr;};
    inline const DescribeApiResponseBody::ConstantParameters & getConstantParameters() const { DARABONBA_PTR_GET_CONST(constantParameters_, DescribeApiResponseBody::ConstantParameters) };
    inline DescribeApiResponseBody::ConstantParameters getConstantParameters() { DARABONBA_PTR_GET(constantParameters_, DescribeApiResponseBody::ConstantParameters) };
    inline DescribeApiResponseBody& setConstantParameters(const DescribeApiResponseBody::ConstantParameters & constantParameters) { DARABONBA_PTR_SET_VALUE(constantParameters_, constantParameters) };
    inline DescribeApiResponseBody& setConstantParameters(DescribeApiResponseBody::ConstantParameters && constantParameters) { DARABONBA_PTR_SET_RVALUE(constantParameters_, constantParameters) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeApiResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // customSystemParameters Field Functions 
    bool hasCustomSystemParameters() const { return this->customSystemParameters_ != nullptr;};
    void deleteCustomSystemParameters() { this->customSystemParameters_ = nullptr;};
    inline const DescribeApiResponseBody::CustomSystemParameters & getCustomSystemParameters() const { DARABONBA_PTR_GET_CONST(customSystemParameters_, DescribeApiResponseBody::CustomSystemParameters) };
    inline DescribeApiResponseBody::CustomSystemParameters getCustomSystemParameters() { DARABONBA_PTR_GET(customSystemParameters_, DescribeApiResponseBody::CustomSystemParameters) };
    inline DescribeApiResponseBody& setCustomSystemParameters(const DescribeApiResponseBody::CustomSystemParameters & customSystemParameters) { DARABONBA_PTR_SET_VALUE(customSystemParameters_, customSystemParameters) };
    inline DescribeApiResponseBody& setCustomSystemParameters(DescribeApiResponseBody::CustomSystemParameters && customSystemParameters) { DARABONBA_PTR_SET_RVALUE(customSystemParameters_, customSystemParameters) };


    // deployedInfos Field Functions 
    bool hasDeployedInfos() const { return this->deployedInfos_ != nullptr;};
    void deleteDeployedInfos() { this->deployedInfos_ = nullptr;};
    inline const DescribeApiResponseBody::DeployedInfos & getDeployedInfos() const { DARABONBA_PTR_GET_CONST(deployedInfos_, DescribeApiResponseBody::DeployedInfos) };
    inline DescribeApiResponseBody::DeployedInfos getDeployedInfos() { DARABONBA_PTR_GET(deployedInfos_, DescribeApiResponseBody::DeployedInfos) };
    inline DescribeApiResponseBody& setDeployedInfos(const DescribeApiResponseBody::DeployedInfos & deployedInfos) { DARABONBA_PTR_SET_VALUE(deployedInfos_, deployedInfos) };
    inline DescribeApiResponseBody& setDeployedInfos(DescribeApiResponseBody::DeployedInfos && deployedInfos) { DARABONBA_PTR_SET_RVALUE(deployedInfos_, deployedInfos) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInternet Field Functions 
    bool hasDisableInternet() const { return this->disableInternet_ != nullptr;};
    void deleteDisableInternet() { this->disableInternet_ = nullptr;};
    inline bool getDisableInternet() const { DARABONBA_PTR_GET_DEFAULT(disableInternet_, false) };
    inline DescribeApiResponseBody& setDisableInternet(bool disableInternet) { DARABONBA_PTR_SET_VALUE(disableInternet_, disableInternet) };


    // errorCodeSamples Field Functions 
    bool hasErrorCodeSamples() const { return this->errorCodeSamples_ != nullptr;};
    void deleteErrorCodeSamples() { this->errorCodeSamples_ = nullptr;};
    inline const DescribeApiResponseBody::ErrorCodeSamples & getErrorCodeSamples() const { DARABONBA_PTR_GET_CONST(errorCodeSamples_, DescribeApiResponseBody::ErrorCodeSamples) };
    inline DescribeApiResponseBody::ErrorCodeSamples getErrorCodeSamples() { DARABONBA_PTR_GET(errorCodeSamples_, DescribeApiResponseBody::ErrorCodeSamples) };
    inline DescribeApiResponseBody& setErrorCodeSamples(const DescribeApiResponseBody::ErrorCodeSamples & errorCodeSamples) { DARABONBA_PTR_SET_VALUE(errorCodeSamples_, errorCodeSamples) };
    inline DescribeApiResponseBody& setErrorCodeSamples(DescribeApiResponseBody::ErrorCodeSamples && errorCodeSamples) { DARABONBA_PTR_SET_RVALUE(errorCodeSamples_, errorCodeSamples) };


    // failResultSample Field Functions 
    bool hasFailResultSample() const { return this->failResultSample_ != nullptr;};
    void deleteFailResultSample() { this->failResultSample_ = nullptr;};
    inline string getFailResultSample() const { DARABONBA_PTR_GET_DEFAULT(failResultSample_, "") };
    inline DescribeApiResponseBody& setFailResultSample(string failResultSample) { DARABONBA_PTR_SET_VALUE(failResultSample_, failResultSample) };


    // forceNonceCheck Field Functions 
    bool hasForceNonceCheck() const { return this->forceNonceCheck_ != nullptr;};
    void deleteForceNonceCheck() { this->forceNonceCheck_ = nullptr;};
    inline bool getForceNonceCheck() const { DARABONBA_PTR_GET_DEFAULT(forceNonceCheck_, false) };
    inline DescribeApiResponseBody& setForceNonceCheck(bool forceNonceCheck) { DARABONBA_PTR_SET_VALUE(forceNonceCheck_, forceNonceCheck) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // mock Field Functions 
    bool hasMock() const { return this->mock_ != nullptr;};
    void deleteMock() { this->mock_ = nullptr;};
    inline string getMock() const { DARABONBA_PTR_GET_DEFAULT(mock_, "") };
    inline DescribeApiResponseBody& setMock(string mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };


    // mockResult Field Functions 
    bool hasMockResult() const { return this->mockResult_ != nullptr;};
    void deleteMockResult() { this->mockResult_ = nullptr;};
    inline string getMockResult() const { DARABONBA_PTR_GET_DEFAULT(mockResult_, "") };
    inline DescribeApiResponseBody& setMockResult(string mockResult) { DARABONBA_PTR_SET_VALUE(mockResult_, mockResult) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeApiResponseBody& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // openIdConnectConfig Field Functions 
    bool hasOpenIdConnectConfig() const { return this->openIdConnectConfig_ != nullptr;};
    void deleteOpenIdConnectConfig() { this->openIdConnectConfig_ = nullptr;};
    inline const DescribeApiResponseBody::OpenIdConnectConfig & getOpenIdConnectConfig() const { DARABONBA_PTR_GET_CONST(openIdConnectConfig_, DescribeApiResponseBody::OpenIdConnectConfig) };
    inline DescribeApiResponseBody::OpenIdConnectConfig getOpenIdConnectConfig() { DARABONBA_PTR_GET(openIdConnectConfig_, DescribeApiResponseBody::OpenIdConnectConfig) };
    inline DescribeApiResponseBody& setOpenIdConnectConfig(const DescribeApiResponseBody::OpenIdConnectConfig & openIdConnectConfig) { DARABONBA_PTR_SET_VALUE(openIdConnectConfig_, openIdConnectConfig) };
    inline DescribeApiResponseBody& setOpenIdConnectConfig(DescribeApiResponseBody::OpenIdConnectConfig && openIdConnectConfig) { DARABONBA_PTR_SET_RVALUE(openIdConnectConfig_, openIdConnectConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestConfig Field Functions 
    bool hasRequestConfig() const { return this->requestConfig_ != nullptr;};
    void deleteRequestConfig() { this->requestConfig_ = nullptr;};
    inline const DescribeApiResponseBody::RequestConfig & getRequestConfig() const { DARABONBA_PTR_GET_CONST(requestConfig_, DescribeApiResponseBody::RequestConfig) };
    inline DescribeApiResponseBody::RequestConfig getRequestConfig() { DARABONBA_PTR_GET(requestConfig_, DescribeApiResponseBody::RequestConfig) };
    inline DescribeApiResponseBody& setRequestConfig(const DescribeApiResponseBody::RequestConfig & requestConfig) { DARABONBA_PTR_SET_VALUE(requestConfig_, requestConfig) };
    inline DescribeApiResponseBody& setRequestConfig(DescribeApiResponseBody::RequestConfig && requestConfig) { DARABONBA_PTR_SET_RVALUE(requestConfig_, requestConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestParameters Field Functions 
    bool hasRequestParameters() const { return this->requestParameters_ != nullptr;};
    void deleteRequestParameters() { this->requestParameters_ = nullptr;};
    inline const DescribeApiResponseBody::RequestParameters & getRequestParameters() const { DARABONBA_PTR_GET_CONST(requestParameters_, DescribeApiResponseBody::RequestParameters) };
    inline DescribeApiResponseBody::RequestParameters getRequestParameters() { DARABONBA_PTR_GET(requestParameters_, DescribeApiResponseBody::RequestParameters) };
    inline DescribeApiResponseBody& setRequestParameters(const DescribeApiResponseBody::RequestParameters & requestParameters) { DARABONBA_PTR_SET_VALUE(requestParameters_, requestParameters) };
    inline DescribeApiResponseBody& setRequestParameters(DescribeApiResponseBody::RequestParameters && requestParameters) { DARABONBA_PTR_SET_RVALUE(requestParameters_, requestParameters) };


    // resultBodyModel Field Functions 
    bool hasResultBodyModel() const { return this->resultBodyModel_ != nullptr;};
    void deleteResultBodyModel() { this->resultBodyModel_ = nullptr;};
    inline string getResultBodyModel() const { DARABONBA_PTR_GET_DEFAULT(resultBodyModel_, "") };
    inline DescribeApiResponseBody& setResultBodyModel(string resultBodyModel) { DARABONBA_PTR_SET_VALUE(resultBodyModel_, resultBodyModel) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string getResultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline DescribeApiResponseBody& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline DescribeApiResponseBody& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // serviceConfig Field Functions 
    bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
    void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
    inline const DescribeApiResponseBody::ServiceConfig & getServiceConfig() const { DARABONBA_PTR_GET_CONST(serviceConfig_, DescribeApiResponseBody::ServiceConfig) };
    inline DescribeApiResponseBody::ServiceConfig getServiceConfig() { DARABONBA_PTR_GET(serviceConfig_, DescribeApiResponseBody::ServiceConfig) };
    inline DescribeApiResponseBody& setServiceConfig(const DescribeApiResponseBody::ServiceConfig & serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };
    inline DescribeApiResponseBody& setServiceConfig(DescribeApiResponseBody::ServiceConfig && serviceConfig) { DARABONBA_PTR_SET_RVALUE(serviceConfig_, serviceConfig) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline const DescribeApiResponseBody::ServiceParameters & getServiceParameters() const { DARABONBA_PTR_GET_CONST(serviceParameters_, DescribeApiResponseBody::ServiceParameters) };
    inline DescribeApiResponseBody::ServiceParameters getServiceParameters() { DARABONBA_PTR_GET(serviceParameters_, DescribeApiResponseBody::ServiceParameters) };
    inline DescribeApiResponseBody& setServiceParameters(const DescribeApiResponseBody::ServiceParameters & serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };
    inline DescribeApiResponseBody& setServiceParameters(DescribeApiResponseBody::ServiceParameters && serviceParameters) { DARABONBA_PTR_SET_RVALUE(serviceParameters_, serviceParameters) };


    // serviceParametersMap Field Functions 
    bool hasServiceParametersMap() const { return this->serviceParametersMap_ != nullptr;};
    void deleteServiceParametersMap() { this->serviceParametersMap_ = nullptr;};
    inline const DescribeApiResponseBody::ServiceParametersMap & getServiceParametersMap() const { DARABONBA_PTR_GET_CONST(serviceParametersMap_, DescribeApiResponseBody::ServiceParametersMap) };
    inline DescribeApiResponseBody::ServiceParametersMap getServiceParametersMap() { DARABONBA_PTR_GET(serviceParametersMap_, DescribeApiResponseBody::ServiceParametersMap) };
    inline DescribeApiResponseBody& setServiceParametersMap(const DescribeApiResponseBody::ServiceParametersMap & serviceParametersMap) { DARABONBA_PTR_SET_VALUE(serviceParametersMap_, serviceParametersMap) };
    inline DescribeApiResponseBody& setServiceParametersMap(DescribeApiResponseBody::ServiceParametersMap && serviceParametersMap) { DARABONBA_PTR_SET_RVALUE(serviceParametersMap_, serviceParametersMap) };


    // systemParameters Field Functions 
    bool hasSystemParameters() const { return this->systemParameters_ != nullptr;};
    void deleteSystemParameters() { this->systemParameters_ = nullptr;};
    inline const DescribeApiResponseBody::SystemParameters & getSystemParameters() const { DARABONBA_PTR_GET_CONST(systemParameters_, DescribeApiResponseBody::SystemParameters) };
    inline DescribeApiResponseBody::SystemParameters getSystemParameters() { DARABONBA_PTR_GET(systemParameters_, DescribeApiResponseBody::SystemParameters) };
    inline DescribeApiResponseBody& setSystemParameters(const DescribeApiResponseBody::SystemParameters & systemParameters) { DARABONBA_PTR_SET_VALUE(systemParameters_, systemParameters) };
    inline DescribeApiResponseBody& setSystemParameters(DescribeApiResponseBody::SystemParameters && systemParameters) { DARABONBA_PTR_SET_RVALUE(systemParameters_, systemParameters) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const DescribeApiResponseBody::TagList & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, DescribeApiResponseBody::TagList) };
    inline DescribeApiResponseBody::TagList getTagList() { DARABONBA_PTR_GET(tagList_, DescribeApiResponseBody::TagList) };
    inline DescribeApiResponseBody& setTagList(const DescribeApiResponseBody::TagList & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeApiResponseBody& setTagList(DescribeApiResponseBody::TagList && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeApiResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // webSocketApiType Field Functions 
    bool hasWebSocketApiType() const { return this->webSocketApiType_ != nullptr;};
    void deleteWebSocketApiType() { this->webSocketApiType_ = nullptr;};
    inline string getWebSocketApiType() const { DARABONBA_PTR_GET_DEFAULT(webSocketApiType_, "") };
    inline DescribeApiResponseBody& setWebSocketApiType(string webSocketApiType) { DARABONBA_PTR_SET_VALUE(webSocketApiType_, webSocketApiType) };


  protected:
    // If **AuthType** is set to **APP**, this value must be passed to specify the signature algorithm. If you do not specify a value, HmacSHA256 is used by default. Valid values:
    // 
    // *   HmacSHA256
    // *   HmacSHA1,HmacSHA256
    shared_ptr<string> allowSignatureMethod_ {};
    // The ID of the API.
    shared_ptr<string> apiId_ {};
    // The name of the API, which is unique in the group.
    shared_ptr<string> apiName_ {};
    // If **AuthType** is set to **APP**, the valid values are:
    // 
    // *   **DEFAULT**: The default value that is used if no other values are passed. This value means that the setting of the group is used.
    // *   **DISABLE**: The authentication is disabled.
    // *   **HEADER**: AppCode can be placed in the Header parameter for authentication.
    // *   **HEADER_QUERY**: AppCode can be placed in the Header or Query parameter for authentication.
    shared_ptr<string> appCodeAuthType_ {};
    // The security authentication method of the API. Valid values:
    // 
    // *   **APP**: Only authorized applications can call the API.
    // 
    // *   **ANONYMOUS**: The API can be anonymously called. In this mode, you must take note of the following rules:
    // 
    //     *   All users who have obtained the API service information can call this API. API Gateway does not authenticate callers and cannot set user-specific throttling policies. If you make this API public, set API-specific throttling policies.
    //     *   We recommend that you do not make the API whose security authentication method is ANONYMOUS available in Alibaba Cloud Marketplace because API Gateway cannot meter calls on the caller or limit the number of calls on the API. If you want to make the API group to which the API belongs available in Alibaba Cloud Marketplace, we recommend that you move the API to another group, set its type to PRIVATE, or set its security authentication method to APP.
    // 
    // *   **APPOPENID**: The OpenID Connect account authentication method is used. Only applications authorized by OpenID Connect can call the API. If this method is selected, the OpenIdConnectConfig parameter is required.
    shared_ptr<string> authType_ {};
    // Backend configurations
    shared_ptr<DescribeApiResponseBody::BackendConfig> backendConfig_ {};
    // Specifies whether to enable backend services.
    shared_ptr<bool> backendEnable_ {};
    // System parameters sent by API Gateway to the backend service
    shared_ptr<DescribeApiResponseBody::ConstantParameters> constantParameters_ {};
    // The creation time of the API.
    shared_ptr<string> createdTime_ {};
    // Custom system parameters
    shared_ptr<DescribeApiResponseBody::CustomSystemParameters> customSystemParameters_ {};
    // The API publishing status.
    shared_ptr<DescribeApiResponseBody::DeployedInfos> deployedInfos_ {};
    // The description of the API.
    shared_ptr<string> description_ {};
    // Specifies whether to limit API calls to within the VPC. Valid values:
    // 
    // *   **true**: Only API calls from the VPC are supported.
    // *   **false**: API calls from the VPC and Internet are both supported.
    shared_ptr<bool> disableInternet_ {};
    // The sample error codes returned by the backend service.
    shared_ptr<DescribeApiResponseBody::ErrorCodeSamples> errorCodeSamples_ {};
    // The sample error response from the backend service.
    shared_ptr<string> failResultSample_ {};
    // Specifies whether to carry the header : X-Ca-Nonce when calling an API. This is the unique identifier of the request and is generally identified by UUID. After receiving this parameter, API Gateway verifies the validity of this parameter. The same value can be used only once within 15 minutes. This helps prevent reply attacks. Valid values:
    // 
    // *   **true**: This field is forcibly checked when an API is requested to prevent replay attacks.
    // *   **false**: This field is not checked.
    shared_ptr<bool> forceNonceCheck_ {};
    // The ID of the API group.
    shared_ptr<string> groupId_ {};
    // The name of the API group.
    shared_ptr<string> groupName_ {};
    // Specifies whether to enable the Mock mode. Valid values:
    // 
    // *   OPEN: The Mock mode is enabled.
    // *   CLOSED: The Mock mode is not enabled.
    shared_ptr<string> mock_ {};
    // The result returned for service mocking.
    shared_ptr<string> mockResult_ {};
    // The last modification time of the API.
    shared_ptr<string> modifiedTime_ {};
    // Configuration items of the third-party OpenID Connect authentication method
    shared_ptr<DescribeApiResponseBody::OpenIdConnectConfig> openIdConnectConfig_ {};
    // The region ID of the API.
    shared_ptr<string> regionId_ {};
    // The configuration items of API requests sent by the consumer to API Gateway.
    shared_ptr<DescribeApiResponseBody::RequestConfig> requestConfig_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The parameters of API requests sent by the consumer to API Gateway.
    shared_ptr<DescribeApiResponseBody::RequestParameters> requestParameters_ {};
    // The returned description of the API.
    shared_ptr<string> resultBodyModel_ {};
    // The sample response from the backend service.
    shared_ptr<string> resultSample_ {};
    // The format of the response from the backend service. Valid values: JSON, TEXT, BINARY, XML, and HTML.
    shared_ptr<string> resultType_ {};
    // The configuration items of API requests that API Gateway sends to the backend service.
    shared_ptr<DescribeApiResponseBody::ServiceConfig> serviceConfig_ {};
    // The parameters of API requests sent by API Gateway to the backend service.
    shared_ptr<DescribeApiResponseBody::ServiceParameters> serviceParameters_ {};
    // The mappings between parameters of requests sent by the consumer to API Gateway and parameters of requests sent by API Gateway to the backend service.
    shared_ptr<DescribeApiResponseBody::ServiceParametersMap> serviceParametersMap_ {};
    // System parameters sent by API Gateway to the backend service
    shared_ptr<DescribeApiResponseBody::SystemParameters> systemParameters_ {};
    // Tag List.
    shared_ptr<DescribeApiResponseBody::TagList> tagList_ {};
    // Specifies whether to make the API public. Valid values:
    // 
    // *   **PUBLIC**: Make the API public. If you set this parameter to PUBLIC, this API is displayed on the APIs page for all users after the API is published to the production environment.
    // *   **PRIVATE**: Make the API private. Private APIs are not displayed in the Alibaba Cloud Marketplace after the API group to which they belong is made available.
    shared_ptr<string> visibility_ {};
    // The type of the two-way communication API.
    // 
    // *   **COMMON**: common API
    // *   **REGISTER**: registered API
    // *   **UNREGISTER**: unregistered API
    // *   **NOTIFY**: downstream notification API
    shared_ptr<string> webSocketApiType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
