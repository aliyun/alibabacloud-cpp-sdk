// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JUDGENODEMETADESCEXPRESSIONMETADESC_HPP_
#define ALIBABACLOUD_MODELS_JUDGENODEMETADESCEXPRESSIONMETADESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class JudgeNodeMetaDescExpressionMetaDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JudgeNodeMetaDescExpressionMetaDesc& obj) { 
      DARABONBA_PTR_TO_JSON(LeftFieldType, leftFieldType_);
      DARABONBA_PTR_TO_JSON(LeftOperand, leftOperand_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(RightFieldType, rightFieldType_);
      DARABONBA_PTR_TO_JSON(RightOperand, rightOperand_);
      DARABONBA_PTR_TO_JSON(RoundingMode, roundingMode_);
    };
    friend void from_json(const Darabonba::Json& j, JudgeNodeMetaDescExpressionMetaDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(LeftFieldType, leftFieldType_);
      DARABONBA_PTR_FROM_JSON(LeftOperand, leftOperand_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(RightFieldType, rightFieldType_);
      DARABONBA_PTR_FROM_JSON(RightOperand, rightOperand_);
      DARABONBA_PTR_FROM_JSON(RoundingMode, roundingMode_);
    };
    JudgeNodeMetaDescExpressionMetaDesc() = default ;
    JudgeNodeMetaDescExpressionMetaDesc(const JudgeNodeMetaDescExpressionMetaDesc &) = default ;
    JudgeNodeMetaDescExpressionMetaDesc(JudgeNodeMetaDescExpressionMetaDesc &&) = default ;
    JudgeNodeMetaDescExpressionMetaDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JudgeNodeMetaDescExpressionMetaDesc() = default ;
    JudgeNodeMetaDescExpressionMetaDesc& operator=(const JudgeNodeMetaDescExpressionMetaDesc &) = default ;
    JudgeNodeMetaDescExpressionMetaDesc& operator=(JudgeNodeMetaDescExpressionMetaDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->leftFieldType_ == nullptr
        && return this->leftOperand_ == nullptr && return this->operator_ == nullptr && return this->rightFieldType_ == nullptr && return this->rightOperand_ == nullptr && return this->roundingMode_ == nullptr; };
    // leftFieldType Field Functions 
    bool hasLeftFieldType() const { return this->leftFieldType_ != nullptr;};
    void deleteLeftFieldType() { this->leftFieldType_ = nullptr;};
    inline int32_t leftFieldType() const { DARABONBA_PTR_GET_DEFAULT(leftFieldType_, 0) };
    inline JudgeNodeMetaDescExpressionMetaDesc& setLeftFieldType(int32_t leftFieldType) { DARABONBA_PTR_SET_VALUE(leftFieldType_, leftFieldType) };


    // leftOperand Field Functions 
    bool hasLeftOperand() const { return this->leftOperand_ != nullptr;};
    void deleteLeftOperand() { this->leftOperand_ = nullptr;};
    inline string leftOperand() const { DARABONBA_PTR_GET_DEFAULT(leftOperand_, "") };
    inline JudgeNodeMetaDescExpressionMetaDesc& setLeftOperand(string leftOperand) { DARABONBA_PTR_SET_VALUE(leftOperand_, leftOperand) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline JudgeNodeMetaDescExpressionMetaDesc& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // rightFieldType Field Functions 
    bool hasRightFieldType() const { return this->rightFieldType_ != nullptr;};
    void deleteRightFieldType() { this->rightFieldType_ = nullptr;};
    inline int32_t rightFieldType() const { DARABONBA_PTR_GET_DEFAULT(rightFieldType_, 0) };
    inline JudgeNodeMetaDescExpressionMetaDesc& setRightFieldType(int32_t rightFieldType) { DARABONBA_PTR_SET_VALUE(rightFieldType_, rightFieldType) };


    // rightOperand Field Functions 
    bool hasRightOperand() const { return this->rightOperand_ != nullptr;};
    void deleteRightOperand() { this->rightOperand_ = nullptr;};
    inline string rightOperand() const { DARABONBA_PTR_GET_DEFAULT(rightOperand_, "") };
    inline JudgeNodeMetaDescExpressionMetaDesc& setRightOperand(string rightOperand) { DARABONBA_PTR_SET_VALUE(rightOperand_, rightOperand) };


    // roundingMode Field Functions 
    bool hasRoundingMode() const { return this->roundingMode_ != nullptr;};
    void deleteRoundingMode() { this->roundingMode_ = nullptr;};
    inline string roundingMode() const { DARABONBA_PTR_GET_DEFAULT(roundingMode_, "") };
    inline JudgeNodeMetaDescExpressionMetaDesc& setRoundingMode(string roundingMode) { DARABONBA_PTR_SET_VALUE(roundingMode_, roundingMode) };


  protected:
    std::shared_ptr<int32_t> leftFieldType_ = nullptr;
    std::shared_ptr<string> leftOperand_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<int32_t> rightFieldType_ = nullptr;
    std::shared_ptr<string> rightOperand_ = nullptr;
    std::shared_ptr<string> roundingMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
