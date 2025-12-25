// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEINFORULES_HPP_
#define ALIBABACLOUD_MODELS_PRICEINFORULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class PriceInfoRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceInfoRules& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, PriceInfoRules& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
    };
    PriceInfoRules() = default ;
    PriceInfoRules(const PriceInfoRules &) = default ;
    PriceInfoRules(PriceInfoRules &&) = default ;
    PriceInfoRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceInfoRules() = default ;
    PriceInfoRules& operator=(const PriceInfoRules &) = default ;
    PriceInfoRules& operator=(PriceInfoRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->name_ == nullptr && return this->ruleId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline PriceInfoRules& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PriceInfoRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PriceInfoRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
