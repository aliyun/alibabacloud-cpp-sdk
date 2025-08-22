// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESRESPONSEBODYCONTENTRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESRESPONSEBODYCONTENTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDefaultRulesResponseBodyContentRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDefaultRulesResponseBodyContentRules& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDefaultRulesResponseBodyContentRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDcdnWafDefaultRulesResponseBodyContentRules() = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContentRules(const DescribeDcdnWafDefaultRulesResponseBodyContentRules &) = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContentRules(DescribeDcdnWafDefaultRulesResponseBodyContentRules &&) = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContentRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDefaultRulesResponseBodyContentRules() = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContentRules& operator=(const DescribeDcdnWafDefaultRulesResponseBodyContentRules &) = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContentRules& operator=(DescribeDcdnWafDefaultRulesResponseBodyContentRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->config_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeDcdnWafDefaultRulesResponseBodyContentRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeDcdnWafDefaultRulesResponseBodyContentRules& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDcdnWafDefaultRulesResponseBodyContentRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDcdnWafDefaultRulesResponseBodyContentRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDcdnWafDefaultRulesResponseBodyContentRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The default action of the rule. Valid values:
    // 
    // *   **monitor**
    // *   **deny**
    // *   **block**
    std::shared_ptr<string> action_ = nullptr;
    // The default configuration of the rule.
    std::shared_ptr<string> config_ = nullptr;
    // The default name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The default status of the rule. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> status_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **waf_group**: basic web protection.
    // *   **high_frequency**: high-frequency scanning blocking.
    // *   **directory_traversal**: directory traversal blocking.
    // *   **scan_tools**: scanner blocking.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
