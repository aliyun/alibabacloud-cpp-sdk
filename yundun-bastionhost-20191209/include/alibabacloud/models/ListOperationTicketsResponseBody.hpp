// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONTICKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONTICKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationTicketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationTicketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationTickets, operationTickets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationTicketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationTickets, operationTickets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOperationTicketsResponseBody() = default ;
    ListOperationTicketsResponseBody(const ListOperationTicketsResponseBody &) = default ;
    ListOperationTicketsResponseBody(ListOperationTicketsResponseBody &&) = default ;
    ListOperationTicketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationTicketsResponseBody() = default ;
    ListOperationTicketsResponseBody& operator=(const ListOperationTicketsResponseBody &) = default ;
    ListOperationTicketsResponseBody& operator=(ListOperationTicketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationTickets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationTickets& obj) { 
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
      friend void from_json(const Darabonba::Json& j, OperationTickets& obj) { 
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
      OperationTickets() = default ;
      OperationTickets(const OperationTickets &) = default ;
      OperationTickets(OperationTickets &&) = default ;
      OperationTickets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationTickets() = default ;
      OperationTickets& operator=(const OperationTickets &) = default ;
      OperationTickets& operator=(OperationTickets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applyUserId_ == nullptr
        && this->applyUsername_ == nullptr && this->approveComment_ == nullptr && this->assetAccountId_ == nullptr && this->assetAccountName_ == nullptr && this->assetAddress_ == nullptr
        && this->assetId_ == nullptr && this->assetName_ == nullptr && this->assetNetworkDomainId_ == nullptr && this->assetOs_ == nullptr && this->assetSource_ == nullptr
        && this->assetSourceInstanceId_ == nullptr && this->createdTime_ == nullptr && this->effectCount_ == nullptr && this->effectEndTime_ == nullptr && this->effectStartTime_ == nullptr
        && this->operationTicketId_ == nullptr && this->protocolName_ == nullptr && this->state_ == nullptr; };
      // applyUserId Field Functions 
      bool hasApplyUserId() const { return this->applyUserId_ != nullptr;};
      void deleteApplyUserId() { this->applyUserId_ = nullptr;};
      inline string getApplyUserId() const { DARABONBA_PTR_GET_DEFAULT(applyUserId_, "") };
      inline OperationTickets& setApplyUserId(string applyUserId) { DARABONBA_PTR_SET_VALUE(applyUserId_, applyUserId) };


      // applyUsername Field Functions 
      bool hasApplyUsername() const { return this->applyUsername_ != nullptr;};
      void deleteApplyUsername() { this->applyUsername_ = nullptr;};
      inline string getApplyUsername() const { DARABONBA_PTR_GET_DEFAULT(applyUsername_, "") };
      inline OperationTickets& setApplyUsername(string applyUsername) { DARABONBA_PTR_SET_VALUE(applyUsername_, applyUsername) };


      // approveComment Field Functions 
      bool hasApproveComment() const { return this->approveComment_ != nullptr;};
      void deleteApproveComment() { this->approveComment_ = nullptr;};
      inline string getApproveComment() const { DARABONBA_PTR_GET_DEFAULT(approveComment_, "") };
      inline OperationTickets& setApproveComment(string approveComment) { DARABONBA_PTR_SET_VALUE(approveComment_, approveComment) };


      // assetAccountId Field Functions 
      bool hasAssetAccountId() const { return this->assetAccountId_ != nullptr;};
      void deleteAssetAccountId() { this->assetAccountId_ = nullptr;};
      inline string getAssetAccountId() const { DARABONBA_PTR_GET_DEFAULT(assetAccountId_, "") };
      inline OperationTickets& setAssetAccountId(string assetAccountId) { DARABONBA_PTR_SET_VALUE(assetAccountId_, assetAccountId) };


      // assetAccountName Field Functions 
      bool hasAssetAccountName() const { return this->assetAccountName_ != nullptr;};
      void deleteAssetAccountName() { this->assetAccountName_ = nullptr;};
      inline string getAssetAccountName() const { DARABONBA_PTR_GET_DEFAULT(assetAccountName_, "") };
      inline OperationTickets& setAssetAccountName(string assetAccountName) { DARABONBA_PTR_SET_VALUE(assetAccountName_, assetAccountName) };


      // assetAddress Field Functions 
      bool hasAssetAddress() const { return this->assetAddress_ != nullptr;};
      void deleteAssetAddress() { this->assetAddress_ = nullptr;};
      inline string getAssetAddress() const { DARABONBA_PTR_GET_DEFAULT(assetAddress_, "") };
      inline OperationTickets& setAssetAddress(string assetAddress) { DARABONBA_PTR_SET_VALUE(assetAddress_, assetAddress) };


      // assetId Field Functions 
      bool hasAssetId() const { return this->assetId_ != nullptr;};
      void deleteAssetId() { this->assetId_ = nullptr;};
      inline string getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
      inline OperationTickets& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


      // assetName Field Functions 
      bool hasAssetName() const { return this->assetName_ != nullptr;};
      void deleteAssetName() { this->assetName_ = nullptr;};
      inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
      inline OperationTickets& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


      // assetNetworkDomainId Field Functions 
      bool hasAssetNetworkDomainId() const { return this->assetNetworkDomainId_ != nullptr;};
      void deleteAssetNetworkDomainId() { this->assetNetworkDomainId_ = nullptr;};
      inline string getAssetNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(assetNetworkDomainId_, "") };
      inline OperationTickets& setAssetNetworkDomainId(string assetNetworkDomainId) { DARABONBA_PTR_SET_VALUE(assetNetworkDomainId_, assetNetworkDomainId) };


      // assetOs Field Functions 
      bool hasAssetOs() const { return this->assetOs_ != nullptr;};
      void deleteAssetOs() { this->assetOs_ = nullptr;};
      inline string getAssetOs() const { DARABONBA_PTR_GET_DEFAULT(assetOs_, "") };
      inline OperationTickets& setAssetOs(string assetOs) { DARABONBA_PTR_SET_VALUE(assetOs_, assetOs) };


      // assetSource Field Functions 
      bool hasAssetSource() const { return this->assetSource_ != nullptr;};
      void deleteAssetSource() { this->assetSource_ = nullptr;};
      inline string getAssetSource() const { DARABONBA_PTR_GET_DEFAULT(assetSource_, "") };
      inline OperationTickets& setAssetSource(string assetSource) { DARABONBA_PTR_SET_VALUE(assetSource_, assetSource) };


      // assetSourceInstanceId Field Functions 
      bool hasAssetSourceInstanceId() const { return this->assetSourceInstanceId_ != nullptr;};
      void deleteAssetSourceInstanceId() { this->assetSourceInstanceId_ = nullptr;};
      inline string getAssetSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetSourceInstanceId_, "") };
      inline OperationTickets& setAssetSourceInstanceId(string assetSourceInstanceId) { DARABONBA_PTR_SET_VALUE(assetSourceInstanceId_, assetSourceInstanceId) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline OperationTickets& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // effectCount Field Functions 
      bool hasEffectCount() const { return this->effectCount_ != nullptr;};
      void deleteEffectCount() { this->effectCount_ = nullptr;};
      inline int32_t getEffectCount() const { DARABONBA_PTR_GET_DEFAULT(effectCount_, 0) };
      inline OperationTickets& setEffectCount(int32_t effectCount) { DARABONBA_PTR_SET_VALUE(effectCount_, effectCount) };


      // effectEndTime Field Functions 
      bool hasEffectEndTime() const { return this->effectEndTime_ != nullptr;};
      void deleteEffectEndTime() { this->effectEndTime_ = nullptr;};
      inline int32_t getEffectEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectEndTime_, 0) };
      inline OperationTickets& setEffectEndTime(int32_t effectEndTime) { DARABONBA_PTR_SET_VALUE(effectEndTime_, effectEndTime) };


      // effectStartTime Field Functions 
      bool hasEffectStartTime() const { return this->effectStartTime_ != nullptr;};
      void deleteEffectStartTime() { this->effectStartTime_ = nullptr;};
      inline int32_t getEffectStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectStartTime_, 0) };
      inline OperationTickets& setEffectStartTime(int32_t effectStartTime) { DARABONBA_PTR_SET_VALUE(effectStartTime_, effectStartTime) };


      // operationTicketId Field Functions 
      bool hasOperationTicketId() const { return this->operationTicketId_ != nullptr;};
      void deleteOperationTicketId() { this->operationTicketId_ = nullptr;};
      inline string getOperationTicketId() const { DARABONBA_PTR_GET_DEFAULT(operationTicketId_, "") };
      inline OperationTickets& setOperationTicketId(string operationTicketId) { DARABONBA_PTR_SET_VALUE(operationTicketId_, operationTicketId) };


      // protocolName Field Functions 
      bool hasProtocolName() const { return this->protocolName_ != nullptr;};
      void deleteProtocolName() { this->protocolName_ = nullptr;};
      inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
      inline OperationTickets& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline OperationTickets& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The ID of the O\\&M applicant.
      shared_ptr<string> applyUserId_ {};
      // The username of the O\\&M applicant.
      shared_ptr<string> applyUsername_ {};
      // The remarks entered when the O\\&M personnel applies for O\\&M permissions.
      shared_ptr<string> approveComment_ {};
      // The ID of the asset account.
      shared_ptr<string> assetAccountId_ {};
      // The username of the asset account.
      shared_ptr<string> assetAccountName_ {};
      // The IP address of the asset.
      shared_ptr<string> assetAddress_ {};
      // The ID of the asset.
      shared_ptr<string> assetId_ {};
      // The name of the asset.
      shared_ptr<string> assetName_ {};
      // The network domain ID of the asset.
      shared_ptr<string> assetNetworkDomainId_ {};
      // The operating system of the asset.
      shared_ptr<string> assetOs_ {};
      // The name of the asset source to which the asset belongs. Valid values:
      // 
      // *   **Local**: an on-premises host.
      // *   **Ecs**: an Elastic Compute Service (ECS) instance.
      // *   **Rds**: an ApsaraDB RDS instance.
      // *   A third-party asset source.
      shared_ptr<string> assetSource_ {};
      // The ID of the asset source to which the asset belongs.
      shared_ptr<string> assetSourceInstanceId_ {};
      // The time when the O\\&M application was submitted. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The maximum number of logons applied by the O\\&M engineer. Valid values:
      // 
      // *   **0**: The number of logons is unlimited. The O\\&M engineer can log on to the specified asset for unlimited times during the validity period.
      // *   **1**: The O\\&M engineer can log on to the specified asset only once during the validity period.
      shared_ptr<int32_t> effectCount_ {};
      // The end time of the validity period. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> effectEndTime_ {};
      // The start time of the validity period. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> effectStartTime_ {};
      // The ID of the O\\&M application to be reviewed.
      shared_ptr<string> operationTicketId_ {};
      // The O\\&M protocol.
      shared_ptr<string> protocolName_ {};
      // The status of the review. Valid value:
      // 
      // *   Normal: to be reviewed
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->operationTickets_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // operationTickets Field Functions 
    bool hasOperationTickets() const { return this->operationTickets_ != nullptr;};
    void deleteOperationTickets() { this->operationTickets_ = nullptr;};
    inline const vector<ListOperationTicketsResponseBody::OperationTickets> & getOperationTickets() const { DARABONBA_PTR_GET_CONST(operationTickets_, vector<ListOperationTicketsResponseBody::OperationTickets>) };
    inline vector<ListOperationTicketsResponseBody::OperationTickets> getOperationTickets() { DARABONBA_PTR_GET(operationTickets_, vector<ListOperationTicketsResponseBody::OperationTickets>) };
    inline ListOperationTicketsResponseBody& setOperationTickets(const vector<ListOperationTicketsResponseBody::OperationTickets> & operationTickets) { DARABONBA_PTR_SET_VALUE(operationTickets_, operationTickets) };
    inline ListOperationTicketsResponseBody& setOperationTickets(vector<ListOperationTicketsResponseBody::OperationTickets> && operationTickets) { DARABONBA_PTR_SET_RVALUE(operationTickets_, operationTickets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationTicketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOperationTicketsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The O\\&M applications to be reviewed.
    shared_ptr<vector<ListOperationTicketsResponseBody::OperationTickets>> operationTickets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of O\\&M applications to be reviewed.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
