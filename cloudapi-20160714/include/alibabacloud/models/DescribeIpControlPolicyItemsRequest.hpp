// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLPOLICYITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPCONTROLPOLICYITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeIpControlPolicyItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpControlPolicyItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyItemId, policyItemId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpControlPolicyItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyItemId, policyItemId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeIpControlPolicyItemsRequest() = default ;
    DescribeIpControlPolicyItemsRequest(const DescribeIpControlPolicyItemsRequest &) = default ;
    DescribeIpControlPolicyItemsRequest(DescribeIpControlPolicyItemsRequest &&) = default ;
    DescribeIpControlPolicyItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpControlPolicyItemsRequest() = default ;
    DescribeIpControlPolicyItemsRequest& operator=(const DescribeIpControlPolicyItemsRequest &) = default ;
    DescribeIpControlPolicyItemsRequest& operator=(DescribeIpControlPolicyItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipControlId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->policyItemId_ == nullptr && return this->securityToken_ == nullptr; };
    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string ipControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline DescribeIpControlPolicyItemsRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIpControlPolicyItemsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIpControlPolicyItemsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyItemId Field Functions 
    bool hasPolicyItemId() const { return this->policyItemId_ != nullptr;};
    void deletePolicyItemId() { this->policyItemId_ = nullptr;};
    inline string policyItemId() const { DARABONBA_PTR_GET_DEFAULT(policyItemId_, "") };
    inline DescribeIpControlPolicyItemsRequest& setPolicyItemId(string policyItemId) { DARABONBA_PTR_SET_VALUE(policyItemId_, policyItemId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeIpControlPolicyItemsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the ACL. The ID is unique.
    std::shared_ptr<string> ipControlId_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyItemId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
