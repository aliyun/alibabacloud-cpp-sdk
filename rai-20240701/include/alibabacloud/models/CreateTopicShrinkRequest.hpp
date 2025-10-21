// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOPICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOPICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreateTopicShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTopicShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BodyData, bodyDataShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTopicShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyData, bodyDataShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateTopicShrinkRequest() = default ;
    CreateTopicShrinkRequest(const CreateTopicShrinkRequest &) = default ;
    CreateTopicShrinkRequest(CreateTopicShrinkRequest &&) = default ;
    CreateTopicShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTopicShrinkRequest() = default ;
    CreateTopicShrinkRequest& operator=(const CreateTopicShrinkRequest &) = default ;
    CreateTopicShrinkRequest& operator=(CreateTopicShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyDataShrink_ == nullptr
        && return this->regionId_ == nullptr && return this->topicDefinition_ == nullptr && return this->topicName_ == nullptr && return this->workspaceId_ == nullptr; };
    // bodyDataShrink Field Functions 
    bool hasBodyDataShrink() const { return this->bodyDataShrink_ != nullptr;};
    void deleteBodyDataShrink() { this->bodyDataShrink_ = nullptr;};
    inline string bodyDataShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyDataShrink_, "") };
    inline CreateTopicShrinkRequest& setBodyDataShrink(string bodyDataShrink) { DARABONBA_PTR_SET_VALUE(bodyDataShrink_, bodyDataShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTopicShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicDefinition Field Functions 
    bool hasTopicDefinition() const { return this->topicDefinition_ != nullptr;};
    void deleteTopicDefinition() { this->topicDefinition_ = nullptr;};
    inline string topicDefinition() const { DARABONBA_PTR_GET_DEFAULT(topicDefinition_, "") };
    inline CreateTopicShrinkRequest& setTopicDefinition(string topicDefinition) { DARABONBA_PTR_SET_VALUE(topicDefinition_, topicDefinition) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline CreateTopicShrinkRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline CreateTopicShrinkRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> bodyDataShrink_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> topicDefinition_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
