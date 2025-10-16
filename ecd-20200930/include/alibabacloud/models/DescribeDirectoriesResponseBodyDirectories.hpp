// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODYDIRECTORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODYDIRECTORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDirectoriesResponseBodyDirectoriesADConnectors.hpp>
#include <alibabacloud/models/DescribeDirectoriesResponseBodyDirectoriesLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDirectoriesResponseBodyDirectories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirectoriesResponseBodyDirectories& obj) { 
      DARABONBA_PTR_TO_JSON(ADConnectors, ADConnectors_);
      DARABONBA_PTR_TO_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_TO_JSON(BackupDCHostname, backupDCHostname_);
      DARABONBA_PTR_TO_JSON(BackupDns, backupDns_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(CustomSecurityGroupId, customSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_TO_JSON(DesktopVpcEndpoint, desktopVpcEndpoint_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_TO_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_TO_JSON(DnsUserName, dnsUserName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_TO_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_TO_JSON(EnableCrossDesktopAccess, enableCrossDesktopAccess_);
      DARABONBA_PTR_TO_JSON(EnableInternetAccess, enableInternetAccess_);
      DARABONBA_PTR_TO_JSON(FileSystemIds, fileSystemIds_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedVerifyLoginRisk, needVerifyLoginRisk_);
      DARABONBA_PTR_TO_JSON(OuName, ouName_);
      DARABONBA_PTR_TO_JSON(SsoEnabled, ssoEnabled_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubDnsAddress, subDnsAddress_);
      DARABONBA_PTR_TO_JSON(SubDomainName, subDomainName_);
      DARABONBA_PTR_TO_JSON(TrustPassword, trustPassword_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirectoriesResponseBodyDirectories& obj) { 
      DARABONBA_PTR_FROM_JSON(ADConnectors, ADConnectors_);
      DARABONBA_PTR_FROM_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_FROM_JSON(BackupDCHostname, backupDCHostname_);
      DARABONBA_PTR_FROM_JSON(BackupDns, backupDns_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(CustomSecurityGroupId, customSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_FROM_JSON(DesktopVpcEndpoint, desktopVpcEndpoint_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
      DARABONBA_PTR_FROM_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_FROM_JSON(DnsUserName, dnsUserName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_FROM_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_FROM_JSON(EnableCrossDesktopAccess, enableCrossDesktopAccess_);
      DARABONBA_PTR_FROM_JSON(EnableInternetAccess, enableInternetAccess_);
      DARABONBA_PTR_FROM_JSON(FileSystemIds, fileSystemIds_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedVerifyLoginRisk, needVerifyLoginRisk_);
      DARABONBA_PTR_FROM_JSON(OuName, ouName_);
      DARABONBA_PTR_FROM_JSON(SsoEnabled, ssoEnabled_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubDnsAddress, subDnsAddress_);
      DARABONBA_PTR_FROM_JSON(SubDomainName, subDomainName_);
      DARABONBA_PTR_FROM_JSON(TrustPassword, trustPassword_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeDirectoriesResponseBodyDirectories() = default ;
    DescribeDirectoriesResponseBodyDirectories(const DescribeDirectoriesResponseBodyDirectories &) = default ;
    DescribeDirectoriesResponseBodyDirectories(DescribeDirectoriesResponseBodyDirectories &&) = default ;
    DescribeDirectoriesResponseBodyDirectories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirectoriesResponseBodyDirectories() = default ;
    DescribeDirectoriesResponseBodyDirectories& operator=(const DescribeDirectoriesResponseBodyDirectories &) = default ;
    DescribeDirectoriesResponseBodyDirectories& operator=(DescribeDirectoriesResponseBodyDirectories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ADConnectors_ == nullptr
        && return this->adHostname_ == nullptr && return this->backupDCHostname_ == nullptr && return this->backupDns_ == nullptr && return this->creationTime_ == nullptr && return this->customSecurityGroupId_ == nullptr
        && return this->desktopAccessType_ == nullptr && return this->desktopVpcEndpoint_ == nullptr && return this->directoryId_ == nullptr && return this->directoryType_ == nullptr && return this->dnsAddress_ == nullptr
        && return this->dnsUserName_ == nullptr && return this->domainName_ == nullptr && return this->domainPassword_ == nullptr && return this->domainUserName_ == nullptr && return this->enableAdminAccess_ == nullptr
        && return this->enableCrossDesktopAccess_ == nullptr && return this->enableInternetAccess_ == nullptr && return this->fileSystemIds_ == nullptr && return this->logs_ == nullptr && return this->mfaEnabled_ == nullptr
        && return this->name_ == nullptr && return this->needVerifyLoginRisk_ == nullptr && return this->ouName_ == nullptr && return this->ssoEnabled_ == nullptr && return this->status_ == nullptr
        && return this->subDnsAddress_ == nullptr && return this->subDomainName_ == nullptr && return this->trustPassword_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr; };
    // ADConnectors Field Functions 
    bool hasADConnectors() const { return this->ADConnectors_ != nullptr;};
    void deleteADConnectors() { this->ADConnectors_ = nullptr;};
    inline const vector<Models::DescribeDirectoriesResponseBodyDirectoriesADConnectors> & ADConnectors() const { DARABONBA_PTR_GET_CONST(ADConnectors_, vector<Models::DescribeDirectoriesResponseBodyDirectoriesADConnectors>) };
    inline vector<Models::DescribeDirectoriesResponseBodyDirectoriesADConnectors> ADConnectors() { DARABONBA_PTR_GET(ADConnectors_, vector<Models::DescribeDirectoriesResponseBodyDirectoriesADConnectors>) };
    inline DescribeDirectoriesResponseBodyDirectories& setADConnectors(const vector<Models::DescribeDirectoriesResponseBodyDirectoriesADConnectors> & ADConnectors) { DARABONBA_PTR_SET_VALUE(ADConnectors_, ADConnectors) };
    inline DescribeDirectoriesResponseBodyDirectories& setADConnectors(vector<Models::DescribeDirectoriesResponseBodyDirectoriesADConnectors> && ADConnectors) { DARABONBA_PTR_SET_RVALUE(ADConnectors_, ADConnectors) };


    // adHostname Field Functions 
    bool hasAdHostname() const { return this->adHostname_ != nullptr;};
    void deleteAdHostname() { this->adHostname_ = nullptr;};
    inline string adHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


    // backupDCHostname Field Functions 
    bool hasBackupDCHostname() const { return this->backupDCHostname_ != nullptr;};
    void deleteBackupDCHostname() { this->backupDCHostname_ = nullptr;};
    inline string backupDCHostname() const { DARABONBA_PTR_GET_DEFAULT(backupDCHostname_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setBackupDCHostname(string backupDCHostname) { DARABONBA_PTR_SET_VALUE(backupDCHostname_, backupDCHostname) };


    // backupDns Field Functions 
    bool hasBackupDns() const { return this->backupDns_ != nullptr;};
    void deleteBackupDns() { this->backupDns_ = nullptr;};
    inline string backupDns() const { DARABONBA_PTR_GET_DEFAULT(backupDns_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setBackupDns(string backupDns) { DARABONBA_PTR_SET_VALUE(backupDns_, backupDns) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // customSecurityGroupId Field Functions 
    bool hasCustomSecurityGroupId() const { return this->customSecurityGroupId_ != nullptr;};
    void deleteCustomSecurityGroupId() { this->customSecurityGroupId_ = nullptr;};
    inline string customSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(customSecurityGroupId_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setCustomSecurityGroupId(string customSecurityGroupId) { DARABONBA_PTR_SET_VALUE(customSecurityGroupId_, customSecurityGroupId) };


    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string desktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // desktopVpcEndpoint Field Functions 
    bool hasDesktopVpcEndpoint() const { return this->desktopVpcEndpoint_ != nullptr;};
    void deleteDesktopVpcEndpoint() { this->desktopVpcEndpoint_ = nullptr;};
    inline string desktopVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(desktopVpcEndpoint_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDesktopVpcEndpoint(string desktopVpcEndpoint) { DARABONBA_PTR_SET_VALUE(desktopVpcEndpoint_, desktopVpcEndpoint) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryType Field Functions 
    bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
    void deleteDirectoryType() { this->directoryType_ = nullptr;};
    inline string directoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


    // dnsAddress Field Functions 
    bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
    void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
    inline const vector<string> & dnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
    inline vector<string> dnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
    inline DescribeDirectoriesResponseBodyDirectories& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
    inline DescribeDirectoriesResponseBodyDirectories& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


    // dnsUserName Field Functions 
    bool hasDnsUserName() const { return this->dnsUserName_ != nullptr;};
    void deleteDnsUserName() { this->dnsUserName_ = nullptr;};
    inline string dnsUserName() const { DARABONBA_PTR_GET_DEFAULT(dnsUserName_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDnsUserName(string dnsUserName) { DARABONBA_PTR_SET_VALUE(dnsUserName_, dnsUserName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainPassword Field Functions 
    bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
    void deleteDomainPassword() { this->domainPassword_ = nullptr;};
    inline string domainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


    // domainUserName Field Functions 
    bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
    void deleteDomainUserName() { this->domainUserName_ = nullptr;};
    inline string domainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool enableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline DescribeDirectoriesResponseBodyDirectories& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // enableCrossDesktopAccess Field Functions 
    bool hasEnableCrossDesktopAccess() const { return this->enableCrossDesktopAccess_ != nullptr;};
    void deleteEnableCrossDesktopAccess() { this->enableCrossDesktopAccess_ = nullptr;};
    inline bool enableCrossDesktopAccess() const { DARABONBA_PTR_GET_DEFAULT(enableCrossDesktopAccess_, false) };
    inline DescribeDirectoriesResponseBodyDirectories& setEnableCrossDesktopAccess(bool enableCrossDesktopAccess) { DARABONBA_PTR_SET_VALUE(enableCrossDesktopAccess_, enableCrossDesktopAccess) };


    // enableInternetAccess Field Functions 
    bool hasEnableInternetAccess() const { return this->enableInternetAccess_ != nullptr;};
    void deleteEnableInternetAccess() { this->enableInternetAccess_ = nullptr;};
    inline bool enableInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(enableInternetAccess_, false) };
    inline DescribeDirectoriesResponseBodyDirectories& setEnableInternetAccess(bool enableInternetAccess) { DARABONBA_PTR_SET_VALUE(enableInternetAccess_, enableInternetAccess) };


    // fileSystemIds Field Functions 
    bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
    void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
    inline const vector<string> & fileSystemIds() const { DARABONBA_PTR_GET_CONST(fileSystemIds_, vector<string>) };
    inline vector<string> fileSystemIds() { DARABONBA_PTR_GET(fileSystemIds_, vector<string>) };
    inline DescribeDirectoriesResponseBodyDirectories& setFileSystemIds(const vector<string> & fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };
    inline DescribeDirectoriesResponseBodyDirectories& setFileSystemIds(vector<string> && fileSystemIds) { DARABONBA_PTR_SET_RVALUE(fileSystemIds_, fileSystemIds) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::DescribeDirectoriesResponseBodyDirectoriesLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::DescribeDirectoriesResponseBodyDirectoriesLogs>) };
    inline vector<Models::DescribeDirectoriesResponseBodyDirectoriesLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::DescribeDirectoriesResponseBodyDirectoriesLogs>) };
    inline DescribeDirectoriesResponseBodyDirectories& setLogs(const vector<Models::DescribeDirectoriesResponseBodyDirectoriesLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeDirectoriesResponseBodyDirectories& setLogs(vector<Models::DescribeDirectoriesResponseBodyDirectoriesLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // mfaEnabled Field Functions 
    bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
    void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
    inline bool mfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
    inline DescribeDirectoriesResponseBodyDirectories& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needVerifyLoginRisk Field Functions 
    bool hasNeedVerifyLoginRisk() const { return this->needVerifyLoginRisk_ != nullptr;};
    void deleteNeedVerifyLoginRisk() { this->needVerifyLoginRisk_ = nullptr;};
    inline bool needVerifyLoginRisk() const { DARABONBA_PTR_GET_DEFAULT(needVerifyLoginRisk_, false) };
    inline DescribeDirectoriesResponseBodyDirectories& setNeedVerifyLoginRisk(bool needVerifyLoginRisk) { DARABONBA_PTR_SET_VALUE(needVerifyLoginRisk_, needVerifyLoginRisk) };


    // ouName Field Functions 
    bool hasOuName() const { return this->ouName_ != nullptr;};
    void deleteOuName() { this->ouName_ = nullptr;};
    inline string ouName() const { DARABONBA_PTR_GET_DEFAULT(ouName_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setOuName(string ouName) { DARABONBA_PTR_SET_VALUE(ouName_, ouName) };


    // ssoEnabled Field Functions 
    bool hasSsoEnabled() const { return this->ssoEnabled_ != nullptr;};
    void deleteSsoEnabled() { this->ssoEnabled_ = nullptr;};
    inline bool ssoEnabled() const { DARABONBA_PTR_GET_DEFAULT(ssoEnabled_, false) };
    inline DescribeDirectoriesResponseBodyDirectories& setSsoEnabled(bool ssoEnabled) { DARABONBA_PTR_SET_VALUE(ssoEnabled_, ssoEnabled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subDnsAddress Field Functions 
    bool hasSubDnsAddress() const { return this->subDnsAddress_ != nullptr;};
    void deleteSubDnsAddress() { this->subDnsAddress_ = nullptr;};
    inline const vector<string> & subDnsAddress() const { DARABONBA_PTR_GET_CONST(subDnsAddress_, vector<string>) };
    inline vector<string> subDnsAddress() { DARABONBA_PTR_GET(subDnsAddress_, vector<string>) };
    inline DescribeDirectoriesResponseBodyDirectories& setSubDnsAddress(const vector<string> & subDnsAddress) { DARABONBA_PTR_SET_VALUE(subDnsAddress_, subDnsAddress) };
    inline DescribeDirectoriesResponseBodyDirectories& setSubDnsAddress(vector<string> && subDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDnsAddress_, subDnsAddress) };


    // subDomainName Field Functions 
    bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
    void deleteSubDomainName() { this->subDomainName_ = nullptr;};
    inline string subDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


    // trustPassword Field Functions 
    bool hasTrustPassword() const { return this->trustPassword_ != nullptr;};
    void deleteTrustPassword() { this->trustPassword_ = nullptr;};
    inline string trustPassword() const { DARABONBA_PTR_GET_DEFAULT(trustPassword_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setTrustPassword(string trustPassword) { DARABONBA_PTR_SET_VALUE(trustPassword_, trustPassword) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeDirectoriesResponseBodyDirectories& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeDirectoriesResponseBodyDirectories& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDirectoriesResponseBodyDirectories& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Details of the AD connector.
    std::shared_ptr<vector<Models::DescribeDirectoriesResponseBodyDirectoriesADConnectors>> ADConnectors_ = nullptr;
    // The hostname of the domain controller.
    std::shared_ptr<string> adHostname_ = nullptr;
    // The hostname of the backup domain controller.
    std::shared_ptr<string> backupDCHostname_ = nullptr;
    // The DNS address of the backup domain controller.
    std::shared_ptr<string> backupDns_ = nullptr;
    // The time when the directory was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The security group ID. This parameter is returned only when the directory type is AD office network.
    std::shared_ptr<string> customSecurityGroupId_ = nullptr;
    // The method in which the cloud computer is connected.
    // 
    // Valid values:
    // 
    // *   VPC
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Internet
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Any
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> desktopAccessType_ = nullptr;
    // The endpoint that is used to connect to cloud computers in the directory over a VPC.
    std::shared_ptr<string> desktopVpcEndpoint_ = nullptr;
    // The directory ID.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The directory type.
    // 
    // Valid values:
    // 
    // *   AD_CONNECTOR: AD directory
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   RAM: RAM directory
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> directoryType_ = nullptr;
    // The DNS address of the directory.
    std::shared_ptr<vector<string>> dnsAddress_ = nullptr;
    // The username of a DNS user.
    std::shared_ptr<string> dnsUserName_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The password of the domain administrator. This parameter is returned only when the directory type is AD office network.
    std::shared_ptr<string> domainPassword_ = nullptr;
    // The username of the domain administrator.
    std::shared_ptr<string> domainUserName_ = nullptr;
    // Indicates whether the local administrator permissions are granted to users that use cloud computers in the office network.
    std::shared_ptr<bool> enableAdminAccess_ = nullptr;
    // Indicates whether cloud computers can communicate with each other in the directory.
    std::shared_ptr<bool> enableCrossDesktopAccess_ = nullptr;
    // Indicates whether access over the Internet is enabled.
    // 
    // >  This parameter is unavailable.
    std::shared_ptr<bool> enableInternetAccess_ = nullptr;
    // The IDs of File Storage NAS (NAS) file systems.
    std::shared_ptr<vector<string>> fileSystemIds_ = nullptr;
    // The registration logs. This parameter is returned only when the directory type is AD office network.
    std::shared_ptr<vector<Models::DescribeDirectoriesResponseBodyDirectoriesLogs>> logs_ = nullptr;
    // Indicates whether MFA is enabled.
    std::shared_ptr<bool> mfaEnabled_ = nullptr;
    // The directory name.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether two-step verification for logons is enabled. This parameter is returned only for directories of convenience account type.\\
    // If two-factor verification is enabled, the system checks whether security risks exist within the logon account when a convenience user logs on to an Alibaba Cloud Workspace client. If risks are detected, the system sends a verification code to the email address that is associated with the account. Then, the convenience user can log on to the client only after the user enters the correct verification code.
    std::shared_ptr<bool> needVerifyLoginRisk_ = nullptr;
    // The organization unit that you selected when you added the cloud computer to the domain.
    std::shared_ptr<string> ouName_ = nullptr;
    // Indicates whether single sign-on (SSO) is enabled.
    std::shared_ptr<bool> ssoEnabled_ = nullptr;
    // The status of the AD directory.
    // 
    // Valid values:
    // 
    // *   REGISTERING
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   REGISTERED
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
    // The DNS address of the enterprise AD subdomain.
    std::shared_ptr<vector<string>> subDnsAddress_ = nullptr;
    // The fully qualified domain name (FQDN) of the existing AD subdomain. The value contains both the host name and the domain name.
    std::shared_ptr<string> subDomainName_ = nullptr;
    // The AD trust password. This parameter is returned only when the directory type is AD office network.
    std::shared_ptr<string> trustPassword_ = nullptr;
    // The IDs of the vSwitches specified when the directory was created.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // The ID of the VPC to which the vSwitch belongs. This parameter is returned only when the directory type is AD office network.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
