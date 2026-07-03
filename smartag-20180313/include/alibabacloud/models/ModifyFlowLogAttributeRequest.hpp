// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFLOWLOGATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFLOWLOGATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifyFlowLogAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFlowLogAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAging, activeAging_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_TO_JSON(InactiveAging, inactiveAging_);
      DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetflowServerIp, netflowServerIp_);
      DARABONBA_PTR_TO_JSON(NetflowServerPort, netflowServerPort_);
      DARABONBA_PTR_TO_JSON(NetflowVersion, netflowVersion_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFlowLogAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAging, activeAging_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowLogId, flowLogId_);
      DARABONBA_PTR_FROM_JSON(InactiveAging, inactiveAging_);
      DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetflowServerIp, netflowServerIp_);
      DARABONBA_PTR_FROM_JSON(NetflowServerPort, netflowServerPort_);
      DARABONBA_PTR_FROM_JSON(NetflowVersion, netflowVersion_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
    };
    ModifyFlowLogAttributeRequest() = default ;
    ModifyFlowLogAttributeRequest(const ModifyFlowLogAttributeRequest &) = default ;
    ModifyFlowLogAttributeRequest(ModifyFlowLogAttributeRequest &&) = default ;
    ModifyFlowLogAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFlowLogAttributeRequest() = default ;
    ModifyFlowLogAttributeRequest& operator=(const ModifyFlowLogAttributeRequest &) = default ;
    ModifyFlowLogAttributeRequest& operator=(ModifyFlowLogAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeAging_ == nullptr
        && this->description_ == nullptr && this->flowLogId_ == nullptr && this->inactiveAging_ == nullptr && this->logstoreName_ == nullptr && this->name_ == nullptr
        && this->netflowServerIp_ == nullptr && this->netflowServerPort_ == nullptr && this->netflowVersion_ == nullptr && this->outputType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->projectName_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->slsRegionId_ == nullptr; };
    // activeAging Field Functions 
    bool hasActiveAging() const { return this->activeAging_ != nullptr;};
    void deleteActiveAging() { this->activeAging_ = nullptr;};
    inline int32_t getActiveAging() const { DARABONBA_PTR_GET_DEFAULT(activeAging_, 0) };
    inline ModifyFlowLogAttributeRequest& setActiveAging(int32_t activeAging) { DARABONBA_PTR_SET_VALUE(activeAging_, activeAging) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyFlowLogAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowLogId Field Functions 
    bool hasFlowLogId() const { return this->flowLogId_ != nullptr;};
    void deleteFlowLogId() { this->flowLogId_ = nullptr;};
    inline string getFlowLogId() const { DARABONBA_PTR_GET_DEFAULT(flowLogId_, "") };
    inline ModifyFlowLogAttributeRequest& setFlowLogId(string flowLogId) { DARABONBA_PTR_SET_VALUE(flowLogId_, flowLogId) };


    // inactiveAging Field Functions 
    bool hasInactiveAging() const { return this->inactiveAging_ != nullptr;};
    void deleteInactiveAging() { this->inactiveAging_ = nullptr;};
    inline int32_t getInactiveAging() const { DARABONBA_PTR_GET_DEFAULT(inactiveAging_, 0) };
    inline ModifyFlowLogAttributeRequest& setInactiveAging(int32_t inactiveAging) { DARABONBA_PTR_SET_VALUE(inactiveAging_, inactiveAging) };


    // logstoreName Field Functions 
    bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
    void deleteLogstoreName() { this->logstoreName_ = nullptr;};
    inline string getLogstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
    inline ModifyFlowLogAttributeRequest& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyFlowLogAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netflowServerIp Field Functions 
    bool hasNetflowServerIp() const { return this->netflowServerIp_ != nullptr;};
    void deleteNetflowServerIp() { this->netflowServerIp_ = nullptr;};
    inline string getNetflowServerIp() const { DARABONBA_PTR_GET_DEFAULT(netflowServerIp_, "") };
    inline ModifyFlowLogAttributeRequest& setNetflowServerIp(string netflowServerIp) { DARABONBA_PTR_SET_VALUE(netflowServerIp_, netflowServerIp) };


    // netflowServerPort Field Functions 
    bool hasNetflowServerPort() const { return this->netflowServerPort_ != nullptr;};
    void deleteNetflowServerPort() { this->netflowServerPort_ = nullptr;};
    inline int32_t getNetflowServerPort() const { DARABONBA_PTR_GET_DEFAULT(netflowServerPort_, 0) };
    inline ModifyFlowLogAttributeRequest& setNetflowServerPort(int32_t netflowServerPort) { DARABONBA_PTR_SET_VALUE(netflowServerPort_, netflowServerPort) };


    // netflowVersion Field Functions 
    bool hasNetflowVersion() const { return this->netflowVersion_ != nullptr;};
    void deleteNetflowVersion() { this->netflowVersion_ = nullptr;};
    inline string getNetflowVersion() const { DARABONBA_PTR_GET_DEFAULT(netflowVersion_, "") };
    inline ModifyFlowLogAttributeRequest& setNetflowVersion(string netflowVersion) { DARABONBA_PTR_SET_VALUE(netflowVersion_, netflowVersion) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline ModifyFlowLogAttributeRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyFlowLogAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyFlowLogAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ModifyFlowLogAttributeRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyFlowLogAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyFlowLogAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyFlowLogAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline ModifyFlowLogAttributeRequest& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


  protected:
    // The interval at which log data of active network connections is collected. Default value: **300**. Unit: seconds.
    shared_ptr<int32_t> activeAging_ {};
    // The description of the flow log.
    shared_ptr<string> description_ {};
    // The ID of the flow log.
    // 
    // This parameter is required.
    shared_ptr<string> flowLogId_ {};
    // The interval at which log data of inactive network connections is collected. Default value: **15**. Unit: seconds.
    shared_ptr<int32_t> inactiveAging_ {};
    // The Logstore of Log Service. This parameter is required when OutputType is set to **sls**.
    shared_ptr<string> logstoreName_ {};
    // The name of the flow log.
    shared_ptr<string> name_ {};
    // The IP address of the NetFlow collector where the flow log is stored. This parameter is required when OutputType is set to **netflow**.
    shared_ptr<string> netflowServerIp_ {};
    // The port of the NetFlow collector. Default value: **9995**. This parameter is required when OutputType is set to **netflow**.
    shared_ptr<int32_t> netflowServerPort_ {};
    // The NetFlow version. Valid values: **V5**, **V9**, and **V10**. Default value: **V9**. This parameter is required when OutputType is set to **netflow**.
    shared_ptr<string> netflowVersion_ {};
    // The location where the flow log is stored. Valid values:
    // 
    // - **sls**: The flow log is stored in Log Service.
    // 
    // - **netflow**: The flow log is stored on a NetFlow collector.
    // 
    // - **all**: The flow log is stored both in Log Service and on a NetFlow collector.
    shared_ptr<string> outputType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The project to which the Logstore of Log Service belongs. This parameter is required when OutputType is set to **sls**.
    shared_ptr<string> projectName_ {};
    // The ID of the region where the flow log is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the region where Log Service is deployed. This parameter is required when OutputType is set to **sls**.
    shared_ptr<string> slsRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
