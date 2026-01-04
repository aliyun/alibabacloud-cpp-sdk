// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALACCELERATIONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALACCELERATIONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGlobalAccelerationInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalAccelerationInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstances, globalAccelerationInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalAccelerationInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstances, globalAccelerationInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeGlobalAccelerationInstancesResponseBody() = default ;
    DescribeGlobalAccelerationInstancesResponseBody(const DescribeGlobalAccelerationInstancesResponseBody &) = default ;
    DescribeGlobalAccelerationInstancesResponseBody(DescribeGlobalAccelerationInstancesResponseBody &&) = default ;
    DescribeGlobalAccelerationInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalAccelerationInstancesResponseBody() = default ;
    DescribeGlobalAccelerationInstancesResponseBody& operator=(const DescribeGlobalAccelerationInstancesResponseBody &) = default ;
    DescribeGlobalAccelerationInstancesResponseBody& operator=(DescribeGlobalAccelerationInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GlobalAccelerationInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalAccelerationInstances& obj) { 
        DARABONBA_PTR_TO_JSON(GlobalAccelerationInstance, globalAccelerationInstance_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalAccelerationInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstance, globalAccelerationInstance_);
      };
      GlobalAccelerationInstances() = default ;
      GlobalAccelerationInstances(const GlobalAccelerationInstances &) = default ;
      GlobalAccelerationInstances(GlobalAccelerationInstances &&) = default ;
      GlobalAccelerationInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalAccelerationInstances() = default ;
      GlobalAccelerationInstances& operator=(const GlobalAccelerationInstances &) = default ;
      GlobalAccelerationInstances& operator=(GlobalAccelerationInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GlobalAccelerationInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GlobalAccelerationInstance& obj) { 
          DARABONBA_PTR_TO_JSON(AccelerationLocation, accelerationLocation_);
          DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PublicIpAddresses, publicIpAddresses_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ServiceLocation, serviceLocation_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, GlobalAccelerationInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(AccelerationLocation, accelerationLocation_);
          DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PublicIpAddresses, publicIpAddresses_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ServiceLocation, serviceLocation_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        GlobalAccelerationInstance() = default ;
        GlobalAccelerationInstance(const GlobalAccelerationInstance &) = default ;
        GlobalAccelerationInstance(GlobalAccelerationInstance &&) = default ;
        GlobalAccelerationInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GlobalAccelerationInstance() = default ;
        GlobalAccelerationInstance& operator=(const GlobalAccelerationInstance &) = default ;
        GlobalAccelerationInstance& operator=(GlobalAccelerationInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PublicIpAddresses : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PublicIpAddresses& obj) { 
            DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
          };
          friend void from_json(const Darabonba::Json& j, PublicIpAddresses& obj) { 
            DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
          };
          PublicIpAddresses() = default ;
          PublicIpAddresses(const PublicIpAddresses &) = default ;
          PublicIpAddresses(PublicIpAddresses &&) = default ;
          PublicIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PublicIpAddresses() = default ;
          PublicIpAddresses& operator=(const PublicIpAddresses &) = default ;
          PublicIpAddresses& operator=(PublicIpAddresses &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PublicIpAddress : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PublicIpAddress& obj) { 
              DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
              DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
            };
            friend void from_json(const Darabonba::Json& j, PublicIpAddress& obj) { 
              DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
              DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
            };
            PublicIpAddress() = default ;
            PublicIpAddress(const PublicIpAddress &) = default ;
            PublicIpAddress(PublicIpAddress &&) = default ;
            PublicIpAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PublicIpAddress() = default ;
            PublicIpAddress& operator=(const PublicIpAddress &) = default ;
            PublicIpAddress& operator=(PublicIpAddress &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->ipAddress_ == nullptr; };
            // allocationId Field Functions 
            bool hasAllocationId() const { return this->allocationId_ != nullptr;};
            void deleteAllocationId() { this->allocationId_ = nullptr;};
            inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
            inline PublicIpAddress& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


            // ipAddress Field Functions 
            bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
            void deleteIpAddress() { this->ipAddress_ = nullptr;};
            inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
            inline PublicIpAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


          protected:
            // The ID of the public IP address of the GA instance.
            shared_ptr<string> allocationId_ {};
            // The public IP address of the GA instance.
            shared_ptr<string> ipAddress_ {};
          };

          virtual bool empty() const override { return this->publicIpAddress_ == nullptr; };
          // publicIpAddress Field Functions 
          bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
          void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
          inline const vector<PublicIpAddresses::PublicIpAddress> & getPublicIpAddress() const { DARABONBA_PTR_GET_CONST(publicIpAddress_, vector<PublicIpAddresses::PublicIpAddress>) };
          inline vector<PublicIpAddresses::PublicIpAddress> getPublicIpAddress() { DARABONBA_PTR_GET(publicIpAddress_, vector<PublicIpAddresses::PublicIpAddress>) };
          inline PublicIpAddresses& setPublicIpAddress(const vector<PublicIpAddresses::PublicIpAddress> & publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };
          inline PublicIpAddresses& setPublicIpAddress(vector<PublicIpAddresses::PublicIpAddress> && publicIpAddress) { DARABONBA_PTR_SET_RVALUE(publicIpAddress_, publicIpAddress) };


        protected:
          shared_ptr<vector<PublicIpAddresses::PublicIpAddress>> publicIpAddress_ {};
        };

        class BackendServers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BackendServers& obj) { 
            DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
          };
          friend void from_json(const Darabonba::Json& j, BackendServers& obj) { 
            DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
          };
          BackendServers() = default ;
          BackendServers(const BackendServers &) = default ;
          BackendServers(BackendServers &&) = default ;
          BackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BackendServers() = default ;
          BackendServers& operator=(const BackendServers &) = default ;
          BackendServers& operator=(BackendServers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BackendServer : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BackendServer& obj) { 
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(ServerId, serverId_);
              DARABONBA_PTR_TO_JSON(ServerIpAddress, serverIpAddress_);
              DARABONBA_PTR_TO_JSON(ServerType, serverType_);
            };
            friend void from_json(const Darabonba::Json& j, BackendServer& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
              DARABONBA_PTR_FROM_JSON(ServerIpAddress, serverIpAddress_);
              DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
            };
            BackendServer() = default ;
            BackendServer(const BackendServer &) = default ;
            BackendServer(BackendServer &&) = default ;
            BackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BackendServer() = default ;
            BackendServer& operator=(const BackendServer &) = default ;
            BackendServer& operator=(BackendServer &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->regionId_ == nullptr
        && this->serverId_ == nullptr && this->serverIpAddress_ == nullptr && this->serverType_ == nullptr; };
            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline BackendServer& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // serverId Field Functions 
            bool hasServerId() const { return this->serverId_ != nullptr;};
            void deleteServerId() { this->serverId_ = nullptr;};
            inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
            inline BackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


            // serverIpAddress Field Functions 
            bool hasServerIpAddress() const { return this->serverIpAddress_ != nullptr;};
            void deleteServerIpAddress() { this->serverIpAddress_ = nullptr;};
            inline string getServerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(serverIpAddress_, "") };
            inline BackendServer& setServerIpAddress(string serverIpAddress) { DARABONBA_PTR_SET_VALUE(serverIpAddress_, serverIpAddress) };


            // serverType Field Functions 
            bool hasServerType() const { return this->serverType_ != nullptr;};
            void deleteServerType() { this->serverType_ = nullptr;};
            inline string getServerType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
            inline BackendServer& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


          protected:
            // The region where the backend servers are deployed.
            shared_ptr<string> regionId_ {};
            // The ID of the backend server.
            shared_ptr<string> serverId_ {};
            // The IP address of the backend server.
            shared_ptr<string> serverIpAddress_ {};
            // The type of the backend server.
            // 
            // *   **EcsInstance**: Elastic Compute Service (ECS) instance
            // *   **SlbInstance**: Server Load Balancer (SLB) instance
            shared_ptr<string> serverType_ {};
          };

          virtual bool empty() const override { return this->backendServer_ == nullptr; };
          // backendServer Field Functions 
          bool hasBackendServer() const { return this->backendServer_ != nullptr;};
          void deleteBackendServer() { this->backendServer_ = nullptr;};
          inline const vector<BackendServers::BackendServer> & getBackendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<BackendServers::BackendServer>) };
          inline vector<BackendServers::BackendServer> getBackendServer() { DARABONBA_PTR_GET(backendServer_, vector<BackendServers::BackendServer>) };
          inline BackendServers& setBackendServer(const vector<BackendServers::BackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
          inline BackendServers& setBackendServer(vector<BackendServers::BackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


        protected:
          shared_ptr<vector<BackendServers::BackendServer>> backendServer_ {};
        };

        virtual bool empty() const override { return this->accelerationLocation_ == nullptr
        && this->backendServers_ == nullptr && this->bandwidth_ == nullptr && this->bandwidthType_ == nullptr && this->chargeType_ == nullptr && this->creationTime_ == nullptr
        && this->description_ == nullptr && this->expiredTime_ == nullptr && this->globalAccelerationInstanceId_ == nullptr && this->internetChargeType_ == nullptr && this->ipAddress_ == nullptr
        && this->name_ == nullptr && this->publicIpAddresses_ == nullptr && this->regionId_ == nullptr && this->serviceLocation_ == nullptr && this->status_ == nullptr; };
        // accelerationLocation Field Functions 
        bool hasAccelerationLocation() const { return this->accelerationLocation_ != nullptr;};
        void deleteAccelerationLocation() { this->accelerationLocation_ = nullptr;};
        inline string getAccelerationLocation() const { DARABONBA_PTR_GET_DEFAULT(accelerationLocation_, "") };
        inline GlobalAccelerationInstance& setAccelerationLocation(string accelerationLocation) { DARABONBA_PTR_SET_VALUE(accelerationLocation_, accelerationLocation) };


        // backendServers Field Functions 
        bool hasBackendServers() const { return this->backendServers_ != nullptr;};
        void deleteBackendServers() { this->backendServers_ = nullptr;};
        inline const GlobalAccelerationInstance::BackendServers & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, GlobalAccelerationInstance::BackendServers) };
        inline GlobalAccelerationInstance::BackendServers getBackendServers() { DARABONBA_PTR_GET(backendServers_, GlobalAccelerationInstance::BackendServers) };
        inline GlobalAccelerationInstance& setBackendServers(const GlobalAccelerationInstance::BackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
        inline GlobalAccelerationInstance& setBackendServers(GlobalAccelerationInstance::BackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline GlobalAccelerationInstance& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // bandwidthType Field Functions 
        bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
        void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
        inline string getBandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
        inline GlobalAccelerationInstance& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline GlobalAccelerationInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline GlobalAccelerationInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline GlobalAccelerationInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline GlobalAccelerationInstance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // globalAccelerationInstanceId Field Functions 
        bool hasGlobalAccelerationInstanceId() const { return this->globalAccelerationInstanceId_ != nullptr;};
        void deleteGlobalAccelerationInstanceId() { this->globalAccelerationInstanceId_ = nullptr;};
        inline string getGlobalAccelerationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalAccelerationInstanceId_, "") };
        inline GlobalAccelerationInstance& setGlobalAccelerationInstanceId(string globalAccelerationInstanceId) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstanceId_, globalAccelerationInstanceId) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline GlobalAccelerationInstance& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline GlobalAccelerationInstance& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline GlobalAccelerationInstance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // publicIpAddresses Field Functions 
        bool hasPublicIpAddresses() const { return this->publicIpAddresses_ != nullptr;};
        void deletePublicIpAddresses() { this->publicIpAddresses_ = nullptr;};
        inline const GlobalAccelerationInstance::PublicIpAddresses & getPublicIpAddresses() const { DARABONBA_PTR_GET_CONST(publicIpAddresses_, GlobalAccelerationInstance::PublicIpAddresses) };
        inline GlobalAccelerationInstance::PublicIpAddresses getPublicIpAddresses() { DARABONBA_PTR_GET(publicIpAddresses_, GlobalAccelerationInstance::PublicIpAddresses) };
        inline GlobalAccelerationInstance& setPublicIpAddresses(const GlobalAccelerationInstance::PublicIpAddresses & publicIpAddresses) { DARABONBA_PTR_SET_VALUE(publicIpAddresses_, publicIpAddresses) };
        inline GlobalAccelerationInstance& setPublicIpAddresses(GlobalAccelerationInstance::PublicIpAddresses && publicIpAddresses) { DARABONBA_PTR_SET_RVALUE(publicIpAddresses_, publicIpAddresses) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline GlobalAccelerationInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // serviceLocation Field Functions 
        bool hasServiceLocation() const { return this->serviceLocation_ != nullptr;};
        void deleteServiceLocation() { this->serviceLocation_ = nullptr;};
        inline string getServiceLocation() const { DARABONBA_PTR_GET_DEFAULT(serviceLocation_, "") };
        inline GlobalAccelerationInstance& setServiceLocation(string serviceLocation) { DARABONBA_PTR_SET_VALUE(serviceLocation_, serviceLocation) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline GlobalAccelerationInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The acceleration area of the GA instance.
        shared_ptr<string> accelerationLocation_ {};
        // The details about the backend servers of the GA instance.
        shared_ptr<GlobalAccelerationInstance::BackendServers> backendServers_ {};
        // The maximum bandwidth of the GA instance.
        shared_ptr<string> bandwidth_ {};
        // The bandwidth type of the GA instance.
        // 
        // *   **Sharing**
        // *   **Exclusive** (default)
        shared_ptr<string> bandwidthType_ {};
        // The billing method of the GA instance.
        shared_ptr<string> chargeType_ {};
        // The time when the GA instance was created. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The description of the GA instance.
        shared_ptr<string> description_ {};
        // The time when the instance expires.
        shared_ptr<string> expiredTime_ {};
        // The ID of the GA instance.
        shared_ptr<string> globalAccelerationInstanceId_ {};
        // The billing method of the GA instance.
        shared_ptr<string> internetChargeType_ {};
        // The public IP address of the dedicated GA instance.
        shared_ptr<string> ipAddress_ {};
        // The name of the GA instance.
        shared_ptr<string> name_ {};
        // The public IP address.
        shared_ptr<GlobalAccelerationInstance::PublicIpAddresses> publicIpAddresses_ {};
        // The region ID of the GA instance.
        shared_ptr<string> regionId_ {};
        // The service area of the GA instance.
        shared_ptr<string> serviceLocation_ {};
        // The status of the GA instance.
        // 
        // *   **Available**
        // *   **Inuse**
        // *   **Associating**
        // *   **Unassociating**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->globalAccelerationInstance_ == nullptr; };
      // globalAccelerationInstance Field Functions 
      bool hasGlobalAccelerationInstance() const { return this->globalAccelerationInstance_ != nullptr;};
      void deleteGlobalAccelerationInstance() { this->globalAccelerationInstance_ = nullptr;};
      inline const vector<GlobalAccelerationInstances::GlobalAccelerationInstance> & getGlobalAccelerationInstance() const { DARABONBA_PTR_GET_CONST(globalAccelerationInstance_, vector<GlobalAccelerationInstances::GlobalAccelerationInstance>) };
      inline vector<GlobalAccelerationInstances::GlobalAccelerationInstance> getGlobalAccelerationInstance() { DARABONBA_PTR_GET(globalAccelerationInstance_, vector<GlobalAccelerationInstances::GlobalAccelerationInstance>) };
      inline GlobalAccelerationInstances& setGlobalAccelerationInstance(const vector<GlobalAccelerationInstances::GlobalAccelerationInstance> & globalAccelerationInstance) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstance_, globalAccelerationInstance) };
      inline GlobalAccelerationInstances& setGlobalAccelerationInstance(vector<GlobalAccelerationInstances::GlobalAccelerationInstance> && globalAccelerationInstance) { DARABONBA_PTR_SET_RVALUE(globalAccelerationInstance_, globalAccelerationInstance) };


    protected:
      shared_ptr<vector<GlobalAccelerationInstances::GlobalAccelerationInstance>> globalAccelerationInstance_ {};
    };

    virtual bool empty() const override { return this->globalAccelerationInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // globalAccelerationInstances Field Functions 
    bool hasGlobalAccelerationInstances() const { return this->globalAccelerationInstances_ != nullptr;};
    void deleteGlobalAccelerationInstances() { this->globalAccelerationInstances_ = nullptr;};
    inline const DescribeGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances & getGlobalAccelerationInstances() const { DARABONBA_PTR_GET_CONST(globalAccelerationInstances_, DescribeGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances) };
    inline DescribeGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances getGlobalAccelerationInstances() { DARABONBA_PTR_GET(globalAccelerationInstances_, DescribeGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setGlobalAccelerationInstances(const DescribeGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances & globalAccelerationInstances) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstances_, globalAccelerationInstances) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setGlobalAccelerationInstances(DescribeGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances && globalAccelerationInstances) { DARABONBA_PTR_SET_RVALUE(globalAccelerationInstances_, globalAccelerationInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalAccelerationInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeGlobalAccelerationInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the GA instances.
    shared_ptr<DescribeGlobalAccelerationInstancesResponseBody::GlobalAccelerationInstances> globalAccelerationInstances_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
