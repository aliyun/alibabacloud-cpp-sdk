// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETETOPICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETETOPICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class BatchDeleteTopicsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteTopicsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Topics, topicsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteTopicsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Topics, topicsShrink_);
    };
    BatchDeleteTopicsShrinkRequest() = default ;
    BatchDeleteTopicsShrinkRequest(const BatchDeleteTopicsShrinkRequest &) = default ;
    BatchDeleteTopicsShrinkRequest(BatchDeleteTopicsShrinkRequest &&) = default ;
    BatchDeleteTopicsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteTopicsShrinkRequest() = default ;
    BatchDeleteTopicsShrinkRequest& operator=(const BatchDeleteTopicsShrinkRequest &) = default ;
    BatchDeleteTopicsShrinkRequest& operator=(BatchDeleteTopicsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->topicsShrink_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchDeleteTopicsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchDeleteTopicsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicsShrink Field Functions 
    bool hasTopicsShrink() const { return this->topicsShrink_ != nullptr;};
    void deleteTopicsShrink() { this->topicsShrink_ = nullptr;};
    inline string getTopicsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicsShrink_, "") };
    inline BatchDeleteTopicsShrinkRequest& setTopicsShrink(string topicsShrink) { DARABONBA_PTR_SET_VALUE(topicsShrink_, topicsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> topicsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
