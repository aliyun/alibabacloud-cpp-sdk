// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOCREATIONTASKRESULTRESPONSEBODYDATAMEDIADETECTIONTASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOCREATIONTASKRESULTRESPONSEBODYDATAMEDIADETECTIONTASKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultDetectionResult.hpp>
#include <alibabacloud/models/GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultFileInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(detectionConclusion, detectionConclusion_);
      DARABONBA_PTR_TO_JSON(detectionResult, detectionResult_);
      DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(detectionConclusion, detectionConclusion_);
      DARABONBA_PTR_FROM_JSON(detectionResult, detectionResult_);
      DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult() = default ;
    GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult(const GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult &) = default ;
    GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult(GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult &&) = default ;
    GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult() = default ;
    GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& operator=(const GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult &) = default ;
    GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& operator=(GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectionConclusion_ == nullptr
        && return this->detectionResult_ == nullptr && return this->fileInfo_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr; };
    // detectionConclusion Field Functions 
    bool hasDetectionConclusion() const { return this->detectionConclusion_ != nullptr;};
    void deleteDetectionConclusion() { this->detectionConclusion_ = nullptr;};
    inline string detectionConclusion() const { DARABONBA_PTR_GET_DEFAULT(detectionConclusion_, "") };
    inline GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& setDetectionConclusion(string detectionConclusion) { DARABONBA_PTR_SET_VALUE(detectionConclusion_, detectionConclusion) };


    // detectionResult Field Functions 
    bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
    void deleteDetectionResult() { this->detectionResult_ = nullptr;};
    inline const Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultDetectionResult & detectionResult() const { DARABONBA_PTR_GET_CONST(detectionResult_, Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultDetectionResult) };
    inline Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultDetectionResult detectionResult() { DARABONBA_PTR_GET(detectionResult_, Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultDetectionResult) };
    inline GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& setDetectionResult(const Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultDetectionResult & detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };
    inline GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& setDetectionResult(Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultDetectionResult && detectionResult) { DARABONBA_PTR_SET_RVALUE(detectionResult_, detectionResult) };


    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultFileInfo & fileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultFileInfo) };
    inline Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultFileInfo fileInfo() { DARABONBA_PTR_GET(fileInfo_, Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultFileInfo) };
    inline GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& setFileInfo(const Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultFileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& setFileInfo(Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultFileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResult& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> detectionConclusion_ = nullptr;
    std::shared_ptr<Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultDetectionResult> detectionResult_ = nullptr;
    std::shared_ptr<Models::GetVideoCreationTaskResultResponseBodyDataMediaDetectionTaskResultFileInfo> fileInfo_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
