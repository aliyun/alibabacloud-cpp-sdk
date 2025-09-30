// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEOANALYSISTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEOANALYSISTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class UpdateVideoAnalysisTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoAnalysisTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(taskErrorCode, taskErrorCode_);
      DARABONBA_PTR_TO_JSON(taskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoAnalysisTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(taskErrorCode, taskErrorCode_);
      DARABONBA_PTR_FROM_JSON(taskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    UpdateVideoAnalysisTasksResponseBodyData() = default ;
    UpdateVideoAnalysisTasksResponseBodyData(const UpdateVideoAnalysisTasksResponseBodyData &) = default ;
    UpdateVideoAnalysisTasksResponseBodyData(UpdateVideoAnalysisTasksResponseBodyData &&) = default ;
    UpdateVideoAnalysisTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoAnalysisTasksResponseBodyData() = default ;
    UpdateVideoAnalysisTasksResponseBodyData& operator=(const UpdateVideoAnalysisTasksResponseBodyData &) = default ;
    UpdateVideoAnalysisTasksResponseBodyData& operator=(UpdateVideoAnalysisTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskErrorCode_ != nullptr
        && this->taskErrorMessage_ != nullptr && this->taskId_ != nullptr && this->taskStatus_ != nullptr; };
    // taskErrorCode Field Functions 
    bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
    void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
    inline string taskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
    inline UpdateVideoAnalysisTasksResponseBodyData& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline UpdateVideoAnalysisTasksResponseBodyData& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateVideoAnalysisTasksResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline UpdateVideoAnalysisTasksResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> taskErrorCode_ = nullptr;
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
