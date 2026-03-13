// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOPAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOPAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePopApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePopApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(OpenApiMetaList, openApiMetaList_);
      DARABONBA_PTR_TO_JSON(PopCode, popCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePopApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(OpenApiMetaList, openApiMetaList_);
      DARABONBA_PTR_FROM_JSON(PopCode, popCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribePopApiResponseBody() = default ;
    DescribePopApiResponseBody(const DescribePopApiResponseBody &) = default ;
    DescribePopApiResponseBody(DescribePopApiResponseBody &&) = default ;
    DescribePopApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePopApiResponseBody() = default ;
    DescribePopApiResponseBody& operator=(const DescribePopApiResponseBody &) = default ;
    DescribePopApiResponseBody& operator=(DescribePopApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OpenApiMetaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenApiMetaList& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExampleValue, exampleValue_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Required, required_);
        DARABONBA_PTR_TO_JSON(Style, style_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OpenApiMetaList& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExampleValue, exampleValue_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Required, required_);
        DARABONBA_PTR_FROM_JSON(Style, style_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      OpenApiMetaList() = default ;
      OpenApiMetaList(const OpenApiMetaList &) = default ;
      OpenApiMetaList(OpenApiMetaList &&) = default ;
      OpenApiMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenApiMetaList() = default ;
      OpenApiMetaList& operator=(const OpenApiMetaList &) = default ;
      OpenApiMetaList& operator=(OpenApiMetaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->exampleValue_ == nullptr && this->name_ == nullptr && this->required_ == nullptr && this->style_ == nullptr && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline OpenApiMetaList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // exampleValue Field Functions 
      bool hasExampleValue() const { return this->exampleValue_ != nullptr;};
      void deleteExampleValue() { this->exampleValue_ = nullptr;};
      inline string getExampleValue() const { DARABONBA_PTR_GET_DEFAULT(exampleValue_, "") };
      inline OpenApiMetaList& setExampleValue(string exampleValue) { DARABONBA_PTR_SET_VALUE(exampleValue_, exampleValue) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OpenApiMetaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline OpenApiMetaList& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      // style Field Functions 
      bool hasStyle() const { return this->style_ != nullptr;};
      void deleteStyle() { this->style_ = nullptr;};
      inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
      inline OpenApiMetaList& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OpenApiMetaList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The parameter description.
      shared_ptr<string> description_ {};
      // The example value.
      shared_ptr<string> exampleValue_ {};
      // The parameter name.
      shared_ptr<string> name_ {};
      // Indicates whether the parameter is required.
      // 
      // *   true
      // *   false
      shared_ptr<bool> required_ {};
      shared_ptr<string> style_ {};
      // The data type of the parameter field. Valid values:
      // 
      // *   **string**
      // *   **boolean**
      // *   **integer**
      // *   **long**
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->apiName_ == nullptr
        && this->openApiMetaList_ == nullptr && this->popCode_ == nullptr && this->requestId_ == nullptr && this->version_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribePopApiResponseBody& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // openApiMetaList Field Functions 
    bool hasOpenApiMetaList() const { return this->openApiMetaList_ != nullptr;};
    void deleteOpenApiMetaList() { this->openApiMetaList_ = nullptr;};
    inline const vector<DescribePopApiResponseBody::OpenApiMetaList> & getOpenApiMetaList() const { DARABONBA_PTR_GET_CONST(openApiMetaList_, vector<DescribePopApiResponseBody::OpenApiMetaList>) };
    inline vector<DescribePopApiResponseBody::OpenApiMetaList> getOpenApiMetaList() { DARABONBA_PTR_GET(openApiMetaList_, vector<DescribePopApiResponseBody::OpenApiMetaList>) };
    inline DescribePopApiResponseBody& setOpenApiMetaList(const vector<DescribePopApiResponseBody::OpenApiMetaList> & openApiMetaList) { DARABONBA_PTR_SET_VALUE(openApiMetaList_, openApiMetaList) };
    inline DescribePopApiResponseBody& setOpenApiMetaList(vector<DescribePopApiResponseBody::OpenApiMetaList> && openApiMetaList) { DARABONBA_PTR_SET_RVALUE(openApiMetaList_, openApiMetaList) };


    // popCode Field Functions 
    bool hasPopCode() const { return this->popCode_ != nullptr;};
    void deletePopCode() { this->popCode_ = nullptr;};
    inline string getPopCode() const { DARABONBA_PTR_GET_DEFAULT(popCode_, "") };
    inline DescribePopApiResponseBody& setPopCode(string popCode) { DARABONBA_PTR_SET_VALUE(popCode_, popCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePopApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribePopApiResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the API.
    shared_ptr<string> apiName_ {};
    // The information about the API.
    shared_ptr<vector<DescribePopApiResponseBody::OpenApiMetaList>> openApiMetaList_ {};
    // The POP code of the Alibaba Cloud service.
    shared_ptr<string> popCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The version of the API.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
