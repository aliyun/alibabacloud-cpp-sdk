// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JUDGENODEMETADESC_HPP_
#define ALIBABACLOUD_MODELS_JUDGENODEMETADESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class JudgeNodeMetaDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JudgeNodeMetaDesc& obj) { 
      DARABONBA_PTR_TO_JSON(ActualValue, actualValue_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(Symbol, symbol_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, JudgeNodeMetaDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualValue, actualValue_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    JudgeNodeMetaDesc() = default ;
    JudgeNodeMetaDesc(const JudgeNodeMetaDesc &) = default ;
    JudgeNodeMetaDesc(JudgeNodeMetaDesc &&) = default ;
    JudgeNodeMetaDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JudgeNodeMetaDesc() = default ;
    JudgeNodeMetaDesc& operator=(const JudgeNodeMetaDesc &) = default ;
    JudgeNodeMetaDesc& operator=(JudgeNodeMetaDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualValue_ != nullptr
        && this->dataType_ != nullptr && this->field_ != nullptr && this->fieldType_ != nullptr && this->symbol_ != nullptr && this->value_ != nullptr; };
    // actualValue Field Functions 
    bool hasActualValue() const { return this->actualValue_ != nullptr;};
    void deleteActualValue() { this->actualValue_ = nullptr;};
    inline string actualValue() const { DARABONBA_PTR_GET_DEFAULT(actualValue_, "") };
    inline JudgeNodeMetaDesc& setActualValue(string actualValue) { DARABONBA_PTR_SET_VALUE(actualValue_, actualValue) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int32_t dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
    inline JudgeNodeMetaDesc& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline JudgeNodeMetaDesc& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline int32_t fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, 0) };
    inline JudgeNodeMetaDesc& setFieldType(int32_t fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline int32_t symbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, 0) };
    inline JudgeNodeMetaDesc& setSymbol(int32_t symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline JudgeNodeMetaDesc& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> actualValue_ = nullptr;
    std::shared_ptr<int32_t> dataType_ = nullptr;
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<int32_t> fieldType_ = nullptr;
    std::shared_ptr<int32_t> symbol_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
