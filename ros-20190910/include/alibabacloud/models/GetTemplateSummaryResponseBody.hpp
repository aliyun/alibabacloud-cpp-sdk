// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateSummaryResponseBodyResourceIdentifierSummaries.hpp>
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
    virtual bool empty() const override { this->description_ != nullptr
        && this->metadata_ != nullptr && this->parameters_ != nullptr && this->requestId_ != nullptr && this->resourceIdentifierSummaries_ != nullptr && this->resourceTypes_ != nullptr
        && this->version_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTemplateSummaryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline GetTemplateSummaryResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetTemplateSummaryResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Darabonba::Json> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> parameters() { DARABONBA_PTR_GET(parameters_, vector<Darabonba::Json>) };
    inline GetTemplateSummaryResponseBody& setParameters(const vector<Darabonba::Json> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetTemplateSummaryResponseBody& setParameters(vector<Darabonba::Json> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceIdentifierSummaries Field Functions 
    bool hasResourceIdentifierSummaries() const { return this->resourceIdentifierSummaries_ != nullptr;};
    void deleteResourceIdentifierSummaries() { this->resourceIdentifierSummaries_ = nullptr;};
    inline const vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries> & resourceIdentifierSummaries() const { DARABONBA_PTR_GET_CONST(resourceIdentifierSummaries_, vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries>) };
    inline vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries> resourceIdentifierSummaries() { DARABONBA_PTR_GET(resourceIdentifierSummaries_, vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries>) };
    inline GetTemplateSummaryResponseBody& setResourceIdentifierSummaries(const vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries> & resourceIdentifierSummaries) { DARABONBA_PTR_SET_VALUE(resourceIdentifierSummaries_, resourceIdentifierSummaries) };
    inline GetTemplateSummaryResponseBody& setResourceIdentifierSummaries(vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries> && resourceIdentifierSummaries) { DARABONBA_PTR_SET_RVALUE(resourceIdentifierSummaries_, resourceIdentifierSummaries) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & resourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> resourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline GetTemplateSummaryResponseBody& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline GetTemplateSummaryResponseBody& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetTemplateSummaryResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The description of the stack template.
    std::shared_ptr<string> description_ = nullptr;
    // The metadata that is defined in the template.
    Darabonba::Json metadata_ = nullptr;
    // The declarations of the parameters in the template.
    std::shared_ptr<vector<Darabonba::Json>> parameters_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource identifier summaries.\\
    // A summary describes the resource that you want to import and the properties that are used to identify the resource during the import. For example, VpcId is an identifier property of ALIYUN::ECS::VPC.
    std::shared_ptr<vector<GetTemplateSummaryResponseBodyResourceIdentifierSummaries>> resourceIdentifierSummaries_ = nullptr;
    // All resource types that are used in the template.
    std::shared_ptr<vector<string>> resourceTypes_ = nullptr;
    // The version of the template.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
