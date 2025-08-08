// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODYGETTASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEUPGRADETASKINFORESPONSEBODYGETTASKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
    };
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult() = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult(const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult &) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult(GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult &&) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult() = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& operator=(const GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult &) = default ;
    GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& operator=(GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->requestId_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr && this->taskInfo_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo) };
    inline Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& setTaskInfo(const Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline GetMcubeUpgradeTaskInfoResponseBodyGetTaskResult& setTaskInfo(Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<Models::GetMcubeUpgradeTaskInfoResponseBodyGetTaskResultTaskInfo> taskInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
