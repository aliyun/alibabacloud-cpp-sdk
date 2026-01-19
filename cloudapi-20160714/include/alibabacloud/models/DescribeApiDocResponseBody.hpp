// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODY_HPP_
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
  class DescribeApiDocResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiDocResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_TO_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_TO_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_TO_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_TO_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiDocResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(DeployedTime, deployedTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInternet, disableInternet_);
      DARABONBA_PTR_FROM_JSON(ErrorCodeSamples, errorCodeSamples_);
      DARABONBA_PTR_FROM_JSON(FailResultSample, failResultSample_);
      DARABONBA_PTR_FROM_JSON(ForceNonceCheck, forceNonceCheck_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestConfig, requestConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestParameters, requestParameters_);
      DARABONBA_PTR_FROM_JSON(ResultSample, resultSample_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    DescribeApiDocResponseBody() = default ;
    DescribeApiDocResponseBody(const DescribeApiDocResponseBody &) = default ;
    DescribeApiDocResponseBody(DescribeApiDocResponseBody &&) = default ;
    DescribeApiDocResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiDocResponseBody() = default ;
    DescribeApiDocResponseBody& operator=(const DescribeApiDocResponseBody &) = default ;
    DescribeApiDocResponseBody& operator=(DescribeApiDocResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The name of the parameter in the API request.
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
        // JSON scheme
        shared_ptr<string> jsonScheme_ {};
        // The parameter location. Valid values: BODY, HEAD, QUERY, and PATH.
        shared_ptr<string> location_ {};
        // The maximum length.
        shared_ptr<int64_t> maxLength_ {};
        // The maximum value.
        shared_ptr<int64_t> maxValue_ {};
        // The minimum length.
        shared_ptr<int64_t> minLength_ {};
        // The minimum value.
        shared_ptr<int64_t> minValue_ {};
        // The data type of the parameter.
        shared_ptr<string> parameterType_ {};
        // The regular expression that is used for parameter validation when **ParameterType** is set to String.
        shared_ptr<string> regularExpression_ {};
        // Indicates whether the parameter is required.
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
        DARABONBA_PTR_TO_JSON(EscapePathParam, escapePathParam_);
        DARABONBA_PTR_TO_JSON(PostBodyDescription, postBodyDescription_);
        DARABONBA_PTR_TO_JSON(RequestHttpMethod, requestHttpMethod_);
        DARABONBA_PTR_TO_JSON(RequestMode, requestMode_);
        DARABONBA_PTR_TO_JSON(RequestPath, requestPath_);
        DARABONBA_PTR_TO_JSON(RequestProtocol, requestProtocol_);
      };
      friend void from_json(const Darabonba::Json& j, RequestConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BodyFormat, bodyFormat_);
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
        && this->escapePathParam_ == nullptr && this->postBodyDescription_ == nullptr && this->requestHttpMethod_ == nullptr && this->requestMode_ == nullptr && this->requestPath_ == nullptr
        && this->requestProtocol_ == nullptr; };
      // bodyFormat Field Functions 
      bool hasBodyFormat() const { return this->bodyFormat_ != nullptr;};
      void deleteBodyFormat() { this->bodyFormat_ = nullptr;};
      inline string getBodyFormat() const { DARABONBA_PTR_GET_DEFAULT(bodyFormat_, "") };
      inline RequestConfig& setBodyFormat(string bodyFormat) { DARABONBA_PTR_SET_VALUE(bodyFormat_, bodyFormat) };


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
      // Whether to escape the Path parameter, if true, the [param] on the Path will be treated as a regular character.
      shared_ptr<bool> escapePathParam_ {};
      // The description of the request body.
      shared_ptr<string> postBodyDescription_ {};
      // The HTTP method used to make the request. Valid values: GET, POST, DELETE, PUT, HEADER, TRACE, PATCH, CONNECT, and OPTIONS.
      shared_ptr<string> requestHttpMethod_ {};
      // The request mode. Valid values:
      // 
      // *   MAPPING: Parameters are mapped. Unknown parameters are filtered out.
      // *   PASSTHROUGH: Parameters are passed through.
      // *   MAPPING_PASSTHROUGH: Parameters are mapped. Unknown parameters are passed through.
      shared_ptr<string> requestMode_ {};
      // The API request path. If the complete API URL is `http://api.a.com:8080/object/add?key1=value1&key2=value2`, the API request path is ` /object/add  `.
      shared_ptr<string> requestPath_ {};
      // The protocol type supported by the API. Valid values: HTTP and HTTPS. Separate multiple values with commas (,), such as "HTTP,HTTPS".
      shared_ptr<string> requestProtocol_ {};
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
        };
        friend void from_json(const Darabonba::Json& j, ErrorCodeSample& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
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
        && this->description_ == nullptr && this->message_ == nullptr; };
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


      protected:
        // The returned error code.
        shared_ptr<string> code_ {};
        // The error description.
        shared_ptr<string> description_ {};
        // The returned error message.
        shared_ptr<string> message_ {};
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

    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->authType_ == nullptr && this->deployedTime_ == nullptr && this->description_ == nullptr && this->disableInternet_ == nullptr
        && this->errorCodeSamples_ == nullptr && this->failResultSample_ == nullptr && this->forceNonceCheck_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->regionId_ == nullptr && this->requestConfig_ == nullptr && this->requestId_ == nullptr && this->requestParameters_ == nullptr && this->resultSample_ == nullptr
        && this->resultType_ == nullptr && this->stageName_ == nullptr && this->visibility_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeApiDocResponseBody& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApiDocResponseBody& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline DescribeApiDocResponseBody& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // deployedTime Field Functions 
    bool hasDeployedTime() const { return this->deployedTime_ != nullptr;};
    void deleteDeployedTime() { this->deployedTime_ = nullptr;};
    inline string getDeployedTime() const { DARABONBA_PTR_GET_DEFAULT(deployedTime_, "") };
    inline DescribeApiDocResponseBody& setDeployedTime(string deployedTime) { DARABONBA_PTR_SET_VALUE(deployedTime_, deployedTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiDocResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInternet Field Functions 
    bool hasDisableInternet() const { return this->disableInternet_ != nullptr;};
    void deleteDisableInternet() { this->disableInternet_ = nullptr;};
    inline bool getDisableInternet() const { DARABONBA_PTR_GET_DEFAULT(disableInternet_, false) };
    inline DescribeApiDocResponseBody& setDisableInternet(bool disableInternet) { DARABONBA_PTR_SET_VALUE(disableInternet_, disableInternet) };


    // errorCodeSamples Field Functions 
    bool hasErrorCodeSamples() const { return this->errorCodeSamples_ != nullptr;};
    void deleteErrorCodeSamples() { this->errorCodeSamples_ = nullptr;};
    inline const DescribeApiDocResponseBody::ErrorCodeSamples & getErrorCodeSamples() const { DARABONBA_PTR_GET_CONST(errorCodeSamples_, DescribeApiDocResponseBody::ErrorCodeSamples) };
    inline DescribeApiDocResponseBody::ErrorCodeSamples getErrorCodeSamples() { DARABONBA_PTR_GET(errorCodeSamples_, DescribeApiDocResponseBody::ErrorCodeSamples) };
    inline DescribeApiDocResponseBody& setErrorCodeSamples(const DescribeApiDocResponseBody::ErrorCodeSamples & errorCodeSamples) { DARABONBA_PTR_SET_VALUE(errorCodeSamples_, errorCodeSamples) };
    inline DescribeApiDocResponseBody& setErrorCodeSamples(DescribeApiDocResponseBody::ErrorCodeSamples && errorCodeSamples) { DARABONBA_PTR_SET_RVALUE(errorCodeSamples_, errorCodeSamples) };


    // failResultSample Field Functions 
    bool hasFailResultSample() const { return this->failResultSample_ != nullptr;};
    void deleteFailResultSample() { this->failResultSample_ = nullptr;};
    inline string getFailResultSample() const { DARABONBA_PTR_GET_DEFAULT(failResultSample_, "") };
    inline DescribeApiDocResponseBody& setFailResultSample(string failResultSample) { DARABONBA_PTR_SET_VALUE(failResultSample_, failResultSample) };


    // forceNonceCheck Field Functions 
    bool hasForceNonceCheck() const { return this->forceNonceCheck_ != nullptr;};
    void deleteForceNonceCheck() { this->forceNonceCheck_ = nullptr;};
    inline bool getForceNonceCheck() const { DARABONBA_PTR_GET_DEFAULT(forceNonceCheck_, false) };
    inline DescribeApiDocResponseBody& setForceNonceCheck(bool forceNonceCheck) { DARABONBA_PTR_SET_VALUE(forceNonceCheck_, forceNonceCheck) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiDocResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiDocResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiDocResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestConfig Field Functions 
    bool hasRequestConfig() const { return this->requestConfig_ != nullptr;};
    void deleteRequestConfig() { this->requestConfig_ = nullptr;};
    inline const DescribeApiDocResponseBody::RequestConfig & getRequestConfig() const { DARABONBA_PTR_GET_CONST(requestConfig_, DescribeApiDocResponseBody::RequestConfig) };
    inline DescribeApiDocResponseBody::RequestConfig getRequestConfig() { DARABONBA_PTR_GET(requestConfig_, DescribeApiDocResponseBody::RequestConfig) };
    inline DescribeApiDocResponseBody& setRequestConfig(const DescribeApiDocResponseBody::RequestConfig & requestConfig) { DARABONBA_PTR_SET_VALUE(requestConfig_, requestConfig) };
    inline DescribeApiDocResponseBody& setRequestConfig(DescribeApiDocResponseBody::RequestConfig && requestConfig) { DARABONBA_PTR_SET_RVALUE(requestConfig_, requestConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiDocResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestParameters Field Functions 
    bool hasRequestParameters() const { return this->requestParameters_ != nullptr;};
    void deleteRequestParameters() { this->requestParameters_ = nullptr;};
    inline const DescribeApiDocResponseBody::RequestParameters & getRequestParameters() const { DARABONBA_PTR_GET_CONST(requestParameters_, DescribeApiDocResponseBody::RequestParameters) };
    inline DescribeApiDocResponseBody::RequestParameters getRequestParameters() { DARABONBA_PTR_GET(requestParameters_, DescribeApiDocResponseBody::RequestParameters) };
    inline DescribeApiDocResponseBody& setRequestParameters(const DescribeApiDocResponseBody::RequestParameters & requestParameters) { DARABONBA_PTR_SET_VALUE(requestParameters_, requestParameters) };
    inline DescribeApiDocResponseBody& setRequestParameters(DescribeApiDocResponseBody::RequestParameters && requestParameters) { DARABONBA_PTR_SET_RVALUE(requestParameters_, requestParameters) };


    // resultSample Field Functions 
    bool hasResultSample() const { return this->resultSample_ != nullptr;};
    void deleteResultSample() { this->resultSample_ = nullptr;};
    inline string getResultSample() const { DARABONBA_PTR_GET_DEFAULT(resultSample_, "") };
    inline DescribeApiDocResponseBody& setResultSample(string resultSample) { DARABONBA_PTR_SET_VALUE(resultSample_, resultSample) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline DescribeApiDocResponseBody& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribeApiDocResponseBody& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline DescribeApiDocResponseBody& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The ID of the API.
    shared_ptr<string> apiId_ {};
    // The name of the API
    shared_ptr<string> apiName_ {};
    // The security authentication method. Valid values: APP, ANONYMOUS, and APPOPENID, indicating respectively Alibaba Cloud application authentication, anonymous authentication, and third-party OpenID Connect account authentication.
    shared_ptr<string> authType_ {};
    // The publishing time.
    shared_ptr<string> deployedTime_ {};
    // The API description.
    shared_ptr<string> description_ {};
    // *   Specifies whether to set **DisableInternet** to **true** to limit API calls to within the VPC.
    // *   If you set **DisableInternet** to **false**, the limit is lifted. The default value is false when you create an API.
    shared_ptr<bool> disableInternet_ {};
    // The sample error codes returned by the backend service.
    shared_ptr<DescribeApiDocResponseBody::ErrorCodeSamples> errorCodeSamples_ {};
    // The sample error response from the backend service.
    shared_ptr<string> failResultSample_ {};
    // *   Specifies whether to set **ForceNonceCheck** to **true** to force the check of X-Ca-Nonce during the request. This is the unique identifier of the request and is generally identified by UUID. After receiving this parameter, API Gateway verifies the validity of this parameter. The same value can be used only once within 15 minutes. This helps prevent replay attacks.
    // *   If you set **ForceNonceCheck** to **false**, the check is not performed. The default value is false when you create an API.
    shared_ptr<bool> forceNonceCheck_ {};
    // The ID of the API group.
    shared_ptr<string> groupId_ {};
    // The name of the API group.
    shared_ptr<string> groupName_ {};
    // The region ID of the API group.
    shared_ptr<string> regionId_ {};
    // The returned API frontend definition. It is an array consisting of RequestConfig data.
    shared_ptr<DescribeApiDocResponseBody::RequestConfig> requestConfig_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned frontend input parameters in the API. It is an array consisting of RequestParameter data.
    shared_ptr<DescribeApiDocResponseBody::RequestParameters> requestParameters_ {};
    // The sample response.
    shared_ptr<string> resultSample_ {};
    // The return value type.
    shared_ptr<string> resultType_ {};
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    shared_ptr<string> stageName_ {};
    // Indicates whether the API is public. Valid values: PUBLIC and PRIVATE.
    shared_ptr<string> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
