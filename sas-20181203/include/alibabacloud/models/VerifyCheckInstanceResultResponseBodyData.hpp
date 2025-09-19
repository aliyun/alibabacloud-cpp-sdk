// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKINSTANCERESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKINSTANCERESULTRESPONSEBODYDATA_HPP_
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
  class VerifyCheckInstanceResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckInstanceResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailInstances, failInstances_);
      DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckInstanceResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailInstances, failInstances_);
      DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    VerifyCheckInstanceResultResponseBodyData() = default ;
    VerifyCheckInstanceResultResponseBodyData(const VerifyCheckInstanceResultResponseBodyData &) = default ;
    VerifyCheckInstanceResultResponseBodyData(VerifyCheckInstanceResultResponseBodyData &&) = default ;
    VerifyCheckInstanceResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckInstanceResultResponseBodyData() = default ;
    VerifyCheckInstanceResultResponseBodyData& operator=(const VerifyCheckInstanceResultResponseBodyData &) = default ;
    VerifyCheckInstanceResultResponseBodyData& operator=(VerifyCheckInstanceResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failInstances_ != nullptr
        && this->operateCode_ != nullptr && this->taskId_ != nullptr; };
    // failInstances Field Functions 
    bool hasFailInstances() const { return this->failInstances_ != nullptr;};
    void deleteFailInstances() { this->failInstances_ = nullptr;};
    inline const vector<string> & failInstances() const { DARABONBA_PTR_GET_CONST(failInstances_, vector<string>) };
    inline vector<string> failInstances() { DARABONBA_PTR_GET(failInstances_, vector<string>) };
    inline VerifyCheckInstanceResultResponseBodyData& setFailInstances(const vector<string> & failInstances) { DARABONBA_PTR_SET_VALUE(failInstances_, failInstances) };
    inline VerifyCheckInstanceResultResponseBodyData& setFailInstances(vector<string> && failInstances) { DARABONBA_PTR_SET_RVALUE(failInstances_, failInstances) };


    // operateCode Field Functions 
    bool hasOperateCode() const { return this->operateCode_ != nullptr;};
    void deleteOperateCode() { this->operateCode_ = nullptr;};
    inline string operateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
    inline VerifyCheckInstanceResultResponseBodyData& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline VerifyCheckInstanceResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // An array consisting of instances that failed the check.
    std::shared_ptr<vector<string>> failInstances_ = nullptr;
    // The operation code of the task that checks the configurations of cloud services. Valid values:
    // 
    // *   **Throttling**
    // *   **ActionTrialUnauthorized**
    std::shared_ptr<string> operateCode_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
