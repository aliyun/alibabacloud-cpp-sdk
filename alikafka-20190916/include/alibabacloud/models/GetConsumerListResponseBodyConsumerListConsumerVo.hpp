// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERLISTRESPONSEBODYCONSUMERLISTCONSUMERVO_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERLISTRESPONSEBODYCONSUMERLISTCONSUMERVO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConsumerListResponseBodyConsumerListConsumerVOTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerListResponseBodyConsumerListConsumerVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerListResponseBodyConsumerListConsumerVO& obj) { 
      DARABONBA_PTR_TO_JSON(AutomaticallyCreatedGroup, automaticallyCreatedGroup_);
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerListResponseBodyConsumerListConsumerVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AutomaticallyCreatedGroup, automaticallyCreatedGroup_);
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetConsumerListResponseBodyConsumerListConsumerVO() = default ;
    GetConsumerListResponseBodyConsumerListConsumerVO(const GetConsumerListResponseBodyConsumerListConsumerVO &) = default ;
    GetConsumerListResponseBodyConsumerListConsumerVO(GetConsumerListResponseBodyConsumerListConsumerVO &&) = default ;
    GetConsumerListResponseBodyConsumerListConsumerVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerListResponseBodyConsumerListConsumerVO() = default ;
    GetConsumerListResponseBodyConsumerListConsumerVO& operator=(const GetConsumerListResponseBodyConsumerListConsumerVO &) = default ;
    GetConsumerListResponseBodyConsumerListConsumerVO& operator=(GetConsumerListResponseBodyConsumerListConsumerVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->automaticallyCreatedGroup_ == nullptr
        && return this->consumerId_ == nullptr && return this->createTime_ == nullptr && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->remark_ == nullptr
        && return this->tags_ == nullptr; };
    // automaticallyCreatedGroup Field Functions 
    bool hasAutomaticallyCreatedGroup() const { return this->automaticallyCreatedGroup_ != nullptr;};
    void deleteAutomaticallyCreatedGroup() { this->automaticallyCreatedGroup_ = nullptr;};
    inline bool automaticallyCreatedGroup() const { DARABONBA_PTR_GET_DEFAULT(automaticallyCreatedGroup_, false) };
    inline GetConsumerListResponseBodyConsumerListConsumerVO& setAutomaticallyCreatedGroup(bool automaticallyCreatedGroup) { DARABONBA_PTR_SET_VALUE(automaticallyCreatedGroup_, automaticallyCreatedGroup) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline GetConsumerListResponseBodyConsumerListConsumerVO& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetConsumerListResponseBodyConsumerListConsumerVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetConsumerListResponseBodyConsumerListConsumerVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetConsumerListResponseBodyConsumerListConsumerVO& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetConsumerListResponseBodyConsumerListConsumerVO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::GetConsumerListResponseBodyConsumerListConsumerVOTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::GetConsumerListResponseBodyConsumerListConsumerVOTags) };
    inline Models::GetConsumerListResponseBodyConsumerListConsumerVOTags tags() { DARABONBA_PTR_GET(tags_, Models::GetConsumerListResponseBodyConsumerListConsumerVOTags) };
    inline GetConsumerListResponseBodyConsumerListConsumerVO& setTags(const Models::GetConsumerListResponseBodyConsumerListConsumerVOTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetConsumerListResponseBodyConsumerListConsumerVO& setTags(Models::GetConsumerListResponseBodyConsumerListConsumerVOTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Indicates that the consumer group was automatically created by the system.
    std::shared_ptr<bool> automaticallyCreatedGroup_ = nullptr;
    // The consumer group ID.
    std::shared_ptr<string> consumerId_ = nullptr;
    // The timestamp that indicates when the consumer group was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region where the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The instance description.
    std::shared_ptr<string> remark_ = nullptr;
    // The tags.
    std::shared_ptr<Models::GetConsumerListResponseBodyConsumerListConsumerVOTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
