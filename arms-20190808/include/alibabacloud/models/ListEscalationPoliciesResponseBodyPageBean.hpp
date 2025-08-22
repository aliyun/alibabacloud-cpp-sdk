// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTESCALATIONPOLICIESRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_LISTESCALATIONPOLICIESRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEscalationPoliciesResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEscalationPoliciesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(EscalationPolicies, escalationPolicies_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEscalationPoliciesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(EscalationPolicies, escalationPolicies_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEscalationPoliciesResponseBodyPageBean() = default ;
    ListEscalationPoliciesResponseBodyPageBean(const ListEscalationPoliciesResponseBodyPageBean &) = default ;
    ListEscalationPoliciesResponseBodyPageBean(ListEscalationPoliciesResponseBodyPageBean &&) = default ;
    ListEscalationPoliciesResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEscalationPoliciesResponseBodyPageBean() = default ;
    ListEscalationPoliciesResponseBodyPageBean& operator=(const ListEscalationPoliciesResponseBodyPageBean &) = default ;
    ListEscalationPoliciesResponseBodyPageBean& operator=(ListEscalationPoliciesResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->escalationPolicies_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // escalationPolicies Field Functions 
    bool hasEscalationPolicies() const { return this->escalationPolicies_ != nullptr;};
    void deleteEscalationPolicies() { this->escalationPolicies_ = nullptr;};
    inline const vector<Models::ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies> & escalationPolicies() const { DARABONBA_PTR_GET_CONST(escalationPolicies_, vector<Models::ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies>) };
    inline vector<Models::ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies> escalationPolicies() { DARABONBA_PTR_GET(escalationPolicies_, vector<Models::ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies>) };
    inline ListEscalationPoliciesResponseBodyPageBean& setEscalationPolicies(const vector<Models::ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies> & escalationPolicies) { DARABONBA_PTR_SET_VALUE(escalationPolicies_, escalationPolicies) };
    inline ListEscalationPoliciesResponseBodyPageBean& setEscalationPolicies(vector<Models::ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies> && escalationPolicies) { DARABONBA_PTR_SET_RVALUE(escalationPolicies_, escalationPolicies) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListEscalationPoliciesResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListEscalationPoliciesResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListEscalationPoliciesResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of escalation policies.
    std::shared_ptr<vector<Models::ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies>> escalationPolicies_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
