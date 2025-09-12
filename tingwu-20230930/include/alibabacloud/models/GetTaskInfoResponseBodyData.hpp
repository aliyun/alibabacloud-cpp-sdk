// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTaskInfoResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class GetTaskInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OutputMp3Path, outputMp3Path_);
      DARABONBA_PTR_TO_JSON(OutputMp4Path, outputMp4Path_);
      DARABONBA_PTR_TO_JSON(OutputSpectrumPath, outputSpectrumPath_);
      DARABONBA_PTR_TO_JSON(OutputThumbnailPath, outputThumbnailPath_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OutputMp3Path, outputMp3Path_);
      DARABONBA_PTR_FROM_JSON(OutputMp4Path, outputMp4Path_);
      DARABONBA_PTR_FROM_JSON(OutputSpectrumPath, outputSpectrumPath_);
      DARABONBA_PTR_FROM_JSON(OutputThumbnailPath, outputThumbnailPath_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetTaskInfoResponseBodyData() = default ;
    GetTaskInfoResponseBodyData(const GetTaskInfoResponseBodyData &) = default ;
    GetTaskInfoResponseBodyData(GetTaskInfoResponseBodyData &&) = default ;
    GetTaskInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInfoResponseBodyData() = default ;
    GetTaskInfoResponseBodyData& operator=(const GetTaskInfoResponseBodyData &) = default ;
    GetTaskInfoResponseBodyData& operator=(GetTaskInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->outputMp3Path_ != nullptr && this->outputMp4Path_ != nullptr && this->outputSpectrumPath_ != nullptr && this->outputThumbnailPath_ != nullptr
        && this->result_ != nullptr && this->taskId_ != nullptr && this->taskKey_ != nullptr && this->taskStatus_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTaskInfoResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTaskInfoResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // outputMp3Path Field Functions 
    bool hasOutputMp3Path() const { return this->outputMp3Path_ != nullptr;};
    void deleteOutputMp3Path() { this->outputMp3Path_ = nullptr;};
    inline string outputMp3Path() const { DARABONBA_PTR_GET_DEFAULT(outputMp3Path_, "") };
    inline GetTaskInfoResponseBodyData& setOutputMp3Path(string outputMp3Path) { DARABONBA_PTR_SET_VALUE(outputMp3Path_, outputMp3Path) };


    // outputMp4Path Field Functions 
    bool hasOutputMp4Path() const { return this->outputMp4Path_ != nullptr;};
    void deleteOutputMp4Path() { this->outputMp4Path_ = nullptr;};
    inline string outputMp4Path() const { DARABONBA_PTR_GET_DEFAULT(outputMp4Path_, "") };
    inline GetTaskInfoResponseBodyData& setOutputMp4Path(string outputMp4Path) { DARABONBA_PTR_SET_VALUE(outputMp4Path_, outputMp4Path) };


    // outputSpectrumPath Field Functions 
    bool hasOutputSpectrumPath() const { return this->outputSpectrumPath_ != nullptr;};
    void deleteOutputSpectrumPath() { this->outputSpectrumPath_ = nullptr;};
    inline string outputSpectrumPath() const { DARABONBA_PTR_GET_DEFAULT(outputSpectrumPath_, "") };
    inline GetTaskInfoResponseBodyData& setOutputSpectrumPath(string outputSpectrumPath) { DARABONBA_PTR_SET_VALUE(outputSpectrumPath_, outputSpectrumPath) };


    // outputThumbnailPath Field Functions 
    bool hasOutputThumbnailPath() const { return this->outputThumbnailPath_ != nullptr;};
    void deleteOutputThumbnailPath() { this->outputThumbnailPath_ = nullptr;};
    inline string outputThumbnailPath() const { DARABONBA_PTR_GET_DEFAULT(outputThumbnailPath_, "") };
    inline GetTaskInfoResponseBodyData& setOutputThumbnailPath(string outputThumbnailPath) { DARABONBA_PTR_SET_VALUE(outputThumbnailPath_, outputThumbnailPath) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::GetTaskInfoResponseBodyDataResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::GetTaskInfoResponseBodyDataResult) };
    inline Models::GetTaskInfoResponseBodyDataResult result() { DARABONBA_PTR_GET(result_, Models::GetTaskInfoResponseBodyDataResult) };
    inline GetTaskInfoResponseBodyData& setResult(const Models::GetTaskInfoResponseBodyDataResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetTaskInfoResponseBodyData& setResult(Models::GetTaskInfoResponseBodyDataResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskInfoResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskKey Field Functions 
    bool hasTaskKey() const { return this->taskKey_ != nullptr;};
    void deleteTaskKey() { this->taskKey_ = nullptr;};
    inline string taskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
    inline GetTaskInfoResponseBodyData& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetTaskInfoResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> outputMp3Path_ = nullptr;
    std::shared_ptr<string> outputMp4Path_ = nullptr;
    std::shared_ptr<string> outputSpectrumPath_ = nullptr;
    std::shared_ptr<string> outputThumbnailPath_ = nullptr;
    std::shared_ptr<Models::GetTaskInfoResponseBodyDataResult> result_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskKey_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
