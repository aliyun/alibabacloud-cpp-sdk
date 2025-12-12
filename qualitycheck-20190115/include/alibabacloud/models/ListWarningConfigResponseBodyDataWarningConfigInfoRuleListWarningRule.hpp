// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFORULELISTWARNINGRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFORULELISTWARNINGRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule& obj) { 
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule(const ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule(ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule &&) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule& operator=(const ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule& operator=(ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rid_ == nullptr
        && return this->ruleName_ == nullptr; };
    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoRuleListWarningRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
