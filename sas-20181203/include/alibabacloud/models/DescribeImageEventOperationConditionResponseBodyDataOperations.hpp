// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONCONDITIONRESPONSEBODYDATAOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONCONDITIONRESPONSEBODYDATAOPERATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageEventOperationConditionResponseBodyDataOperationsConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageEventOperationConditionResponseBodyDataOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageEventOperationConditionResponseBodyDataOperations& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageEventOperationConditionResponseBodyDataOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
    };
    DescribeImageEventOperationConditionResponseBodyDataOperations() = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperations(const DescribeImageEventOperationConditionResponseBodyDataOperations &) = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperations(DescribeImageEventOperationConditionResponseBodyDataOperations &&) = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageEventOperationConditionResponseBodyDataOperations() = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperations& operator=(const DescribeImageEventOperationConditionResponseBodyDataOperations &) = default ;
    DescribeImageEventOperationConditionResponseBodyDataOperations& operator=(DescribeImageEventOperationConditionResponseBodyDataOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->operationCode_ != nullptr && this->operationName_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperationsConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperationsConditions>) };
    inline vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperationsConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperationsConditions>) };
    inline DescribeImageEventOperationConditionResponseBodyDataOperations& setConditions(const vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperationsConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeImageEventOperationConditionResponseBodyDataOperations& setConditions(vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperationsConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string operationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline DescribeImageEventOperationConditionResponseBodyDataOperations& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string operationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline DescribeImageEventOperationConditionResponseBodyDataOperations& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


  protected:
    // The rule conditions.
    std::shared_ptr<vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperationsConditions>> conditions_ = nullptr;
    // The operation code.
    // 
    // *   Only **whitelist** may be returned, which indicates that the alert event is added to the whitelist.
    std::shared_ptr<string> operationCode_ = nullptr;
    // The name of the operation.
    std::shared_ptr<string> operationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
