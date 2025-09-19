// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(ThrottlingTimeSecond, throttlingTimeSecond_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(ThrottlingTimeSecond, throttlingTimeSecond_);
    };
    VerifyCheckResultResponseBodyData() = default ;
    VerifyCheckResultResponseBodyData(const VerifyCheckResultResponseBodyData &) = default ;
    VerifyCheckResultResponseBodyData(VerifyCheckResultResponseBodyData &&) = default ;
    VerifyCheckResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckResultResponseBodyData() = default ;
    VerifyCheckResultResponseBodyData& operator=(const VerifyCheckResultResponseBodyData &) = default ;
    VerifyCheckResultResponseBodyData& operator=(VerifyCheckResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operateCode_ != nullptr
        && this->taskId_ != nullptr && this->throttlingTimeSecond_ != nullptr; };
    // operateCode Field Functions 
    bool hasOperateCode() const { return this->operateCode_ != nullptr;};
    void deleteOperateCode() { this->operateCode_ = nullptr;};
    inline string operateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
    inline VerifyCheckResultResponseBodyData& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline VerifyCheckResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // throttlingTimeSecond Field Functions 
    bool hasThrottlingTimeSecond() const { return this->throttlingTimeSecond_ != nullptr;};
    void deleteThrottlingTimeSecond() { this->throttlingTimeSecond_ = nullptr;};
    inline int32_t throttlingTimeSecond() const { DARABONBA_PTR_GET_DEFAULT(throttlingTimeSecond_, 0) };
    inline VerifyCheckResultResponseBodyData& setThrottlingTimeSecond(int32_t throttlingTimeSecond) { DARABONBA_PTR_SET_VALUE(throttlingTimeSecond_, throttlingTimeSecond) };


  protected:
    // The operation code of the cloud service configuration task. Valid values:
    // 
    // *   **Throttling**: frequency limit
    // *   **ActionTrialUnauthorized**: an error that is related to unauthorized operations
    std::shared_ptr<string> operateCode_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The throttling duration. Unit: seconds
    std::shared_ptr<int32_t> throttlingTimeSecond_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
