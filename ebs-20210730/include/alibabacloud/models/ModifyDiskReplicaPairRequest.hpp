// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISKREPLICAPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISKREPLICAPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ModifyDiskReplicaPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiskReplicaPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_TO_JSON(PairName, pairName_);
      DARABONBA_PTR_TO_JSON(RPO, RPO_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaPairId, replicaPairId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiskReplicaPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_FROM_JSON(PairName, pairName_);
      DARABONBA_PTR_FROM_JSON(RPO, RPO_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaPairId, replicaPairId_);
    };
    ModifyDiskReplicaPairRequest() = default ;
    ModifyDiskReplicaPairRequest(const ModifyDiskReplicaPairRequest &) = default ;
    ModifyDiskReplicaPairRequest(ModifyDiskReplicaPairRequest &&) = default ;
    ModifyDiskReplicaPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiskReplicaPairRequest() = default ;
    ModifyDiskReplicaPairRequest& operator=(const ModifyDiskReplicaPairRequest &) = default ;
    ModifyDiskReplicaPairRequest& operator=(ModifyDiskReplicaPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->enableRtc_ == nullptr && return this->pairName_ == nullptr && return this->RPO_ == nullptr
        && return this->regionId_ == nullptr && return this->replicaPairId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline ModifyDiskReplicaPairRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDiskReplicaPairRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDiskReplicaPairRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableRtc Field Functions 
    bool hasEnableRtc() const { return this->enableRtc_ != nullptr;};
    void deleteEnableRtc() { this->enableRtc_ = nullptr;};
    inline bool enableRtc() const { DARABONBA_PTR_GET_DEFAULT(enableRtc_, false) };
    inline ModifyDiskReplicaPairRequest& setEnableRtc(bool enableRtc) { DARABONBA_PTR_SET_VALUE(enableRtc_, enableRtc) };


    // pairName Field Functions 
    bool hasPairName() const { return this->pairName_ != nullptr;};
    void deletePairName() { this->pairName_ = nullptr;};
    inline string pairName() const { DARABONBA_PTR_GET_DEFAULT(pairName_, "") };
    inline ModifyDiskReplicaPairRequest& setPairName(string pairName) { DARABONBA_PTR_SET_VALUE(pairName_, pairName) };


    // RPO Field Functions 
    bool hasRPO() const { return this->RPO_ != nullptr;};
    void deleteRPO() { this->RPO_ = nullptr;};
    inline int64_t RPO() const { DARABONBA_PTR_GET_DEFAULT(RPO_, 0L) };
    inline ModifyDiskReplicaPairRequest& setRPO(int64_t RPO) { DARABONBA_PTR_SET_VALUE(RPO_, RPO) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDiskReplicaPairRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaPairId Field Functions 
    bool hasReplicaPairId() const { return this->replicaPairId_ != nullptr;};
    void deleteReplicaPairId() { this->replicaPairId_ = nullptr;};
    inline string replicaPairId() const { DARABONBA_PTR_GET_DEFAULT(replicaPairId_, "") };
    inline ModifyDiskReplicaPairRequest& setReplicaPairId(string replicaPairId) { DARABONBA_PTR_SET_VALUE(replicaPairId_, replicaPairId) };


  protected:
    // The bandwidth value. Unit: Kbit/s.
    // 
    // >  This parameter is not publicly available.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the replication pair.
    std::shared_ptr<string> description_ = nullptr;
    // Whether to enable replication time control.
    std::shared_ptr<bool> enableRtc_ = nullptr;
    // The name of the replication pair.
    std::shared_ptr<string> pairName_ = nullptr;
    // The recovery point objective (RPO) of the replication pair-consistent group. Unit: seconds. Valid value: 900.
    std::shared_ptr<int64_t> RPO_ = nullptr;
    // The region ID of the primary or secondary disk in the replication pair. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which async replication is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the replication pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> replicaPairId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
