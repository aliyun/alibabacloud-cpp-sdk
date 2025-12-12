// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFORULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFORULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningConfigResponseBodyDataWarningConfigInfoRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningConfigResponseBodyDataWarningConfigInfoRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(WarningRule, warningRule_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningConfigResponseBodyDataWarningConfigInfoRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(WarningRule, warningRule_);
    };
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleList() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleList(const ListWarningConfigResponseBodyDataWarningConfigInfoRuleList &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleList(ListWarningConfigResponseBodyDataWarningConfigInfoRuleList &&) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoRuleList() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleList& operator=(const ListWarningConfigResponseBodyDataWarningConfigInfoRuleList &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleList& operator=(ListWarningConfigResponseBodyDataWarningConfigInfoRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->warningRule_ == nullptr; };
    // warningRule Field Functions 
    bool hasWarningRule() const { return this->warningRule_ != nullptr;};
    void deleteWarningRule() { this->warningRule_ = nullptr;};
    inline const vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule> & warningRule() const { DARABONBA_PTR_GET_CONST(warningRule_, vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule>) };
    inline vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule> warningRule() { DARABONBA_PTR_GET(warningRule_, vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule>) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoRuleList& setWarningRule(const vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule> & warningRule) { DARABONBA_PTR_SET_VALUE(warningRule_, warningRule) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoRuleList& setWarningRule(vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule> && warningRule) { DARABONBA_PTR_SET_RVALUE(warningRule_, warningRule) };


  protected:
    std::shared_ptr<vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule>> warningRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
