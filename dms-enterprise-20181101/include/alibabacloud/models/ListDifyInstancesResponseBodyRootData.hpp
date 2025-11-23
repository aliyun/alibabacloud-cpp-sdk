// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIFYINSTANCESRESPONSEBODYROOTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDIFYINSTANCESRESPONSEBODYROOTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDifyInstancesResponseBodyRootData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDifyInstancesResponseBodyRootData& obj) { 
      DARABONBA_PTR_TO_JSON(AppUuid, appUuid_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EnterpriseInternetUrl, enterpriseInternetUrl_);
      DARABONBA_PTR_TO_JSON(EnterpriseIntranetUrl, enterpriseIntranetUrl_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetUrl, internetUrl_);
      DARABONBA_PTR_TO_JSON(IntranetUrl, intranetUrl_);
      DARABONBA_PTR_TO_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDifyInstancesResponseBodyRootData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppUuid, appUuid_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EnterpriseInternetUrl, enterpriseInternetUrl_);
      DARABONBA_PTR_FROM_JSON(EnterpriseIntranetUrl, enterpriseIntranetUrl_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetUrl, internetUrl_);
      DARABONBA_PTR_FROM_JSON(IntranetUrl, intranetUrl_);
      DARABONBA_PTR_FROM_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListDifyInstancesResponseBodyRootData() = default ;
    ListDifyInstancesResponseBodyRootData(const ListDifyInstancesResponseBodyRootData &) = default ;
    ListDifyInstancesResponseBodyRootData(ListDifyInstancesResponseBodyRootData &&) = default ;
    ListDifyInstancesResponseBodyRootData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDifyInstancesResponseBodyRootData() = default ;
    ListDifyInstancesResponseBodyRootData& operator=(const ListDifyInstancesResponseBodyRootData &) = default ;
    ListDifyInstancesResponseBodyRootData& operator=(ListDifyInstancesResponseBodyRootData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUuid_ == nullptr
        && return this->createdTime_ == nullptr && return this->edition_ == nullptr && return this->enterpriseInternetUrl_ == nullptr && return this->enterpriseIntranetUrl_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->internetUrl_ == nullptr && return this->intranetUrl_ == nullptr && return this->majorVersion_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->workspaceId_ == nullptr && return this->zoneId_ == nullptr; };
    // appUuid Field Functions 
    bool hasAppUuid() const { return this->appUuid_ != nullptr;};
    void deleteAppUuid() { this->appUuid_ = nullptr;};
    inline string appUuid() const { DARABONBA_PTR_GET_DEFAULT(appUuid_, "") };
    inline ListDifyInstancesResponseBodyRootData& setAppUuid(string appUuid) { DARABONBA_PTR_SET_VALUE(appUuid_, appUuid) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListDifyInstancesResponseBodyRootData& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline ListDifyInstancesResponseBodyRootData& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // enterpriseInternetUrl Field Functions 
    bool hasEnterpriseInternetUrl() const { return this->enterpriseInternetUrl_ != nullptr;};
    void deleteEnterpriseInternetUrl() { this->enterpriseInternetUrl_ = nullptr;};
    inline string enterpriseInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(enterpriseInternetUrl_, "") };
    inline ListDifyInstancesResponseBodyRootData& setEnterpriseInternetUrl(string enterpriseInternetUrl) { DARABONBA_PTR_SET_VALUE(enterpriseInternetUrl_, enterpriseInternetUrl) };


    // enterpriseIntranetUrl Field Functions 
    bool hasEnterpriseIntranetUrl() const { return this->enterpriseIntranetUrl_ != nullptr;};
    void deleteEnterpriseIntranetUrl() { this->enterpriseIntranetUrl_ = nullptr;};
    inline string enterpriseIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(enterpriseIntranetUrl_, "") };
    inline ListDifyInstancesResponseBodyRootData& setEnterpriseIntranetUrl(string enterpriseIntranetUrl) { DARABONBA_PTR_SET_VALUE(enterpriseIntranetUrl_, enterpriseIntranetUrl) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDifyInstancesResponseBodyRootData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListDifyInstancesResponseBodyRootData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetUrl Field Functions 
    bool hasInternetUrl() const { return this->internetUrl_ != nullptr;};
    void deleteInternetUrl() { this->internetUrl_ = nullptr;};
    inline string internetUrl() const { DARABONBA_PTR_GET_DEFAULT(internetUrl_, "") };
    inline ListDifyInstancesResponseBodyRootData& setInternetUrl(string internetUrl) { DARABONBA_PTR_SET_VALUE(internetUrl_, internetUrl) };


    // intranetUrl Field Functions 
    bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
    void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
    inline string intranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
    inline ListDifyInstancesResponseBodyRootData& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


    // majorVersion Field Functions 
    bool hasMajorVersion() const { return this->majorVersion_ != nullptr;};
    void deleteMajorVersion() { this->majorVersion_ = nullptr;};
    inline string majorVersion() const { DARABONBA_PTR_GET_DEFAULT(majorVersion_, "") };
    inline ListDifyInstancesResponseBodyRootData& setMajorVersion(string majorVersion) { DARABONBA_PTR_SET_VALUE(majorVersion_, majorVersion) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListDifyInstancesResponseBodyRootData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListDifyInstancesResponseBodyRootData& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListDifyInstancesResponseBodyRootData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDifyInstancesResponseBodyRootData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListDifyInstancesResponseBodyRootData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> appUuid_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> edition_ = nullptr;
    std::shared_ptr<string> enterpriseInternetUrl_ = nullptr;
    std::shared_ptr<string> enterpriseIntranetUrl_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> internetUrl_ = nullptr;
    std::shared_ptr<string> intranetUrl_ = nullptr;
    std::shared_ptr<string> majorVersion_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
