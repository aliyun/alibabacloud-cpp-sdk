// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODYDATASUPPORTOPERATORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODYDATASUPPORTOPERATORS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& obj) { 
      DARABONBA_PTR_TO_JSON(HasRightValue, hasRightValue_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OperatorDescCn, operatorDescCn_);
      DARABONBA_PTR_TO_JSON(OperatorDescEn, operatorDescEn_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(SupportDataType, supportDataType_);
      DARABONBA_PTR_TO_JSON(SupportTag, supportTag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& obj) { 
      DARABONBA_PTR_FROM_JSON(HasRightValue, hasRightValue_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OperatorDescCn, operatorDescCn_);
      DARABONBA_PTR_FROM_JSON(OperatorDescEn, operatorDescEn_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(SupportDataType, supportDataType_);
      DARABONBA_PTR_FROM_JSON(SupportTag, supportTag_);
    };
    DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators() = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators(const DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators(DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators &&) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators() = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& operator=(const DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& operator=(DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasRightValue_ != nullptr
        && this->index_ != nullptr && this->operator_ != nullptr && this->operatorDescCn_ != nullptr && this->operatorDescEn_ != nullptr && this->operatorName_ != nullptr
        && this->supportDataType_ != nullptr && this->supportTag_ != nullptr; };
    // hasRightValue Field Functions 
    bool hasHasRightValue() const { return this->hasRightValue_ != nullptr;};
    void deleteHasRightValue() { this->hasRightValue_ = nullptr;};
    inline bool hasRightValue() const { DARABONBA_PTR_GET_DEFAULT(hasRightValue_, false) };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setHasRightValue(bool hasRightValue) { DARABONBA_PTR_SET_VALUE(hasRightValue_, hasRightValue) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorDescCn Field Functions 
    bool hasOperatorDescCn() const { return this->operatorDescCn_ != nullptr;};
    void deleteOperatorDescCn() { this->operatorDescCn_ = nullptr;};
    inline string operatorDescCn() const { DARABONBA_PTR_GET_DEFAULT(operatorDescCn_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setOperatorDescCn(string operatorDescCn) { DARABONBA_PTR_SET_VALUE(operatorDescCn_, operatorDescCn) };


    // operatorDescEn Field Functions 
    bool hasOperatorDescEn() const { return this->operatorDescEn_ != nullptr;};
    void deleteOperatorDescEn() { this->operatorDescEn_ = nullptr;};
    inline string operatorDescEn() const { DARABONBA_PTR_GET_DEFAULT(operatorDescEn_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setOperatorDescEn(string operatorDescEn) { DARABONBA_PTR_SET_VALUE(operatorDescEn_, operatorDescEn) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // supportDataType Field Functions 
    bool hasSupportDataType() const { return this->supportDataType_ != nullptr;};
    void deleteSupportDataType() { this->supportDataType_ = nullptr;};
    inline string supportDataType() const { DARABONBA_PTR_GET_DEFAULT(supportDataType_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setSupportDataType(string supportDataType) { DARABONBA_PTR_SET_VALUE(supportDataType_, supportDataType) };


    // supportTag Field Functions 
    bool hasSupportTag() const { return this->supportTag_ != nullptr;};
    void deleteSupportTag() { this->supportTag_ = nullptr;};
    inline const vector<string> & supportTag() const { DARABONBA_PTR_GET_CONST(supportTag_, vector<string>) };
    inline vector<string> supportTag() { DARABONBA_PTR_GET(supportTag_, vector<string>) };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setSupportTag(const vector<string> & supportTag) { DARABONBA_PTR_SET_VALUE(supportTag_, supportTag) };
    inline DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators& setSupportTag(vector<string> && supportTag) { DARABONBA_PTR_SET_RVALUE(supportTag_, supportTag) };


  protected:
    // Indicates whether the right operand is required. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> hasRightValue_ = nullptr;
    // The position of the operator in the operator list.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The operator.
    std::shared_ptr<string> operator_ = nullptr;
    // The description of the operator in Chinese.
    std::shared_ptr<string> operatorDescCn_ = nullptr;
    // The description of the operator in English.
    std::shared_ptr<string> operatorDescEn_ = nullptr;
    // The name of the operator.
    std::shared_ptr<string> operatorName_ = nullptr;
    // The data types that are supported by the operator. The data types are separated by commas (,).
    std::shared_ptr<string> supportDataType_ = nullptr;
    // The scenarios that are supported by the operator. Multiple scenarios are separated by commas (,), such as aggregation scenarios. By default, this parameter is empty.
    std::shared_ptr<vector<string>> supportTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
