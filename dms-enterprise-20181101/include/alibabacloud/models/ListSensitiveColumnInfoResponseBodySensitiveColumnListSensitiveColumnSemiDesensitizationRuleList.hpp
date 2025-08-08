// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNINFORESPONSEBODYSENSITIVECOLUMNLISTSENSITIVECOLUMNSEMIDESENSITIZATIONRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNINFORESPONSEBODYSENSITIVECOLUMNLISTSENSITIVECOLUMNSEMIDESENSITIZATIONRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(SemiDesensitizationRule, semiDesensitizationRule_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(SemiDesensitizationRule, semiDesensitizationRule_);
    };
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList() = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList(const ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList &) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList(ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList &&) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList() = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList& operator=(const ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList &) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList& operator=(ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->semiDesensitizationRule_ != nullptr; };
    // semiDesensitizationRule Field Functions 
    bool hasSemiDesensitizationRule() const { return this->semiDesensitizationRule_ != nullptr;};
    void deleteSemiDesensitizationRule() { this->semiDesensitizationRule_ = nullptr;};
    inline const vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule> & semiDesensitizationRule() const { DARABONBA_PTR_GET_CONST(semiDesensitizationRule_, vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule>) };
    inline vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule> semiDesensitizationRule() { DARABONBA_PTR_GET(semiDesensitizationRule_, vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule>) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList& setSemiDesensitizationRule(const vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule> & semiDesensitizationRule) { DARABONBA_PTR_SET_VALUE(semiDesensitizationRule_, semiDesensitizationRule) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleList& setSemiDesensitizationRule(vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule> && semiDesensitizationRule) { DARABONBA_PTR_SET_RVALUE(semiDesensitizationRule_, semiDesensitizationRule) };


  protected:
    std::shared_ptr<vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumnSemiDesensitizationRuleListSemiDesensitizationRule>> semiDesensitizationRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
