// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOPHONCOMMANDSRESPONSEBODYDATAPARAMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOPHONCOMMANDSRESPONSEBODYDATAPARAMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSophonCommandsResponseBodyDataParamConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSophonCommandsResponseBodyDataParamConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CheckField, checkField_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Necessary, necessary_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSophonCommandsResponseBodyDataParamConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckField, checkField_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Necessary, necessary_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeSophonCommandsResponseBodyDataParamConfig() = default ;
    DescribeSophonCommandsResponseBodyDataParamConfig(const DescribeSophonCommandsResponseBodyDataParamConfig &) = default ;
    DescribeSophonCommandsResponseBodyDataParamConfig(DescribeSophonCommandsResponseBodyDataParamConfig &&) = default ;
    DescribeSophonCommandsResponseBodyDataParamConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSophonCommandsResponseBodyDataParamConfig() = default ;
    DescribeSophonCommandsResponseBodyDataParamConfig& operator=(const DescribeSophonCommandsResponseBodyDataParamConfig &) = default ;
    DescribeSophonCommandsResponseBodyDataParamConfig& operator=(DescribeSophonCommandsResponseBodyDataParamConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkField_ == nullptr
        && return this->field_ == nullptr && return this->necessary_ == nullptr && return this->value_ == nullptr; };
    // checkField Field Functions 
    bool hasCheckField() const { return this->checkField_ != nullptr;};
    void deleteCheckField() { this->checkField_ = nullptr;};
    inline string checkField() const { DARABONBA_PTR_GET_DEFAULT(checkField_, "") };
    inline DescribeSophonCommandsResponseBodyDataParamConfig& setCheckField(string checkField) { DARABONBA_PTR_SET_VALUE(checkField_, checkField) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeSophonCommandsResponseBodyDataParamConfig& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // necessary Field Functions 
    bool hasNecessary() const { return this->necessary_ != nullptr;};
    void deleteNecessary() { this->necessary_ = nullptr;};
    inline bool necessary() const { DARABONBA_PTR_GET_DEFAULT(necessary_, false) };
    inline DescribeSophonCommandsResponseBodyDataParamConfig& setNecessary(bool necessary) { DARABONBA_PTR_SET_VALUE(necessary_, necessary) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSophonCommandsResponseBodyDataParamConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The regular expression that is used to check the format of the parameter value. If the parameter is left empty, the check is not performed.
    std::shared_ptr<string> checkField_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> field_ = nullptr;
    // Indicates whether the parameter is required. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> necessary_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
