// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSEMAPPINGMARKFIELDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSEMAPPINGMARKFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FillType, fillType_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(MinLength, minLength_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Required, required_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(ShowValue, showValue_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FillType, fillType_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(ShowValue, showValue_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields() = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields(const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields &) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields(DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields &&) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields() = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& operator=(const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields &) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& operator=(DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->fillType_ != nullptr && this->maxLength_ != nullptr && this->minLength_ != nullptr && this->name_ != nullptr && this->required_ != nullptr
        && this->showName_ != nullptr && this->showValue_ != nullptr && this->value_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fillType Field Functions 
    bool hasFillType() const { return this->fillType_ != nullptr;};
    void deleteFillType() { this->fillType_ = nullptr;};
    inline string fillType() const { DARABONBA_PTR_GET_DEFAULT(fillType_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setFillType(string fillType) { DARABONBA_PTR_SET_VALUE(fillType_, fillType) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t minLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // showValue Field Functions 
    bool hasShowValue() const { return this->showValue_ != nullptr;};
    void deleteShowValue() { this->showValue_ = nullptr;};
    inline string showValue() const { DARABONBA_PTR_GET_DEFAULT(showValue_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setShowValue(string showValue) { DARABONBA_PTR_SET_VALUE(showValue_, showValue) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMappingMarkFields& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description of the field that is added to the whitelist.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the value of the field can be changed.
    // 
    // *   **CUSTOM**: The value of the field can be changed.
    // *   **SYSTEM**: The value of the field cannot be changed.
    std::shared_ptr<string> fillType_ = nullptr;
    // The maximum length of the field that is added to the whitelist.
    std::shared_ptr<int32_t> maxLength_ = nullptr;
    // The minimum length of the field that is added to the whitelist.
    std::shared_ptr<int32_t> minLength_ = nullptr;
    // The name of the field that is added to the whitelist.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the parameter is required. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> required_ = nullptr;
    // The display name of the field that can be used in the whitelist rule.
    std::shared_ptr<string> showName_ = nullptr;
    // The display name of the field that is added to the whitelist.
    std::shared_ptr<string> showValue_ = nullptr;
    // The value of the field that is added to the whitelist.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
