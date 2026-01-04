// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESERVICERESPONSEBODY_HPP_
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
  class DescribeDeviceServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppMetaData, appMetaData_);
      DARABONBA_PTR_TO_JSON(AppStatus, appStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDetailInfos, resourceDetailInfos_);
      DARABONBA_PTR_TO_JSON(ResourceInfos, resourceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppMetaData, appMetaData_);
      DARABONBA_PTR_FROM_JSON(AppStatus, appStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDetailInfos, resourceDetailInfos_);
      DARABONBA_PTR_FROM_JSON(ResourceInfos, resourceInfos_);
    };
    DescribeDeviceServiceResponseBody() = default ;
    DescribeDeviceServiceResponseBody(const DescribeDeviceServiceResponseBody &) = default ;
    DescribeDeviceServiceResponseBody(DescribeDeviceServiceResponseBody &&) = default ;
    DescribeDeviceServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceServiceResponseBody() = default ;
    DescribeDeviceServiceResponseBody& operator=(const DescribeDeviceServiceResponseBody &) = default ;
    DescribeDeviceServiceResponseBody& operator=(DescribeDeviceServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
        DARABONBA_PTR_TO_JSON(AreaName, areaName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfos_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InternalIps, internalIps_);
        DARABONBA_PTR_TO_JSON(PublicIps, publicIps_);
        DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
        DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfos_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InternalIps, internalIps_);
        DARABONBA_PTR_FROM_JSON(PublicIps, publicIps_);
        DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      };
      ResourceInfos() = default ;
      ResourceInfos(const ResourceInfos &) = default ;
      ResourceInfos(ResourceInfos &&) = default ;
      ResourceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceInfos() = default ;
      ResourceInfos& operator=(const ResourceInfos &) = default ;
      ResourceInfos& operator=(ResourceInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PublicIps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublicIps& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
        };
        friend void from_json(const Darabonba::Json& j, PublicIps& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
        };
        PublicIps() = default ;
        PublicIps(const PublicIps &) = default ;
        PublicIps(PublicIps &&) = default ;
        PublicIps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublicIps() = default ;
        PublicIps& operator=(const PublicIps &) = default ;
        PublicIps& operator=(PublicIps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline PublicIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      protected:
        // The public IP address.
        shared_ptr<string> ip_ {};
      };

      class InternalIps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InternalIps& obj) { 
          DARABONBA_PTR_TO_JSON(Ip, ip_);
        };
        friend void from_json(const Darabonba::Json& j, InternalIps& obj) { 
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
        };
        InternalIps() = default ;
        InternalIps(const InternalIps &) = default ;
        InternalIps(InternalIps &&) = default ;
        InternalIps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InternalIps() = default ;
        InternalIps& operator=(const InternalIps &) = default ;
        InternalIps& operator=(InternalIps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ip_ == nullptr; };
        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline InternalIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      protected:
        // The internal IP address.
        shared_ptr<string> ip_ {};
      };

      class DeviceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DeviceInfos() = default ;
        DeviceInfos(const DeviceInfos &) = default ;
        DeviceInfos(DeviceInfos &&) = default ;
        DeviceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceInfos() = default ;
        DeviceInfos& operator=(const DeviceInfos &) = default ;
        DeviceInfos& operator=(DeviceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Network : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Network& obj) { 
            DARABONBA_PTR_TO_JSON(ContainerPorts, containerPorts_);
            DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
            DARABONBA_PTR_TO_JSON(HostPorts, hostPorts_);
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          };
          friend void from_json(const Darabonba::Json& j, Network& obj) { 
            DARABONBA_PTR_FROM_JSON(ContainerPorts, containerPorts_);
            DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
            DARABONBA_PTR_FROM_JSON(HostPorts, hostPorts_);
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          };
          Network() = default ;
          Network(const Network &) = default ;
          Network(Network &&) = default ;
          Network(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Network() = default ;
          Network& operator=(const Network &) = default ;
          Network& operator=(Network &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->containerPorts_ == nullptr
        && this->externalIp_ == nullptr && this->hostPorts_ == nullptr && this->protocol_ == nullptr; };
          // containerPorts Field Functions 
          bool hasContainerPorts() const { return this->containerPorts_ != nullptr;};
          void deleteContainerPorts() { this->containerPorts_ = nullptr;};
          inline string getContainerPorts() const { DARABONBA_PTR_GET_DEFAULT(containerPorts_, "") };
          inline Network& setContainerPorts(string containerPorts) { DARABONBA_PTR_SET_VALUE(containerPorts_, containerPorts) };


          // externalIp Field Functions 
          bool hasExternalIp() const { return this->externalIp_ != nullptr;};
          void deleteExternalIp() { this->externalIp_ = nullptr;};
          inline string getExternalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
          inline Network& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


          // hostPorts Field Functions 
          bool hasHostPorts() const { return this->hostPorts_ != nullptr;};
          void deleteHostPorts() { this->hostPorts_ = nullptr;};
          inline string getHostPorts() const { DARABONBA_PTR_GET_DEFAULT(hostPorts_, "") };
          inline Network& setHostPorts(string hostPorts) { DARABONBA_PTR_SET_VALUE(hostPorts_, hostPorts) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline Network& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        protected:
          // The port of the container.
          shared_ptr<string> containerPorts_ {};
          // The public IP address.
          shared_ptr<string> externalIp_ {};
          // The port range.
          shared_ptr<string> hostPorts_ {};
          // The protocol of the gateway. The value is of the enumeration type. Valid values:
          // 
          // *   TCP
          // *   UDP
          shared_ptr<string> protocol_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->network_ == nullptr && this->status_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DeviceInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline const vector<DeviceInfos::Network> & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, vector<DeviceInfos::Network>) };
        inline vector<DeviceInfos::Network> getNetwork() { DARABONBA_PTR_GET(network_, vector<DeviceInfos::Network>) };
        inline DeviceInfos& setNetwork(const vector<DeviceInfos::Network> & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
        inline DeviceInfos& setNetwork(vector<DeviceInfos::Network> && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DeviceInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The name of the device.
        shared_ptr<string> name_ {};
        // The network information.
        shared_ptr<vector<DeviceInfos::Network>> network_ {};
        // The status.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->appVersion_ == nullptr
        && this->areaCode_ == nullptr && this->areaName_ == nullptr && this->createTime_ == nullptr && this->deviceInfos_ == nullptr && this->instanceId_ == nullptr
        && this->instanceStatus_ == nullptr && this->internalIps_ == nullptr && this->publicIps_ == nullptr && this->regionCode_ == nullptr && this->regionId_ == nullptr
        && this->regionName_ == nullptr; };
      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline ResourceInfos& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // areaCode Field Functions 
      bool hasAreaCode() const { return this->areaCode_ != nullptr;};
      void deleteAreaCode() { this->areaCode_ = nullptr;};
      inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
      inline ResourceInfos& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


      // areaName Field Functions 
      bool hasAreaName() const { return this->areaName_ != nullptr;};
      void deleteAreaName() { this->areaName_ = nullptr;};
      inline string getAreaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
      inline ResourceInfos& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deviceInfos Field Functions 
      bool hasDeviceInfos() const { return this->deviceInfos_ != nullptr;};
      void deleteDeviceInfos() { this->deviceInfos_ = nullptr;};
      inline const vector<ResourceInfos::DeviceInfos> & getDeviceInfos() const { DARABONBA_PTR_GET_CONST(deviceInfos_, vector<ResourceInfos::DeviceInfos>) };
      inline vector<ResourceInfos::DeviceInfos> getDeviceInfos() { DARABONBA_PTR_GET(deviceInfos_, vector<ResourceInfos::DeviceInfos>) };
      inline ResourceInfos& setDeviceInfos(const vector<ResourceInfos::DeviceInfos> & deviceInfos) { DARABONBA_PTR_SET_VALUE(deviceInfos_, deviceInfos) };
      inline ResourceInfos& setDeviceInfos(vector<ResourceInfos::DeviceInfos> && deviceInfos) { DARABONBA_PTR_SET_RVALUE(deviceInfos_, deviceInfos) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ResourceInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline ResourceInfos& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // internalIps Field Functions 
      bool hasInternalIps() const { return this->internalIps_ != nullptr;};
      void deleteInternalIps() { this->internalIps_ = nullptr;};
      inline const vector<ResourceInfos::InternalIps> & getInternalIps() const { DARABONBA_PTR_GET_CONST(internalIps_, vector<ResourceInfos::InternalIps>) };
      inline vector<ResourceInfos::InternalIps> getInternalIps() { DARABONBA_PTR_GET(internalIps_, vector<ResourceInfos::InternalIps>) };
      inline ResourceInfos& setInternalIps(const vector<ResourceInfos::InternalIps> & internalIps) { DARABONBA_PTR_SET_VALUE(internalIps_, internalIps) };
      inline ResourceInfos& setInternalIps(vector<ResourceInfos::InternalIps> && internalIps) { DARABONBA_PTR_SET_RVALUE(internalIps_, internalIps) };


      // publicIps Field Functions 
      bool hasPublicIps() const { return this->publicIps_ != nullptr;};
      void deletePublicIps() { this->publicIps_ = nullptr;};
      inline const vector<ResourceInfos::PublicIps> & getPublicIps() const { DARABONBA_PTR_GET_CONST(publicIps_, vector<ResourceInfos::PublicIps>) };
      inline vector<ResourceInfos::PublicIps> getPublicIps() { DARABONBA_PTR_GET(publicIps_, vector<ResourceInfos::PublicIps>) };
      inline ResourceInfos& setPublicIps(const vector<ResourceInfos::PublicIps> & publicIps) { DARABONBA_PTR_SET_VALUE(publicIps_, publicIps) };
      inline ResourceInfos& setPublicIps(vector<ResourceInfos::PublicIps> && publicIps) { DARABONBA_PTR_SET_RVALUE(publicIps_, publicIps) };


      // regionCode Field Functions 
      bool hasRegionCode() const { return this->regionCode_ != nullptr;};
      void deleteRegionCode() { this->regionCode_ = nullptr;};
      inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
      inline ResourceInfos& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ResourceInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline ResourceInfos& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    protected:
      // The version of the application.
      shared_ptr<string> appVersion_ {};
      // The area code.
      shared_ptr<string> areaCode_ {};
      // The region name.
      shared_ptr<string> areaName_ {};
      // The time when the application was created.
      shared_ptr<string> createTime_ {};
      // The information about the devices.
      shared_ptr<vector<ResourceInfos::DeviceInfos>> deviceInfos_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The status of the instance.
      shared_ptr<string> instanceStatus_ {};
      // The internal IP addresses.
      shared_ptr<vector<ResourceInfos::InternalIps>> internalIps_ {};
      // The public IP addresses.
      shared_ptr<vector<ResourceInfos::PublicIps>> publicIps_ {};
      // The ID of the region.
      shared_ptr<string> regionCode_ {};
      // The ID of the ENS node.
      shared_ptr<string> regionId_ {};
      // The name of the region.
      shared_ptr<string> regionName_ {};
    };

    class ResourceDetailInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceDetailInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(ID, ID_);
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(ISP, ISP_);
        DARABONBA_PTR_TO_JSON(ImageID, imageID_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(RegionID, regionID_);
        DARABONBA_PTR_TO_JSON(Server, server_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceDetailInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(ID, ID_);
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(ISP, ISP_);
        DARABONBA_PTR_FROM_JSON(ImageID, imageID_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
        DARABONBA_PTR_FROM_JSON(Server, server_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ResourceDetailInfos() = default ;
      ResourceDetailInfos(const ResourceDetailInfos &) = default ;
      ResourceDetailInfos(ResourceDetailInfos &&) = default ;
      ResourceDetailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceDetailInfos() = default ;
      ResourceDetailInfos& operator=(const ResourceDetailInfos &) = default ;
      ResourceDetailInfos& operator=(ResourceDetailInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->ID_ == nullptr && this->IP_ == nullptr && this->ISP_ == nullptr && this->imageID_ == nullptr && this->mac_ == nullptr
        && this->regionID_ == nullptr && this->server_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline ResourceDetailInfos& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // ID Field Functions 
      bool hasID() const { return this->ID_ != nullptr;};
      void deleteID() { this->ID_ = nullptr;};
      inline string getID() const { DARABONBA_PTR_GET_DEFAULT(ID_, "") };
      inline ResourceDetailInfos& setID(string ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline ResourceDetailInfos& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // ISP Field Functions 
      bool hasISP() const { return this->ISP_ != nullptr;};
      void deleteISP() { this->ISP_ = nullptr;};
      inline string getISP() const { DARABONBA_PTR_GET_DEFAULT(ISP_, "") };
      inline ResourceDetailInfos& setISP(string ISP) { DARABONBA_PTR_SET_VALUE(ISP_, ISP) };


      // imageID Field Functions 
      bool hasImageID() const { return this->imageID_ != nullptr;};
      void deleteImageID() { this->imageID_ = nullptr;};
      inline string getImageID() const { DARABONBA_PTR_GET_DEFAULT(imageID_, "") };
      inline ResourceDetailInfos& setImageID(string imageID) { DARABONBA_PTR_SET_VALUE(imageID_, imageID) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline ResourceDetailInfos& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // regionID Field Functions 
      bool hasRegionID() const { return this->regionID_ != nullptr;};
      void deleteRegionID() { this->regionID_ = nullptr;};
      inline string getRegionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
      inline ResourceDetailInfos& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


      // server Field Functions 
      bool hasServer() const { return this->server_ != nullptr;};
      void deleteServer() { this->server_ = nullptr;};
      inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
      inline ResourceDetailInfos& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceDetailInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResourceDetailInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the device.
      shared_ptr<string> deviceName_ {};
      // The ID of the cloud device.
      shared_ptr<string> ID_ {};
      // The IP address.
      shared_ptr<string> IP_ {};
      // The Internet service provider (ISP).
      shared_ptr<string> ISP_ {};
      // The ID of the image.
      shared_ptr<string> imageID_ {};
      // The media access control (MAC) address of the device.
      shared_ptr<string> mac_ {};
      // The ID of the ENS node.
      shared_ptr<string> regionID_ {};
      // The server name of the ENS node.
      shared_ptr<string> server_ {};
      // The status of the device.
      shared_ptr<string> status_ {};
      // The type of the device.
      shared_ptr<string> type_ {};
    };

    class AppStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_PTR_TO_JSON(StatusDescrip, statusDescrip_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AppStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_PTR_FROM_JSON(StatusDescrip, statusDescrip_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AppStatus() = default ;
      AppStatus(const AppStatus &) = default ;
      AppStatus(AppStatus &&) = default ;
      AppStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppStatus() = default ;
      AppStatus& operator=(const AppStatus &) = default ;
      AppStatus& operator=(AppStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->phase_ == nullptr
        && this->statusDescrip_ == nullptr && this->updateTime_ == nullptr; };
      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline AppStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // statusDescrip Field Functions 
      bool hasStatusDescrip() const { return this->statusDescrip_ != nullptr;};
      void deleteStatusDescrip() { this->statusDescrip_ = nullptr;};
      inline string getStatusDescrip() const { DARABONBA_PTR_GET_DEFAULT(statusDescrip_, "") };
      inline AppStatus& setStatusDescrip(string statusDescrip) { DARABONBA_PTR_SET_VALUE(statusDescrip_, statusDescrip) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline AppStatus& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The status of the application. The value is of the enumeration type. Valid values:
      // 
      // Three intermediate states:
      // 
      // *   CREATING
      // *   UPDATING
      // *   DELETING
      // 
      // Four final states:
      // 
      // *   CREATE_FAILED
      // *   UPDATE_FAILED
      // *   DELETE_FAILED
      // *   RUNNING
      shared_ptr<string> phase_ {};
      // The description of the application status.
      shared_ptr<string> statusDescrip_ {};
      // The time when the status was last updated.
      shared_ptr<string> updateTime_ {};
    };

    class AppMetaData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppMetaData& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppStableVersion, appStableVersion_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, AppMetaData& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppStableVersion, appStableVersion_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      AppMetaData() = default ;
      AppMetaData(const AppMetaData &) = default ;
      AppMetaData(AppMetaData &&) = default ;
      AppMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppMetaData() = default ;
      AppMetaData& operator=(const AppMetaData &) = default ;
      AppMetaData& operator=(AppMetaData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appStableVersion_ == nullptr && this->appType_ == nullptr && this->clusterName_ == nullptr && this->createTime_ == nullptr
        && this->description_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppMetaData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline AppMetaData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appStableVersion Field Functions 
      bool hasAppStableVersion() const { return this->appStableVersion_ != nullptr;};
      void deleteAppStableVersion() { this->appStableVersion_ = nullptr;};
      inline string getAppStableVersion() const { DARABONBA_PTR_GET_DEFAULT(appStableVersion_, "") };
      inline AppMetaData& setAppStableVersion(string appStableVersion) { DARABONBA_PTR_SET_VALUE(appStableVersion_, appStableVersion) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline AppMetaData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline AppMetaData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AppMetaData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AppMetaData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The stable version number of the application.
      shared_ptr<string> appStableVersion_ {};
      // The type of the application. The value is of the enumeration type. Valid values:
      // 
      // *   Common
      // *   Scheduler
      shared_ptr<string> appType_ {};
      // The name of the application cluster.
      shared_ptr<string> clusterName_ {};
      // The time when the application was created.
      shared_ptr<string> createTime_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->appMetaData_ == nullptr
        && this->appStatus_ == nullptr && this->requestId_ == nullptr && this->resourceDetailInfos_ == nullptr && this->resourceInfos_ == nullptr; };
    // appMetaData Field Functions 
    bool hasAppMetaData() const { return this->appMetaData_ != nullptr;};
    void deleteAppMetaData() { this->appMetaData_ = nullptr;};
    inline const DescribeDeviceServiceResponseBody::AppMetaData & getAppMetaData() const { DARABONBA_PTR_GET_CONST(appMetaData_, DescribeDeviceServiceResponseBody::AppMetaData) };
    inline DescribeDeviceServiceResponseBody::AppMetaData getAppMetaData() { DARABONBA_PTR_GET(appMetaData_, DescribeDeviceServiceResponseBody::AppMetaData) };
    inline DescribeDeviceServiceResponseBody& setAppMetaData(const DescribeDeviceServiceResponseBody::AppMetaData & appMetaData) { DARABONBA_PTR_SET_VALUE(appMetaData_, appMetaData) };
    inline DescribeDeviceServiceResponseBody& setAppMetaData(DescribeDeviceServiceResponseBody::AppMetaData && appMetaData) { DARABONBA_PTR_SET_RVALUE(appMetaData_, appMetaData) };


    // appStatus Field Functions 
    bool hasAppStatus() const { return this->appStatus_ != nullptr;};
    void deleteAppStatus() { this->appStatus_ = nullptr;};
    inline const DescribeDeviceServiceResponseBody::AppStatus & getAppStatus() const { DARABONBA_PTR_GET_CONST(appStatus_, DescribeDeviceServiceResponseBody::AppStatus) };
    inline DescribeDeviceServiceResponseBody::AppStatus getAppStatus() { DARABONBA_PTR_GET(appStatus_, DescribeDeviceServiceResponseBody::AppStatus) };
    inline DescribeDeviceServiceResponseBody& setAppStatus(const DescribeDeviceServiceResponseBody::AppStatus & appStatus) { DARABONBA_PTR_SET_VALUE(appStatus_, appStatus) };
    inline DescribeDeviceServiceResponseBody& setAppStatus(DescribeDeviceServiceResponseBody::AppStatus && appStatus) { DARABONBA_PTR_SET_RVALUE(appStatus_, appStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeviceServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDetailInfos Field Functions 
    bool hasResourceDetailInfos() const { return this->resourceDetailInfos_ != nullptr;};
    void deleteResourceDetailInfos() { this->resourceDetailInfos_ = nullptr;};
    inline const vector<DescribeDeviceServiceResponseBody::ResourceDetailInfos> & getResourceDetailInfos() const { DARABONBA_PTR_GET_CONST(resourceDetailInfos_, vector<DescribeDeviceServiceResponseBody::ResourceDetailInfos>) };
    inline vector<DescribeDeviceServiceResponseBody::ResourceDetailInfos> getResourceDetailInfos() { DARABONBA_PTR_GET(resourceDetailInfos_, vector<DescribeDeviceServiceResponseBody::ResourceDetailInfos>) };
    inline DescribeDeviceServiceResponseBody& setResourceDetailInfos(const vector<DescribeDeviceServiceResponseBody::ResourceDetailInfos> & resourceDetailInfos) { DARABONBA_PTR_SET_VALUE(resourceDetailInfos_, resourceDetailInfos) };
    inline DescribeDeviceServiceResponseBody& setResourceDetailInfos(vector<DescribeDeviceServiceResponseBody::ResourceDetailInfos> && resourceDetailInfos) { DARABONBA_PTR_SET_RVALUE(resourceDetailInfos_, resourceDetailInfos) };


    // resourceInfos Field Functions 
    bool hasResourceInfos() const { return this->resourceInfos_ != nullptr;};
    void deleteResourceInfos() { this->resourceInfos_ = nullptr;};
    inline const vector<DescribeDeviceServiceResponseBody::ResourceInfos> & getResourceInfos() const { DARABONBA_PTR_GET_CONST(resourceInfos_, vector<DescribeDeviceServiceResponseBody::ResourceInfos>) };
    inline vector<DescribeDeviceServiceResponseBody::ResourceInfos> getResourceInfos() { DARABONBA_PTR_GET(resourceInfos_, vector<DescribeDeviceServiceResponseBody::ResourceInfos>) };
    inline DescribeDeviceServiceResponseBody& setResourceInfos(const vector<DescribeDeviceServiceResponseBody::ResourceInfos> & resourceInfos) { DARABONBA_PTR_SET_VALUE(resourceInfos_, resourceInfos) };
    inline DescribeDeviceServiceResponseBody& setResourceInfos(vector<DescribeDeviceServiceResponseBody::ResourceInfos> && resourceInfos) { DARABONBA_PTR_SET_RVALUE(resourceInfos_, resourceInfos) };


  protected:
    // The basic properties of the application.
    shared_ptr<DescribeDeviceServiceResponseBody::AppMetaData> appMetaData_ {};
    // The status information of the application.
    shared_ptr<DescribeDeviceServiceResponseBody::AppStatus> appStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the devices.
    shared_ptr<vector<DescribeDeviceServiceResponseBody::ResourceDetailInfos>> resourceDetailInfos_ {};
    // The information about the instances.
    shared_ptr<vector<DescribeDeviceServiceResponseBody::ResourceInfos>> resourceInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
