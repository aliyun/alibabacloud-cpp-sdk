// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOPICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOPICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateTopicShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTopicShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BodyData, bodyDataShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTopicShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyData, bodyDataShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    UpdateTopicShrinkRequest() = default ;
    UpdateTopicShrinkRequest(const UpdateTopicShrinkRequest &) = default ;
    UpdateTopicShrinkRequest(UpdateTopicShrinkRequest &&) = default ;
    UpdateTopicShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTopicShrinkRequest() = default ;
    UpdateTopicShrinkRequest& operator=(const UpdateTopicShrinkRequest &) = default ;
    UpdateTopicShrinkRequest& operator=(UpdateTopicShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyDataShrink_ == nullptr
        && return this->regionId_ == nullptr && return this->topicDefinition_ == nullptr && return this->topicId_ == nullptr && return this->topicName_ == nullptr; };
    // bodyDataShrink Field Functions 
    bool hasBodyDataShrink() const { return this->bodyDataShrink_ != nullptr;};
    void deleteBodyDataShrink() { this->bodyDataShrink_ = nullptr;};
    inline string bodyDataShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyDataShrink_, "") };
    inline UpdateTopicShrinkRequest& setBodyDataShrink(string bodyDataShrink) { DARABONBA_PTR_SET_VALUE(bodyDataShrink_, bodyDataShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTopicShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicDefinition Field Functions 
    bool hasTopicDefinition() const { return this->topicDefinition_ != nullptr;};
    void deleteTopicDefinition() { this->topicDefinition_ = nullptr;};
    inline string topicDefinition() const { DARABONBA_PTR_GET_DEFAULT(topicDefinition_, "") };
    inline UpdateTopicShrinkRequest& setTopicDefinition(string topicDefinition) { DARABONBA_PTR_SET_VALUE(topicDefinition_, topicDefinition) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline int64_t topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
    inline UpdateTopicShrinkRequest& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline UpdateTopicShrinkRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<string> bodyDataShrink_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> topicDefinition_ = nullptr;
    std::shared_ptr<int64_t> topicId_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
