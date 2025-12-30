// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_TO_JSON(Directories, directories_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_FROM_JSON(Directories, directories_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDirectoriesResponseBody() = default ;
    DescribeDirectoriesResponseBody(const DescribeDirectoriesResponseBody &) = default ;
    DescribeDirectoriesResponseBody(DescribeDirectoriesResponseBody &&) = default ;
    DescribeDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDirectoriesResponseBody() = default ;
    DescribeDirectoriesResponseBody& operator=(const DescribeDirectoriesResponseBody &) = default ;
    DescribeDirectoriesResponseBody& operator=(DescribeDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Directories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Directories& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Directories& obj) { 
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
      Directories() = default ;
      Directories(const Directories &) = default ;
      Directories(Directories &&) = default ;
      Directories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Directories() = default ;
      Directories& operator=(const Directories &) = default ;
      Directories& operator=(Directories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Logs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logs& obj) { 
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Step, step_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, Logs& obj) { 
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Step, step_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        Logs() = default ;
        Logs(const Logs &) = default ;
        Logs(Logs &&) = default ;
        Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logs() = default ;
        Logs& operator=(const Logs &) = default ;
        Logs& operator=(Logs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->level_ == nullptr
        && this->message_ == nullptr && this->step_ == nullptr && this->timeStamp_ == nullptr; };
        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Logs& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Logs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
        inline Logs& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline Logs& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The level of the log entry.
        // 
        // Valid values:
        // 
        // *   ERROR
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   INFO
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   WARN
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<string> level_ {};
        // Details of the log entry.
        shared_ptr<string> message_ {};
        // The step that corresponds to the log entry.
        shared_ptr<string> step_ {};
        // The time when the log entry was printed.
        shared_ptr<string> timeStamp_ {};
      };

      class ADConnectors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ADConnectors& obj) { 
          DARABONBA_PTR_TO_JSON(ADConnectorAddress, ADConnectorAddress_);
          DARABONBA_PTR_TO_JSON(ConnectorStatus, connectorStatus_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_TO_JSON(Specification, specification_);
          DARABONBA_PTR_TO_JSON(TrustKey, trustKey_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, ADConnectors& obj) { 
          DARABONBA_PTR_FROM_JSON(ADConnectorAddress, ADConnectorAddress_);
          DARABONBA_PTR_FROM_JSON(ConnectorStatus, connectorStatus_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(Specification, specification_);
          DARABONBA_PTR_FROM_JSON(TrustKey, trustKey_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        ADConnectors() = default ;
        ADConnectors(const ADConnectors &) = default ;
        ADConnectors(ADConnectors &&) = default ;
        ADConnectors(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ADConnectors() = default ;
        ADConnectors& operator=(const ADConnectors &) = default ;
        ADConnectors& operator=(ADConnectors &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ADConnectorAddress_ == nullptr
        && this->connectorStatus_ == nullptr && this->networkInterfaceId_ == nullptr && this->specification_ == nullptr && this->trustKey_ == nullptr && this->vSwitchId_ == nullptr; };
        // ADConnectorAddress Field Functions 
        bool hasADConnectorAddress() const { return this->ADConnectorAddress_ != nullptr;};
        void deleteADConnectorAddress() { this->ADConnectorAddress_ = nullptr;};
        inline string getADConnectorAddress() const { DARABONBA_PTR_GET_DEFAULT(ADConnectorAddress_, "") };
        inline ADConnectors& setADConnectorAddress(string ADConnectorAddress) { DARABONBA_PTR_SET_VALUE(ADConnectorAddress_, ADConnectorAddress) };


        // connectorStatus Field Functions 
        bool hasConnectorStatus() const { return this->connectorStatus_ != nullptr;};
        void deleteConnectorStatus() { this->connectorStatus_ = nullptr;};
        inline string getConnectorStatus() const { DARABONBA_PTR_GET_DEFAULT(connectorStatus_, "") };
        inline ADConnectors& setConnectorStatus(string connectorStatus) { DARABONBA_PTR_SET_VALUE(connectorStatus_, connectorStatus) };


        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline ADConnectors& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


        // specification Field Functions 
        bool hasSpecification() const { return this->specification_ != nullptr;};
        void deleteSpecification() { this->specification_ = nullptr;};
        inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
        inline ADConnectors& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


        // trustKey Field Functions 
        bool hasTrustKey() const { return this->trustKey_ != nullptr;};
        void deleteTrustKey() { this->trustKey_ = nullptr;};
        inline string getTrustKey() const { DARABONBA_PTR_GET_DEFAULT(trustKey_, "") };
        inline ADConnectors& setTrustKey(string trustKey) { DARABONBA_PTR_SET_VALUE(trustKey_, trustKey) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline ADConnectors& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The connection address.
        shared_ptr<string> ADConnectorAddress_ {};
        // Valid values:
        // 
        // *   CONNECT_ERROR
        // *   RUNNING
        // *   CONNECTING: You must configure domain trust for your AD system.
        // *   EXPIRED
        // *   CREATING
        shared_ptr<string> connectorStatus_ {};
        // The ID of the NIC to which the AD connector is mounted.
        shared_ptr<string> networkInterfaceId_ {};
        // The AD connector type.
        // 
        // Valid values:
        // 
        // *   1: General
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        // *   2: Advanced
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        // 
        //     <!-- -->
        shared_ptr<string> specification_ {};
        // The trust password of the AD domain controller.
        shared_ptr<string> trustKey_ {};
        // The ID of the vSwitch with which the AD connector is associated.
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->ADConnectors_ == nullptr
        && this->adHostname_ == nullptr && this->backupDCHostname_ == nullptr && this->backupDns_ == nullptr && this->creationTime_ == nullptr && this->customSecurityGroupId_ == nullptr
        && this->desktopAccessType_ == nullptr && this->desktopVpcEndpoint_ == nullptr && this->directoryId_ == nullptr && this->directoryType_ == nullptr && this->dnsAddress_ == nullptr
        && this->dnsUserName_ == nullptr && this->domainName_ == nullptr && this->domainPassword_ == nullptr && this->domainUserName_ == nullptr && this->enableAdminAccess_ == nullptr
        && this->enableCrossDesktopAccess_ == nullptr && this->enableInternetAccess_ == nullptr && this->fileSystemIds_ == nullptr && this->logs_ == nullptr && this->mfaEnabled_ == nullptr
        && this->name_ == nullptr && this->needVerifyLoginRisk_ == nullptr && this->ouName_ == nullptr && this->ssoEnabled_ == nullptr && this->status_ == nullptr
        && this->subDnsAddress_ == nullptr && this->subDomainName_ == nullptr && this->trustPassword_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
      // ADConnectors Field Functions 
      bool hasADConnectors() const { return this->ADConnectors_ != nullptr;};
      void deleteADConnectors() { this->ADConnectors_ = nullptr;};
      inline const vector<Directories::ADConnectors> & getADConnectors() const { DARABONBA_PTR_GET_CONST(ADConnectors_, vector<Directories::ADConnectors>) };
      inline vector<Directories::ADConnectors> getADConnectors() { DARABONBA_PTR_GET(ADConnectors_, vector<Directories::ADConnectors>) };
      inline Directories& setADConnectors(const vector<Directories::ADConnectors> & aDConnectors) { DARABONBA_PTR_SET_VALUE(ADConnectors_, aDConnectors) };
      inline Directories& setADConnectors(vector<Directories::ADConnectors> && aDConnectors) { DARABONBA_PTR_SET_RVALUE(ADConnectors_, aDConnectors) };


      // adHostname Field Functions 
      bool hasAdHostname() const { return this->adHostname_ != nullptr;};
      void deleteAdHostname() { this->adHostname_ = nullptr;};
      inline string getAdHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
      inline Directories& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


      // backupDCHostname Field Functions 
      bool hasBackupDCHostname() const { return this->backupDCHostname_ != nullptr;};
      void deleteBackupDCHostname() { this->backupDCHostname_ = nullptr;};
      inline string getBackupDCHostname() const { DARABONBA_PTR_GET_DEFAULT(backupDCHostname_, "") };
      inline Directories& setBackupDCHostname(string backupDCHostname) { DARABONBA_PTR_SET_VALUE(backupDCHostname_, backupDCHostname) };


      // backupDns Field Functions 
      bool hasBackupDns() const { return this->backupDns_ != nullptr;};
      void deleteBackupDns() { this->backupDns_ = nullptr;};
      inline string getBackupDns() const { DARABONBA_PTR_GET_DEFAULT(backupDns_, "") };
      inline Directories& setBackupDns(string backupDns) { DARABONBA_PTR_SET_VALUE(backupDns_, backupDns) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Directories& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // customSecurityGroupId Field Functions 
      bool hasCustomSecurityGroupId() const { return this->customSecurityGroupId_ != nullptr;};
      void deleteCustomSecurityGroupId() { this->customSecurityGroupId_ = nullptr;};
      inline string getCustomSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(customSecurityGroupId_, "") };
      inline Directories& setCustomSecurityGroupId(string customSecurityGroupId) { DARABONBA_PTR_SET_VALUE(customSecurityGroupId_, customSecurityGroupId) };


      // desktopAccessType Field Functions 
      bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
      void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
      inline string getDesktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
      inline Directories& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


      // desktopVpcEndpoint Field Functions 
      bool hasDesktopVpcEndpoint() const { return this->desktopVpcEndpoint_ != nullptr;};
      void deleteDesktopVpcEndpoint() { this->desktopVpcEndpoint_ = nullptr;};
      inline string getDesktopVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(desktopVpcEndpoint_, "") };
      inline Directories& setDesktopVpcEndpoint(string desktopVpcEndpoint) { DARABONBA_PTR_SET_VALUE(desktopVpcEndpoint_, desktopVpcEndpoint) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Directories& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Directories& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // dnsAddress Field Functions 
      bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
      void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
      inline const vector<string> & getDnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
      inline vector<string> getDnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
      inline Directories& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
      inline Directories& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


      // dnsUserName Field Functions 
      bool hasDnsUserName() const { return this->dnsUserName_ != nullptr;};
      void deleteDnsUserName() { this->dnsUserName_ = nullptr;};
      inline string getDnsUserName() const { DARABONBA_PTR_GET_DEFAULT(dnsUserName_, "") };
      inline Directories& setDnsUserName(string dnsUserName) { DARABONBA_PTR_SET_VALUE(dnsUserName_, dnsUserName) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Directories& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainPassword Field Functions 
      bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
      void deleteDomainPassword() { this->domainPassword_ = nullptr;};
      inline string getDomainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
      inline Directories& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


      // domainUserName Field Functions 
      bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
      void deleteDomainUserName() { this->domainUserName_ = nullptr;};
      inline string getDomainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
      inline Directories& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


      // enableAdminAccess Field Functions 
      bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
      void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
      inline bool getEnableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
      inline Directories& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


      // enableCrossDesktopAccess Field Functions 
      bool hasEnableCrossDesktopAccess() const { return this->enableCrossDesktopAccess_ != nullptr;};
      void deleteEnableCrossDesktopAccess() { this->enableCrossDesktopAccess_ = nullptr;};
      inline bool getEnableCrossDesktopAccess() const { DARABONBA_PTR_GET_DEFAULT(enableCrossDesktopAccess_, false) };
      inline Directories& setEnableCrossDesktopAccess(bool enableCrossDesktopAccess) { DARABONBA_PTR_SET_VALUE(enableCrossDesktopAccess_, enableCrossDesktopAccess) };


      // enableInternetAccess Field Functions 
      bool hasEnableInternetAccess() const { return this->enableInternetAccess_ != nullptr;};
      void deleteEnableInternetAccess() { this->enableInternetAccess_ = nullptr;};
      inline bool getEnableInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(enableInternetAccess_, false) };
      inline Directories& setEnableInternetAccess(bool enableInternetAccess) { DARABONBA_PTR_SET_VALUE(enableInternetAccess_, enableInternetAccess) };


      // fileSystemIds Field Functions 
      bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
      void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
      inline const vector<string> & getFileSystemIds() const { DARABONBA_PTR_GET_CONST(fileSystemIds_, vector<string>) };
      inline vector<string> getFileSystemIds() { DARABONBA_PTR_GET(fileSystemIds_, vector<string>) };
      inline Directories& setFileSystemIds(const vector<string> & fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };
      inline Directories& setFileSystemIds(vector<string> && fileSystemIds) { DARABONBA_PTR_SET_RVALUE(fileSystemIds_, fileSystemIds) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<Directories::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Directories::Logs>) };
      inline vector<Directories::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<Directories::Logs>) };
      inline Directories& setLogs(const vector<Directories::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline Directories& setLogs(vector<Directories::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // mfaEnabled Field Functions 
      bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
      void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
      inline bool getMfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
      inline Directories& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Directories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // needVerifyLoginRisk Field Functions 
      bool hasNeedVerifyLoginRisk() const { return this->needVerifyLoginRisk_ != nullptr;};
      void deleteNeedVerifyLoginRisk() { this->needVerifyLoginRisk_ = nullptr;};
      inline bool getNeedVerifyLoginRisk() const { DARABONBA_PTR_GET_DEFAULT(needVerifyLoginRisk_, false) };
      inline Directories& setNeedVerifyLoginRisk(bool needVerifyLoginRisk) { DARABONBA_PTR_SET_VALUE(needVerifyLoginRisk_, needVerifyLoginRisk) };


      // ouName Field Functions 
      bool hasOuName() const { return this->ouName_ != nullptr;};
      void deleteOuName() { this->ouName_ = nullptr;};
      inline string getOuName() const { DARABONBA_PTR_GET_DEFAULT(ouName_, "") };
      inline Directories& setOuName(string ouName) { DARABONBA_PTR_SET_VALUE(ouName_, ouName) };


      // ssoEnabled Field Functions 
      bool hasSsoEnabled() const { return this->ssoEnabled_ != nullptr;};
      void deleteSsoEnabled() { this->ssoEnabled_ = nullptr;};
      inline bool getSsoEnabled() const { DARABONBA_PTR_GET_DEFAULT(ssoEnabled_, false) };
      inline Directories& setSsoEnabled(bool ssoEnabled) { DARABONBA_PTR_SET_VALUE(ssoEnabled_, ssoEnabled) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Directories& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subDnsAddress Field Functions 
      bool hasSubDnsAddress() const { return this->subDnsAddress_ != nullptr;};
      void deleteSubDnsAddress() { this->subDnsAddress_ = nullptr;};
      inline const vector<string> & getSubDnsAddress() const { DARABONBA_PTR_GET_CONST(subDnsAddress_, vector<string>) };
      inline vector<string> getSubDnsAddress() { DARABONBA_PTR_GET(subDnsAddress_, vector<string>) };
      inline Directories& setSubDnsAddress(const vector<string> & subDnsAddress) { DARABONBA_PTR_SET_VALUE(subDnsAddress_, subDnsAddress) };
      inline Directories& setSubDnsAddress(vector<string> && subDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDnsAddress_, subDnsAddress) };


      // subDomainName Field Functions 
      bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
      void deleteSubDomainName() { this->subDomainName_ = nullptr;};
      inline string getSubDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
      inline Directories& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


      // trustPassword Field Functions 
      bool hasTrustPassword() const { return this->trustPassword_ != nullptr;};
      void deleteTrustPassword() { this->trustPassword_ = nullptr;};
      inline string getTrustPassword() const { DARABONBA_PTR_GET_DEFAULT(trustPassword_, "") };
      inline Directories& setTrustPassword(string trustPassword) { DARABONBA_PTR_SET_VALUE(trustPassword_, trustPassword) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline Directories& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline Directories& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Directories& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // Details of the AD connector.
      shared_ptr<vector<Directories::ADConnectors>> ADConnectors_ {};
      // The hostname of the domain controller.
      shared_ptr<string> adHostname_ {};
      // The hostname of the backup domain controller.
      shared_ptr<string> backupDCHostname_ {};
      // The DNS address of the backup domain controller.
      shared_ptr<string> backupDns_ {};
      // The time when the directory was created.
      shared_ptr<string> creationTime_ {};
      // The security group ID. This parameter is returned only when the directory type is AD office network.
      shared_ptr<string> customSecurityGroupId_ {};
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
      shared_ptr<string> desktopAccessType_ {};
      // The endpoint that is used to connect to cloud computers in the directory over a VPC.
      shared_ptr<string> desktopVpcEndpoint_ {};
      // The directory ID.
      shared_ptr<string> directoryId_ {};
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
      shared_ptr<string> directoryType_ {};
      // The DNS address of the directory.
      shared_ptr<vector<string>> dnsAddress_ {};
      // The username of a DNS user.
      shared_ptr<string> dnsUserName_ {};
      // The domain name.
      shared_ptr<string> domainName_ {};
      // The password of the domain administrator. This parameter is returned only when the directory type is AD office network.
      shared_ptr<string> domainPassword_ {};
      // The username of the domain administrator.
      shared_ptr<string> domainUserName_ {};
      // Indicates whether the local administrator permissions are granted to users that use cloud computers in the office network.
      shared_ptr<bool> enableAdminAccess_ {};
      // Indicates whether cloud computers can communicate with each other in the directory.
      shared_ptr<bool> enableCrossDesktopAccess_ {};
      // Indicates whether access over the Internet is enabled.
      // 
      // >  This parameter is unavailable.
      shared_ptr<bool> enableInternetAccess_ {};
      // The IDs of File Storage NAS (NAS) file systems.
      shared_ptr<vector<string>> fileSystemIds_ {};
      // The registration logs. This parameter is returned only when the directory type is AD office network.
      shared_ptr<vector<Directories::Logs>> logs_ {};
      // Indicates whether MFA is enabled.
      shared_ptr<bool> mfaEnabled_ {};
      // The directory name.
      shared_ptr<string> name_ {};
      // Indicates whether two-step verification for logons is enabled. This parameter is returned only for directories of convenience account type.\\
      // If two-factor verification is enabled, the system checks whether security risks exist within the logon account when a convenience user logs on to an Alibaba Cloud Workspace client. If risks are detected, the system sends a verification code to the email address that is associated with the account. Then, the convenience user can log on to the client only after the user enters the correct verification code.
      shared_ptr<bool> needVerifyLoginRisk_ {};
      // The organization unit that you selected when you added the cloud computer to the domain.
      shared_ptr<string> ouName_ {};
      // Indicates whether single sign-on (SSO) is enabled.
      shared_ptr<bool> ssoEnabled_ {};
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
      shared_ptr<string> status_ {};
      // The DNS address of the enterprise AD subdomain.
      shared_ptr<vector<string>> subDnsAddress_ {};
      // The fully qualified domain name (FQDN) of the existing AD subdomain. The value contains both the host name and the domain name.
      shared_ptr<string> subDomainName_ {};
      // The AD trust password. This parameter is returned only when the directory type is AD office network.
      shared_ptr<string> trustPassword_ {};
      // The IDs of the vSwitches specified when the directory was created.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The ID of the VPC to which the vSwitch belongs. This parameter is returned only when the directory type is AD office network.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->adHostname_ == nullptr
        && this->directories_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // adHostname Field Functions 
    bool hasAdHostname() const { return this->adHostname_ != nullptr;};
    void deleteAdHostname() { this->adHostname_ = nullptr;};
    inline string getAdHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
    inline DescribeDirectoriesResponseBody& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


    // directories Field Functions 
    bool hasDirectories() const { return this->directories_ != nullptr;};
    void deleteDirectories() { this->directories_ = nullptr;};
    inline const vector<DescribeDirectoriesResponseBody::Directories> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<DescribeDirectoriesResponseBody::Directories>) };
    inline vector<DescribeDirectoriesResponseBody::Directories> getDirectories() { DARABONBA_PTR_GET(directories_, vector<DescribeDirectoriesResponseBody::Directories>) };
    inline DescribeDirectoriesResponseBody& setDirectories(const vector<DescribeDirectoriesResponseBody::Directories> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
    inline DescribeDirectoriesResponseBody& setDirectories(vector<DescribeDirectoriesResponseBody::Directories> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDirectoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The hostname of the domain controller. The hostname must comply with the hostname naming convention of Windows. This parameter is returned only when the directory type is AD office network.
    shared_ptr<string> adHostname_ {};
    // The directories.
    shared_ptr<vector<DescribeDirectoriesResponseBody::Directories>> directories_ {};
    // The token that is used for the next query. If this parameter is empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
