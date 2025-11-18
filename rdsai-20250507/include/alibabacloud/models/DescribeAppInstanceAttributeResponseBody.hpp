// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeAppInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(EipStatus, eipStatus_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceMinorVersion, instanceMinorVersion_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(NatStatus, natStatus_);
      DARABONBA_PTR_TO_JSON(PublicConnectionString, publicConnectionString_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcConnectionString, vpcConnectionString_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(EipStatus, eipStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceMinorVersion, instanceMinorVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(NatStatus, natStatus_);
      DARABONBA_PTR_FROM_JSON(PublicConnectionString, publicConnectionString_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcConnectionString, vpcConnectionString_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAppInstanceAttributeResponseBody() = default ;
    DescribeAppInstanceAttributeResponseBody(const DescribeAppInstanceAttributeResponseBody &) = default ;
    DescribeAppInstanceAttributeResponseBody(DescribeAppInstanceAttributeResponseBody &&) = default ;
    DescribeAppInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppInstanceAttributeResponseBody() = default ;
    DescribeAppInstanceAttributeResponseBody& operator=(const DescribeAppInstanceAttributeResponseBody &) = default ;
    DescribeAppInstanceAttributeResponseBody& operator=(DescribeAppInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->appType_ == nullptr && return this->DBInstanceName_ == nullptr && return this->eipStatus_ == nullptr && return this->instanceClass_ == nullptr && return this->instanceMinorVersion_ == nullptr
        && return this->instanceName_ == nullptr && return this->natStatus_ == nullptr && return this->publicConnectionString_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->status_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcConnectionString_ == nullptr && return this->zoneId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // eipStatus Field Functions 
    bool hasEipStatus() const { return this->eipStatus_ != nullptr;};
    void deleteEipStatus() { this->eipStatus_ = nullptr;};
    inline string eipStatus() const { DARABONBA_PTR_GET_DEFAULT(eipStatus_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setEipStatus(string eipStatus) { DARABONBA_PTR_SET_VALUE(eipStatus_, eipStatus) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceMinorVersion Field Functions 
    bool hasInstanceMinorVersion() const { return this->instanceMinorVersion_ != nullptr;};
    void deleteInstanceMinorVersion() { this->instanceMinorVersion_ = nullptr;};
    inline string instanceMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceMinorVersion_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setInstanceMinorVersion(string instanceMinorVersion) { DARABONBA_PTR_SET_VALUE(instanceMinorVersion_, instanceMinorVersion) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // natStatus Field Functions 
    bool hasNatStatus() const { return this->natStatus_ != nullptr;};
    void deleteNatStatus() { this->natStatus_ = nullptr;};
    inline string natStatus() const { DARABONBA_PTR_GET_DEFAULT(natStatus_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setNatStatus(string natStatus) { DARABONBA_PTR_SET_VALUE(natStatus_, natStatus) };


    // publicConnectionString Field Functions 
    bool hasPublicConnectionString() const { return this->publicConnectionString_ != nullptr;};
    void deletePublicConnectionString() { this->publicConnectionString_ = nullptr;};
    inline string publicConnectionString() const { DARABONBA_PTR_GET_DEFAULT(publicConnectionString_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setPublicConnectionString(string publicConnectionString) { DARABONBA_PTR_SET_VALUE(publicConnectionString_, publicConnectionString) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcConnectionString Field Functions 
    bool hasVpcConnectionString() const { return this->vpcConnectionString_ != nullptr;};
    void deleteVpcConnectionString() { this->vpcConnectionString_ = nullptr;};
    inline string vpcConnectionString() const { DARABONBA_PTR_GET_DEFAULT(vpcConnectionString_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setVpcConnectionString(string vpcConnectionString) { DARABONBA_PTR_SET_VALUE(vpcConnectionString_, vpcConnectionString) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> eipStatus_ = nullptr;
    std::shared_ptr<string> instanceClass_ = nullptr;
    std::shared_ptr<string> instanceMinorVersion_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> natStatus_ = nullptr;
    std::shared_ptr<string> publicConnectionString_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcConnectionString_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
