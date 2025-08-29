// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHRESOURCERULERESPONSEBODYRULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_PUSHRESOURCERULERESPONSEBODYRULEITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class PushResourceRuleResponseBodyRuleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushResourceRuleResponseBodyRuleItems& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PushResourceRuleResponseBodyRuleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PushResourceRuleResponseBodyRuleItems() = default ;
    PushResourceRuleResponseBodyRuleItems(const PushResourceRuleResponseBodyRuleItems &) = default ;
    PushResourceRuleResponseBodyRuleItems(PushResourceRuleResponseBodyRuleItems &&) = default ;
    PushResourceRuleResponseBodyRuleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushResourceRuleResponseBodyRuleItems() = default ;
    PushResourceRuleResponseBodyRuleItems& operator=(const PushResourceRuleResponseBodyRuleItems &) = default ;
    PushResourceRuleResponseBodyRuleItems& operator=(PushResourceRuleResponseBodyRuleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->maxValue_ != nullptr && this->minValue_ != nullptr && this->name_ != nullptr && this->value_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PushResourceRuleResponseBodyRuleItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline string maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
    inline PushResourceRuleResponseBodyRuleItems& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline string minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
    inline PushResourceRuleResponseBodyRuleItems& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PushResourceRuleResponseBodyRuleItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PushResourceRuleResponseBodyRuleItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> maxValue_ = nullptr;
    std::shared_ptr<string> minValue_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
