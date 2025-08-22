// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEANNOTATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULERESPONSEBODYALERTRULEANNOTATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations(const CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations(CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations &&) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations() = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations& operator=(const CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations &) = default ;
    CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations& operator=(CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateOrUpdateAlertRuleResponseBodyAlertRuleAnnotations& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the annotation.
    std::shared_ptr<string> name_ = nullptr;
    // The value of the annotation.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
