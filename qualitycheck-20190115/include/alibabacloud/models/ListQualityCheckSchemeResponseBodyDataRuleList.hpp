// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODYDATARULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODYDATARULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQualityCheckSchemeResponseBodyDataRuleListRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListQualityCheckSchemeResponseBodyDataRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityCheckSchemeResponseBodyDataRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityCheckSchemeResponseBodyDataRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ListQualityCheckSchemeResponseBodyDataRuleList() = default ;
    ListQualityCheckSchemeResponseBodyDataRuleList(const ListQualityCheckSchemeResponseBodyDataRuleList &) = default ;
    ListQualityCheckSchemeResponseBodyDataRuleList(ListQualityCheckSchemeResponseBodyDataRuleList &&) = default ;
    ListQualityCheckSchemeResponseBodyDataRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityCheckSchemeResponseBodyDataRuleList() = default ;
    ListQualityCheckSchemeResponseBodyDataRuleList& operator=(const ListQualityCheckSchemeResponseBodyDataRuleList &) = default ;
    ListQualityCheckSchemeResponseBodyDataRuleList& operator=(ListQualityCheckSchemeResponseBodyDataRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rules_ == nullptr; };
    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListQualityCheckSchemeResponseBodyDataRuleListRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListQualityCheckSchemeResponseBodyDataRuleListRules>) };
    inline vector<Models::ListQualityCheckSchemeResponseBodyDataRuleListRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListQualityCheckSchemeResponseBodyDataRuleListRules>) };
    inline ListQualityCheckSchemeResponseBodyDataRuleList& setRules(const vector<Models::ListQualityCheckSchemeResponseBodyDataRuleListRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListQualityCheckSchemeResponseBodyDataRuleList& setRules(vector<Models::ListQualityCheckSchemeResponseBodyDataRuleListRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<vector<Models::ListQualityCheckSchemeResponseBodyDataRuleListRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
