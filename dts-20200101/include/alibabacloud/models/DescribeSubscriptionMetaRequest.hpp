// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBSCRIPTIONMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSubscriptionMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubscriptionMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_ANY_TO_JSON(SubMigrationJobIds, subMigrationJobIds_);
      DARABONBA_ANY_TO_JSON(Topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubscriptionMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_ANY_FROM_JSON(SubMigrationJobIds, subMigrationJobIds_);
      DARABONBA_ANY_FROM_JSON(Topics, topics_);
    };
    DescribeSubscriptionMetaRequest() = default ;
    DescribeSubscriptionMetaRequest(const DescribeSubscriptionMetaRequest &) = default ;
    DescribeSubscriptionMetaRequest(DescribeSubscriptionMetaRequest &&) = default ;
    DescribeSubscriptionMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubscriptionMetaRequest() = default ;
    DescribeSubscriptionMetaRequest& operator=(const DescribeSubscriptionMetaRequest &) = default ;
    DescribeSubscriptionMetaRequest& operator=(DescribeSubscriptionMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsInstanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sid_ == nullptr && return this->subMigrationJobIds_ == nullptr && return this->topics_ == nullptr; };
    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline DescribeSubscriptionMetaRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSubscriptionMetaRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSubscriptionMetaRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline DescribeSubscriptionMetaRequest& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // subMigrationJobIds Field Functions 
    bool hasSubMigrationJobIds() const { return this->subMigrationJobIds_ != nullptr;};
    void deleteSubMigrationJobIds() { this->subMigrationJobIds_ = nullptr;};
    inline     const Darabonba::Json & subMigrationJobIds() const { DARABONBA_GET(subMigrationJobIds_) };
    Darabonba::Json & subMigrationJobIds() { DARABONBA_GET(subMigrationJobIds_) };
    inline DescribeSubscriptionMetaRequest& setSubMigrationJobIds(const Darabonba::Json & subMigrationJobIds) { DARABONBA_SET_VALUE(subMigrationJobIds_, subMigrationJobIds) };
    inline DescribeSubscriptionMetaRequest& setSubMigrationJobIds(Darabonba::Json & subMigrationJobIds) { DARABONBA_SET_RVALUE(subMigrationJobIds_, subMigrationJobIds) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline     const Darabonba::Json & topics() const { DARABONBA_GET(topics_) };
    Darabonba::Json & topics() { DARABONBA_GET(topics_) };
    inline DescribeSubscriptionMetaRequest& setTopics(const Darabonba::Json & topics) { DARABONBA_SET_VALUE(topics_, topics) };
    inline DescribeSubscriptionMetaRequest& setTopics(Darabonba::Json & topics) { DARABONBA_SET_RVALUE(topics_, topics) };


  protected:
    // The ID of the distributed change tracking instance.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The ID of the region in which the change tracking instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the consumer group.
    // 
    // This parameter is required.
    std::shared_ptr<string> sid_ = nullptr;
    // The IDs of all subtasks in the distributed change tracking task. Separate multiple subtask IDs with commas (,).
    // 
    // >  You must specify at least one of the SubMigrationJobIds and **Topics** parameters. We recommend that you specify the SubMigrationJobIds parameter.
    Darabonba::Json subMigrationJobIds_ = nullptr;
    // The topics of all subtasks in the distributed change tracking task. Separate multiple topics with commas (,).
    // 
    // >  You must specify at least one of the **SubMigrationJobIds** and Topics parameters. We recommend that you specify the **SubMigrationJobIds** parameter.
    Darabonba::Json topics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
