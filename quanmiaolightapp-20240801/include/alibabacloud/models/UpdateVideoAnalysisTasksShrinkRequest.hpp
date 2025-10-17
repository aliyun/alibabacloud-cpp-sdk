// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEOANALYSISTASKSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEOANALYSISTASKSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class UpdateVideoAnalysisTasksShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoAnalysisTasksShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskIds, taskIdsShrink_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoAnalysisTasksShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskIds, taskIdsShrink_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    UpdateVideoAnalysisTasksShrinkRequest() = default ;
    UpdateVideoAnalysisTasksShrinkRequest(const UpdateVideoAnalysisTasksShrinkRequest &) = default ;
    UpdateVideoAnalysisTasksShrinkRequest(UpdateVideoAnalysisTasksShrinkRequest &&) = default ;
    UpdateVideoAnalysisTasksShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoAnalysisTasksShrinkRequest() = default ;
    UpdateVideoAnalysisTasksShrinkRequest& operator=(const UpdateVideoAnalysisTasksShrinkRequest &) = default ;
    UpdateVideoAnalysisTasksShrinkRequest& operator=(UpdateVideoAnalysisTasksShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskIdsShrink_ == nullptr
        && return this->taskStatus_ == nullptr; };
    // taskIdsShrink Field Functions 
    bool hasTaskIdsShrink() const { return this->taskIdsShrink_ != nullptr;};
    void deleteTaskIdsShrink() { this->taskIdsShrink_ = nullptr;};
    inline string taskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdsShrink_, "") };
    inline UpdateVideoAnalysisTasksShrinkRequest& setTaskIdsShrink(string taskIdsShrink) { DARABONBA_PTR_SET_VALUE(taskIdsShrink_, taskIdsShrink) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline UpdateVideoAnalysisTasksShrinkRequest& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> taskIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
