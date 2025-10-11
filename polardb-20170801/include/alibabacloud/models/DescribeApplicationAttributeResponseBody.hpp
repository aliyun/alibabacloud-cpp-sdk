// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationAttributeResponseBodyComponents.hpp>
#include <alibabacloud/models/DescribeApplicationAttributeResponseBodyEndpoints.hpp>
#include <alibabacloud/models/DescribeApplicationAttributeResponseBodySecurityGroups.hpp>
#include <alibabacloud/models/DescribeApplicationAttributeResponseBodySecurityIPArrays.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(SecurityIPArrays, securityIPArrays_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpgradeAvailable, upgradeAvailable_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PolarFSInstanceId, polarFSInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(SecurityIPArrays, securityIPArrays_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpgradeAvailable, upgradeAvailable_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeApplicationAttributeResponseBody() = default ;
    DescribeApplicationAttributeResponseBody(const DescribeApplicationAttributeResponseBody &) = default ;
    DescribeApplicationAttributeResponseBody(DescribeApplicationAttributeResponseBody &&) = default ;
    DescribeApplicationAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAttributeResponseBody() = default ;
    DescribeApplicationAttributeResponseBody& operator=(const DescribeApplicationAttributeResponseBody &) = default ;
    DescribeApplicationAttributeResponseBody& operator=(DescribeApplicationAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationType_ != nullptr && this->architecture_ != nullptr && this->components_ != nullptr && this->creationTime_ != nullptr && this->DBClusterId_ != nullptr
        && this->description_ != nullptr && this->endpoints_ != nullptr && this->expireTime_ != nullptr && this->expired_ != nullptr && this->lockMode_ != nullptr
        && this->maintainEndTime_ != nullptr && this->maintainStartTime_ != nullptr && this->payType_ != nullptr && this->polarFSInstanceId_ != nullptr && this->regionId_ != nullptr
        && this->requestId_ != nullptr && this->securityGroups_ != nullptr && this->securityIPArrays_ != nullptr && this->status_ != nullptr && this->upgradeAvailable_ != nullptr
        && this->VPCId_ != nullptr && this->vSwitchId_ != nullptr && this->version_ != nullptr && this->zoneId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationAttributeResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribeApplicationAttributeResponseBody& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeApplicationAttributeResponseBody& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<DescribeApplicationAttributeResponseBodyComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<DescribeApplicationAttributeResponseBodyComponents>) };
    inline vector<DescribeApplicationAttributeResponseBodyComponents> components() { DARABONBA_PTR_GET(components_, vector<DescribeApplicationAttributeResponseBodyComponents>) };
    inline DescribeApplicationAttributeResponseBody& setComponents(const vector<DescribeApplicationAttributeResponseBodyComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeApplicationAttributeResponseBody& setComponents(vector<DescribeApplicationAttributeResponseBodyComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeApplicationAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeApplicationAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApplicationAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<DescribeApplicationAttributeResponseBodyEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<DescribeApplicationAttributeResponseBodyEndpoints>) };
    inline vector<DescribeApplicationAttributeResponseBodyEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<DescribeApplicationAttributeResponseBodyEndpoints>) };
    inline DescribeApplicationAttributeResponseBody& setEndpoints(const vector<DescribeApplicationAttributeResponseBodyEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeApplicationAttributeResponseBody& setEndpoints(vector<DescribeApplicationAttributeResponseBodyEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeApplicationAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline DescribeApplicationAttributeResponseBody& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeApplicationAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline string maintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, "") };
    inline DescribeApplicationAttributeResponseBody& setMaintainEndTime(string maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline string maintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, "") };
    inline DescribeApplicationAttributeResponseBody& setMaintainStartTime(string maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeApplicationAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // polarFSInstanceId Field Functions 
    bool hasPolarFSInstanceId() const { return this->polarFSInstanceId_ != nullptr;};
    void deletePolarFSInstanceId() { this->polarFSInstanceId_ = nullptr;};
    inline string polarFSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFSInstanceId_, "") };
    inline DescribeApplicationAttributeResponseBody& setPolarFSInstanceId(string polarFSInstanceId) { DARABONBA_PTR_SET_VALUE(polarFSInstanceId_, polarFSInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApplicationAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<DescribeApplicationAttributeResponseBodySecurityGroups> & securityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<DescribeApplicationAttributeResponseBodySecurityGroups>) };
    inline vector<DescribeApplicationAttributeResponseBodySecurityGroups> securityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<DescribeApplicationAttributeResponseBodySecurityGroups>) };
    inline DescribeApplicationAttributeResponseBody& setSecurityGroups(const vector<DescribeApplicationAttributeResponseBodySecurityGroups> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline DescribeApplicationAttributeResponseBody& setSecurityGroups(vector<DescribeApplicationAttributeResponseBodySecurityGroups> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // securityIPArrays Field Functions 
    bool hasSecurityIPArrays() const { return this->securityIPArrays_ != nullptr;};
    void deleteSecurityIPArrays() { this->securityIPArrays_ = nullptr;};
    inline const vector<DescribeApplicationAttributeResponseBodySecurityIPArrays> & securityIPArrays() const { DARABONBA_PTR_GET_CONST(securityIPArrays_, vector<DescribeApplicationAttributeResponseBodySecurityIPArrays>) };
    inline vector<DescribeApplicationAttributeResponseBodySecurityIPArrays> securityIPArrays() { DARABONBA_PTR_GET(securityIPArrays_, vector<DescribeApplicationAttributeResponseBodySecurityIPArrays>) };
    inline DescribeApplicationAttributeResponseBody& setSecurityIPArrays(const vector<DescribeApplicationAttributeResponseBodySecurityIPArrays> & securityIPArrays) { DARABONBA_PTR_SET_VALUE(securityIPArrays_, securityIPArrays) };
    inline DescribeApplicationAttributeResponseBody& setSecurityIPArrays(vector<DescribeApplicationAttributeResponseBodySecurityIPArrays> && securityIPArrays) { DARABONBA_PTR_SET_RVALUE(securityIPArrays_, securityIPArrays) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApplicationAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // upgradeAvailable Field Functions 
    bool hasUpgradeAvailable() const { return this->upgradeAvailable_ != nullptr;};
    void deleteUpgradeAvailable() { this->upgradeAvailable_ = nullptr;};
    inline string upgradeAvailable() const { DARABONBA_PTR_GET_DEFAULT(upgradeAvailable_, "") };
    inline DescribeApplicationAttributeResponseBody& setUpgradeAvailable(string upgradeAvailable) { DARABONBA_PTR_SET_VALUE(upgradeAvailable_, upgradeAvailable) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeApplicationAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeApplicationAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeApplicationAttributeResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeApplicationAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> applicationType_ = nullptr;
    std::shared_ptr<string> architecture_ = nullptr;
    std::shared_ptr<vector<DescribeApplicationAttributeResponseBodyComponents>> components_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<DescribeApplicationAttributeResponseBodyEndpoints>> endpoints_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<bool> expired_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> maintainEndTime_ = nullptr;
    std::shared_ptr<string> maintainStartTime_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> polarFSInstanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeApplicationAttributeResponseBodySecurityGroups>> securityGroups_ = nullptr;
    std::shared_ptr<vector<DescribeApplicationAttributeResponseBodySecurityIPArrays>> securityIPArrays_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> upgradeAvailable_ = nullptr;
    // VPC ID
    std::shared_ptr<string> VPCId_ = nullptr;
    // VSwitch ID
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
