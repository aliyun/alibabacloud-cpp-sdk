// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONTICKETSRESPONSEBODYOPERATIONTICKETS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONTICKETSRESPONSEBODYOPERATIONTICKETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationTicketsResponseBodyOperationTickets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationTicketsResponseBodyOperationTickets& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyUserId, applyUserId_);
      DARABONBA_PTR_TO_JSON(ApplyUsername, applyUsername_);
      DARABONBA_PTR_TO_JSON(ApproveComment, approveComment_);
      DARABONBA_PTR_TO_JSON(AssetAccountId, assetAccountId_);
      DARABONBA_PTR_TO_JSON(AssetAccountName, assetAccountName_);
      DARABONBA_PTR_TO_JSON(AssetAddress, assetAddress_);
      DARABONBA_PTR_TO_JSON(AssetId, assetId_);
      DARABONBA_PTR_TO_JSON(AssetName, assetName_);
      DARABONBA_PTR_TO_JSON(AssetNetworkDomainId, assetNetworkDomainId_);
      DARABONBA_PTR_TO_JSON(AssetOs, assetOs_);
      DARABONBA_PTR_TO_JSON(AssetSource, assetSource_);
      DARABONBA_PTR_TO_JSON(AssetSourceInstanceId, assetSourceInstanceId_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(EffectCount, effectCount_);
      DARABONBA_PTR_TO_JSON(EffectEndTime, effectEndTime_);
      DARABONBA_PTR_TO_JSON(EffectStartTime, effectStartTime_);
      DARABONBA_PTR_TO_JSON(OperationTicketId, operationTicketId_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationTicketsResponseBodyOperationTickets& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyUserId, applyUserId_);
      DARABONBA_PTR_FROM_JSON(ApplyUsername, applyUsername_);
      DARABONBA_PTR_FROM_JSON(ApproveComment, approveComment_);
      DARABONBA_PTR_FROM_JSON(AssetAccountId, assetAccountId_);
      DARABONBA_PTR_FROM_JSON(AssetAccountName, assetAccountName_);
      DARABONBA_PTR_FROM_JSON(AssetAddress, assetAddress_);
      DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
      DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
      DARABONBA_PTR_FROM_JSON(AssetNetworkDomainId, assetNetworkDomainId_);
      DARABONBA_PTR_FROM_JSON(AssetOs, assetOs_);
      DARABONBA_PTR_FROM_JSON(AssetSource, assetSource_);
      DARABONBA_PTR_FROM_JSON(AssetSourceInstanceId, assetSourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(EffectCount, effectCount_);
      DARABONBA_PTR_FROM_JSON(EffectEndTime, effectEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectStartTime, effectStartTime_);
      DARABONBA_PTR_FROM_JSON(OperationTicketId, operationTicketId_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListOperationTicketsResponseBodyOperationTickets() = default ;
    ListOperationTicketsResponseBodyOperationTickets(const ListOperationTicketsResponseBodyOperationTickets &) = default ;
    ListOperationTicketsResponseBodyOperationTickets(ListOperationTicketsResponseBodyOperationTickets &&) = default ;
    ListOperationTicketsResponseBodyOperationTickets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationTicketsResponseBodyOperationTickets() = default ;
    ListOperationTicketsResponseBodyOperationTickets& operator=(const ListOperationTicketsResponseBodyOperationTickets &) = default ;
    ListOperationTicketsResponseBodyOperationTickets& operator=(ListOperationTicketsResponseBodyOperationTickets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyUserId_ != nullptr
        && this->applyUsername_ != nullptr && this->approveComment_ != nullptr && this->assetAccountId_ != nullptr && this->assetAccountName_ != nullptr && this->assetAddress_ != nullptr
        && this->assetId_ != nullptr && this->assetName_ != nullptr && this->assetNetworkDomainId_ != nullptr && this->assetOs_ != nullptr && this->assetSource_ != nullptr
        && this->assetSourceInstanceId_ != nullptr && this->createdTime_ != nullptr && this->effectCount_ != nullptr && this->effectEndTime_ != nullptr && this->effectStartTime_ != nullptr
        && this->operationTicketId_ != nullptr && this->protocolName_ != nullptr && this->state_ != nullptr; };
    // applyUserId Field Functions 
    bool hasApplyUserId() const { return this->applyUserId_ != nullptr;};
    void deleteApplyUserId() { this->applyUserId_ = nullptr;};
    inline string applyUserId() const { DARABONBA_PTR_GET_DEFAULT(applyUserId_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setApplyUserId(string applyUserId) { DARABONBA_PTR_SET_VALUE(applyUserId_, applyUserId) };


    // applyUsername Field Functions 
    bool hasApplyUsername() const { return this->applyUsername_ != nullptr;};
    void deleteApplyUsername() { this->applyUsername_ = nullptr;};
    inline string applyUsername() const { DARABONBA_PTR_GET_DEFAULT(applyUsername_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setApplyUsername(string applyUsername) { DARABONBA_PTR_SET_VALUE(applyUsername_, applyUsername) };


    // approveComment Field Functions 
    bool hasApproveComment() const { return this->approveComment_ != nullptr;};
    void deleteApproveComment() { this->approveComment_ = nullptr;};
    inline string approveComment() const { DARABONBA_PTR_GET_DEFAULT(approveComment_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setApproveComment(string approveComment) { DARABONBA_PTR_SET_VALUE(approveComment_, approveComment) };


    // assetAccountId Field Functions 
    bool hasAssetAccountId() const { return this->assetAccountId_ != nullptr;};
    void deleteAssetAccountId() { this->assetAccountId_ = nullptr;};
    inline string assetAccountId() const { DARABONBA_PTR_GET_DEFAULT(assetAccountId_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetAccountId(string assetAccountId) { DARABONBA_PTR_SET_VALUE(assetAccountId_, assetAccountId) };


    // assetAccountName Field Functions 
    bool hasAssetAccountName() const { return this->assetAccountName_ != nullptr;};
    void deleteAssetAccountName() { this->assetAccountName_ = nullptr;};
    inline string assetAccountName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountName_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetAccountName(string assetAccountName) { DARABONBA_PTR_SET_VALUE(assetAccountName_, assetAccountName) };


    // assetAddress Field Functions 
    bool hasAssetAddress() const { return this->assetAddress_ != nullptr;};
    void deleteAssetAddress() { this->assetAddress_ = nullptr;};
    inline string assetAddress() const { DARABONBA_PTR_GET_DEFAULT(assetAddress_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetAddress(string assetAddress) { DARABONBA_PTR_SET_VALUE(assetAddress_, assetAddress) };


    // assetId Field Functions 
    bool hasAssetId() const { return this->assetId_ != nullptr;};
    void deleteAssetId() { this->assetId_ = nullptr;};
    inline string assetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string assetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // assetNetworkDomainId Field Functions 
    bool hasAssetNetworkDomainId() const { return this->assetNetworkDomainId_ != nullptr;};
    void deleteAssetNetworkDomainId() { this->assetNetworkDomainId_ = nullptr;};
    inline string assetNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(assetNetworkDomainId_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetNetworkDomainId(string assetNetworkDomainId) { DARABONBA_PTR_SET_VALUE(assetNetworkDomainId_, assetNetworkDomainId) };


    // assetOs Field Functions 
    bool hasAssetOs() const { return this->assetOs_ != nullptr;};
    void deleteAssetOs() { this->assetOs_ = nullptr;};
    inline string assetOs() const { DARABONBA_PTR_GET_DEFAULT(assetOs_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetOs(string assetOs) { DARABONBA_PTR_SET_VALUE(assetOs_, assetOs) };


    // assetSource Field Functions 
    bool hasAssetSource() const { return this->assetSource_ != nullptr;};
    void deleteAssetSource() { this->assetSource_ = nullptr;};
    inline string assetSource() const { DARABONBA_PTR_GET_DEFAULT(assetSource_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetSource(string assetSource) { DARABONBA_PTR_SET_VALUE(assetSource_, assetSource) };


    // assetSourceInstanceId Field Functions 
    bool hasAssetSourceInstanceId() const { return this->assetSourceInstanceId_ != nullptr;};
    void deleteAssetSourceInstanceId() { this->assetSourceInstanceId_ = nullptr;};
    inline string assetSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetSourceInstanceId_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setAssetSourceInstanceId(string assetSourceInstanceId) { DARABONBA_PTR_SET_VALUE(assetSourceInstanceId_, assetSourceInstanceId) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline ListOperationTicketsResponseBodyOperationTickets& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // effectCount Field Functions 
    bool hasEffectCount() const { return this->effectCount_ != nullptr;};
    void deleteEffectCount() { this->effectCount_ = nullptr;};
    inline int32_t effectCount() const { DARABONBA_PTR_GET_DEFAULT(effectCount_, 0) };
    inline ListOperationTicketsResponseBodyOperationTickets& setEffectCount(int32_t effectCount) { DARABONBA_PTR_SET_VALUE(effectCount_, effectCount) };


    // effectEndTime Field Functions 
    bool hasEffectEndTime() const { return this->effectEndTime_ != nullptr;};
    void deleteEffectEndTime() { this->effectEndTime_ = nullptr;};
    inline int32_t effectEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectEndTime_, 0) };
    inline ListOperationTicketsResponseBodyOperationTickets& setEffectEndTime(int32_t effectEndTime) { DARABONBA_PTR_SET_VALUE(effectEndTime_, effectEndTime) };


    // effectStartTime Field Functions 
    bool hasEffectStartTime() const { return this->effectStartTime_ != nullptr;};
    void deleteEffectStartTime() { this->effectStartTime_ = nullptr;};
    inline int32_t effectStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectStartTime_, 0) };
    inline ListOperationTicketsResponseBodyOperationTickets& setEffectStartTime(int32_t effectStartTime) { DARABONBA_PTR_SET_VALUE(effectStartTime_, effectStartTime) };


    // operationTicketId Field Functions 
    bool hasOperationTicketId() const { return this->operationTicketId_ != nullptr;};
    void deleteOperationTicketId() { this->operationTicketId_ = nullptr;};
    inline string operationTicketId() const { DARABONBA_PTR_GET_DEFAULT(operationTicketId_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setOperationTicketId(string operationTicketId) { DARABONBA_PTR_SET_VALUE(operationTicketId_, operationTicketId) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string protocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListOperationTicketsResponseBodyOperationTickets& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the O\\&M applicant.
    std::shared_ptr<string> applyUserId_ = nullptr;
    // The username of the O\\&M applicant.
    std::shared_ptr<string> applyUsername_ = nullptr;
    // The remarks entered when the O\\&M personnel applies for O\\&M permissions.
    std::shared_ptr<string> approveComment_ = nullptr;
    // The ID of the asset account.
    std::shared_ptr<string> assetAccountId_ = nullptr;
    // The username of the asset account.
    std::shared_ptr<string> assetAccountName_ = nullptr;
    // The IP address of the asset.
    std::shared_ptr<string> assetAddress_ = nullptr;
    // The ID of the asset.
    std::shared_ptr<string> assetId_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> assetName_ = nullptr;
    // The network domain ID of the asset.
    std::shared_ptr<string> assetNetworkDomainId_ = nullptr;
    // The operating system of the asset.
    std::shared_ptr<string> assetOs_ = nullptr;
    // The name of the asset source to which the asset belongs. Valid values:
    // 
    // *   **Local**: an on-premises host.
    // *   **Ecs**: an Elastic Compute Service (ECS) instance.
    // *   **Rds**: an ApsaraDB RDS instance.
    // *   A third-party asset source.
    std::shared_ptr<string> assetSource_ = nullptr;
    // The ID of the asset source to which the asset belongs.
    std::shared_ptr<string> assetSourceInstanceId_ = nullptr;
    // The time when the O\\&M application was submitted. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The maximum number of logons applied by the O\\&M engineer. Valid values:
    // 
    // *   **0**: The number of logons is unlimited. The O\\&M engineer can log on to the specified asset for unlimited times during the validity period.
    // *   **1**: The O\\&M engineer can log on to the specified asset only once during the validity period.
    std::shared_ptr<int32_t> effectCount_ = nullptr;
    // The end time of the validity period. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int32_t> effectEndTime_ = nullptr;
    // The start time of the validity period. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int32_t> effectStartTime_ = nullptr;
    // The ID of the O\\&M application to be reviewed.
    std::shared_ptr<string> operationTicketId_ = nullptr;
    // The O\\&M protocol.
    std::shared_ptr<string> protocolName_ = nullptr;
    // The status of the review. Valid value:
    // 
    // *   Normal: to be reviewed
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
