// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVEMPUTASKSEIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVEMPUTASKSEIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveMpuTaskSeiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveMpuTaskSeiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CustomSei, customSei_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveMpuTaskSeiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CustomSei, customSei_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SetLiveMpuTaskSeiRequest() = default ;
    SetLiveMpuTaskSeiRequest(const SetLiveMpuTaskSeiRequest &) = default ;
    SetLiveMpuTaskSeiRequest(SetLiveMpuTaskSeiRequest &&) = default ;
    SetLiveMpuTaskSeiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveMpuTaskSeiRequest() = default ;
    SetLiveMpuTaskSeiRequest& operator=(const SetLiveMpuTaskSeiRequest &) = default ;
    SetLiveMpuTaskSeiRequest& operator=(SetLiveMpuTaskSeiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->customSei_ == nullptr && return this->taskId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SetLiveMpuTaskSeiRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // customSei Field Functions 
    bool hasCustomSei() const { return this->customSei_ != nullptr;};
    void deleteCustomSei() { this->customSei_ = nullptr;};
    inline string customSei() const { DARABONBA_PTR_GET_DEFAULT(customSei_, "") };
    inline SetLiveMpuTaskSeiRequest& setCustomSei(string customSei) { DARABONBA_PTR_SET_VALUE(customSei_, customSei) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SetLiveMpuTaskSeiRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The application ID.
    // 
    // >  The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The custom SEI.
    // 
    // >  The value is a JSON string that can be up to 4,096 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> customSei_ = nullptr;
    // The task ID.
    // 
    // >  The ID can be up to 55 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
