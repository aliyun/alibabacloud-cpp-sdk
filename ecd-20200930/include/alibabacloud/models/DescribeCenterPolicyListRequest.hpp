// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCenterPolicyListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenterPolicyListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenterPolicyListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    DescribeCenterPolicyListRequest() = default ;
    DescribeCenterPolicyListRequest(const DescribeCenterPolicyListRequest &) = default ;
    DescribeCenterPolicyListRequest(DescribeCenterPolicyListRequest &&) = default ;
    DescribeCenterPolicyListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenterPolicyListRequest() = default ;
    DescribeCenterPolicyListRequest& operator=(const DescribeCenterPolicyListRequest &) = default ;
    DescribeCenterPolicyListRequest& operator=(DescribeCenterPolicyListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->policyGroupId_ != nullptr && this->resourceType_ != nullptr && this->scope_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline int32_t businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0) };
    inline DescribeCenterPolicyListRequest& setBusinessType(int32_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenterPolicyListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenterPolicyListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline const vector<string> & policyGroupId() const { DARABONBA_PTR_GET_CONST(policyGroupId_, vector<string>) };
    inline vector<string> policyGroupId() { DARABONBA_PTR_GET(policyGroupId_, vector<string>) };
    inline DescribeCenterPolicyListRequest& setPolicyGroupId(const vector<string> & policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };
    inline DescribeCenterPolicyListRequest& setPolicyGroupId(vector<string> && policyGroupId) { DARABONBA_PTR_SET_RVALUE(policyGroupId_, policyGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeCenterPolicyListRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeCenterPolicyListRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The business type.
    // 
    // Valid values:
    // 
    // *   1: public cloud
    // *   8: commercial edition.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> businessType_ = nullptr;
    // The page number.\\
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IDs of the cloud computer policies.
    std::shared_ptr<vector<string>> policyGroupId_ = nullptr;
    // The resource type.
    // 
    // Valid values:
    // 
    // *   app: cloud applications.
    // *   desktop: cloud computers.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The effective scope of the cloud computer policy.
    // 
    // Valid values:
    // 
    // *   IP: The policy applies to specific IP addresses.
    // *   GLOBAL: The policy applies globally.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
