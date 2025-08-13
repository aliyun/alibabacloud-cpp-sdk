// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGREQUESTEXTGRAYRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGREQUESTEXTGRAYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListListenersByConfigRequestExtGrayRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersByConfigRequestExtGrayRules& obj) { 
      DARABONBA_PTR_TO_JSON(GrayRule, grayRule_);
      DARABONBA_PTR_TO_JSON(GrayRuleName, grayRuleName_);
      DARABONBA_PTR_TO_JSON(GrayRulePriority, grayRulePriority_);
      DARABONBA_PTR_TO_JSON(GrayRuleType, grayRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersByConfigRequestExtGrayRules& obj) { 
      DARABONBA_PTR_FROM_JSON(GrayRule, grayRule_);
      DARABONBA_PTR_FROM_JSON(GrayRuleName, grayRuleName_);
      DARABONBA_PTR_FROM_JSON(GrayRulePriority, grayRulePriority_);
      DARABONBA_PTR_FROM_JSON(GrayRuleType, grayRuleType_);
    };
    ListListenersByConfigRequestExtGrayRules() = default ;
    ListListenersByConfigRequestExtGrayRules(const ListListenersByConfigRequestExtGrayRules &) = default ;
    ListListenersByConfigRequestExtGrayRules(ListListenersByConfigRequestExtGrayRules &&) = default ;
    ListListenersByConfigRequestExtGrayRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersByConfigRequestExtGrayRules() = default ;
    ListListenersByConfigRequestExtGrayRules& operator=(const ListListenersByConfigRequestExtGrayRules &) = default ;
    ListListenersByConfigRequestExtGrayRules& operator=(ListListenersByConfigRequestExtGrayRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->grayRule_ != nullptr
        && this->grayRuleName_ != nullptr && this->grayRulePriority_ != nullptr && this->grayRuleType_ != nullptr; };
    // grayRule Field Functions 
    bool hasGrayRule() const { return this->grayRule_ != nullptr;};
    void deleteGrayRule() { this->grayRule_ = nullptr;};
    inline string grayRule() const { DARABONBA_PTR_GET_DEFAULT(grayRule_, "") };
    inline ListListenersByConfigRequestExtGrayRules& setGrayRule(string grayRule) { DARABONBA_PTR_SET_VALUE(grayRule_, grayRule) };


    // grayRuleName Field Functions 
    bool hasGrayRuleName() const { return this->grayRuleName_ != nullptr;};
    void deleteGrayRuleName() { this->grayRuleName_ = nullptr;};
    inline string grayRuleName() const { DARABONBA_PTR_GET_DEFAULT(grayRuleName_, "") };
    inline ListListenersByConfigRequestExtGrayRules& setGrayRuleName(string grayRuleName) { DARABONBA_PTR_SET_VALUE(grayRuleName_, grayRuleName) };


    // grayRulePriority Field Functions 
    bool hasGrayRulePriority() const { return this->grayRulePriority_ != nullptr;};
    void deleteGrayRulePriority() { this->grayRulePriority_ = nullptr;};
    inline int32_t grayRulePriority() const { DARABONBA_PTR_GET_DEFAULT(grayRulePriority_, 0) };
    inline ListListenersByConfigRequestExtGrayRules& setGrayRulePriority(int32_t grayRulePriority) { DARABONBA_PTR_SET_VALUE(grayRulePriority_, grayRulePriority) };


    // grayRuleType Field Functions 
    bool hasGrayRuleType() const { return this->grayRuleType_ != nullptr;};
    void deleteGrayRuleType() { this->grayRuleType_ = nullptr;};
    inline string grayRuleType() const { DARABONBA_PTR_GET_DEFAULT(grayRuleType_, "") };
    inline ListListenersByConfigRequestExtGrayRules& setGrayRuleType(string grayRuleType) { DARABONBA_PTR_SET_VALUE(grayRuleType_, grayRuleType) };


  protected:
    std::shared_ptr<string> grayRule_ = nullptr;
    std::shared_ptr<string> grayRuleName_ = nullptr;
    std::shared_ptr<int32_t> grayRulePriority_ = nullptr;
    std::shared_ptr<string> grayRuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
