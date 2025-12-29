// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomHotTopicBroadcastJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomHotTopicBroadcastJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotTopicBroadcastConfig, hotTopicBroadcastConfigShrink_);
      DARABONBA_PTR_TO_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(Topics, topicsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomHotTopicBroadcastJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotTopicBroadcastConfig, hotTopicBroadcastConfigShrink_);
      DARABONBA_PTR_FROM_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(Topics, topicsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitCustomHotTopicBroadcastJobShrinkRequest() = default ;
    SubmitCustomHotTopicBroadcastJobShrinkRequest(const SubmitCustomHotTopicBroadcastJobShrinkRequest &) = default ;
    SubmitCustomHotTopicBroadcastJobShrinkRequest(SubmitCustomHotTopicBroadcastJobShrinkRequest &&) = default ;
    SubmitCustomHotTopicBroadcastJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomHotTopicBroadcastJobShrinkRequest() = default ;
    SubmitCustomHotTopicBroadcastJobShrinkRequest& operator=(const SubmitCustomHotTopicBroadcastJobShrinkRequest &) = default ;
    SubmitCustomHotTopicBroadcastJobShrinkRequest& operator=(SubmitCustomHotTopicBroadcastJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotTopicBroadcastConfigShrink_ == nullptr
        && this->hotTopicVersion_ == nullptr && this->topicsShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // hotTopicBroadcastConfigShrink Field Functions 
    bool hasHotTopicBroadcastConfigShrink() const { return this->hotTopicBroadcastConfigShrink_ != nullptr;};
    void deleteHotTopicBroadcastConfigShrink() { this->hotTopicBroadcastConfigShrink_ = nullptr;};
    inline string getHotTopicBroadcastConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(hotTopicBroadcastConfigShrink_, "") };
    inline SubmitCustomHotTopicBroadcastJobShrinkRequest& setHotTopicBroadcastConfigShrink(string hotTopicBroadcastConfigShrink) { DARABONBA_PTR_SET_VALUE(hotTopicBroadcastConfigShrink_, hotTopicBroadcastConfigShrink) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline SubmitCustomHotTopicBroadcastJobShrinkRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // topicsShrink Field Functions 
    bool hasTopicsShrink() const { return this->topicsShrink_ != nullptr;};
    void deleteTopicsShrink() { this->topicsShrink_ = nullptr;};
    inline string getTopicsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicsShrink_, "") };
    inline SubmitCustomHotTopicBroadcastJobShrinkRequest& setTopicsShrink(string topicsShrink) { DARABONBA_PTR_SET_VALUE(topicsShrink_, topicsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitCustomHotTopicBroadcastJobShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotTopicBroadcastConfigShrink_ {};
    shared_ptr<string> hotTopicVersion_ {};
    shared_ptr<string> topicsShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
