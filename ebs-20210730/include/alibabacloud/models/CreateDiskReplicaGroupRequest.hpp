// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISKREPLICAGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISKREPLICAGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateDiskReplicaGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiskReplicaGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_TO_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RPO, RPO_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceZoneId, sourceZoneId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiskReplicaGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_FROM_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RPO, RPO_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceZoneId, sourceZoneId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateDiskReplicaGroupRequest() = default ;
    CreateDiskReplicaGroupRequest(const CreateDiskReplicaGroupRequest &) = default ;
    CreateDiskReplicaGroupRequest(CreateDiskReplicaGroupRequest &&) = default ;
    CreateDiskReplicaGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiskReplicaGroupRequest() = default ;
    CreateDiskReplicaGroupRequest& operator=(const CreateDiskReplicaGroupRequest &) = default ;
    CreateDiskReplicaGroupRequest& operator=(CreateDiskReplicaGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N of the replication pair-consistent group.
      shared_ptr<string> key_ {};
      // The value of tag N of the replication pair-consistent group.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->destinationRegionId_ == nullptr && this->destinationZoneId_ == nullptr && this->enableRtc_ == nullptr
        && this->groupName_ == nullptr && this->RPO_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceZoneId_ == nullptr
        && this->tag_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateDiskReplicaGroupRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDiskReplicaGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDiskReplicaGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string getDestinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline CreateDiskReplicaGroupRequest& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // destinationZoneId Field Functions 
    bool hasDestinationZoneId() const { return this->destinationZoneId_ != nullptr;};
    void deleteDestinationZoneId() { this->destinationZoneId_ = nullptr;};
    inline string getDestinationZoneId() const { DARABONBA_PTR_GET_DEFAULT(destinationZoneId_, "") };
    inline CreateDiskReplicaGroupRequest& setDestinationZoneId(string destinationZoneId) { DARABONBA_PTR_SET_VALUE(destinationZoneId_, destinationZoneId) };


    // enableRtc Field Functions 
    bool hasEnableRtc() const { return this->enableRtc_ != nullptr;};
    void deleteEnableRtc() { this->enableRtc_ = nullptr;};
    inline bool getEnableRtc() const { DARABONBA_PTR_GET_DEFAULT(enableRtc_, false) };
    inline CreateDiskReplicaGroupRequest& setEnableRtc(bool enableRtc) { DARABONBA_PTR_SET_VALUE(enableRtc_, enableRtc) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateDiskReplicaGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // RPO Field Functions 
    bool hasRPO() const { return this->RPO_ != nullptr;};
    void deleteRPO() { this->RPO_ = nullptr;};
    inline int64_t getRPO() const { DARABONBA_PTR_GET_DEFAULT(RPO_, 0L) };
    inline CreateDiskReplicaGroupRequest& setRPO(int64_t RPO) { DARABONBA_PTR_SET_VALUE(RPO_, RPO) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDiskReplicaGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDiskReplicaGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceZoneId Field Functions 
    bool hasSourceZoneId() const { return this->sourceZoneId_ != nullptr;};
    void deleteSourceZoneId() { this->sourceZoneId_ = nullptr;};
    inline string getSourceZoneId() const { DARABONBA_PTR_GET_DEFAULT(sourceZoneId_, "") };
    inline CreateDiskReplicaGroupRequest& setSourceZoneId(string sourceZoneId) { DARABONBA_PTR_SET_VALUE(sourceZoneId_, sourceZoneId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDiskReplicaGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDiskReplicaGroupRequest::Tag>) };
    inline vector<CreateDiskReplicaGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDiskReplicaGroupRequest::Tag>) };
    inline CreateDiskReplicaGroupRequest& setTag(const vector<CreateDiskReplicaGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDiskReplicaGroupRequest& setTag(vector<CreateDiskReplicaGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The bandwidth value. Unit: Mbit/s.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<int64_t> bandwidth_ {};
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the replication pair-consistent group. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The region ID of the secondary site.
    // 
    // This parameter is required.
    shared_ptr<string> destinationRegionId_ {};
    // The zone ID of the secondary site.
    // 
    // This parameter is required.
    shared_ptr<string> destinationZoneId_ {};
    // Whether to enable replication time control. By default, this parameter is disabled.
    shared_ptr<bool> enableRtc_ {};
    // The name of the replication pair-consistent group. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> groupName_ {};
    // The RPO of the replication pair-consistent group. Unit: seconds. Valid value: 900.
    shared_ptr<int64_t> RPO_ {};
    // The ID of the region in which to create the replication pair-consistent group. The primary site is deployed in the specified region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the replication pair-consistent group belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The zone ID of the primary site.
    // 
    // This parameter is required.
    shared_ptr<string> sourceZoneId_ {};
    // The tags. Up to 20 tags are supported.
    shared_ptr<vector<CreateDiskReplicaGroupRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
