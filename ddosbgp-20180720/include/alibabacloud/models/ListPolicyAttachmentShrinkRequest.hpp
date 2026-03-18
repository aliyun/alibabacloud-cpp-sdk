// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class ListPolicyAttachmentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyAttachmentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpPortProtocolList, ipPortProtocolListShrink_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PortVersion, portVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyAttachmentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPortProtocolList, ipPortProtocolListShrink_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PortVersion, portVersion_);
    };
    ListPolicyAttachmentShrinkRequest() = default ;
    ListPolicyAttachmentShrinkRequest(const ListPolicyAttachmentShrinkRequest &) = default ;
    ListPolicyAttachmentShrinkRequest(ListPolicyAttachmentShrinkRequest &&) = default ;
    ListPolicyAttachmentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyAttachmentShrinkRequest() = default ;
    ListPolicyAttachmentShrinkRequest& operator=(const ListPolicyAttachmentShrinkRequest &) = default ;
    ListPolicyAttachmentShrinkRequest& operator=(ListPolicyAttachmentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipPortProtocolListShrink_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->policyId_ == nullptr && this->policyType_ == nullptr && this->portVersion_ == nullptr; };
    // ipPortProtocolListShrink Field Functions 
    bool hasIpPortProtocolListShrink() const { return this->ipPortProtocolListShrink_ != nullptr;};
    void deleteIpPortProtocolListShrink() { this->ipPortProtocolListShrink_ = nullptr;};
    inline string getIpPortProtocolListShrink() const { DARABONBA_PTR_GET_DEFAULT(ipPortProtocolListShrink_, "") };
    inline ListPolicyAttachmentShrinkRequest& setIpPortProtocolListShrink(string ipPortProtocolListShrink) { DARABONBA_PTR_SET_VALUE(ipPortProtocolListShrink_, ipPortProtocolListShrink) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListPolicyAttachmentShrinkRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPolicyAttachmentShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListPolicyAttachmentShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListPolicyAttachmentShrinkRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // portVersion Field Functions 
    bool hasPortVersion() const { return this->portVersion_ != nullptr;};
    void deletePortVersion() { this->portVersion_ = nullptr;};
    inline string getPortVersion() const { DARABONBA_PTR_GET_DEFAULT(portVersion_, "") };
    inline ListPolicyAttachmentShrinkRequest& setPortVersion(string portVersion) { DARABONBA_PTR_SET_VALUE(portVersion_, portVersion) };


  protected:
    // The protected objects.
    shared_ptr<string> ipPortProtocolListShrink_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. Default value: **10**.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the policy.
    shared_ptr<string> policyId_ {};
    // The type of the policy. Valid values:
    // 
    // *   **default**: the default mitigation policies.
    // *   **l3**: IP-specific mitigation policies.
    // *   **l4**: port-specific mitigation policies.
    shared_ptr<string> policyType_ {};
    shared_ptr<string> portVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
