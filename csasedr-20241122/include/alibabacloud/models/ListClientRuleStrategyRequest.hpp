// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTRULESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTRULESTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class ListClientRuleStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientRuleStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientRuleStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    ListClientRuleStrategyRequest() = default ;
    ListClientRuleStrategyRequest(const ListClientRuleStrategyRequest &) = default ;
    ListClientRuleStrategyRequest(ListClientRuleStrategyRequest &&) = default ;
    ListClientRuleStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientRuleStrategyRequest() = default ;
    ListClientRuleStrategyRequest& operator=(const ListClientRuleStrategyRequest &) = default ;
    ListClientRuleStrategyRequest& operator=(ListClientRuleStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->name_ == nullptr && this->pageSize_ == nullptr && this->policyType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListClientRuleStrategyRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClientRuleStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClientRuleStrategyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline int32_t getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, 0) };
    inline ListClientRuleStrategyRequest& setPolicyType(int32_t policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // The current page number for the paged query with paging. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The policy name for substring matching. If this parameter is not specified, policies are not filtered by name.
    shared_ptr<string> name_ {};
    // The number of entries per page for the paged query with paging. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The policy type. Valid values:
    // 
    // - **0**: Software hardening.
    // - **1**: Firewall.
    // - **2**: Proactive defense.
    // 
    // This parameter is required.
    shared_ptr<int32_t> policyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
