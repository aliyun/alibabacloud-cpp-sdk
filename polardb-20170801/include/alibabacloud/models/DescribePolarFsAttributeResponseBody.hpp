// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateType, accelerateType_);
      DARABONBA_PTR_TO_JSON(AcceleratedStorageSpace, acceleratedStorageSpace_);
      DARABONBA_PTR_TO_JSON(AcceleratingEnable, acceleratingEnable_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthBaseLine, bandwidthBaseLine_);
      DARABONBA_PTR_TO_JSON(BucketId, bucketId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientDownloadPath, clientDownloadPath_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomBucketPath, customBucketPath_);
      DARABONBA_PTR_TO_JSON(CustomBucketPathList, customBucketPathList_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(EndpointItems, endpointItems_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MaxscaleEndpointId, maxscaleEndpointId_);
      DARABONBA_PTR_TO_JSON(MetaConnString, metaConnString_);
      DARABONBA_PTR_TO_JSON(MetaInstanceName, metaInstanceName_);
      DARABONBA_PTR_TO_JSON(MetaMxsConnString, metaMxsConnString_);
      DARABONBA_PTR_TO_JSON(MetaUrl, metaUrl_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(MountInfo, mountInfo_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(PolarFsStatus, polarFsStatus_);
      DARABONBA_PTR_TO_JSON(PolarFsType, polarFsType_);
      DARABONBA_PTR_TO_JSON(PolarFsVersion, polarFsVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelativeDbClusterId, relativeDbClusterId_);
      DARABONBA_PTR_TO_JSON(RelativePfsClusterId, relativePfsClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_TO_JSON(UserDefaultAccName, userDefaultAccName_);
      DARABONBA_PTR_TO_JSON(UserDefaultAccSk, userDefaultAccSk_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateType, accelerateType_);
      DARABONBA_PTR_FROM_JSON(AcceleratedStorageSpace, acceleratedStorageSpace_);
      DARABONBA_PTR_FROM_JSON(AcceleratingEnable, acceleratingEnable_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthBaseLine, bandwidthBaseLine_);
      DARABONBA_PTR_FROM_JSON(BucketId, bucketId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientDownloadPath, clientDownloadPath_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomBucketPath, customBucketPath_);
      DARABONBA_PTR_FROM_JSON(CustomBucketPathList, customBucketPathList_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(EndpointItems, endpointItems_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MaxscaleEndpointId, maxscaleEndpointId_);
      DARABONBA_PTR_FROM_JSON(MetaConnString, metaConnString_);
      DARABONBA_PTR_FROM_JSON(MetaInstanceName, metaInstanceName_);
      DARABONBA_PTR_FROM_JSON(MetaMxsConnString, metaMxsConnString_);
      DARABONBA_PTR_FROM_JSON(MetaUrl, metaUrl_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(MountInfo, mountInfo_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PolarFsStatus, polarFsStatus_);
      DARABONBA_PTR_FROM_JSON(PolarFsType, polarFsType_);
      DARABONBA_PTR_FROM_JSON(PolarFsVersion, polarFsVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelativeDbClusterId, relativeDbClusterId_);
      DARABONBA_PTR_FROM_JSON(RelativePfsClusterId, relativePfsClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(StorageUsed, storageUsed_);
      DARABONBA_PTR_FROM_JSON(UserDefaultAccName, userDefaultAccName_);
      DARABONBA_PTR_FROM_JSON(UserDefaultAccSk, userDefaultAccSk_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribePolarFsAttributeResponseBody() = default ;
    DescribePolarFsAttributeResponseBody(const DescribePolarFsAttributeResponseBody &) = default ;
    DescribePolarFsAttributeResponseBody(DescribePolarFsAttributeResponseBody &&) = default ;
    DescribePolarFsAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsAttributeResponseBody() = default ;
    DescribePolarFsAttributeResponseBody& operator=(const DescribePolarFsAttributeResponseBody &) = default ;
    DescribePolarFsAttributeResponseBody& operator=(DescribePolarFsAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MountInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PolarDbProxy, polarDbProxy_);
        DARABONBA_PTR_TO_JSON(PolarFsCluster, polarFsCluster_);
        DARABONBA_PTR_TO_JSON(Token, token_);
      };
      friend void from_json(const Darabonba::Json& j, MountInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PolarDbProxy, polarDbProxy_);
        DARABONBA_PTR_FROM_JSON(PolarFsCluster, polarFsCluster_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
      };
      MountInfo() = default ;
      MountInfo(const MountInfo &) = default ;
      MountInfo(MountInfo &&) = default ;
      MountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountInfo() = default ;
      MountInfo& operator=(const MountInfo &) = default ;
      MountInfo& operator=(MountInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->polarDbProxy_ == nullptr
        && this->polarFsCluster_ == nullptr && this->token_ == nullptr; };
      // polarDbProxy Field Functions 
      bool hasPolarDbProxy() const { return this->polarDbProxy_ != nullptr;};
      void deletePolarDbProxy() { this->polarDbProxy_ = nullptr;};
      inline string getPolarDbProxy() const { DARABONBA_PTR_GET_DEFAULT(polarDbProxy_, "") };
      inline MountInfo& setPolarDbProxy(string polarDbProxy) { DARABONBA_PTR_SET_VALUE(polarDbProxy_, polarDbProxy) };


      // polarFsCluster Field Functions 
      bool hasPolarFsCluster() const { return this->polarFsCluster_ != nullptr;};
      void deletePolarFsCluster() { this->polarFsCluster_ = nullptr;};
      inline string getPolarFsCluster() const { DARABONBA_PTR_GET_DEFAULT(polarFsCluster_, "") };
      inline MountInfo& setPolarFsCluster(string polarFsCluster) { DARABONBA_PTR_SET_VALUE(polarFsCluster_, polarFsCluster) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline MountInfo& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      // The cluster management endpoint.
      shared_ptr<string> polarDbProxy_ {};
      // The file system name.
      shared_ptr<string> polarFsCluster_ {};
      // The token value.
      shared_ptr<string> token_ {};
    };

    class EndpointItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointItems& obj) { 
        DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      };
      EndpointItems() = default ;
      EndpointItems(const EndpointItems &) = default ;
      EndpointItems(EndpointItems &&) = default ;
      EndpointItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointItems() = default ;
      EndpointItems& operator=(const EndpointItems &) = default ;
      EndpointItems& operator=(EndpointItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AddressItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressItems& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, AddressItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        AddressItems() = default ;
        AddressItems(const AddressItems &) = default ;
        AddressItems(AddressItems &&) = default ;
        AddressItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AddressItems() = default ;
        AddressItems& operator=(const AddressItems &) = default ;
        AddressItems& operator=(AddressItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->IPAddress_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline AddressItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline AddressItems& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline AddressItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline AddressItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline AddressItems& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline AddressItems& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        shared_ptr<string> connectionString_ {};
        shared_ptr<string> IPAddress_ {};
        shared_ptr<string> netType_ {};
        shared_ptr<string> port_ {};
        shared_ptr<string> VPCId_ {};
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->addressItems_ == nullptr
        && this->DBEndpointId_ == nullptr && this->endpointType_ == nullptr; };
      // addressItems Field Functions 
      bool hasAddressItems() const { return this->addressItems_ != nullptr;};
      void deleteAddressItems() { this->addressItems_ = nullptr;};
      inline const vector<EndpointItems::AddressItems> & getAddressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, vector<EndpointItems::AddressItems>) };
      inline vector<EndpointItems::AddressItems> getAddressItems() { DARABONBA_PTR_GET(addressItems_, vector<EndpointItems::AddressItems>) };
      inline EndpointItems& setAddressItems(const vector<EndpointItems::AddressItems> & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
      inline EndpointItems& setAddressItems(vector<EndpointItems::AddressItems> && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


      // DBEndpointId Field Functions 
      bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
      void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
      inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
      inline EndpointItems& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline EndpointItems& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    protected:
      shared_ptr<vector<EndpointItems::AddressItems>> addressItems_ {};
      shared_ptr<string> DBEndpointId_ {};
      shared_ptr<string> endpointType_ {};
    };

    class CustomBucketPathList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomBucketPathList& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, CustomBucketPathList& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      CustomBucketPathList() = default ;
      CustomBucketPathList(const CustomBucketPathList &) = default ;
      CustomBucketPathList(CustomBucketPathList &&) = default ;
      CustomBucketPathList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomBucketPathList() = default ;
      CustomBucketPathList& operator=(const CustomBucketPathList &) = default ;
      CustomBucketPathList& operator=(CustomBucketPathList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->path_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline CustomBucketPathList& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline CustomBucketPathList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The custom storage bucket.
      shared_ptr<string> bucket_ {};
      // The custom storage path.
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->accelerateType_ == nullptr
        && this->acceleratedStorageSpace_ == nullptr && this->acceleratingEnable_ == nullptr && this->bandwidth_ == nullptr && this->bandwidthBaseLine_ == nullptr && this->bucketId_ == nullptr
        && this->category_ == nullptr && this->clientDownloadPath_ == nullptr && this->createTime_ == nullptr && this->customBucketPath_ == nullptr && this->customBucketPathList_ == nullptr
        && this->DBEndpointId_ == nullptr && this->DBType_ == nullptr && this->endpointItems_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr
        && this->fileSystemId_ == nullptr && this->lockMode_ == nullptr && this->maxscaleEndpointId_ == nullptr && this->metaConnString_ == nullptr && this->metaInstanceName_ == nullptr
        && this->metaMxsConnString_ == nullptr && this->metaUrl_ == nullptr && this->minorVersion_ == nullptr && this->mountInfo_ == nullptr && this->payType_ == nullptr
        && this->polarFsInstanceDescription_ == nullptr && this->polarFsInstanceId_ == nullptr && this->polarFsStatus_ == nullptr && this->polarFsType_ == nullptr && this->polarFsVersion_ == nullptr
        && this->regionId_ == nullptr && this->relativeDbClusterId_ == nullptr && this->relativePfsClusterId_ == nullptr && this->requestId_ == nullptr && this->securityGroupId_ == nullptr
        && this->storageSpace_ == nullptr && this->storageType_ == nullptr && this->storageUsed_ == nullptr && this->userDefaultAccName_ == nullptr && this->userDefaultAccSk_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // accelerateType Field Functions 
    bool hasAccelerateType() const { return this->accelerateType_ != nullptr;};
    void deleteAccelerateType() { this->accelerateType_ = nullptr;};
    inline string getAccelerateType() const { DARABONBA_PTR_GET_DEFAULT(accelerateType_, "") };
    inline DescribePolarFsAttributeResponseBody& setAccelerateType(string accelerateType) { DARABONBA_PTR_SET_VALUE(accelerateType_, accelerateType) };


    // acceleratedStorageSpace Field Functions 
    bool hasAcceleratedStorageSpace() const { return this->acceleratedStorageSpace_ != nullptr;};
    void deleteAcceleratedStorageSpace() { this->acceleratedStorageSpace_ = nullptr;};
    inline double getAcceleratedStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(acceleratedStorageSpace_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setAcceleratedStorageSpace(double acceleratedStorageSpace) { DARABONBA_PTR_SET_VALUE(acceleratedStorageSpace_, acceleratedStorageSpace) };


    // acceleratingEnable Field Functions 
    bool hasAcceleratingEnable() const { return this->acceleratingEnable_ != nullptr;};
    void deleteAcceleratingEnable() { this->acceleratingEnable_ = nullptr;};
    inline string getAcceleratingEnable() const { DARABONBA_PTR_GET_DEFAULT(acceleratingEnable_, "") };
    inline DescribePolarFsAttributeResponseBody& setAcceleratingEnable(string acceleratingEnable) { DARABONBA_PTR_SET_VALUE(acceleratingEnable_, acceleratingEnable) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline double getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setBandwidth(double bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthBaseLine Field Functions 
    bool hasBandwidthBaseLine() const { return this->bandwidthBaseLine_ != nullptr;};
    void deleteBandwidthBaseLine() { this->bandwidthBaseLine_ = nullptr;};
    inline double getBandwidthBaseLine() const { DARABONBA_PTR_GET_DEFAULT(bandwidthBaseLine_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setBandwidthBaseLine(double bandwidthBaseLine) { DARABONBA_PTR_SET_VALUE(bandwidthBaseLine_, bandwidthBaseLine) };


    // bucketId Field Functions 
    bool hasBucketId() const { return this->bucketId_ != nullptr;};
    void deleteBucketId() { this->bucketId_ = nullptr;};
    inline string getBucketId() const { DARABONBA_PTR_GET_DEFAULT(bucketId_, "") };
    inline DescribePolarFsAttributeResponseBody& setBucketId(string bucketId) { DARABONBA_PTR_SET_VALUE(bucketId_, bucketId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribePolarFsAttributeResponseBody& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientDownloadPath Field Functions 
    bool hasClientDownloadPath() const { return this->clientDownloadPath_ != nullptr;};
    void deleteClientDownloadPath() { this->clientDownloadPath_ = nullptr;};
    inline string getClientDownloadPath() const { DARABONBA_PTR_GET_DEFAULT(clientDownloadPath_, "") };
    inline DescribePolarFsAttributeResponseBody& setClientDownloadPath(string clientDownloadPath) { DARABONBA_PTR_SET_VALUE(clientDownloadPath_, clientDownloadPath) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribePolarFsAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customBucketPath Field Functions 
    bool hasCustomBucketPath() const { return this->customBucketPath_ != nullptr;};
    void deleteCustomBucketPath() { this->customBucketPath_ = nullptr;};
    inline string getCustomBucketPath() const { DARABONBA_PTR_GET_DEFAULT(customBucketPath_, "") };
    inline DescribePolarFsAttributeResponseBody& setCustomBucketPath(string customBucketPath) { DARABONBA_PTR_SET_VALUE(customBucketPath_, customBucketPath) };


    // customBucketPathList Field Functions 
    bool hasCustomBucketPathList() const { return this->customBucketPathList_ != nullptr;};
    void deleteCustomBucketPathList() { this->customBucketPathList_ = nullptr;};
    inline const vector<DescribePolarFsAttributeResponseBody::CustomBucketPathList> & getCustomBucketPathList() const { DARABONBA_PTR_GET_CONST(customBucketPathList_, vector<DescribePolarFsAttributeResponseBody::CustomBucketPathList>) };
    inline vector<DescribePolarFsAttributeResponseBody::CustomBucketPathList> getCustomBucketPathList() { DARABONBA_PTR_GET(customBucketPathList_, vector<DescribePolarFsAttributeResponseBody::CustomBucketPathList>) };
    inline DescribePolarFsAttributeResponseBody& setCustomBucketPathList(const vector<DescribePolarFsAttributeResponseBody::CustomBucketPathList> & customBucketPathList) { DARABONBA_PTR_SET_VALUE(customBucketPathList_, customBucketPathList) };
    inline DescribePolarFsAttributeResponseBody& setCustomBucketPathList(vector<DescribePolarFsAttributeResponseBody::CustomBucketPathList> && customBucketPathList) { DARABONBA_PTR_SET_RVALUE(customBucketPathList_, customBucketPathList) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline DescribePolarFsAttributeResponseBody& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribePolarFsAttributeResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // endpointItems Field Functions 
    bool hasEndpointItems() const { return this->endpointItems_ != nullptr;};
    void deleteEndpointItems() { this->endpointItems_ = nullptr;};
    inline const vector<DescribePolarFsAttributeResponseBody::EndpointItems> & getEndpointItems() const { DARABONBA_PTR_GET_CONST(endpointItems_, vector<DescribePolarFsAttributeResponseBody::EndpointItems>) };
    inline vector<DescribePolarFsAttributeResponseBody::EndpointItems> getEndpointItems() { DARABONBA_PTR_GET(endpointItems_, vector<DescribePolarFsAttributeResponseBody::EndpointItems>) };
    inline DescribePolarFsAttributeResponseBody& setEndpointItems(const vector<DescribePolarFsAttributeResponseBody::EndpointItems> & endpointItems) { DARABONBA_PTR_SET_VALUE(endpointItems_, endpointItems) };
    inline DescribePolarFsAttributeResponseBody& setEndpointItems(vector<DescribePolarFsAttributeResponseBody::EndpointItems> && endpointItems) { DARABONBA_PTR_SET_RVALUE(endpointItems_, endpointItems) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribePolarFsAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribePolarFsAttributeResponseBody& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribePolarFsAttributeResponseBody& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribePolarFsAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maxscaleEndpointId Field Functions 
    bool hasMaxscaleEndpointId() const { return this->maxscaleEndpointId_ != nullptr;};
    void deleteMaxscaleEndpointId() { this->maxscaleEndpointId_ = nullptr;};
    inline string getMaxscaleEndpointId() const { DARABONBA_PTR_GET_DEFAULT(maxscaleEndpointId_, "") };
    inline DescribePolarFsAttributeResponseBody& setMaxscaleEndpointId(string maxscaleEndpointId) { DARABONBA_PTR_SET_VALUE(maxscaleEndpointId_, maxscaleEndpointId) };


    // metaConnString Field Functions 
    bool hasMetaConnString() const { return this->metaConnString_ != nullptr;};
    void deleteMetaConnString() { this->metaConnString_ = nullptr;};
    inline string getMetaConnString() const { DARABONBA_PTR_GET_DEFAULT(metaConnString_, "") };
    inline DescribePolarFsAttributeResponseBody& setMetaConnString(string metaConnString) { DARABONBA_PTR_SET_VALUE(metaConnString_, metaConnString) };


    // metaInstanceName Field Functions 
    bool hasMetaInstanceName() const { return this->metaInstanceName_ != nullptr;};
    void deleteMetaInstanceName() { this->metaInstanceName_ = nullptr;};
    inline string getMetaInstanceName() const { DARABONBA_PTR_GET_DEFAULT(metaInstanceName_, "") };
    inline DescribePolarFsAttributeResponseBody& setMetaInstanceName(string metaInstanceName) { DARABONBA_PTR_SET_VALUE(metaInstanceName_, metaInstanceName) };


    // metaMxsConnString Field Functions 
    bool hasMetaMxsConnString() const { return this->metaMxsConnString_ != nullptr;};
    void deleteMetaMxsConnString() { this->metaMxsConnString_ = nullptr;};
    inline string getMetaMxsConnString() const { DARABONBA_PTR_GET_DEFAULT(metaMxsConnString_, "") };
    inline DescribePolarFsAttributeResponseBody& setMetaMxsConnString(string metaMxsConnString) { DARABONBA_PTR_SET_VALUE(metaMxsConnString_, metaMxsConnString) };


    // metaUrl Field Functions 
    bool hasMetaUrl() const { return this->metaUrl_ != nullptr;};
    void deleteMetaUrl() { this->metaUrl_ = nullptr;};
    inline string getMetaUrl() const { DARABONBA_PTR_GET_DEFAULT(metaUrl_, "") };
    inline DescribePolarFsAttributeResponseBody& setMetaUrl(string metaUrl) { DARABONBA_PTR_SET_VALUE(metaUrl_, metaUrl) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribePolarFsAttributeResponseBody& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // mountInfo Field Functions 
    bool hasMountInfo() const { return this->mountInfo_ != nullptr;};
    void deleteMountInfo() { this->mountInfo_ = nullptr;};
    inline const DescribePolarFsAttributeResponseBody::MountInfo & getMountInfo() const { DARABONBA_PTR_GET_CONST(mountInfo_, DescribePolarFsAttributeResponseBody::MountInfo) };
    inline DescribePolarFsAttributeResponseBody::MountInfo getMountInfo() { DARABONBA_PTR_GET(mountInfo_, DescribePolarFsAttributeResponseBody::MountInfo) };
    inline DescribePolarFsAttributeResponseBody& setMountInfo(const DescribePolarFsAttributeResponseBody::MountInfo & mountInfo) { DARABONBA_PTR_SET_VALUE(mountInfo_, mountInfo) };
    inline DescribePolarFsAttributeResponseBody& setMountInfo(DescribePolarFsAttributeResponseBody::MountInfo && mountInfo) { DARABONBA_PTR_SET_RVALUE(mountInfo_, mountInfo) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribePolarFsAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // polarFsInstanceDescription Field Functions 
    bool hasPolarFsInstanceDescription() const { return this->polarFsInstanceDescription_ != nullptr;};
    void deletePolarFsInstanceDescription() { this->polarFsInstanceDescription_ = nullptr;};
    inline string getPolarFsInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceDescription_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsInstanceDescription(string polarFsInstanceDescription) { DARABONBA_PTR_SET_VALUE(polarFsInstanceDescription_, polarFsInstanceDescription) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // polarFsStatus Field Functions 
    bool hasPolarFsStatus() const { return this->polarFsStatus_ != nullptr;};
    void deletePolarFsStatus() { this->polarFsStatus_ = nullptr;};
    inline string getPolarFsStatus() const { DARABONBA_PTR_GET_DEFAULT(polarFsStatus_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsStatus(string polarFsStatus) { DARABONBA_PTR_SET_VALUE(polarFsStatus_, polarFsStatus) };


    // polarFsType Field Functions 
    bool hasPolarFsType() const { return this->polarFsType_ != nullptr;};
    void deletePolarFsType() { this->polarFsType_ = nullptr;};
    inline string getPolarFsType() const { DARABONBA_PTR_GET_DEFAULT(polarFsType_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsType(string polarFsType) { DARABONBA_PTR_SET_VALUE(polarFsType_, polarFsType) };


    // polarFsVersion Field Functions 
    bool hasPolarFsVersion() const { return this->polarFsVersion_ != nullptr;};
    void deletePolarFsVersion() { this->polarFsVersion_ = nullptr;};
    inline string getPolarFsVersion() const { DARABONBA_PTR_GET_DEFAULT(polarFsVersion_, "") };
    inline DescribePolarFsAttributeResponseBody& setPolarFsVersion(string polarFsVersion) { DARABONBA_PTR_SET_VALUE(polarFsVersion_, polarFsVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relativeDbClusterId Field Functions 
    bool hasRelativeDbClusterId() const { return this->relativeDbClusterId_ != nullptr;};
    void deleteRelativeDbClusterId() { this->relativeDbClusterId_ = nullptr;};
    inline string getRelativeDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDbClusterId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRelativeDbClusterId(string relativeDbClusterId) { DARABONBA_PTR_SET_VALUE(relativeDbClusterId_, relativeDbClusterId) };


    // relativePfsClusterId Field Functions 
    bool hasRelativePfsClusterId() const { return this->relativePfsClusterId_ != nullptr;};
    void deleteRelativePfsClusterId() { this->relativePfsClusterId_ = nullptr;};
    inline string getRelativePfsClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativePfsClusterId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRelativePfsClusterId(string relativePfsClusterId) { DARABONBA_PTR_SET_VALUE(relativePfsClusterId_, relativePfsClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarFsAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribePolarFsAttributeResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline double getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setStorageSpace(double storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribePolarFsAttributeResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // storageUsed Field Functions 
    bool hasStorageUsed() const { return this->storageUsed_ != nullptr;};
    void deleteStorageUsed() { this->storageUsed_ = nullptr;};
    inline double getStorageUsed() const { DARABONBA_PTR_GET_DEFAULT(storageUsed_, 0.0) };
    inline DescribePolarFsAttributeResponseBody& setStorageUsed(double storageUsed) { DARABONBA_PTR_SET_VALUE(storageUsed_, storageUsed) };


    // userDefaultAccName Field Functions 
    bool hasUserDefaultAccName() const { return this->userDefaultAccName_ != nullptr;};
    void deleteUserDefaultAccName() { this->userDefaultAccName_ = nullptr;};
    inline string getUserDefaultAccName() const { DARABONBA_PTR_GET_DEFAULT(userDefaultAccName_, "") };
    inline DescribePolarFsAttributeResponseBody& setUserDefaultAccName(string userDefaultAccName) { DARABONBA_PTR_SET_VALUE(userDefaultAccName_, userDefaultAccName) };


    // userDefaultAccSk Field Functions 
    bool hasUserDefaultAccSk() const { return this->userDefaultAccSk_ != nullptr;};
    void deleteUserDefaultAccSk() { this->userDefaultAccSk_ = nullptr;};
    inline string getUserDefaultAccSk() const { DARABONBA_PTR_GET_DEFAULT(userDefaultAccSk_, "") };
    inline DescribePolarFsAttributeResponseBody& setUserDefaultAccSk(string userDefaultAccSk) { DARABONBA_PTR_SET_VALUE(userDefaultAccSk_, userDefaultAccSk) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribePolarFsAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribePolarFsAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribePolarFsAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The acceleration type.
    shared_ptr<string> accelerateType_ {};
    // The acceleration storage space. Unit: GB.
    shared_ptr<double> acceleratedStorageSpace_ {};
    // Specifies whether the acceleration cache is enabled. Valid values:
    // - **ON**: Enabled.
    // - **OFF**: Disabled.
    shared_ptr<string> acceleratingEnable_ {};
    // The bandwidth. Unit: MB/s.
    shared_ptr<double> bandwidth_ {};
    // The bandwidth baseline. Unit: MB/s/TiB.
    shared_ptr<double> bandwidthBaseLine_ {};
    // The bucket ID.
    shared_ptr<string> bucketId_ {};
    // The PolarLakebase edition. Valid values:
    // 
    // - **high_performance**: High-performance Edition.
    // 
    // - **basic**: Basic Edition.
    // 
    // - **cold**: Cold Storage Edition.
    shared_ptr<string> category_ {};
    // The client download URL.
    shared_ptr<string> clientDownloadPath_ {};
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The custom bucket path.
    shared_ptr<string> customBucketPath_ {};
    // The list of custom storage paths.
    shared_ptr<vector<DescribePolarFsAttributeResponseBody::CustomBucketPathList>> customBucketPathList_ {};
    shared_ptr<string> DBEndpointId_ {};
    // The database ecosystem type. Valid values: 
    // * **MySQL**
    // * **PostgreSQL**
    shared_ptr<string> DBType_ {};
    shared_ptr<vector<DescribePolarFsAttributeResponseBody::EndpointItems>> endpointItems_ {};
    // The expiration time of the cluster.
    // 
    // > This parameter is returned only for clusters that use the **Prepaid** (subscription) billing method. An empty value is returned for **Postpaid** (pay-as-you-go) clusters.
    shared_ptr<string> expireTime_ {};
    // Indicates whether the cluster has expired.
    // > This parameter is returned only for clusters that use the **Prepaid** (subscription) billing method.
    shared_ptr<string> expired_ {};
    // The file system ID.
    shared_ptr<string> fileSystemId_ {};
    // The lock mode. Valid values: 
    // 
    // - **Unlock**: Not locked.
    // - **ManualLock**: Manually locked. 
    // - **LockByExpiration**: Automatically locked due to cluster expiration.
    shared_ptr<string> lockMode_ {};
    shared_ptr<string> maxscaleEndpointId_ {};
    shared_ptr<string> metaConnString_ {};
    shared_ptr<string> metaInstanceName_ {};
    shared_ptr<string> metaMxsConnString_ {};
    // The encrypted metadata URL for Fuse mounting.
    shared_ptr<string> metaUrl_ {};
    // The minor version of the instance.
    shared_ptr<string> minorVersion_ {};
    // The mount configuration.
    shared_ptr<DescribePolarFsAttributeResponseBody::MountInfo> mountInfo_ {};
    // The billing method. Valid values:
    // 
    // - **Postpaid**: pay-as-you-go.
    // - **Prepaid**: subscription.
    shared_ptr<string> payType_ {};
    // The description of the PolarLakebase instance.
    shared_ptr<string> polarFsInstanceDescription_ {};
    // The PolarLakebase instance ID.
    shared_ptr<string> polarFsInstanceId_ {};
    // The PolarLakebase instance status.
    shared_ptr<string> polarFsStatus_ {};
    // The instance version. Valid values:
    // - **PolarFS 2.0**: 2.0.
    // - **PolarFS 1.0**: 1.0.
    shared_ptr<string> polarFsType_ {};
    // The version.
    shared_ptr<string> polarFsVersion_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the associated PolarDB cluster.
    shared_ptr<string> relativeDbClusterId_ {};
    // The instance ID of the associated PolarLakebase instance.
    shared_ptr<string> relativePfsClusterId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The managed security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The storage space. Unit: GB.
    shared_ptr<double> storageSpace_ {};
    // The storage type for the High-performance Edition. Valid values:
    // * **ESSDPL1**
    // * **ESSDPL0**
    // 
    // The storage type for the Basic Edition. Valid values:
    // * **city_redundancy**: zone-redundant storage.
    shared_ptr<string> storageType_ {};
    // The used storage space. Unit: bytes.
    shared_ptr<double> storageUsed_ {};
    shared_ptr<string> userDefaultAccName_ {};
    shared_ptr<string> userDefaultAccSk_ {};
    // The VPC ID.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID of the vSwitch.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
