// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHEALTHCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHEALTHCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifyHealthCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHealthCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DstIpAddr, dstIpAddr_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(FailCountThreshold, failCountThreshold_);
      DARABONBA_PTR_TO_JSON(HcInstanceId, hcInstanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProbeCount, probeCount_);
      DARABONBA_PTR_TO_JSON(ProbeInterval, probeInterval_);
      DARABONBA_PTR_TO_JSON(ProbeTimeout, probeTimeout_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RttFailThreshold, rttFailThreshold_);
      DARABONBA_PTR_TO_JSON(RttThreshold, rttThreshold_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SrcIpAddr, srcIpAddr_);
      DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHealthCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DstIpAddr, dstIpAddr_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(FailCountThreshold, failCountThreshold_);
      DARABONBA_PTR_FROM_JSON(HcInstanceId, hcInstanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProbeCount, probeCount_);
      DARABONBA_PTR_FROM_JSON(ProbeInterval, probeInterval_);
      DARABONBA_PTR_FROM_JSON(ProbeTimeout, probeTimeout_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RttFailThreshold, rttFailThreshold_);
      DARABONBA_PTR_FROM_JSON(RttThreshold, rttThreshold_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SrcIpAddr, srcIpAddr_);
      DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyHealthCheckRequest() = default ;
    ModifyHealthCheckRequest(const ModifyHealthCheckRequest &) = default ;
    ModifyHealthCheckRequest(ModifyHealthCheckRequest &&) = default ;
    ModifyHealthCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHealthCheckRequest() = default ;
    ModifyHealthCheckRequest& operator=(const ModifyHealthCheckRequest &) = default ;
    ModifyHealthCheckRequest& operator=(ModifyHealthCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->dstIpAddr_ == nullptr && this->dstPort_ == nullptr && this->failCountThreshold_ == nullptr && this->hcInstanceId_ == nullptr && this->name_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->probeCount_ == nullptr && this->probeInterval_ == nullptr && this->probeTimeout_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->rttFailThreshold_ == nullptr && this->rttThreshold_ == nullptr
        && this->smartAGId_ == nullptr && this->srcIpAddr_ == nullptr && this->srcPort_ == nullptr && this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyHealthCheckRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstIpAddr Field Functions 
    bool hasDstIpAddr() const { return this->dstIpAddr_ != nullptr;};
    void deleteDstIpAddr() { this->dstIpAddr_ = nullptr;};
    inline string getDstIpAddr() const { DARABONBA_PTR_GET_DEFAULT(dstIpAddr_, "") };
    inline ModifyHealthCheckRequest& setDstIpAddr(string dstIpAddr) { DARABONBA_PTR_SET_VALUE(dstIpAddr_, dstIpAddr) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
    inline ModifyHealthCheckRequest& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // failCountThreshold Field Functions 
    bool hasFailCountThreshold() const { return this->failCountThreshold_ != nullptr;};
    void deleteFailCountThreshold() { this->failCountThreshold_ = nullptr;};
    inline int32_t getFailCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(failCountThreshold_, 0) };
    inline ModifyHealthCheckRequest& setFailCountThreshold(int32_t failCountThreshold) { DARABONBA_PTR_SET_VALUE(failCountThreshold_, failCountThreshold) };


    // hcInstanceId Field Functions 
    bool hasHcInstanceId() const { return this->hcInstanceId_ != nullptr;};
    void deleteHcInstanceId() { this->hcInstanceId_ = nullptr;};
    inline string getHcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(hcInstanceId_, "") };
    inline ModifyHealthCheckRequest& setHcInstanceId(string hcInstanceId) { DARABONBA_PTR_SET_VALUE(hcInstanceId_, hcInstanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyHealthCheckRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyHealthCheckRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyHealthCheckRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // probeCount Field Functions 
    bool hasProbeCount() const { return this->probeCount_ != nullptr;};
    void deleteProbeCount() { this->probeCount_ = nullptr;};
    inline int32_t getProbeCount() const { DARABONBA_PTR_GET_DEFAULT(probeCount_, 0) };
    inline ModifyHealthCheckRequest& setProbeCount(int32_t probeCount) { DARABONBA_PTR_SET_VALUE(probeCount_, probeCount) };


    // probeInterval Field Functions 
    bool hasProbeInterval() const { return this->probeInterval_ != nullptr;};
    void deleteProbeInterval() { this->probeInterval_ = nullptr;};
    inline int32_t getProbeInterval() const { DARABONBA_PTR_GET_DEFAULT(probeInterval_, 0) };
    inline ModifyHealthCheckRequest& setProbeInterval(int32_t probeInterval) { DARABONBA_PTR_SET_VALUE(probeInterval_, probeInterval) };


    // probeTimeout Field Functions 
    bool hasProbeTimeout() const { return this->probeTimeout_ != nullptr;};
    void deleteProbeTimeout() { this->probeTimeout_ = nullptr;};
    inline int32_t getProbeTimeout() const { DARABONBA_PTR_GET_DEFAULT(probeTimeout_, 0) };
    inline ModifyHealthCheckRequest& setProbeTimeout(int32_t probeTimeout) { DARABONBA_PTR_SET_VALUE(probeTimeout_, probeTimeout) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHealthCheckRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyHealthCheckRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyHealthCheckRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rttFailThreshold Field Functions 
    bool hasRttFailThreshold() const { return this->rttFailThreshold_ != nullptr;};
    void deleteRttFailThreshold() { this->rttFailThreshold_ = nullptr;};
    inline int32_t getRttFailThreshold() const { DARABONBA_PTR_GET_DEFAULT(rttFailThreshold_, 0) };
    inline ModifyHealthCheckRequest& setRttFailThreshold(int32_t rttFailThreshold) { DARABONBA_PTR_SET_VALUE(rttFailThreshold_, rttFailThreshold) };


    // rttThreshold Field Functions 
    bool hasRttThreshold() const { return this->rttThreshold_ != nullptr;};
    void deleteRttThreshold() { this->rttThreshold_ = nullptr;};
    inline int32_t getRttThreshold() const { DARABONBA_PTR_GET_DEFAULT(rttThreshold_, 0) };
    inline ModifyHealthCheckRequest& setRttThreshold(int32_t rttThreshold) { DARABONBA_PTR_SET_VALUE(rttThreshold_, rttThreshold) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifyHealthCheckRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // srcIpAddr Field Functions 
    bool hasSrcIpAddr() const { return this->srcIpAddr_ != nullptr;};
    void deleteSrcIpAddr() { this->srcIpAddr_ = nullptr;};
    inline string getSrcIpAddr() const { DARABONBA_PTR_GET_DEFAULT(srcIpAddr_, "") };
    inline ModifyHealthCheckRequest& setSrcIpAddr(string srcIpAddr) { DARABONBA_PTR_SET_VALUE(srcIpAddr_, srcIpAddr) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline int32_t getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
    inline ModifyHealthCheckRequest& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyHealthCheckRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the health check.
    // 
    // The description must be 2 to 256 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> description_ {};
    // The destination IP address of the health check.
    shared_ptr<string> dstIpAddr_ {};
    // The destination port of the health check.
    // 
    // >  This parameter is not supported.
    shared_ptr<int32_t> dstPort_ {};
    // The number of failed probes before a health check is declared failed.
    // 
    // Valid values: **1** to **15**.
    // 
    // Default value: **3**.
    shared_ptr<int32_t> failCountThreshold_ {};
    // The ID of the health check.
    // 
    // This parameter is required.
    shared_ptr<string> hcInstanceId_ {};
    // The name of the health check.
    // 
    // The name must be 2 to 100 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of probes that are performed per health check.
    // 
    // Valid values: **1** to **20**.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> probeCount_ {};
    // The time interval at which probes are performed. The next probe does not start before the current one is complete.
    // 
    // Valid values: **1000** to **60000**.
    // 
    // Default value: **2000**.
    // 
    // Unit: milliseconds.
    shared_ptr<int32_t> probeInterval_ {};
    // The timeout period of the probe.
    // 
    // Valid values: **10** to **30000**.
    // 
    // Default value: **3000**.
    // 
    // Unit: milliseconds.
    shared_ptr<int32_t> probeTimeout_ {};
    // The region ID of the Smart Access Gateway (SAG) instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The number of times that the maximum RTT is exceeded before an alert is triggered.
    // 
    // Valid values: **1** to **15**.
    // 
    // Default value: **3**.
    shared_ptr<int32_t> rttFailThreshold_ {};
    // The maximum round-trip time (RTT).
    // 
    // Valid values: **-1** and **1** to **5000**.
    // 
    // Default value: **-1**. This value indicates that the RTT threshold is not specified.
    // 
    // Unit: milliseconds.
    shared_ptr<int32_t> rttThreshold_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The source IP address of the health check.
    shared_ptr<string> srcIpAddr_ {};
    // The source port of the health check.
    // 
    // >  This parameter is not supported.
    shared_ptr<int32_t> srcPort_ {};
    // The type of packet used in the health check. Only **ICMP_ECHO** is supported.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
