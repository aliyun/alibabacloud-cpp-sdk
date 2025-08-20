// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESUMMARYRESPONSEBODYRESOURCEIDENTIFIERSUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESUMMARYRESPONSEBODYRESOURCEIDENTIFIERSUMMARIES_HPP_
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
  class GetTemplateSummaryResponseBodyResourceIdentifierSummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateSummaryResponseBodyResourceIdentifierSummaries& obj) { 
      DARABONBA_PTR_TO_JSON(LogicalResourceIds, logicalResourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceIdentifiers, resourceIdentifiers_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateSummaryResponseBodyResourceIdentifierSummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicalResourceIds, logicalResourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceIdentifiers, resourceIdentifiers_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetTemplateSummaryResponseBodyResourceIdentifierSummaries() = default ;
    GetTemplateSummaryResponseBodyResourceIdentifierSummaries(const GetTemplateSummaryResponseBodyResourceIdentifierSummaries &) = default ;
    GetTemplateSummaryResponseBodyResourceIdentifierSummaries(GetTemplateSummaryResponseBodyResourceIdentifierSummaries &&) = default ;
    GetTemplateSummaryResponseBodyResourceIdentifierSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateSummaryResponseBodyResourceIdentifierSummaries() = default ;
    GetTemplateSummaryResponseBodyResourceIdentifierSummaries& operator=(const GetTemplateSummaryResponseBodyResourceIdentifierSummaries &) = default ;
    GetTemplateSummaryResponseBodyResourceIdentifierSummaries& operator=(GetTemplateSummaryResponseBodyResourceIdentifierSummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicalResourceIds_ != nullptr
        && this->resourceIdentifiers_ != nullptr && this->resourceType_ != nullptr; };
    // logicalResourceIds Field Functions 
    bool hasLogicalResourceIds() const { return this->logicalResourceIds_ != nullptr;};
    void deleteLogicalResourceIds() { this->logicalResourceIds_ = nullptr;};
    inline const vector<string> & logicalResourceIds() const { DARABONBA_PTR_GET_CONST(logicalResourceIds_, vector<string>) };
    inline vector<string> logicalResourceIds() { DARABONBA_PTR_GET(logicalResourceIds_, vector<string>) };
    inline GetTemplateSummaryResponseBodyResourceIdentifierSummaries& setLogicalResourceIds(const vector<string> & logicalResourceIds) { DARABONBA_PTR_SET_VALUE(logicalResourceIds_, logicalResourceIds) };
    inline GetTemplateSummaryResponseBodyResourceIdentifierSummaries& setLogicalResourceIds(vector<string> && logicalResourceIds) { DARABONBA_PTR_SET_RVALUE(logicalResourceIds_, logicalResourceIds) };


    // resourceIdentifiers Field Functions 
    bool hasResourceIdentifiers() const { return this->resourceIdentifiers_ != nullptr;};
    void deleteResourceIdentifiers() { this->resourceIdentifiers_ = nullptr;};
    inline const vector<string> & resourceIdentifiers() const { DARABONBA_PTR_GET_CONST(resourceIdentifiers_, vector<string>) };
    inline vector<string> resourceIdentifiers() { DARABONBA_PTR_GET(resourceIdentifiers_, vector<string>) };
    inline GetTemplateSummaryResponseBodyResourceIdentifierSummaries& setResourceIdentifiers(const vector<string> & resourceIdentifiers) { DARABONBA_PTR_SET_VALUE(resourceIdentifiers_, resourceIdentifiers) };
    inline GetTemplateSummaryResponseBodyResourceIdentifierSummaries& setResourceIdentifiers(vector<string> && resourceIdentifiers) { DARABONBA_PTR_SET_RVALUE(resourceIdentifiers_, resourceIdentifiers) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetTemplateSummaryResponseBodyResourceIdentifierSummaries& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The logical IDs of all resources of the type that is specified by ResouceType in the template.
    std::shared_ptr<vector<string>> logicalResourceIds_ = nullptr;
    // The resource properties. You can use a resource property to identify the resource that you want to manage. For example, VpcId is an identifier property of ALIYUN::ECS::VPC.
    std::shared_ptr<vector<string>> resourceIdentifiers_ = nullptr;
    // The resource type.
    // 
    // > The resource import feature is supported for the resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
