// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDETECTIONTASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageDetectionTaskResultResponseBodyDataDetectionResult.hpp>
#include <alibabacloud/models/GetImageDetectionTaskResultResponseBodyDataFileInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetImageDetectionTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDetectionTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(detectionConclusion, detectionConclusion_);
      DARABONBA_PTR_TO_JSON(detectionResult, detectionResult_);
      DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDetectionTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(detectionConclusion, detectionConclusion_);
      DARABONBA_PTR_FROM_JSON(detectionResult, detectionResult_);
      DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    GetImageDetectionTaskResultResponseBodyData() = default ;
    GetImageDetectionTaskResultResponseBodyData(const GetImageDetectionTaskResultResponseBodyData &) = default ;
    GetImageDetectionTaskResultResponseBodyData(GetImageDetectionTaskResultResponseBodyData &&) = default ;
    GetImageDetectionTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDetectionTaskResultResponseBodyData() = default ;
    GetImageDetectionTaskResultResponseBodyData& operator=(const GetImageDetectionTaskResultResponseBodyData &) = default ;
    GetImageDetectionTaskResultResponseBodyData& operator=(GetImageDetectionTaskResultResponseBodyData &&) = default ;
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
    inline GetImageDetectionTaskResultResponseBodyData& setDetectionConclusion(string detectionConclusion) { DARABONBA_PTR_SET_VALUE(detectionConclusion_, detectionConclusion) };


    // detectionResult Field Functions 
    bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
    void deleteDetectionResult() { this->detectionResult_ = nullptr;};
    inline const Models::GetImageDetectionTaskResultResponseBodyDataDetectionResult & detectionResult() const { DARABONBA_PTR_GET_CONST(detectionResult_, Models::GetImageDetectionTaskResultResponseBodyDataDetectionResult) };
    inline Models::GetImageDetectionTaskResultResponseBodyDataDetectionResult detectionResult() { DARABONBA_PTR_GET(detectionResult_, Models::GetImageDetectionTaskResultResponseBodyDataDetectionResult) };
    inline GetImageDetectionTaskResultResponseBodyData& setDetectionResult(const Models::GetImageDetectionTaskResultResponseBodyDataDetectionResult & detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };
    inline GetImageDetectionTaskResultResponseBodyData& setDetectionResult(Models::GetImageDetectionTaskResultResponseBodyDataDetectionResult && detectionResult) { DARABONBA_PTR_SET_RVALUE(detectionResult_, detectionResult) };


    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const Models::GetImageDetectionTaskResultResponseBodyDataFileInfo & fileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, Models::GetImageDetectionTaskResultResponseBodyDataFileInfo) };
    inline Models::GetImageDetectionTaskResultResponseBodyDataFileInfo fileInfo() { DARABONBA_PTR_GET(fileInfo_, Models::GetImageDetectionTaskResultResponseBodyDataFileInfo) };
    inline GetImageDetectionTaskResultResponseBodyData& setFileInfo(const Models::GetImageDetectionTaskResultResponseBodyDataFileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline GetImageDetectionTaskResultResponseBodyData& setFileInfo(Models::GetImageDetectionTaskResultResponseBodyDataFileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetImageDetectionTaskResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetImageDetectionTaskResultResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> detectionConclusion_ = nullptr;
    std::shared_ptr<Models::GetImageDetectionTaskResultResponseBodyDataDetectionResult> detectionResult_ = nullptr;
    std::shared_ptr<Models::GetImageDetectionTaskResultResponseBodyDataFileInfo> fileInfo_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
