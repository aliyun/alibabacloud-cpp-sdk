// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSUMERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSUMERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateConsumerGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreateConsumerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConsumerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateConsumerGroupRequest() = default ;
    CreateConsumerGroupRequest(const CreateConsumerGroupRequest &) = default ;
    CreateConsumerGroupRequest(CreateConsumerGroupRequest &&) = default ;
    CreateConsumerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConsumerGroupRequest() = default ;
    CreateConsumerGroupRequest& operator=(const CreateConsumerGroupRequest &) = default ;
    CreateConsumerGroupRequest& operator=(CreateConsumerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerId_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->remark_ == nullptr && return this->tag_ == nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string consumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline CreateConsumerGroupRequest& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateConsumerGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateConsumerGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateConsumerGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateConsumerGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateConsumerGroupRequestTag>) };
    inline vector<CreateConsumerGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateConsumerGroupRequestTag>) };
    inline CreateConsumerGroupRequest& setTag(const vector<CreateConsumerGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateConsumerGroupRequest& setTag(vector<CreateConsumerGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The name of the consumer group.
    // 
    // *   The value can contain only letters, digits, hyphens (-), and underscores (_), and the value must contain at least one letter or digit.
    // *   The value must be 3 to 128 characters in length. If the value that you specify contains more than 128 characters, the system automatically truncates the value to 128 characters.
    // *   After a consumer group is created, you cannot change the name of the consumer group.
    // 
    // This parameter is required.
    std::shared_ptr<string> consumerId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description of the consumer group.
    std::shared_ptr<string> remark_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateConsumerGroupRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
