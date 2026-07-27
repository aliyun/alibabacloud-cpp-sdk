// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALERTRULESRESOURCESFILTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYALERTRULESRESOURCESFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class QueryAlertRulesResourcesFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAlertRulesResourcesFilter& obj) { 
      DARABONBA_PTR_TO_JSON(contains, contains_);
      DARABONBA_PTR_TO_JSON(notContains, notContains_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAlertRulesResourcesFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(contains, contains_);
      DARABONBA_PTR_FROM_JSON(notContains, notContains_);
    };
    QueryAlertRulesResourcesFilter() = default ;
    QueryAlertRulesResourcesFilter(const QueryAlertRulesResourcesFilter &) = default ;
    QueryAlertRulesResourcesFilter(QueryAlertRulesResourcesFilter &&) = default ;
    QueryAlertRulesResourcesFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAlertRulesResourcesFilter() = default ;
    QueryAlertRulesResourcesFilter& operator=(const QueryAlertRulesResourcesFilter &) = default ;
    QueryAlertRulesResourcesFilter& operator=(QueryAlertRulesResourcesFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contains_ == nullptr
        && this->notContains_ == nullptr; };
    // contains Field Functions 
    bool hasContains() const { return this->contains_ != nullptr;};
    void deleteContains() { this->contains_ = nullptr;};
    inline const vector<string> & getContains() const { DARABONBA_PTR_GET_CONST(contains_, vector<string>) };
    inline vector<string> getContains() { DARABONBA_PTR_GET(contains_, vector<string>) };
    inline QueryAlertRulesResourcesFilter& setContains(const vector<string> & contains) { DARABONBA_PTR_SET_VALUE(contains_, contains) };
    inline QueryAlertRulesResourcesFilter& setContains(vector<string> && contains) { DARABONBA_PTR_SET_RVALUE(contains_, contains) };


    // notContains Field Functions 
    bool hasNotContains() const { return this->notContains_ != nullptr;};
    void deleteNotContains() { this->notContains_ = nullptr;};
    inline const vector<string> & getNotContains() const { DARABONBA_PTR_GET_CONST(notContains_, vector<string>) };
    inline vector<string> getNotContains() { DARABONBA_PTR_GET(notContains_, vector<string>) };
    inline QueryAlertRulesResourcesFilter& setNotContains(const vector<string> & notContains) { DARABONBA_PTR_SET_VALUE(notContains_, notContains) };
    inline QueryAlertRulesResourcesFilter& setNotContains(vector<string> && notContains) { DARABONBA_PTR_SET_RVALUE(notContains_, notContains) };


  protected:
    shared_ptr<vector<string>> contains_ {};
    shared_ptr<vector<string>> notContains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
