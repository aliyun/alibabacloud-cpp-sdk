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
      DARABONBA_PTR_TO_JSON(ExpressionMetaDesc, expressionMetaDesc_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(Symbol, symbol_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, JudgeNodeMetaDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualValue, actualValue_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(ExpressionMetaDesc, expressionMetaDesc_);
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
    class ExpressionMetaDesc : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExpressionMetaDesc& obj) { 
        DARABONBA_PTR_TO_JSON(LeftFieldType, leftFieldType_);
        DARABONBA_PTR_TO_JSON(LeftOperand, leftOperand_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(RightFieldType, rightFieldType_);
        DARABONBA_PTR_TO_JSON(RightOperand, rightOperand_);
        DARABONBA_PTR_TO_JSON(RoundingMode, roundingMode_);
      };
      friend void from_json(const Darabonba::Json& j, ExpressionMetaDesc& obj) { 
        DARABONBA_PTR_FROM_JSON(LeftFieldType, leftFieldType_);
        DARABONBA_PTR_FROM_JSON(LeftOperand, leftOperand_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(RightFieldType, rightFieldType_);
        DARABONBA_PTR_FROM_JSON(RightOperand, rightOperand_);
        DARABONBA_PTR_FROM_JSON(RoundingMode, roundingMode_);
      };
      ExpressionMetaDesc() = default ;
      ExpressionMetaDesc(const ExpressionMetaDesc &) = default ;
      ExpressionMetaDesc(ExpressionMetaDesc &&) = default ;
      ExpressionMetaDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExpressionMetaDesc() = default ;
      ExpressionMetaDesc& operator=(const ExpressionMetaDesc &) = default ;
      ExpressionMetaDesc& operator=(ExpressionMetaDesc &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->leftFieldType_ == nullptr
        && this->leftOperand_ == nullptr && this->operator_ == nullptr && this->rightFieldType_ == nullptr && this->rightOperand_ == nullptr && this->roundingMode_ == nullptr; };
      // leftFieldType Field Functions 
      bool hasLeftFieldType() const { return this->leftFieldType_ != nullptr;};
      void deleteLeftFieldType() { this->leftFieldType_ = nullptr;};
      inline int32_t getLeftFieldType() const { DARABONBA_PTR_GET_DEFAULT(leftFieldType_, 0) };
      inline ExpressionMetaDesc& setLeftFieldType(int32_t leftFieldType) { DARABONBA_PTR_SET_VALUE(leftFieldType_, leftFieldType) };


      // leftOperand Field Functions 
      bool hasLeftOperand() const { return this->leftOperand_ != nullptr;};
      void deleteLeftOperand() { this->leftOperand_ = nullptr;};
      inline string getLeftOperand() const { DARABONBA_PTR_GET_DEFAULT(leftOperand_, "") };
      inline ExpressionMetaDesc& setLeftOperand(string leftOperand) { DARABONBA_PTR_SET_VALUE(leftOperand_, leftOperand) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline ExpressionMetaDesc& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // rightFieldType Field Functions 
      bool hasRightFieldType() const { return this->rightFieldType_ != nullptr;};
      void deleteRightFieldType() { this->rightFieldType_ = nullptr;};
      inline int32_t getRightFieldType() const { DARABONBA_PTR_GET_DEFAULT(rightFieldType_, 0) };
      inline ExpressionMetaDesc& setRightFieldType(int32_t rightFieldType) { DARABONBA_PTR_SET_VALUE(rightFieldType_, rightFieldType) };


      // rightOperand Field Functions 
      bool hasRightOperand() const { return this->rightOperand_ != nullptr;};
      void deleteRightOperand() { this->rightOperand_ = nullptr;};
      inline string getRightOperand() const { DARABONBA_PTR_GET_DEFAULT(rightOperand_, "") };
      inline ExpressionMetaDesc& setRightOperand(string rightOperand) { DARABONBA_PTR_SET_VALUE(rightOperand_, rightOperand) };


      // roundingMode Field Functions 
      bool hasRoundingMode() const { return this->roundingMode_ != nullptr;};
      void deleteRoundingMode() { this->roundingMode_ = nullptr;};
      inline string getRoundingMode() const { DARABONBA_PTR_GET_DEFAULT(roundingMode_, "") };
      inline ExpressionMetaDesc& setRoundingMode(string roundingMode) { DARABONBA_PTR_SET_VALUE(roundingMode_, roundingMode) };


    protected:
      shared_ptr<int32_t> leftFieldType_ {};
      shared_ptr<string> leftOperand_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<int32_t> rightFieldType_ {};
      shared_ptr<string> rightOperand_ {};
      shared_ptr<string> roundingMode_ {};
    };

    virtual bool empty() const override { return this->actualValue_ == nullptr
        && this->dataType_ == nullptr && this->expressionMetaDesc_ == nullptr && this->field_ == nullptr && this->fieldType_ == nullptr && this->symbol_ == nullptr
        && this->value_ == nullptr; };
    // actualValue Field Functions 
    bool hasActualValue() const { return this->actualValue_ != nullptr;};
    void deleteActualValue() { this->actualValue_ = nullptr;};
    inline string getActualValue() const { DARABONBA_PTR_GET_DEFAULT(actualValue_, "") };
    inline JudgeNodeMetaDesc& setActualValue(string actualValue) { DARABONBA_PTR_SET_VALUE(actualValue_, actualValue) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int32_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0) };
    inline JudgeNodeMetaDesc& setDataType(int32_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // expressionMetaDesc Field Functions 
    bool hasExpressionMetaDesc() const { return this->expressionMetaDesc_ != nullptr;};
    void deleteExpressionMetaDesc() { this->expressionMetaDesc_ = nullptr;};
    inline const JudgeNodeMetaDesc::ExpressionMetaDesc & getExpressionMetaDesc() const { DARABONBA_PTR_GET_CONST(expressionMetaDesc_, JudgeNodeMetaDesc::ExpressionMetaDesc) };
    inline JudgeNodeMetaDesc::ExpressionMetaDesc getExpressionMetaDesc() { DARABONBA_PTR_GET(expressionMetaDesc_, JudgeNodeMetaDesc::ExpressionMetaDesc) };
    inline JudgeNodeMetaDesc& setExpressionMetaDesc(const JudgeNodeMetaDesc::ExpressionMetaDesc & expressionMetaDesc) { DARABONBA_PTR_SET_VALUE(expressionMetaDesc_, expressionMetaDesc) };
    inline JudgeNodeMetaDesc& setExpressionMetaDesc(JudgeNodeMetaDesc::ExpressionMetaDesc && expressionMetaDesc) { DARABONBA_PTR_SET_RVALUE(expressionMetaDesc_, expressionMetaDesc) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline JudgeNodeMetaDesc& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline int32_t getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, 0) };
    inline JudgeNodeMetaDesc& setFieldType(int32_t fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline int32_t getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, 0) };
    inline JudgeNodeMetaDesc& setSymbol(int32_t symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline JudgeNodeMetaDesc& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> actualValue_ {};
    shared_ptr<int32_t> dataType_ {};
    shared_ptr<JudgeNodeMetaDesc::ExpressionMetaDesc> expressionMetaDesc_ {};
    shared_ptr<string> field_ {};
    shared_ptr<int32_t> fieldType_ {};
    shared_ptr<int32_t> symbol_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
