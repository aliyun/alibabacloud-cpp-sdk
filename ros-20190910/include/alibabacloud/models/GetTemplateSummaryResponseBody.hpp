// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceIdentifierSummaries, resourceIdentifierSummaries_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceIdentifierSummaries, resourceIdentifierSummaries_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetTemplateSummaryResponseBody() = default ;
    GetTemplateSummaryResponseBody(const GetTemplateSummaryResponseBody &) = default ;
    GetTemplateSummaryResponseBody(GetTemplateSummaryResponseBody &&) = default ;
    GetTemplateSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateSummaryResponseBody() = default ;
    GetTemplateSummaryResponseBody& operator=(const GetTemplateSummaryResponseBody &) = default ;
    GetTemplateSummaryResponseBody& operator=(GetTemplateSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceIdentifierSummaries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceIdentifierSummaries& obj) { 
        DARABONBA_PTR_TO_JSON(LogicalResourceIds, logicalResourceIds_);
        DARABONBA_PTR_TO_JSON(ResourceIdentifiers, resourceIdentifiers_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceIdentifierSummaries& obj) { 
        DARABONBA_PTR_FROM_JSON(LogicalResourceIds, logicalResourceIds_);
        DARABONBA_PTR_FROM_JSON(ResourceIdentifiers, resourceIdentifiers_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ResourceIdentifierSummaries() = default ;
      ResourceIdentifierSummaries(const ResourceIdentifierSummaries &) = default ;
      ResourceIdentifierSummaries(ResourceIdentifierSummaries &&) = default ;
      ResourceIdentifierSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceIdentifierSummaries() = default ;
      ResourceIdentifierSummaries& operator=(const ResourceIdentifierSummaries &) = default ;
      ResourceIdentifierSummaries& operator=(ResourceIdentifierSummaries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logicalResourceIds_ == nullptr
        && this->resourceIdentifiers_ == nullptr && this->resourceType_ == nullptr; };
      // logicalResourceIds Field Functions 
      bool hasLogicalResourceIds() const { return this->logicalResourceIds_ != nullptr;};
      void deleteLogicalResourceIds() { this->logicalResourceIds_ = nullptr;};
      inline const vector<string> & getLogicalResourceIds() const { DARABONBA_PTR_GET_CONST(logicalResourceIds_, vector<string>) };
      inline vector<string> getLogicalResourceIds() { DARABONBA_PTR_GET(logicalResourceIds_, vector<string>) };
      inline ResourceIdentifierSummaries& setLogicalResourceIds(const vector<string> & logicalResourceIds) { DARABONBA_PTR_SET_VALUE(logicalResourceIds_, logicalResourceIds) };
      inline ResourceIdentifierSummaries& setLogicalResourceIds(vector<string> && logicalResourceIds) { DARABONBA_PTR_SET_RVALUE(logicalResourceIds_, logicalResourceIds) };


      // resourceIdentifiers Field Functions 
      bool hasResourceIdentifiers() const { return this->resourceIdentifiers_ != nullptr;};
      void deleteResourceIdentifiers() { this->resourceIdentifiers_ = nullptr;};
      inline const vector<string> & getResourceIdentifiers() const { DARABONBA_PTR_GET_CONST(resourceIdentifiers_, vector<string>) };
      inline vector<string> getResourceIdentifiers() { DARABONBA_PTR_GET(resourceIdentifiers_, vector<string>) };
      inline ResourceIdentifierSummaries& setResourceIdentifiers(const vector<string> & resourceIdentifiers) { DARABONBA_PTR_SET_VALUE(resourceIdentifiers_, resourceIdentifiers) };
      inline ResourceIdentifierSummaries& setResourceIdentifiers(vector<string> && resourceIdentifiers) { DARABONBA_PTR_SET_RVALUE(resourceIdentifiers_, resourceIdentifiers) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceIdentifierSummaries& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The logical IDs of all resources of the type that is specified by ResouceType in the template.
      shared_ptr<vector<string>> logicalResourceIds_ {};
      // The resource properties. You can use a resource property to identify the resource that you want to manage. For example, VpcId is an identifier property of ALIYUN::ECS::VPC.
      shared_ptr<vector<string>> resourceIdentifiers_ {};
      // The resource type.
      // 
      // > The resource import feature is supported for the resource type.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->metadata_ == nullptr && this->parameters_ == nullptr && this->requestId_ == nullptr && this->resourceIdentifierSummaries_ == nullptr && this->resourceTypes_ == nullptr
        && this->version_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTemplateSummaryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline GetTemplateSummaryResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetTemplateSummaryResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Darabonba::Json> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Darabonba::Json>) };
    inline GetTemplateSummaryResponseBody& setParameters(const vector<Darabonba::Json> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetTemplateSummaryResponseBody& setParameters(vector<Darabonba::Json> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceIdentifierSummaries Field Functions 
    bool hasResourceIdentifierSummaries() const { return this->resourceIdentifierSummaries_ != nullptr;};
    void deleteResourceIdentifierSummaries() { this->resourceIdentifierSummaries_ = nullptr;};
    inline const vector<GetTemplateSummaryResponseBody::ResourceIdentifierSummaries> & getResourceIdentifierSummaries() const { DARABONBA_PTR_GET_CONST(resourceIdentifierSummaries_, vector<GetTemplateSummaryResponseBody::ResourceIdentifierSummaries>) };
    inline vector<GetTemplateSummaryResponseBody::ResourceIdentifierSummaries> getResourceIdentifierSummaries() { DARABONBA_PTR_GET(resourceIdentifierSummaries_, vector<GetTemplateSummaryResponseBody::ResourceIdentifierSummaries>) };
    inline GetTemplateSummaryResponseBody& setResourceIdentifierSummaries(const vector<GetTemplateSummaryResponseBody::ResourceIdentifierSummaries> & resourceIdentifierSummaries) { DARABONBA_PTR_SET_VALUE(resourceIdentifierSummaries_, resourceIdentifierSummaries) };
    inline GetTemplateSummaryResponseBody& setResourceIdentifierSummaries(vector<GetTemplateSummaryResponseBody::ResourceIdentifierSummaries> && resourceIdentifierSummaries) { DARABONBA_PTR_SET_RVALUE(resourceIdentifierSummaries_, resourceIdentifierSummaries) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline GetTemplateSummaryResponseBody& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline GetTemplateSummaryResponseBody& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetTemplateSummaryResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The description of the stack template.
    shared_ptr<string> description_ {};
    // The metadata that is defined in the template.
    Darabonba::Json metadata_ {};
    // The declarations of the parameters in the template.
    shared_ptr<vector<Darabonba::Json>> parameters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource identifier summaries.\\
    // A summary describes the resource that you want to import and the properties that are used to identify the resource during the import. For example, VpcId is an identifier property of ALIYUN::ECS::VPC.
    shared_ptr<vector<GetTemplateSummaryResponseBody::ResourceIdentifierSummaries>> resourceIdentifierSummaries_ {};
    // All resource types that are used in the template.
    shared_ptr<vector<string>> resourceTypes_ {};
    // The version of the template.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
