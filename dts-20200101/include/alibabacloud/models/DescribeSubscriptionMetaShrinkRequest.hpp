// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(SubMigrationJobIds, subMigrationJobIdsShrink_);
      DARABONBA_PTR_TO_JSON(Topics, topicsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(SubMigrationJobIds, subMigrationJobIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Topics, topicsShrink_);
    };
    DescribeSubscriptionMetaShrinkRequest() = default ;
    DescribeSubscriptionMetaShrinkRequest(const DescribeSubscriptionMetaShrinkRequest &) = default ;
    DescribeSubscriptionMetaShrinkRequest(DescribeSubscriptionMetaShrinkRequest &&) = default ;
    DescribeSubscriptionMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionMetaShrinkRequest() = default ;
    DescribeSubscriptionMetaShrinkRequest& operator=(const DescribeSubscriptionMetaShrinkRequest &) = default ;
    DescribeSubscriptionMetaShrinkRequest& operator=(DescribeSubscriptionMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->sid_ == nullptr && this->subMigrationJobIdsShrink_ == nullptr && this->topicsShrink_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline DescribeSubscriptionMetaShrinkRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSubscriptionMetaShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSubscriptionMetaShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline DescribeSubscriptionMetaShrinkRequest& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // subMigrationJobIdsShrink Field Functions 
    bool hasSubMigrationJobIdsShrink() const { return this->subMigrationJobIdsShrink_ != nullptr;};
    void deleteSubMigrationJobIdsShrink() { this->subMigrationJobIdsShrink_ = nullptr;};
    inline string getSubMigrationJobIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(subMigrationJobIdsShrink_, "") };
    inline DescribeSubscriptionMetaShrinkRequest& setSubMigrationJobIdsShrink(string subMigrationJobIdsShrink) { DARABONBA_PTR_SET_VALUE(subMigrationJobIdsShrink_, subMigrationJobIdsShrink) };


    // topicsShrink Field Functions 
    bool hasTopicsShrink() const { return this->topicsShrink_ != nullptr;};
    void deleteTopicsShrink() { this->topicsShrink_ = nullptr;};
    inline string getTopicsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicsShrink_, "") };
    inline DescribeSubscriptionMetaShrinkRequest& setTopicsShrink(string topicsShrink) { DARABONBA_PTR_SET_VALUE(topicsShrink_, topicsShrink) };


  protected:
    // The ID of the distributed change tracking instance.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the region in which the change tracking instance resides.
    shared_ptr<string> regionId_ {};
    // Resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the consumer group.
    // 
    // This parameter is required.
    shared_ptr<string> sid_ {};
    // The IDs of all subtasks in the distributed change tracking task. Separate multiple subtask IDs with commas (,).
    // 
    // >  You must specify at least one of the SubMigrationJobIds and **Topics** parameters. We recommend that you specify the SubMigrationJobIds parameter.
    shared_ptr<string> subMigrationJobIdsShrink_ {};
    // The topics of all subtasks in the distributed change tracking task. Separate multiple topics with commas (,).
    // 
    // >  You must specify at least one of the **SubMigrationJobIds** and Topics parameters. We recommend that you specify the **SubMigrationJobIds** parameter.
    shared_ptr<string> topicsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
