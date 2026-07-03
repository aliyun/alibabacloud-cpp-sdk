// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateQosPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestCidr, destCidr_);
      DARABONBA_PTR_TO_JSON(DestPortRange, destPortRange_);
      DARABONBA_PTR_TO_JSON(DpiGroupIds, dpiGroupIds_);
      DARABONBA_PTR_TO_JSON(DpiSignatureIds, dpiSignatureIds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestCidr, destCidr_);
      DARABONBA_PTR_FROM_JSON(DestPortRange, destPortRange_);
      DARABONBA_PTR_FROM_JSON(DpiGroupIds, dpiGroupIds_);
      DARABONBA_PTR_FROM_JSON(DpiSignatureIds, dpiSignatureIds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateQosPolicyRequest() = default ;
    CreateQosPolicyRequest(const CreateQosPolicyRequest &) = default ;
    CreateQosPolicyRequest(CreateQosPolicyRequest &&) = default ;
    CreateQosPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosPolicyRequest() = default ;
    CreateQosPolicyRequest& operator=(const CreateQosPolicyRequest &) = default ;
    CreateQosPolicyRequest& operator=(CreateQosPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->destCidr_ == nullptr && this->destPortRange_ == nullptr && this->dpiGroupIds_ == nullptr && this->dpiSignatureIds_ == nullptr && this->endTime_ == nullptr
        && this->ipProtocol_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->priority_ == nullptr
        && this->qosId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sourceCidr_ == nullptr
        && this->sourcePortRange_ == nullptr && this->startTime_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateQosPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidr Field Functions 
    bool hasDestCidr() const { return this->destCidr_ != nullptr;};
    void deleteDestCidr() { this->destCidr_ = nullptr;};
    inline string getDestCidr() const { DARABONBA_PTR_GET_DEFAULT(destCidr_, "") };
    inline CreateQosPolicyRequest& setDestCidr(string destCidr) { DARABONBA_PTR_SET_VALUE(destCidr_, destCidr) };


    // destPortRange Field Functions 
    bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
    void deleteDestPortRange() { this->destPortRange_ = nullptr;};
    inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
    inline CreateQosPolicyRequest& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


    // dpiGroupIds Field Functions 
    bool hasDpiGroupIds() const { return this->dpiGroupIds_ != nullptr;};
    void deleteDpiGroupIds() { this->dpiGroupIds_ = nullptr;};
    inline const vector<string> & getDpiGroupIds() const { DARABONBA_PTR_GET_CONST(dpiGroupIds_, vector<string>) };
    inline vector<string> getDpiGroupIds() { DARABONBA_PTR_GET(dpiGroupIds_, vector<string>) };
    inline CreateQosPolicyRequest& setDpiGroupIds(const vector<string> & dpiGroupIds) { DARABONBA_PTR_SET_VALUE(dpiGroupIds_, dpiGroupIds) };
    inline CreateQosPolicyRequest& setDpiGroupIds(vector<string> && dpiGroupIds) { DARABONBA_PTR_SET_RVALUE(dpiGroupIds_, dpiGroupIds) };


    // dpiSignatureIds Field Functions 
    bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
    void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
    inline const vector<string> & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, vector<string>) };
    inline vector<string> getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, vector<string>) };
    inline CreateQosPolicyRequest& setDpiSignatureIds(const vector<string> & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
    inline CreateQosPolicyRequest& setDpiSignatureIds(vector<string> && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateQosPolicyRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline CreateQosPolicyRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateQosPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateQosPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateQosPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateQosPolicyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline CreateQosPolicyRequest& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateQosPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateQosPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateQosPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline CreateQosPolicyRequest& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline CreateQosPolicyRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateQosPolicyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The description of the traffic classification rule for the QoS policy.
    // 
    // The description must be 1 to 512 characters in length and must start with a letter or a Chinese character. It can contain digits, underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // The destination CIDR block.
    // 
    // The destination CIDR block is in CIDR notation. Example: 192.168.10.0/24.
    // 
    // This parameter is required.
    shared_ptr<string> destCidr_ {};
    // The destination port range.
    // 
    // Valid values: **-1** or **1** to **65535**.
    // 
    // Examples of destination port range formats:
    // 
    // - **1/200**: port range 1 to 200.
    // - **80/80**: port 80.
    // - **-1/-1**: all ports.
    // 
    // This parameter is required.
    shared_ptr<string> destPortRange_ {};
    // The list of application group IDs.
    shared_ptr<vector<string>> dpiGroupIds_ {};
    // The list of application IDs.
    shared_ptr<vector<string>> dpiSignatureIds_ {};
    // The time when the traffic classification rule expires.
    // 
    // The time is expressed in ISO 8601 format and uses UTC+8. Format: `YYYY-MM-DDThh:mm:ss+0800`.
    shared_ptr<string> endTime_ {};
    // The protocol type to which the traffic classification rule applies.
    // 
    // For the protocol types supported by the traffic classification rule, refer to the console.
    // 
    // This parameter is required.
    shared_ptr<string> ipProtocol_ {};
    // The name of the traffic classification rule for the QoS policy.
    // 
    // The name must be 2 to 100 characters in length and must start with a letter or a Chinese character. It can contain digits, hyphens (-), and underscores (_).
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The priority of the rate limiting rule to which the traffic classification rule belongs.
    // 
    // Valid values: **1** to **3**. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The instance ID of the QoS policy.
    // 
    // This parameter is required.
    shared_ptr<string> qosId_ {};
    // The region ID of the QoS policy instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source CIDR block.
    // 
    // The source CIDR block is in CIDR notation. Example: 192.168.1.0/24.
    // 
    // This parameter is required.
    shared_ptr<string> sourceCidr_ {};
    // The source port range.
    // 
    // Valid values: **-1** or **1** to **65535**.
    // 
    // Examples of source port range formats:
    // 
    // - **1/200**: port range 1 to 200.
    // - **80/80**: port 80.
    // - **-1/-1**: all ports.
    // 
    // This parameter is required.
    shared_ptr<string> sourcePortRange_ {};
    // The effective period start time of the traffic categorization rule for the QoS policy.
    // 
    // The time is expressed in ISO 8601 format and uses UTC+8. Format: `YYYY-MM-DDThh:mm:ss+0800`.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
