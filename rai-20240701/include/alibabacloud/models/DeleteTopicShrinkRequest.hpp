// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETOPICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETOPICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class DeleteTopicShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTopicShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TopicIdList, topicIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTopicShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TopicIdList, topicIdListShrink_);
    };
    DeleteTopicShrinkRequest() = default ;
    DeleteTopicShrinkRequest(const DeleteTopicShrinkRequest &) = default ;
    DeleteTopicShrinkRequest(DeleteTopicShrinkRequest &&) = default ;
    DeleteTopicShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTopicShrinkRequest() = default ;
    DeleteTopicShrinkRequest& operator=(const DeleteTopicShrinkRequest &) = default ;
    DeleteTopicShrinkRequest& operator=(DeleteTopicShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->topicIdListShrink_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteTopicShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicIdListShrink Field Functions 
    bool hasTopicIdListShrink() const { return this->topicIdListShrink_ != nullptr;};
    void deleteTopicIdListShrink() { this->topicIdListShrink_ = nullptr;};
    inline string topicIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(topicIdListShrink_, "") };
    inline DeleteTopicShrinkRequest& setTopicIdListShrink(string topicIdListShrink) { DARABONBA_PTR_SET_VALUE(topicIdListShrink_, topicIdListShrink) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> topicIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
