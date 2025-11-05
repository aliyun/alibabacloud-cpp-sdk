// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISKREPLICAGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISKREPLICAGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ModifyDiskReplicaGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiskReplicaGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RPO, RPO_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaGroupId, replicaGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiskReplicaGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RPO, RPO_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaGroupId, replicaGroupId_);
    };
    ModifyDiskReplicaGroupRequest() = default ;
    ModifyDiskReplicaGroupRequest(const ModifyDiskReplicaGroupRequest &) = default ;
    ModifyDiskReplicaGroupRequest(ModifyDiskReplicaGroupRequest &&) = default ;
    ModifyDiskReplicaGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiskReplicaGroupRequest() = default ;
    ModifyDiskReplicaGroupRequest& operator=(const ModifyDiskReplicaGroupRequest &) = default ;
    ModifyDiskReplicaGroupRequest& operator=(ModifyDiskReplicaGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->enableRtc_ == nullptr && return this->groupName_ == nullptr && return this->RPO_ == nullptr
        && return this->regionId_ == nullptr && return this->replicaGroupId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline ModifyDiskReplicaGroupRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDiskReplicaGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDiskReplicaGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableRtc Field Functions 
    bool hasEnableRtc() const { return this->enableRtc_ != nullptr;};
    void deleteEnableRtc() { this->enableRtc_ = nullptr;};
    inline bool enableRtc() const { DARABONBA_PTR_GET_DEFAULT(enableRtc_, false) };
    inline ModifyDiskReplicaGroupRequest& setEnableRtc(bool enableRtc) { DARABONBA_PTR_SET_VALUE(enableRtc_, enableRtc) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ModifyDiskReplicaGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // RPO Field Functions 
    bool hasRPO() const { return this->RPO_ != nullptr;};
    void deleteRPO() { this->RPO_ = nullptr;};
    inline int64_t RPO() const { DARABONBA_PTR_GET_DEFAULT(RPO_, 0L) };
    inline ModifyDiskReplicaGroupRequest& setRPO(int64_t RPO) { DARABONBA_PTR_SET_VALUE(RPO_, RPO) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDiskReplicaGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaGroupId Field Functions 
    bool hasReplicaGroupId() const { return this->replicaGroupId_ != nullptr;};
    void deleteReplicaGroupId() { this->replicaGroupId_ = nullptr;};
    inline string replicaGroupId() const { DARABONBA_PTR_GET_DEFAULT(replicaGroupId_, "") };
    inline ModifyDiskReplicaGroupRequest& setReplicaGroupId(string replicaGroupId) { DARABONBA_PTR_SET_VALUE(replicaGroupId_, replicaGroupId) };


  protected:
    // The bandwidth value. Unit: Kbit/s.
    // 
    // >  This parameter is not publicly available.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the replication pair-consistent group. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // Whether to enable replication time control.
    std::shared_ptr<bool> enableRtc_ = nullptr;
    // The name of the replication pair-consistent group. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. It can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> groupName_ = nullptr;
    // The RPO of the replication pair-consistent group. Unit: seconds. Valid value: 900.
    std::shared_ptr<int64_t> RPO_ = nullptr;
    // The region ID of the replication pair-consistent group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the replication pair-consistent group. You can call the [DescribeDiskReplicaGroups](https://help.aliyun.com/document_detail/426614.html) operation to query the IDs of replication pair-consistent groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> replicaGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
