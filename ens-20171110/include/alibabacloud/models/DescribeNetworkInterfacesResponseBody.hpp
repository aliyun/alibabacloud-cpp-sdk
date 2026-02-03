// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceSets, networkInterfaceSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceSets, networkInterfaceSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkInterfacesResponseBody() = default ;
    DescribeNetworkInterfacesResponseBody(const DescribeNetworkInterfacesResponseBody &) = default ;
    DescribeNetworkInterfacesResponseBody(DescribeNetworkInterfacesResponseBody &&) = default ;
    DescribeNetworkInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesResponseBody() = default ;
    DescribeNetworkInterfacesResponseBody& operator=(const DescribeNetworkInterfacesResponseBody &) = default ;
    DescribeNetworkInterfacesResponseBody& operator=(DescribeNetworkInterfacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkInterfaceSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterfaceSets& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkInterfaceSet, networkInterfaceSet_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfaceSets& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceSet, networkInterfaceSet_);
      };
      NetworkInterfaceSets() = default ;
      NetworkInterfaceSets(const NetworkInterfaceSets &) = default ;
      NetworkInterfaceSets(NetworkInterfaceSets &&) = default ;
      NetworkInterfaceSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterfaceSets() = default ;
      NetworkInterfaceSets& operator=(const NetworkInterfaceSets &) = default ;
      NetworkInterfaceSets& operator=(NetworkInterfaceSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetworkInterfaceSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkInterfaceSet& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
          DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
          DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
          DARABONBA_PTR_TO_JSON(PrimaryIp, primaryIp_);
          DARABONBA_PTR_TO_JSON(PrimaryIpType, primaryIpType_);
          DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
          DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VmncLearn, vmncLearn_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkInterfaceSet& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
          DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
          DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
          DARABONBA_PTR_FROM_JSON(PrimaryIp, primaryIp_);
          DARABONBA_PTR_FROM_JSON(PrimaryIpType, primaryIpType_);
          DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VmncLearn, vmncLearn_);
        };
        NetworkInterfaceSet() = default ;
        NetworkInterfaceSet(const NetworkInterfaceSet &) = default ;
        NetworkInterfaceSet(NetworkInterfaceSet &&) = default ;
        NetworkInterfaceSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkInterfaceSet() = default ;
        NetworkInterfaceSet& operator=(const NetworkInterfaceSet &) = default ;
        NetworkInterfaceSet& operator=(NetworkInterfaceSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SecurityGroupIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityGroupIds& obj) { 
            DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroupIds& obj) { 
            DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
          };
          SecurityGroupIds() = default ;
          SecurityGroupIds(const SecurityGroupIds &) = default ;
          SecurityGroupIds(SecurityGroupIds &&) = default ;
          SecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityGroupIds() = default ;
          SecurityGroupIds& operator=(const SecurityGroupIds &) = default ;
          SecurityGroupIds& operator=(SecurityGroupIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->securityGroup_ == nullptr; };
          // securityGroup Field Functions 
          bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
          void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
          inline const vector<string> & getSecurityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, vector<string>) };
          inline vector<string> getSecurityGroup() { DARABONBA_PTR_GET(securityGroup_, vector<string>) };
          inline SecurityGroupIds& setSecurityGroup(const vector<string> & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
          inline SecurityGroupIds& setSecurityGroup(vector<string> && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


        protected:
          shared_ptr<vector<string>> securityGroup_ {};
        };

        class PrivateIpSets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrivateIpSets& obj) { 
            DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
          };
          friend void from_json(const Darabonba::Json& j, PrivateIpSets& obj) { 
            DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
          };
          PrivateIpSets() = default ;
          PrivateIpSets(const PrivateIpSets &) = default ;
          PrivateIpSets(PrivateIpSets &&) = default ;
          PrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrivateIpSets() = default ;
          PrivateIpSets& operator=(const PrivateIpSets &) = default ;
          PrivateIpSets& operator=(PrivateIpSets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PrivateIpSet : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PrivateIpSet& obj) { 
              DARABONBA_PTR_TO_JSON(Primary, primary_);
              DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
              DARABONBA_PTR_TO_JSON(PrivateIpStatus, privateIpStatus_);
            };
            friend void from_json(const Darabonba::Json& j, PrivateIpSet& obj) { 
              DARABONBA_PTR_FROM_JSON(Primary, primary_);
              DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
              DARABONBA_PTR_FROM_JSON(PrivateIpStatus, privateIpStatus_);
            };
            PrivateIpSet() = default ;
            PrivateIpSet(const PrivateIpSet &) = default ;
            PrivateIpSet(PrivateIpSet &&) = default ;
            PrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PrivateIpSet() = default ;
            PrivateIpSet& operator=(const PrivateIpSet &) = default ;
            PrivateIpSet& operator=(PrivateIpSet &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->primary_ == nullptr
        && this->privateIpAddress_ == nullptr && this->privateIpStatus_ == nullptr; };
            // primary Field Functions 
            bool hasPrimary() const { return this->primary_ != nullptr;};
            void deletePrimary() { this->primary_ = nullptr;};
            inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
            inline PrivateIpSet& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


            // privateIpAddress Field Functions 
            bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
            void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
            inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
            inline PrivateIpSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


            // privateIpStatus Field Functions 
            bool hasPrivateIpStatus() const { return this->privateIpStatus_ != nullptr;};
            void deletePrivateIpStatus() { this->privateIpStatus_ = nullptr;};
            inline string getPrivateIpStatus() const { DARABONBA_PTR_GET_DEFAULT(privateIpStatus_, "") };
            inline PrivateIpSet& setPrivateIpStatus(string privateIpStatus) { DARABONBA_PTR_SET_VALUE(privateIpStatus_, privateIpStatus) };


          protected:
            // Specifies whether the private IP address is the primary private IP address. Valid values:
            // 
            // *   true
            // *   false
            shared_ptr<bool> primary_ {};
            // The private IP address.
            shared_ptr<string> privateIpAddress_ {};
            shared_ptr<string> privateIpStatus_ {};
          };

          virtual bool empty() const override { return this->privateIpSet_ == nullptr; };
          // privateIpSet Field Functions 
          bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
          void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
          inline const vector<PrivateIpSets::PrivateIpSet> & getPrivateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
          inline vector<PrivateIpSets::PrivateIpSet> getPrivateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<PrivateIpSets::PrivateIpSet>) };
          inline PrivateIpSets& setPrivateIpSet(const vector<PrivateIpSets::PrivateIpSet> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
          inline PrivateIpSets& setPrivateIpSet(vector<PrivateIpSets::PrivateIpSet> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


        protected:
          shared_ptr<vector<PrivateIpSets::PrivateIpSet>> privateIpSet_ {};
        };

        class Ipv6Sets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ipv6Sets& obj) { 
            DARABONBA_PTR_TO_JSON(Ipv6Set, ipv6Set_);
          };
          friend void from_json(const Darabonba::Json& j, Ipv6Sets& obj) { 
            DARABONBA_PTR_FROM_JSON(Ipv6Set, ipv6Set_);
          };
          Ipv6Sets() = default ;
          Ipv6Sets(const Ipv6Sets &) = default ;
          Ipv6Sets(Ipv6Sets &&) = default ;
          Ipv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ipv6Sets() = default ;
          Ipv6Sets& operator=(const Ipv6Sets &) = default ;
          Ipv6Sets& operator=(Ipv6Sets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Ipv6Set : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Ipv6Set& obj) { 
              DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
            };
            friend void from_json(const Darabonba::Json& j, Ipv6Set& obj) { 
              DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
            };
            Ipv6Set() = default ;
            Ipv6Set(const Ipv6Set &) = default ;
            Ipv6Set(Ipv6Set &&) = default ;
            Ipv6Set(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Ipv6Set() = default ;
            Ipv6Set& operator=(const Ipv6Set &) = default ;
            Ipv6Set& operator=(Ipv6Set &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
            // ipv6Address Field Functions 
            bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
            void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
            inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
            inline Ipv6Set& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


          protected:
            // The IPv6 address of the ENI.
            shared_ptr<string> ipv6Address_ {};
          };

          virtual bool empty() const override { return this->ipv6Set_ == nullptr; };
          // ipv6Set Field Functions 
          bool hasIpv6Set() const { return this->ipv6Set_ != nullptr;};
          void deleteIpv6Set() { this->ipv6Set_ = nullptr;};
          inline const vector<Ipv6Sets::Ipv6Set> & getIpv6Set() const { DARABONBA_PTR_GET_CONST(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
          inline vector<Ipv6Sets::Ipv6Set> getIpv6Set() { DARABONBA_PTR_GET(ipv6Set_, vector<Ipv6Sets::Ipv6Set>) };
          inline Ipv6Sets& setIpv6Set(const vector<Ipv6Sets::Ipv6Set> & ipv6Set) { DARABONBA_PTR_SET_VALUE(ipv6Set_, ipv6Set) };
          inline Ipv6Sets& setIpv6Set(vector<Ipv6Sets::Ipv6Set> && ipv6Set) { DARABONBA_PTR_SET_RVALUE(ipv6Set_, ipv6Set) };


        protected:
          shared_ptr<vector<Ipv6Sets::Ipv6Set>> ipv6Set_ {};
        };

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->instanceId_ == nullptr && this->ipv6Sets_ == nullptr && this->macAddress_ == nullptr
        && this->networkId_ == nullptr && this->networkInterfaceId_ == nullptr && this->networkInterfaceName_ == nullptr && this->primaryIp_ == nullptr && this->primaryIpType_ == nullptr
        && this->privateIpSets_ == nullptr && this->securityGroupIds_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->vSwitchId_ == nullptr
        && this->vmncLearn_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline NetworkInterfaceSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NetworkInterfaceSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline NetworkInterfaceSet& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline NetworkInterfaceSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ipv6Sets Field Functions 
        bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
        void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
        inline const NetworkInterfaceSet::Ipv6Sets & getIpv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, NetworkInterfaceSet::Ipv6Sets) };
        inline NetworkInterfaceSet::Ipv6Sets getIpv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, NetworkInterfaceSet::Ipv6Sets) };
        inline NetworkInterfaceSet& setIpv6Sets(const NetworkInterfaceSet::Ipv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
        inline NetworkInterfaceSet& setIpv6Sets(NetworkInterfaceSet::Ipv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


        // macAddress Field Functions 
        bool hasMacAddress() const { return this->macAddress_ != nullptr;};
        void deleteMacAddress() { this->macAddress_ = nullptr;};
        inline string getMacAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
        inline NetworkInterfaceSet& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


        // networkId Field Functions 
        bool hasNetworkId() const { return this->networkId_ != nullptr;};
        void deleteNetworkId() { this->networkId_ = nullptr;};
        inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
        inline NetworkInterfaceSet& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline NetworkInterfaceSet& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


        // networkInterfaceName Field Functions 
        bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
        void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
        inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
        inline NetworkInterfaceSet& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


        // primaryIp Field Functions 
        bool hasPrimaryIp() const { return this->primaryIp_ != nullptr;};
        void deletePrimaryIp() { this->primaryIp_ = nullptr;};
        inline string getPrimaryIp() const { DARABONBA_PTR_GET_DEFAULT(primaryIp_, "") };
        inline NetworkInterfaceSet& setPrimaryIp(string primaryIp) { DARABONBA_PTR_SET_VALUE(primaryIp_, primaryIp) };


        // primaryIpType Field Functions 
        bool hasPrimaryIpType() const { return this->primaryIpType_ != nullptr;};
        void deletePrimaryIpType() { this->primaryIpType_ = nullptr;};
        inline string getPrimaryIpType() const { DARABONBA_PTR_GET_DEFAULT(primaryIpType_, "") };
        inline NetworkInterfaceSet& setPrimaryIpType(string primaryIpType) { DARABONBA_PTR_SET_VALUE(primaryIpType_, primaryIpType) };


        // privateIpSets Field Functions 
        bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
        void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
        inline const NetworkInterfaceSet::PrivateIpSets & getPrivateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, NetworkInterfaceSet::PrivateIpSets) };
        inline NetworkInterfaceSet::PrivateIpSets getPrivateIpSets() { DARABONBA_PTR_GET(privateIpSets_, NetworkInterfaceSet::PrivateIpSets) };
        inline NetworkInterfaceSet& setPrivateIpSets(const NetworkInterfaceSet::PrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
        inline NetworkInterfaceSet& setPrivateIpSets(NetworkInterfaceSet::PrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


        // securityGroupIds Field Functions 
        bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
        void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
        inline const NetworkInterfaceSet::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, NetworkInterfaceSet::SecurityGroupIds) };
        inline NetworkInterfaceSet::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, NetworkInterfaceSet::SecurityGroupIds) };
        inline NetworkInterfaceSet& setSecurityGroupIds(const NetworkInterfaceSet::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
        inline NetworkInterfaceSet& setSecurityGroupIds(NetworkInterfaceSet::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NetworkInterfaceSet& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NetworkInterfaceSet& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline NetworkInterfaceSet& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vmncLearn Field Functions 
        bool hasVmncLearn() const { return this->vmncLearn_ != nullptr;};
        void deleteVmncLearn() { this->vmncLearn_ = nullptr;};
        inline bool getVmncLearn() const { DARABONBA_PTR_GET_DEFAULT(vmncLearn_, false) };
        inline NetworkInterfaceSet& setVmncLearn(bool vmncLearn) { DARABONBA_PTR_SET_VALUE(vmncLearn_, vmncLearn) };


      protected:
        // The time when the ENI was created. Specify the time in the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of ENI.
        shared_ptr<string> description_ {};
        // The ID of the edge node.
        shared_ptr<string> ensRegionId_ {};
        // The ID of the instance to which the ENI is bound.
        shared_ptr<string> instanceId_ {};
        // The IPv6 addresses of the ENIs.
        shared_ptr<NetworkInterfaceSet::Ipv6Sets> ipv6Sets_ {};
        // The MAC address of the ENI.
        shared_ptr<string> macAddress_ {};
        // The ID of the network.
        shared_ptr<string> networkId_ {};
        // The ID of the ENI.
        shared_ptr<string> networkInterfaceId_ {};
        // The ENI name.
        shared_ptr<string> networkInterfaceName_ {};
        // The private IP address of the server.
        shared_ptr<string> primaryIp_ {};
        // The primary private IP address. Valid values:
        // 
        // *   **Public**: public IP address.
        // *   **Private**: internal IP address.
        shared_ptr<string> primaryIpType_ {};
        // Details about the private IP address.
        shared_ptr<NetworkInterfaceSet::PrivateIpSets> privateIpSets_ {};
        // The ID of the security group.
        shared_ptr<NetworkInterfaceSet::SecurityGroupIds> securityGroupIds_ {};
        // The status of the ENI. Valid values:
        // 
        // *   Available: The ENI is available.
        // *   Attaching: The ENI is being attached to an instance.
        // *   InUse: The ENI is attached to an instance.
        // *   Detaching: The ENI is being detached from an instance.
        // *   Deleting: The ENI is being deleted.
        shared_ptr<string> status_ {};
        // The type of the ENI. Valid values:
        // 
        // *   Primary
        // *   Secondary
        shared_ptr<string> type_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<bool> vmncLearn_ {};
      };

      virtual bool empty() const override { return this->networkInterfaceSet_ == nullptr; };
      // networkInterfaceSet Field Functions 
      bool hasNetworkInterfaceSet() const { return this->networkInterfaceSet_ != nullptr;};
      void deleteNetworkInterfaceSet() { this->networkInterfaceSet_ = nullptr;};
      inline const vector<NetworkInterfaceSets::NetworkInterfaceSet> & getNetworkInterfaceSet() const { DARABONBA_PTR_GET_CONST(networkInterfaceSet_, vector<NetworkInterfaceSets::NetworkInterfaceSet>) };
      inline vector<NetworkInterfaceSets::NetworkInterfaceSet> getNetworkInterfaceSet() { DARABONBA_PTR_GET(networkInterfaceSet_, vector<NetworkInterfaceSets::NetworkInterfaceSet>) };
      inline NetworkInterfaceSets& setNetworkInterfaceSet(const vector<NetworkInterfaceSets::NetworkInterfaceSet> & networkInterfaceSet) { DARABONBA_PTR_SET_VALUE(networkInterfaceSet_, networkInterfaceSet) };
      inline NetworkInterfaceSets& setNetworkInterfaceSet(vector<NetworkInterfaceSets::NetworkInterfaceSet> && networkInterfaceSet) { DARABONBA_PTR_SET_RVALUE(networkInterfaceSet_, networkInterfaceSet) };


    protected:
      shared_ptr<vector<NetworkInterfaceSets::NetworkInterfaceSet>> networkInterfaceSet_ {};
    };

    virtual bool empty() const override { return this->networkInterfaceSets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkInterfaceSets Field Functions 
    bool hasNetworkInterfaceSets() const { return this->networkInterfaceSets_ != nullptr;};
    void deleteNetworkInterfaceSets() { this->networkInterfaceSets_ = nullptr;};
    inline const DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets & getNetworkInterfaceSets() const { DARABONBA_PTR_GET_CONST(networkInterfaceSets_, DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets getNetworkInterfaceSets() { DARABONBA_PTR_GET(networkInterfaceSets_, DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBody& setNetworkInterfaceSets(const DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets & networkInterfaceSets) { DARABONBA_PTR_SET_VALUE(networkInterfaceSets_, networkInterfaceSets) };
    inline DescribeNetworkInterfacesResponseBody& setNetworkInterfaceSets(DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets && networkInterfaceSets) { DARABONBA_PTR_SET_RVALUE(networkInterfaceSets_, networkInterfaceSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNetworkInterfacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the ENIs.
    shared_ptr<DescribeNetworkInterfacesResponseBody::NetworkInterfaceSets> networkInterfaceSets_ {};
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries in the list.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
