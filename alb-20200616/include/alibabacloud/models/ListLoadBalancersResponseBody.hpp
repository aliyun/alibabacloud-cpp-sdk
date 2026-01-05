// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOADBALANCERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListLoadBalancersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody(ListLoadBalancersResponseBody &&) = default ;
    ListLoadBalancersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLoadBalancersResponseBody() = default ;
    ListLoadBalancersResponseBody& operator=(const ListLoadBalancersResponseBody &) = default ;
    ListLoadBalancersResponseBody& operator=(ListLoadBalancersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadBalancers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancers& obj) { 
        DARABONBA_PTR_TO_JSON(AccessLogConfig, accessLogConfig_);
        DARABONBA_PTR_TO_JSON(AddressAllocatedMode, addressAllocatedMode_);
        DARABONBA_PTR_TO_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_TO_JSON(AddressType, addressType_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DNSName, DNSName_);
        DARABONBA_PTR_TO_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
        DARABONBA_PTR_TO_JSON(Ipv6AddressType, ipv6AddressType_);
        DARABONBA_PTR_TO_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
        DARABONBA_PTR_TO_JSON(LoadBalancerBussinessStatus, loadBalancerBussinessStatus_);
        DARABONBA_PTR_TO_JSON(LoadBalancerEdition, loadBalancerEdition_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
        DARABONBA_PTR_TO_JSON(LoadBalancerOperationLocks, loadBalancerOperationLocks_);
        DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
        DARABONBA_PTR_TO_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancers& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessLogConfig, accessLogConfig_);
        DARABONBA_PTR_FROM_JSON(AddressAllocatedMode, addressAllocatedMode_);
        DARABONBA_PTR_FROM_JSON(AddressIpVersion, addressIpVersion_);
        DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DNSName, DNSName_);
        DARABONBA_PTR_FROM_JSON(DeletionProtectionConfig, deletionProtectionConfig_);
        DARABONBA_PTR_FROM_JSON(Ipv6AddressType, ipv6AddressType_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerBillingConfig, loadBalancerBillingConfig_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerBussinessStatus, loadBalancerBussinessStatus_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerEdition, loadBalancerEdition_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerOperationLocks, loadBalancerOperationLocks_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
        DARABONBA_PTR_FROM_JSON(ModificationProtectionConfig, modificationProtectionConfig_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      LoadBalancers() = default ;
      LoadBalancers(const LoadBalancers &) = default ;
      LoadBalancers(LoadBalancers &&) = default ;
      LoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancers() = default ;
      LoadBalancers& operator=(const LoadBalancers &) = default ;
      LoadBalancers& operator=(LoadBalancers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the ALB instance.
        shared_ptr<string> key_ {};
        // The tag value of the ALB instance.
        shared_ptr<string> value_ {};
      };

      class ModificationProtectionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModificationProtectionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ModificationProtectionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ModificationProtectionConfig() = default ;
        ModificationProtectionConfig(const ModificationProtectionConfig &) = default ;
        ModificationProtectionConfig(ModificationProtectionConfig &&) = default ;
        ModificationProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModificationProtectionConfig() = default ;
        ModificationProtectionConfig& operator=(const ModificationProtectionConfig &) = default ;
        ModificationProtectionConfig& operator=(ModificationProtectionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reason_ == nullptr
        && this->status_ == nullptr; };
        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline ModificationProtectionConfig& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ModificationProtectionConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The reason why the configuration read-only mode is enabled.
        // 
        // The reason must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
        // 
        // This parameter takes effect only if **Status** is set to **ConsoleProtection**.
        shared_ptr<string> reason_ {};
        // Indicates whether the configuration read-only mode is enabled. Valid values:
        // 
        // *   **NonProtection**: The configuration read-only mode is disabled. In this case, **Reason** is not returned. If **Reason** is set, the value is cleared.
        // *   **ConsoleProtection**: The configuration read-only mode is enabled. In this case, **Reason** is returned.****
        // 
        // >  If the value is **ConsoleProtection**, the configuration read-only mode is enabled. You cannot modify the configurations of the ALB instance in the ALB console. However, you can call API operations to modify the configurations of the ALB instance.
        shared_ptr<string> status_ {};
      };

      class LoadBalancerOperationLocks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LoadBalancerOperationLocks& obj) { 
          DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          DARABONBA_PTR_TO_JSON(LockType, lockType_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancerOperationLocks& obj) { 
          DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          DARABONBA_PTR_FROM_JSON(LockType, lockType_);
        };
        LoadBalancerOperationLocks() = default ;
        LoadBalancerOperationLocks(const LoadBalancerOperationLocks &) = default ;
        LoadBalancerOperationLocks(LoadBalancerOperationLocks &&) = default ;
        LoadBalancerOperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LoadBalancerOperationLocks() = default ;
        LoadBalancerOperationLocks& operator=(const LoadBalancerOperationLocks &) = default ;
        LoadBalancerOperationLocks& operator=(LoadBalancerOperationLocks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->lockReason_ == nullptr
        && this->lockType_ == nullptr; };
        // lockReason Field Functions 
        bool hasLockReason() const { return this->lockReason_ != nullptr;};
        void deleteLockReason() { this->lockReason_ = nullptr;};
        inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
        inline LoadBalancerOperationLocks& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


        // lockType Field Functions 
        bool hasLockType() const { return this->lockType_ != nullptr;};
        void deleteLockType() { this->lockType_ = nullptr;};
        inline string getLockType() const { DARABONBA_PTR_GET_DEFAULT(lockType_, "") };
        inline LoadBalancerOperationLocks& setLockType(string lockType) { DARABONBA_PTR_SET_VALUE(lockType_, lockType) };


      protected:
        // The reason why the ALB instance is locked. This parameter is valid only if **LoadBalancerBussinessStatus** is set to **Abnormal**.
        shared_ptr<string> lockReason_ {};
        // The lock type. Valid values:
        // 
        // *   **SecurityLocked**: The ALB instance is locked due to security risks.
        // *   **RelatedResourceLocked**: The ALB instance is locked due to other resources associated with the ALB instance.
        // *   **FinancialLocked**: The ALB instance is locked due to overdue payments.
        // *   **ResidualLocked**: The ALB instance is locked because the associated resources have overdue payments and the resources are released.
        shared_ptr<string> lockType_ {};
      };

      class LoadBalancerBillingConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LoadBalancerBillingConfig& obj) { 
          DARABONBA_PTR_TO_JSON(PayType, payType_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancerBillingConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
        };
        LoadBalancerBillingConfig() = default ;
        LoadBalancerBillingConfig(const LoadBalancerBillingConfig &) = default ;
        LoadBalancerBillingConfig(LoadBalancerBillingConfig &&) = default ;
        LoadBalancerBillingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LoadBalancerBillingConfig() = default ;
        LoadBalancerBillingConfig& operator=(const LoadBalancerBillingConfig &) = default ;
        LoadBalancerBillingConfig& operator=(LoadBalancerBillingConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->payType_ == nullptr; };
        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline LoadBalancerBillingConfig& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      protected:
        // The billing method. Valid value:
        // 
        // **PostPay**: You are charged for the ALB instance on a pay-as-you-go basis.
        shared_ptr<string> payType_ {};
      };

      class DeletionProtectionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeletionProtectionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(EnabledTime, enabledTime_);
        };
        friend void from_json(const Darabonba::Json& j, DeletionProtectionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(EnabledTime, enabledTime_);
        };
        DeletionProtectionConfig() = default ;
        DeletionProtectionConfig(const DeletionProtectionConfig &) = default ;
        DeletionProtectionConfig(DeletionProtectionConfig &&) = default ;
        DeletionProtectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeletionProtectionConfig() = default ;
        DeletionProtectionConfig& operator=(const DeletionProtectionConfig &) = default ;
        DeletionProtectionConfig& operator=(DeletionProtectionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr
        && this->enabledTime_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline DeletionProtectionConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // enabledTime Field Functions 
        bool hasEnabledTime() const { return this->enabledTime_ != nullptr;};
        void deleteEnabledTime() { this->enabledTime_ = nullptr;};
        inline string getEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(enabledTime_, "") };
        inline DeletionProtectionConfig& setEnabledTime(string enabledTime) { DARABONBA_PTR_SET_VALUE(enabledTime_, enabledTime) };


      protected:
        // Indicates whether deletion protection is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> enabled_ {};
        // The time when deletion protection is enabled.
        shared_ptr<string> enabledTime_ {};
      };

      class AccessLogConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccessLogConfig& obj) { 
          DARABONBA_PTR_TO_JSON(LogProject, logProject_);
          DARABONBA_PTR_TO_JSON(LogStore, logStore_);
        };
        friend void from_json(const Darabonba::Json& j, AccessLogConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
          DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
        };
        AccessLogConfig() = default ;
        AccessLogConfig(const AccessLogConfig &) = default ;
        AccessLogConfig(AccessLogConfig &&) = default ;
        AccessLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccessLogConfig() = default ;
        AccessLogConfig& operator=(const AccessLogConfig &) = default ;
        AccessLogConfig& operator=(AccessLogConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logProject_ == nullptr
        && this->logStore_ == nullptr; };
        // logProject Field Functions 
        bool hasLogProject() const { return this->logProject_ != nullptr;};
        void deleteLogProject() { this->logProject_ = nullptr;};
        inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
        inline AccessLogConfig& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


        // logStore Field Functions 
        bool hasLogStore() const { return this->logStore_ != nullptr;};
        void deleteLogStore() { this->logStore_ = nullptr;};
        inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
        inline AccessLogConfig& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      protected:
        // The Simple Log Service project.
        shared_ptr<string> logProject_ {};
        // The Logstore.
        shared_ptr<string> logStore_ {};
      };

      virtual bool empty() const override { return this->accessLogConfig_ == nullptr
        && this->addressAllocatedMode_ == nullptr && this->addressIpVersion_ == nullptr && this->addressType_ == nullptr && this->bandwidthPackageId_ == nullptr && this->createTime_ == nullptr
        && this->DNSName_ == nullptr && this->deletionProtectionConfig_ == nullptr && this->ipv6AddressType_ == nullptr && this->loadBalancerBillingConfig_ == nullptr && this->loadBalancerBussinessStatus_ == nullptr
        && this->loadBalancerEdition_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerOperationLocks_ == nullptr && this->loadBalancerStatus_ == nullptr
        && this->modificationProtectionConfig_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
      // accessLogConfig Field Functions 
      bool hasAccessLogConfig() const { return this->accessLogConfig_ != nullptr;};
      void deleteAccessLogConfig() { this->accessLogConfig_ = nullptr;};
      inline const LoadBalancers::AccessLogConfig & getAccessLogConfig() const { DARABONBA_PTR_GET_CONST(accessLogConfig_, LoadBalancers::AccessLogConfig) };
      inline LoadBalancers::AccessLogConfig getAccessLogConfig() { DARABONBA_PTR_GET(accessLogConfig_, LoadBalancers::AccessLogConfig) };
      inline LoadBalancers& setAccessLogConfig(const LoadBalancers::AccessLogConfig & accessLogConfig) { DARABONBA_PTR_SET_VALUE(accessLogConfig_, accessLogConfig) };
      inline LoadBalancers& setAccessLogConfig(LoadBalancers::AccessLogConfig && accessLogConfig) { DARABONBA_PTR_SET_RVALUE(accessLogConfig_, accessLogConfig) };


      // addressAllocatedMode Field Functions 
      bool hasAddressAllocatedMode() const { return this->addressAllocatedMode_ != nullptr;};
      void deleteAddressAllocatedMode() { this->addressAllocatedMode_ = nullptr;};
      inline string getAddressAllocatedMode() const { DARABONBA_PTR_GET_DEFAULT(addressAllocatedMode_, "") };
      inline LoadBalancers& setAddressAllocatedMode(string addressAllocatedMode) { DARABONBA_PTR_SET_VALUE(addressAllocatedMode_, addressAllocatedMode) };


      // addressIpVersion Field Functions 
      bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
      void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
      inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
      inline LoadBalancers& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


      // addressType Field Functions 
      bool hasAddressType() const { return this->addressType_ != nullptr;};
      void deleteAddressType() { this->addressType_ = nullptr;};
      inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
      inline LoadBalancers& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline LoadBalancers& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LoadBalancers& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DNSName Field Functions 
      bool hasDNSName() const { return this->DNSName_ != nullptr;};
      void deleteDNSName() { this->DNSName_ = nullptr;};
      inline string getDNSName() const { DARABONBA_PTR_GET_DEFAULT(DNSName_, "") };
      inline LoadBalancers& setDNSName(string DNSName) { DARABONBA_PTR_SET_VALUE(DNSName_, DNSName) };


      // deletionProtectionConfig Field Functions 
      bool hasDeletionProtectionConfig() const { return this->deletionProtectionConfig_ != nullptr;};
      void deleteDeletionProtectionConfig() { this->deletionProtectionConfig_ = nullptr;};
      inline const LoadBalancers::DeletionProtectionConfig & getDeletionProtectionConfig() const { DARABONBA_PTR_GET_CONST(deletionProtectionConfig_, LoadBalancers::DeletionProtectionConfig) };
      inline LoadBalancers::DeletionProtectionConfig getDeletionProtectionConfig() { DARABONBA_PTR_GET(deletionProtectionConfig_, LoadBalancers::DeletionProtectionConfig) };
      inline LoadBalancers& setDeletionProtectionConfig(const LoadBalancers::DeletionProtectionConfig & deletionProtectionConfig) { DARABONBA_PTR_SET_VALUE(deletionProtectionConfig_, deletionProtectionConfig) };
      inline LoadBalancers& setDeletionProtectionConfig(LoadBalancers::DeletionProtectionConfig && deletionProtectionConfig) { DARABONBA_PTR_SET_RVALUE(deletionProtectionConfig_, deletionProtectionConfig) };


      // ipv6AddressType Field Functions 
      bool hasIpv6AddressType() const { return this->ipv6AddressType_ != nullptr;};
      void deleteIpv6AddressType() { this->ipv6AddressType_ = nullptr;};
      inline string getIpv6AddressType() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressType_, "") };
      inline LoadBalancers& setIpv6AddressType(string ipv6AddressType) { DARABONBA_PTR_SET_VALUE(ipv6AddressType_, ipv6AddressType) };


      // loadBalancerBillingConfig Field Functions 
      bool hasLoadBalancerBillingConfig() const { return this->loadBalancerBillingConfig_ != nullptr;};
      void deleteLoadBalancerBillingConfig() { this->loadBalancerBillingConfig_ = nullptr;};
      inline const LoadBalancers::LoadBalancerBillingConfig & getLoadBalancerBillingConfig() const { DARABONBA_PTR_GET_CONST(loadBalancerBillingConfig_, LoadBalancers::LoadBalancerBillingConfig) };
      inline LoadBalancers::LoadBalancerBillingConfig getLoadBalancerBillingConfig() { DARABONBA_PTR_GET(loadBalancerBillingConfig_, LoadBalancers::LoadBalancerBillingConfig) };
      inline LoadBalancers& setLoadBalancerBillingConfig(const LoadBalancers::LoadBalancerBillingConfig & loadBalancerBillingConfig) { DARABONBA_PTR_SET_VALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };
      inline LoadBalancers& setLoadBalancerBillingConfig(LoadBalancers::LoadBalancerBillingConfig && loadBalancerBillingConfig) { DARABONBA_PTR_SET_RVALUE(loadBalancerBillingConfig_, loadBalancerBillingConfig) };


      // loadBalancerBussinessStatus Field Functions 
      bool hasLoadBalancerBussinessStatus() const { return this->loadBalancerBussinessStatus_ != nullptr;};
      void deleteLoadBalancerBussinessStatus() { this->loadBalancerBussinessStatus_ = nullptr;};
      inline string getLoadBalancerBussinessStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerBussinessStatus_, "") };
      inline LoadBalancers& setLoadBalancerBussinessStatus(string loadBalancerBussinessStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerBussinessStatus_, loadBalancerBussinessStatus) };


      // loadBalancerEdition Field Functions 
      bool hasLoadBalancerEdition() const { return this->loadBalancerEdition_ != nullptr;};
      void deleteLoadBalancerEdition() { this->loadBalancerEdition_ = nullptr;};
      inline string getLoadBalancerEdition() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerEdition_, "") };
      inline LoadBalancers& setLoadBalancerEdition(string loadBalancerEdition) { DARABONBA_PTR_SET_VALUE(loadBalancerEdition_, loadBalancerEdition) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline LoadBalancers& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // loadBalancerName Field Functions 
      bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
      void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
      inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
      inline LoadBalancers& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


      // loadBalancerOperationLocks Field Functions 
      bool hasLoadBalancerOperationLocks() const { return this->loadBalancerOperationLocks_ != nullptr;};
      void deleteLoadBalancerOperationLocks() { this->loadBalancerOperationLocks_ = nullptr;};
      inline const vector<LoadBalancers::LoadBalancerOperationLocks> & getLoadBalancerOperationLocks() const { DARABONBA_PTR_GET_CONST(loadBalancerOperationLocks_, vector<LoadBalancers::LoadBalancerOperationLocks>) };
      inline vector<LoadBalancers::LoadBalancerOperationLocks> getLoadBalancerOperationLocks() { DARABONBA_PTR_GET(loadBalancerOperationLocks_, vector<LoadBalancers::LoadBalancerOperationLocks>) };
      inline LoadBalancers& setLoadBalancerOperationLocks(const vector<LoadBalancers::LoadBalancerOperationLocks> & loadBalancerOperationLocks) { DARABONBA_PTR_SET_VALUE(loadBalancerOperationLocks_, loadBalancerOperationLocks) };
      inline LoadBalancers& setLoadBalancerOperationLocks(vector<LoadBalancers::LoadBalancerOperationLocks> && loadBalancerOperationLocks) { DARABONBA_PTR_SET_RVALUE(loadBalancerOperationLocks_, loadBalancerOperationLocks) };


      // loadBalancerStatus Field Functions 
      bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
      void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
      inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
      inline LoadBalancers& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


      // modificationProtectionConfig Field Functions 
      bool hasModificationProtectionConfig() const { return this->modificationProtectionConfig_ != nullptr;};
      void deleteModificationProtectionConfig() { this->modificationProtectionConfig_ = nullptr;};
      inline const LoadBalancers::ModificationProtectionConfig & getModificationProtectionConfig() const { DARABONBA_PTR_GET_CONST(modificationProtectionConfig_, LoadBalancers::ModificationProtectionConfig) };
      inline LoadBalancers::ModificationProtectionConfig getModificationProtectionConfig() { DARABONBA_PTR_GET(modificationProtectionConfig_, LoadBalancers::ModificationProtectionConfig) };
      inline LoadBalancers& setModificationProtectionConfig(const LoadBalancers::ModificationProtectionConfig & modificationProtectionConfig) { DARABONBA_PTR_SET_VALUE(modificationProtectionConfig_, modificationProtectionConfig) };
      inline LoadBalancers& setModificationProtectionConfig(LoadBalancers::ModificationProtectionConfig && modificationProtectionConfig) { DARABONBA_PTR_SET_RVALUE(modificationProtectionConfig_, modificationProtectionConfig) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline LoadBalancers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline LoadBalancers& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline LoadBalancers& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<LoadBalancers::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<LoadBalancers::Tags>) };
      inline vector<LoadBalancers::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<LoadBalancers::Tags>) };
      inline LoadBalancers& setTags(const vector<LoadBalancers::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline LoadBalancers& setTags(vector<LoadBalancers::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline LoadBalancers& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The configurations of access logs.
      shared_ptr<LoadBalancers::AccessLogConfig> accessLogConfig_ {};
      // The mode in which IP addresses are allocated. Valid values:
      // 
      // *   **Fixed**: The ALB instance uses a static IP address.
      // *   **Dynamic**: dynamically allocates an IP address to each zone of the ALB instance.
      shared_ptr<string> addressAllocatedMode_ {};
      // The IP version. Valid values:
      // 
      // *   **IPv4**
      // *   **DualStack**
      shared_ptr<string> addressIpVersion_ {};
      // The type of IP address that the ALB instance uses to provide services. Valid values:
      // 
      // *   **Internet**: The ALB instance is assigned a public IP address. The domain name is resolved to the public IP address. The ALB instance is accessible over the Internet.
      // *   **Intranet**: The ALB instance is assigned only a private IP address. The domain name is resolved to the private IP address. The ALB instance is accessible only within the VPC of the ALB instance.
      shared_ptr<string> addressType_ {};
      // The ID of the Internet Shared Bandwidth instance that is associated with the Internet-facing ALB instance.
      shared_ptr<string> bandwidthPackageId_ {};
      // The time when the resource was created.
      shared_ptr<string> createTime_ {};
      // The domain name.
      shared_ptr<string> DNSName_ {};
      // The configuration of the deletion protection feature.
      shared_ptr<LoadBalancers::DeletionProtectionConfig> deletionProtectionConfig_ {};
      // The type of IPv6 address used by the ALB instance. Valid values:
      // 
      // *   **Internet** The ALB instance is assigned a public IP address. The domain name is resolved to the public IP address. The ALB instance is accessible over the Internet.
      // *   **Intranet** The ALB instance is assigned only a private IP address. The domain name is resolved to the private IP address. The ALB instance is accessible only within the VPC of the ALB instance.
      shared_ptr<string> ipv6AddressType_ {};
      // The billing information about the ALB instance.
      shared_ptr<LoadBalancers::LoadBalancerBillingConfig> loadBalancerBillingConfig_ {};
      // The status of the ALB instance. Valid values:
      // 
      // *   **Abnormal**
      // *   **Normal**
      shared_ptr<string> loadBalancerBussinessStatus_ {};
      // The edition of the ALB instance. The features and billing rules vary based on the edition. Valid values:
      // 
      // *   **Basic**
      // *   **Standard**
      // *   **StandardWithWaf**
      shared_ptr<string> loadBalancerEdition_ {};
      // The ID of the ALB instance.
      shared_ptr<string> loadBalancerId_ {};
      // The name of the ALB instance.
      shared_ptr<string> loadBalancerName_ {};
      // The configuration of the operation lock.
      shared_ptr<vector<LoadBalancers::LoadBalancerOperationLocks>> loadBalancerOperationLocks_ {};
      // The status of the ALB instance. Valid values:
      // 
      // *   **Inactive**: The ALB instance is disabled. ALB instances in the Inactive state do not forward traffic.
      // *   **Active**: The ALB instance is running.
      // *   **Provisioning**: The ALB instance is being created.
      // *   **Configuring**: The ALB instance is being modified.
      // *   **CreateFailed**: The system failed to create the ALB instance.
      shared_ptr<string> loadBalancerStatus_ {};
      // The configuration read-only mode settings.
      shared_ptr<LoadBalancers::ModificationProtectionConfig> modificationProtectionConfig_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The information about the tags.
      shared_ptr<vector<LoadBalancers::Tags>> tags_ {};
      // The ID of the VPC in which the ALB instance is deployed.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->loadBalancers_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const vector<ListLoadBalancersResponseBody::LoadBalancers> & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<ListLoadBalancersResponseBody::LoadBalancers>) };
    inline vector<ListLoadBalancersResponseBody::LoadBalancers> getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<ListLoadBalancersResponseBody::LoadBalancers>) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(const vector<ListLoadBalancersResponseBody::LoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline ListLoadBalancersResponseBody& setLoadBalancers(vector<ListLoadBalancersResponseBody::LoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListLoadBalancersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLoadBalancersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLoadBalancersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLoadBalancersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of ALB instances.
    shared_ptr<vector<ListLoadBalancersResponseBody::LoadBalancers>> loadBalancers_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
