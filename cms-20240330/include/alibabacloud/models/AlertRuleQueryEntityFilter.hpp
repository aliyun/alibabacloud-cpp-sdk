// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEQUERYENTITYFILTER_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEQUERYENTITYFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleQueryEntityFilterFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleQueryEntityFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleQueryEntityFilter& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(filters, filters_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleQueryEntityFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(filters, filters_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertRuleQueryEntityFilter() = default ;
    AlertRuleQueryEntityFilter(const AlertRuleQueryEntityFilter &) = default ;
    AlertRuleQueryEntityFilter(AlertRuleQueryEntityFilter &&) = default ;
    AlertRuleQueryEntityFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleQueryEntityFilter() = default ;
    AlertRuleQueryEntityFilter& operator=(const AlertRuleQueryEntityFilter &) = default ;
    AlertRuleQueryEntityFilter& operator=(AlertRuleQueryEntityFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->filters_ == nullptr && return this->type_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AlertRuleQueryEntityFilter& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<Models::AlertRuleQueryEntityFilterFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Models::AlertRuleQueryEntityFilterFilters>) };
    inline vector<Models::AlertRuleQueryEntityFilterFilters> filters() { DARABONBA_PTR_GET(filters_, vector<Models::AlertRuleQueryEntityFilterFilters>) };
    inline AlertRuleQueryEntityFilter& setFilters(const vector<Models::AlertRuleQueryEntityFilterFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline AlertRuleQueryEntityFilter& setFilters(vector<Models::AlertRuleQueryEntityFilterFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleQueryEntityFilter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<vector<Models::AlertRuleQueryEntityFilterFilters>> filters_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
