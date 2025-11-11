// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTIMELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTIMELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncCreateClipsTimeLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateClipsTimeLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalContent, additionalContent_);
      DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
      DARABONBA_PTR_TO_JSON(NoRefVideo, noRefVideo_);
      DARABONBA_PTR_TO_JSON(ProcessPrompt, processPrompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateClipsTimeLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalContent, additionalContent_);
      DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
      DARABONBA_PTR_FROM_JSON(NoRefVideo, noRefVideo_);
      DARABONBA_PTR_FROM_JSON(ProcessPrompt, processPrompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncCreateClipsTimeLineRequest() = default ;
    AsyncCreateClipsTimeLineRequest(const AsyncCreateClipsTimeLineRequest &) = default ;
    AsyncCreateClipsTimeLineRequest(AsyncCreateClipsTimeLineRequest &&) = default ;
    AsyncCreateClipsTimeLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateClipsTimeLineRequest() = default ;
    AsyncCreateClipsTimeLineRequest& operator=(const AsyncCreateClipsTimeLineRequest &) = default ;
    AsyncCreateClipsTimeLineRequest& operator=(AsyncCreateClipsTimeLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalContent_ == nullptr
        && return this->customContent_ == nullptr && return this->noRefVideo_ == nullptr && return this->processPrompt_ == nullptr && return this->taskId_ == nullptr && return this->workspaceId_ == nullptr; };
    // additionalContent Field Functions 
    bool hasAdditionalContent() const { return this->additionalContent_ != nullptr;};
    void deleteAdditionalContent() { this->additionalContent_ = nullptr;};
    inline string additionalContent() const { DARABONBA_PTR_GET_DEFAULT(additionalContent_, "") };
    inline AsyncCreateClipsTimeLineRequest& setAdditionalContent(string additionalContent) { DARABONBA_PTR_SET_VALUE(additionalContent_, additionalContent) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string customContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline AsyncCreateClipsTimeLineRequest& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // noRefVideo Field Functions 
    bool hasNoRefVideo() const { return this->noRefVideo_ != nullptr;};
    void deleteNoRefVideo() { this->noRefVideo_ = nullptr;};
    inline bool noRefVideo() const { DARABONBA_PTR_GET_DEFAULT(noRefVideo_, false) };
    inline AsyncCreateClipsTimeLineRequest& setNoRefVideo(bool noRefVideo) { DARABONBA_PTR_SET_VALUE(noRefVideo_, noRefVideo) };


    // processPrompt Field Functions 
    bool hasProcessPrompt() const { return this->processPrompt_ != nullptr;};
    void deleteProcessPrompt() { this->processPrompt_ = nullptr;};
    inline string processPrompt() const { DARABONBA_PTR_GET_DEFAULT(processPrompt_, "") };
    inline AsyncCreateClipsTimeLineRequest& setProcessPrompt(string processPrompt) { DARABONBA_PTR_SET_VALUE(processPrompt_, processPrompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncCreateClipsTimeLineRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncCreateClipsTimeLineRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> additionalContent_ = nullptr;
    std::shared_ptr<string> customContent_ = nullptr;
    std::shared_ptr<bool> noRefVideo_ = nullptr;
    std::shared_ptr<string> processPrompt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
