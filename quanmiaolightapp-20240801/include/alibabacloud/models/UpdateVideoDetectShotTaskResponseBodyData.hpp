// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEODETECTSHOTTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEODETECTSHOTTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class UpdateVideoDetectShotTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoDetectShotTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(taskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoDetectShotTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(taskErrorMessage, taskErrorMessage_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    UpdateVideoDetectShotTaskResponseBodyData() = default ;
    UpdateVideoDetectShotTaskResponseBodyData(const UpdateVideoDetectShotTaskResponseBodyData &) = default ;
    UpdateVideoDetectShotTaskResponseBodyData(UpdateVideoDetectShotTaskResponseBodyData &&) = default ;
    UpdateVideoDetectShotTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoDetectShotTaskResponseBodyData() = default ;
    UpdateVideoDetectShotTaskResponseBodyData& operator=(const UpdateVideoDetectShotTaskResponseBodyData &) = default ;
    UpdateVideoDetectShotTaskResponseBodyData& operator=(UpdateVideoDetectShotTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskErrorMessage_ == nullptr
        && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr; };
    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline UpdateVideoDetectShotTaskResponseBodyData& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateVideoDetectShotTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline UpdateVideoDetectShotTaskResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
