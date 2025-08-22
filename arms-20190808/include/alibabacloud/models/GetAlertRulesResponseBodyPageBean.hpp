// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULESRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULESRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlertRulesResponseBodyPageBeanAlertRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAlertRulesResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRulesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(AlertRules, alertRules_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRulesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertRules, alertRules_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetAlertRulesResponseBodyPageBean() = default ;
    GetAlertRulesResponseBodyPageBean(const GetAlertRulesResponseBodyPageBean &) = default ;
    GetAlertRulesResponseBodyPageBean(GetAlertRulesResponseBodyPageBean &&) = default ;
    GetAlertRulesResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRulesResponseBodyPageBean() = default ;
    GetAlertRulesResponseBodyPageBean& operator=(const GetAlertRulesResponseBodyPageBean &) = default ;
    GetAlertRulesResponseBodyPageBean& operator=(GetAlertRulesResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertRules_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // alertRules Field Functions 
    bool hasAlertRules() const { return this->alertRules_ != nullptr;};
    void deleteAlertRules() { this->alertRules_ = nullptr;};
    inline const vector<Models::GetAlertRulesResponseBodyPageBeanAlertRules> & alertRules() const { DARABONBA_PTR_GET_CONST(alertRules_, vector<Models::GetAlertRulesResponseBodyPageBeanAlertRules>) };
    inline vector<Models::GetAlertRulesResponseBodyPageBeanAlertRules> alertRules() { DARABONBA_PTR_GET(alertRules_, vector<Models::GetAlertRulesResponseBodyPageBeanAlertRules>) };
    inline GetAlertRulesResponseBodyPageBean& setAlertRules(const vector<Models::GetAlertRulesResponseBodyPageBeanAlertRules> & alertRules) { DARABONBA_PTR_SET_VALUE(alertRules_, alertRules) };
    inline GetAlertRulesResponseBodyPageBean& setAlertRules(vector<Models::GetAlertRulesResponseBodyPageBeanAlertRules> && alertRules) { DARABONBA_PTR_SET_RVALUE(alertRules_, alertRules) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline GetAlertRulesResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetAlertRulesResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetAlertRulesResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The alert rules.
    std::shared_ptr<vector<Models::GetAlertRulesResponseBodyPageBeanAlertRules>> alertRules_ = nullptr;
    // The number of pages returned.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of alert rules returned per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of queried alert rules.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
