// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTICSECURITYPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTICSECURITYPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAgenticSecurityPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgenticSecurityPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeArchived, includeArchived_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgenticSecurityPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeArchived, includeArchived_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListAgenticSecurityPoliciesRequest() = default ;
    ListAgenticSecurityPoliciesRequest(const ListAgenticSecurityPoliciesRequest &) = default ;
    ListAgenticSecurityPoliciesRequest(ListAgenticSecurityPoliciesRequest &&) = default ;
    ListAgenticSecurityPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgenticSecurityPoliciesRequest() = default ;
    ListAgenticSecurityPoliciesRequest& operator=(const ListAgenticSecurityPoliciesRequest &) = default ;
    ListAgenticSecurityPoliciesRequest& operator=(ListAgenticSecurityPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeArchived_ == nullptr
        && this->page_ == nullptr && this->policyStatus_ == nullptr && this->size_ == nullptr; };
    // includeArchived Field Functions 
    bool hasIncludeArchived() const { return this->includeArchived_ != nullptr;};
    void deleteIncludeArchived() { this->includeArchived_ = nullptr;};
    inline bool getIncludeArchived() const { DARABONBA_PTR_GET_DEFAULT(includeArchived_, false) };
    inline ListAgenticSecurityPoliciesRequest& setIncludeArchived(bool includeArchived) { DARABONBA_PTR_SET_VALUE(includeArchived_, includeArchived) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListAgenticSecurityPoliciesRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string getPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline ListAgenticSecurityPoliciesRequest& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListAgenticSecurityPoliciesRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // Specifies whether to include archived policies in the query scope of user policies. Valid values:
    // - true: Includes archived policies.
    // - false: Does not include archived policies.
    // Default value: false. When querying archived policies, do not specify PolicyStatus. If ON or OFF is specified, only user policies in the corresponding state are returned. This parameter does not affect system default policies.
    shared_ptr<bool> includeArchived_ {};
    // The page number of the user policies to query. Pages start from 1. Default value: 1. Only user policies are paginated. System default policies are returned separately in each call.
    shared_ptr<int32_t> page_ {};
    // The filter condition for the user policy status. Valid values: ON (enabled) and OFF (disabled). If this parameter is not specified or contains only whitespace characters, policies are not filtered by status. You cannot specify ARCHIVED. To query archived user policies, do not specify this parameter and set IncludeArchived to true. This parameter does not affect system default policies.
    shared_ptr<string> policyStatus_ {};
    // The number of user policies to query on each page. Valid values: 1 to 100. Default value: 20. In addition, each call returns up to Size enabled system default policies. Therefore, the number of items in the returned Data may be greater than Size.
    shared_ptr<int32_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
