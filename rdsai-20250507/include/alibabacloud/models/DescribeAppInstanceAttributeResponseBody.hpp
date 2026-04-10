// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(EipStatus, eipStatus_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceMinorVersion, instanceMinorVersion_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(NatCreatedBy, natCreatedBy_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
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
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(EipStatus, eipStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceMinorVersion, instanceMinorVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(NatCreatedBy, natCreatedBy_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
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
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->type_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Components& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Components& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->appType_ == nullptr && this->components_ == nullptr && this->DBInstanceName_ == nullptr && this->eipId_ == nullptr && this->eipStatus_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceMinorVersion_ == nullptr && this->instanceName_ == nullptr && this->natCreatedBy_ == nullptr && this->natGatewayId_ == nullptr
        && this->natStatus_ == nullptr && this->publicConnectionString_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcConnectionString_ == nullptr && this->zoneId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<DescribeAppInstanceAttributeResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<DescribeAppInstanceAttributeResponseBody::Components>) };
    inline vector<DescribeAppInstanceAttributeResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<DescribeAppInstanceAttributeResponseBody::Components>) };
    inline DescribeAppInstanceAttributeResponseBody& setComponents(const vector<DescribeAppInstanceAttributeResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline DescribeAppInstanceAttributeResponseBody& setComponents(vector<DescribeAppInstanceAttributeResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string getEipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // eipStatus Field Functions 
    bool hasEipStatus() const { return this->eipStatus_ != nullptr;};
    void deleteEipStatus() { this->eipStatus_ = nullptr;};
    inline string getEipStatus() const { DARABONBA_PTR_GET_DEFAULT(eipStatus_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setEipStatus(string eipStatus) { DARABONBA_PTR_SET_VALUE(eipStatus_, eipStatus) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceMinorVersion Field Functions 
    bool hasInstanceMinorVersion() const { return this->instanceMinorVersion_ != nullptr;};
    void deleteInstanceMinorVersion() { this->instanceMinorVersion_ = nullptr;};
    inline string getInstanceMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceMinorVersion_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setInstanceMinorVersion(string instanceMinorVersion) { DARABONBA_PTR_SET_VALUE(instanceMinorVersion_, instanceMinorVersion) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // natCreatedBy Field Functions 
    bool hasNatCreatedBy() const { return this->natCreatedBy_ != nullptr;};
    void deleteNatCreatedBy() { this->natCreatedBy_ = nullptr;};
    inline string getNatCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(natCreatedBy_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setNatCreatedBy(string natCreatedBy) { DARABONBA_PTR_SET_VALUE(natCreatedBy_, natCreatedBy) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natStatus Field Functions 
    bool hasNatStatus() const { return this->natStatus_ != nullptr;};
    void deleteNatStatus() { this->natStatus_ = nullptr;};
    inline string getNatStatus() const { DARABONBA_PTR_GET_DEFAULT(natStatus_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setNatStatus(string natStatus) { DARABONBA_PTR_SET_VALUE(natStatus_, natStatus) };


    // publicConnectionString Field Functions 
    bool hasPublicConnectionString() const { return this->publicConnectionString_ != nullptr;};
    void deletePublicConnectionString() { this->publicConnectionString_ = nullptr;};
    inline string getPublicConnectionString() const { DARABONBA_PTR_GET_DEFAULT(publicConnectionString_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setPublicConnectionString(string publicConnectionString) { DARABONBA_PTR_SET_VALUE(publicConnectionString_, publicConnectionString) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcConnectionString Field Functions 
    bool hasVpcConnectionString() const { return this->vpcConnectionString_ != nullptr;};
    void deleteVpcConnectionString() { this->vpcConnectionString_ = nullptr;};
    inline string getVpcConnectionString() const { DARABONBA_PTR_GET_DEFAULT(vpcConnectionString_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setVpcConnectionString(string vpcConnectionString) { DARABONBA_PTR_SET_VALUE(vpcConnectionString_, vpcConnectionString) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAppInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The name of the AI application.
    shared_ptr<string> appName_ {};
    // The application type. Only **supabase** is supported. For more information, see [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html).
    shared_ptr<string> appType_ {};
    shared_ptr<vector<DescribeAppInstanceAttributeResponseBody::Components>> components_ {};
    // The ID of the RDS for PostgreSQL instance with which the RDS Supabase instances are associated.
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> eipId_ {};
    shared_ptr<string> eipStatus_ {};
    // The instance type of the RDS Supabase instance.
    shared_ptr<string> instanceClass_ {};
    // The minor version number of RDS Supabase instance.
    shared_ptr<string> instanceMinorVersion_ {};
    // The ID of the RDS Supabase instance.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> natCreatedBy_ {};
    shared_ptr<string> natGatewayId_ {};
    shared_ptr<string> natStatus_ {};
    // The public endpoint of the AI application.
    shared_ptr<string> publicConnectionString_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the instance. For more information, see [Instance state table](https://help.aliyun.com/document_detail/2623972.html).
    shared_ptr<string> status_ {};
    // The ID of the vSwitch.
    shared_ptr<string> vSwitchId_ {};
    // The internal endpoint of the AI application.
    shared_ptr<string> vpcConnectionString_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
