// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONCONDITIONRESPONSEBODYDATAOPERATIONSCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONCONDITIONRESPONSEBODYDATAOPERATIONSCONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageEventOperationConditionResponseBodyDataOperationsConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageEventOperationConditionResponseBodyDataOperationsConditions& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionKey, conditionKey_);
      DARABONBA_PTR_TO_JSON(ConditionName, conditionName_);
      DARABONBA_PTR_TO_JSON(SupportedMisType, supportedMisType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageEventOperationConditionResponseBodyDataOperationsConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionKey, conditionKey_);
      DARABONBA_PTR_FROM_JSON(ConditionName, conditionName_);
      DARABONBA_PTR_FROM_JSON(SupportedMisType, supportedMisType_);
    };
    DescribeImageEventOperationConditionResponseBodyDataOperationsConditions() = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperationsConditions(const DescribeImageEventOperationConditionResponseBodyDataOperationsConditions &) = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperationsConditions(DescribeImageEventOperationConditionResponseBodyDataOperationsConditions &&) = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperationsConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageEventOperationConditionResponseBodyDataOperationsConditions() = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperationsConditions& operator=(const DescribeImageEventOperationConditionResponseBodyDataOperationsConditions &) = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperationsConditions& operator=(DescribeImageEventOperationConditionResponseBodyDataOperationsConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionKey_ == nullptr
        && return this->conditionName_ == nullptr && return this->supportedMisType_ == nullptr; };
    // conditionKey Field Functions 
    bool hasConditionKey() const { return this->conditionKey_ != nullptr;};
    void deleteConditionKey() { this->conditionKey_ = nullptr;};
    inline string conditionKey() const { DARABONBA_PTR_GET_DEFAULT(conditionKey_, "") };
    inline DescribeImageEventOperationConditionResponseBodyDataOperationsConditions& setConditionKey(string conditionKey) { DARABONBA_PTR_SET_VALUE(conditionKey_, conditionKey) };


    // conditionName Field Functions 
    bool hasConditionName() const { return this->conditionName_ != nullptr;};
    void deleteConditionName() { this->conditionName_ = nullptr;};
    inline string conditionName() const { DARABONBA_PTR_GET_DEFAULT(conditionName_, "") };
    inline DescribeImageEventOperationConditionResponseBodyDataOperationsConditions& setConditionName(string conditionName) { DARABONBA_PTR_SET_VALUE(conditionName_, conditionName) };


    // supportedMisType Field Functions 
    bool hasSupportedMisType() const { return this->supportedMisType_ != nullptr;};
    void deleteSupportedMisType() { this->supportedMisType_ = nullptr;};
    inline const vector<string> & supportedMisType() const { DARABONBA_PTR_GET_CONST(supportedMisType_, vector<string>) };
    inline vector<string> supportedMisType() { DARABONBA_PTR_GET(supportedMisType_, vector<string>) };
    inline DescribeImageEventOperationConditionResponseBodyDataOperationsConditions& setSupportedMisType(const vector<string> & supportedMisType) { DARABONBA_PTR_SET_VALUE(supportedMisType_, supportedMisType) };
    inline DescribeImageEventOperationConditionResponseBodyDataOperationsConditions& setSupportedMisType(vector<string> && supportedMisType) { DARABONBA_PTR_SET_RVALUE(supportedMisType_, supportedMisType) };


  protected:
    // The keyword of the condition. Valid values:
    // 
    // *   **MD5**
    // *   **PATH**
    std::shared_ptr<string> conditionKey_ = nullptr;
    // The name of the condition.
    std::shared_ptr<string> conditionName_ = nullptr;
    // The matching types.
    std::shared_ptr<vector<string>> supportedMisType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
