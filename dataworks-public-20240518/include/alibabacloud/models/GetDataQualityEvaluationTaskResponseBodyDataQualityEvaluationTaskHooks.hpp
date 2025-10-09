// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODYDATAQUALITYEVALUATIONTASKHOOKS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODYDATAQUALITYEVALUATIONTASKHOOKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks() = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks(const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks &) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks(GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks &&) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks() = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks& operator=(const GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks &) = default ;
    GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks& operator=(GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->type_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataQualityEvaluationTaskResponseBodyDataQualityEvaluationTaskHooks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The hook trigger condition. When this condition is met, the hook action is triggered. Only two conditional expressions are supported:
    // 
    // *   Specify only one group of rule strength type and rule check status, such as `${severity} == "High" AND ${status} == "Critical"`. In this expression, the hook trigger condition is met if severity is High and status is Critical.
    // *   Specify multiple groups of rule strength types and rule check status, such as `(${severity} == "High" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`. In this expression, the hook trigger condition is met if severity is High and status is Critical, severity is Normal and status is Critical, or severity is Normal and status is Error. The enumeration of severity in a conditional expression is the same as the enumeration of severity in DataQualityRule. The enumeration of status in a conditional expression is the same as the enumeration of status in DataQualityResult.
    std::shared_ptr<string> condition_ = nullptr;
    // The hook type. Only one hook type is supported.
    // 
    // *   BlockTaskInstance: Blocks the running of scheduling tasks. A monitor is triggered by scheduling tasks. After a monitor finishes running, the monitor determines whether to block the running of scheduling tasks based on the hook condition.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
