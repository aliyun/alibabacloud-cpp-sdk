// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSRESPONSEBODY_HPP_
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
  class DescribePolarFsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribePolarFsResponseBody() = default ;
    DescribePolarFsResponseBody(const DescribePolarFsResponseBody &) = default ;
    DescribePolarFsResponseBody(DescribePolarFsResponseBody &&) = default ;
    DescribePolarFsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsResponseBody() = default ;
    DescribePolarFsResponseBody& operator=(const DescribePolarFsResponseBody &) = default ;
    DescribePolarFsResponseBody& operator=(DescribePolarFsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(PolarFsPaths, polarFsPaths_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(PolarFsPaths, polarFsPaths_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PolarFsPaths : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PolarFsPaths& obj) { 
          DARABONBA_PTR_TO_JSON(AccelerateType, accelerateType_);
          DARABONBA_PTR_TO_JSON(AcceleratedStorageSpace, acceleratedStorageSpace_);
          DARABONBA_PTR_TO_JSON(AcceleratingEnable, acceleratingEnable_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(MountInfo, mountInfo_);
          DARABONBA_PTR_TO_JSON(MountedAIDBClusters, mountedAIDBClusters_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
          DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
          DARABONBA_PTR_TO_JSON(PolarFsPath, polarFsPath_);
          DARABONBA_PTR_TO_JSON(PolarFsStatus, polarFsStatus_);
          DARABONBA_PTR_TO_JSON(PolarFsType, polarFsType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RelativeDbClusterId, relativeDbClusterId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, PolarFsPaths& obj) { 
          DARABONBA_PTR_FROM_JSON(AccelerateType, accelerateType_);
          DARABONBA_PTR_FROM_JSON(AcceleratedStorageSpace, acceleratedStorageSpace_);
          DARABONBA_PTR_FROM_JSON(AcceleratingEnable, acceleratingEnable_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(MountInfo, mountInfo_);
          DARABONBA_PTR_FROM_JSON(MountedAIDBClusters, mountedAIDBClusters_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(PolarFsInstanceDescription, polarFsInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
          DARABONBA_PTR_FROM_JSON(PolarFsPath, polarFsPath_);
          DARABONBA_PTR_FROM_JSON(PolarFsStatus, polarFsStatus_);
          DARABONBA_PTR_FROM_JSON(PolarFsType, polarFsType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RelativeDbClusterId, relativeDbClusterId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        PolarFsPaths() = default ;
        PolarFsPaths(const PolarFsPaths &) = default ;
        PolarFsPaths(PolarFsPaths &&) = default ;
        PolarFsPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PolarFsPaths() = default ;
        PolarFsPaths& operator=(const PolarFsPaths &) = default ;
        PolarFsPaths& operator=(PolarFsPaths &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class MountedAIDBClusters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MountedAIDBClusters& obj) { 
            DARABONBA_PTR_TO_JSON(MountedAIDBClusters, mountedAIDBClusters_);
          };
          friend void from_json(const Darabonba::Json& j, MountedAIDBClusters& obj) { 
            DARABONBA_PTR_FROM_JSON(MountedAIDBClusters, mountedAIDBClusters_);
          };
          MountedAIDBClusters() = default ;
          MountedAIDBClusters(const MountedAIDBClusters &) = default ;
          MountedAIDBClusters(MountedAIDBClusters &&) = default ;
          MountedAIDBClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MountedAIDBClusters() = default ;
          MountedAIDBClusters& operator=(const MountedAIDBClusters &) = default ;
          MountedAIDBClusters& operator=(MountedAIDBClusters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MountedAIDBClustersItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MountedAIDBClustersItem& obj) { 
              DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
              DARABONBA_PTR_TO_JSON(MountDir, mountDir_);
              DARABONBA_PTR_TO_JSON(MountStatus, mountStatus_);
              DARABONBA_PTR_TO_JSON(MountedTime, mountedTime_);
            };
            friend void from_json(const Darabonba::Json& j, MountedAIDBClustersItem& obj) { 
              DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
              DARABONBA_PTR_FROM_JSON(MountDir, mountDir_);
              DARABONBA_PTR_FROM_JSON(MountStatus, mountStatus_);
              DARABONBA_PTR_FROM_JSON(MountedTime, mountedTime_);
            };
            MountedAIDBClustersItem() = default ;
            MountedAIDBClustersItem(const MountedAIDBClustersItem &) = default ;
            MountedAIDBClustersItem(MountedAIDBClustersItem &&) = default ;
            MountedAIDBClustersItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MountedAIDBClustersItem() = default ;
            MountedAIDBClustersItem& operator=(const MountedAIDBClustersItem &) = default ;
            MountedAIDBClustersItem& operator=(MountedAIDBClustersItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->mountDir_ == nullptr && this->mountStatus_ == nullptr && this->mountedTime_ == nullptr; };
            // DBClusterId Field Functions 
            bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
            void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
            inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
            inline MountedAIDBClustersItem& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


            // mountDir Field Functions 
            bool hasMountDir() const { return this->mountDir_ != nullptr;};
            void deleteMountDir() { this->mountDir_ = nullptr;};
            inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
            inline MountedAIDBClustersItem& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


            // mountStatus Field Functions 
            bool hasMountStatus() const { return this->mountStatus_ != nullptr;};
            void deleteMountStatus() { this->mountStatus_ = nullptr;};
            inline string getMountStatus() const { DARABONBA_PTR_GET_DEFAULT(mountStatus_, "") };
            inline MountedAIDBClustersItem& setMountStatus(string mountStatus) { DARABONBA_PTR_SET_VALUE(mountStatus_, mountStatus) };


            // mountedTime Field Functions 
            bool hasMountedTime() const { return this->mountedTime_ != nullptr;};
            void deleteMountedTime() { this->mountedTime_ = nullptr;};
            inline string getMountedTime() const { DARABONBA_PTR_GET_DEFAULT(mountedTime_, "") };
            inline MountedAIDBClustersItem& setMountedTime(string mountedTime) { DARABONBA_PTR_SET_VALUE(mountedTime_, mountedTime) };


          protected:
            shared_ptr<string> DBClusterId_ {};
            shared_ptr<string> mountDir_ {};
            shared_ptr<string> mountStatus_ {};
            shared_ptr<string> mountedTime_ {};
          };

          virtual bool empty() const override { return this->mountedAIDBClusters_ == nullptr; };
          // mountedAIDBClusters Field Functions 
          bool hasMountedAIDBClusters() const { return this->mountedAIDBClusters_ != nullptr;};
          void deleteMountedAIDBClusters() { this->mountedAIDBClusters_ = nullptr;};
          inline const vector<MountedAIDBClusters::MountedAIDBClustersItem> & getMountedAIDBClusters() const { DARABONBA_PTR_GET_CONST(mountedAIDBClusters_, vector<MountedAIDBClusters::MountedAIDBClustersItem>) };
          inline vector<MountedAIDBClusters::MountedAIDBClustersItem> getMountedAIDBClusters() { DARABONBA_PTR_GET(mountedAIDBClusters_, vector<MountedAIDBClusters::MountedAIDBClustersItem>) };
          inline MountedAIDBClusters& setMountedAIDBClusters(const vector<MountedAIDBClusters::MountedAIDBClustersItem> & mountedAIDBClusters) { DARABONBA_PTR_SET_VALUE(mountedAIDBClusters_, mountedAIDBClusters) };
          inline MountedAIDBClusters& setMountedAIDBClusters(vector<MountedAIDBClusters::MountedAIDBClustersItem> && mountedAIDBClusters) { DARABONBA_PTR_SET_RVALUE(mountedAIDBClusters_, mountedAIDBClusters) };


        protected:
          shared_ptr<vector<MountedAIDBClusters::MountedAIDBClustersItem>> mountedAIDBClusters_ {};
        };

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
          shared_ptr<string> polarDbProxy_ {};
          shared_ptr<string> polarFsCluster_ {};
          shared_ptr<string> token_ {};
        };

        virtual bool empty() const override { return this->accelerateType_ == nullptr
        && this->acceleratedStorageSpace_ == nullptr && this->acceleratingEnable_ == nullptr && this->bandwidth_ == nullptr && this->category_ == nullptr && this->createTime_ == nullptr
        && this->expireTime_ == nullptr && this->expired_ == nullptr && this->mountInfo_ == nullptr && this->mountedAIDBClusters_ == nullptr && this->payType_ == nullptr
        && this->polarFsInstanceDescription_ == nullptr && this->polarFsInstanceId_ == nullptr && this->polarFsPath_ == nullptr && this->polarFsStatus_ == nullptr && this->polarFsType_ == nullptr
        && this->regionId_ == nullptr && this->relativeDbClusterId_ == nullptr && this->securityGroupId_ == nullptr && this->storageSpace_ == nullptr && this->storageType_ == nullptr
        && this->tags_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
        // accelerateType Field Functions 
        bool hasAccelerateType() const { return this->accelerateType_ != nullptr;};
        void deleteAccelerateType() { this->accelerateType_ = nullptr;};
        inline string getAccelerateType() const { DARABONBA_PTR_GET_DEFAULT(accelerateType_, "") };
        inline PolarFsPaths& setAccelerateType(string accelerateType) { DARABONBA_PTR_SET_VALUE(accelerateType_, accelerateType) };


        // acceleratedStorageSpace Field Functions 
        bool hasAcceleratedStorageSpace() const { return this->acceleratedStorageSpace_ != nullptr;};
        void deleteAcceleratedStorageSpace() { this->acceleratedStorageSpace_ = nullptr;};
        inline string getAcceleratedStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(acceleratedStorageSpace_, "") };
        inline PolarFsPaths& setAcceleratedStorageSpace(string acceleratedStorageSpace) { DARABONBA_PTR_SET_VALUE(acceleratedStorageSpace_, acceleratedStorageSpace) };


        // acceleratingEnable Field Functions 
        bool hasAcceleratingEnable() const { return this->acceleratingEnable_ != nullptr;};
        void deleteAcceleratingEnable() { this->acceleratingEnable_ = nullptr;};
        inline string getAcceleratingEnable() const { DARABONBA_PTR_GET_DEFAULT(acceleratingEnable_, "") };
        inline PolarFsPaths& setAcceleratingEnable(string acceleratingEnable) { DARABONBA_PTR_SET_VALUE(acceleratingEnable_, acceleratingEnable) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
        inline PolarFsPaths& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline PolarFsPaths& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline PolarFsPaths& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline PolarFsPaths& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
        inline PolarFsPaths& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // mountInfo Field Functions 
        bool hasMountInfo() const { return this->mountInfo_ != nullptr;};
        void deleteMountInfo() { this->mountInfo_ = nullptr;};
        inline const PolarFsPaths::MountInfo & getMountInfo() const { DARABONBA_PTR_GET_CONST(mountInfo_, PolarFsPaths::MountInfo) };
        inline PolarFsPaths::MountInfo getMountInfo() { DARABONBA_PTR_GET(mountInfo_, PolarFsPaths::MountInfo) };
        inline PolarFsPaths& setMountInfo(const PolarFsPaths::MountInfo & mountInfo) { DARABONBA_PTR_SET_VALUE(mountInfo_, mountInfo) };
        inline PolarFsPaths& setMountInfo(PolarFsPaths::MountInfo && mountInfo) { DARABONBA_PTR_SET_RVALUE(mountInfo_, mountInfo) };


        // mountedAIDBClusters Field Functions 
        bool hasMountedAIDBClusters() const { return this->mountedAIDBClusters_ != nullptr;};
        void deleteMountedAIDBClusters() { this->mountedAIDBClusters_ = nullptr;};
        inline const PolarFsPaths::MountedAIDBClusters & getMountedAIDBClusters() const { DARABONBA_PTR_GET_CONST(mountedAIDBClusters_, PolarFsPaths::MountedAIDBClusters) };
        inline PolarFsPaths::MountedAIDBClusters getMountedAIDBClusters() { DARABONBA_PTR_GET(mountedAIDBClusters_, PolarFsPaths::MountedAIDBClusters) };
        inline PolarFsPaths& setMountedAIDBClusters(const PolarFsPaths::MountedAIDBClusters & mountedAIDBClusters) { DARABONBA_PTR_SET_VALUE(mountedAIDBClusters_, mountedAIDBClusters) };
        inline PolarFsPaths& setMountedAIDBClusters(PolarFsPaths::MountedAIDBClusters && mountedAIDBClusters) { DARABONBA_PTR_SET_RVALUE(mountedAIDBClusters_, mountedAIDBClusters) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline PolarFsPaths& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // polarFsInstanceDescription Field Functions 
        bool hasPolarFsInstanceDescription() const { return this->polarFsInstanceDescription_ != nullptr;};
        void deletePolarFsInstanceDescription() { this->polarFsInstanceDescription_ = nullptr;};
        inline string getPolarFsInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceDescription_, "") };
        inline PolarFsPaths& setPolarFsInstanceDescription(string polarFsInstanceDescription) { DARABONBA_PTR_SET_VALUE(polarFsInstanceDescription_, polarFsInstanceDescription) };


        // polarFsInstanceId Field Functions 
        bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
        void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
        inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
        inline PolarFsPaths& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


        // polarFsPath Field Functions 
        bool hasPolarFsPath() const { return this->polarFsPath_ != nullptr;};
        void deletePolarFsPath() { this->polarFsPath_ = nullptr;};
        inline string getPolarFsPath() const { DARABONBA_PTR_GET_DEFAULT(polarFsPath_, "") };
        inline PolarFsPaths& setPolarFsPath(string polarFsPath) { DARABONBA_PTR_SET_VALUE(polarFsPath_, polarFsPath) };


        // polarFsStatus Field Functions 
        bool hasPolarFsStatus() const { return this->polarFsStatus_ != nullptr;};
        void deletePolarFsStatus() { this->polarFsStatus_ = nullptr;};
        inline string getPolarFsStatus() const { DARABONBA_PTR_GET_DEFAULT(polarFsStatus_, "") };
        inline PolarFsPaths& setPolarFsStatus(string polarFsStatus) { DARABONBA_PTR_SET_VALUE(polarFsStatus_, polarFsStatus) };


        // polarFsType Field Functions 
        bool hasPolarFsType() const { return this->polarFsType_ != nullptr;};
        void deletePolarFsType() { this->polarFsType_ = nullptr;};
        inline string getPolarFsType() const { DARABONBA_PTR_GET_DEFAULT(polarFsType_, "") };
        inline PolarFsPaths& setPolarFsType(string polarFsType) { DARABONBA_PTR_SET_VALUE(polarFsType_, polarFsType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PolarFsPaths& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // relativeDbClusterId Field Functions 
        bool hasRelativeDbClusterId() const { return this->relativeDbClusterId_ != nullptr;};
        void deleteRelativeDbClusterId() { this->relativeDbClusterId_ = nullptr;};
        inline string getRelativeDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDbClusterId_, "") };
        inline PolarFsPaths& setRelativeDbClusterId(string relativeDbClusterId) { DARABONBA_PTR_SET_VALUE(relativeDbClusterId_, relativeDbClusterId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline PolarFsPaths& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // storageSpace Field Functions 
        bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
        void deleteStorageSpace() { this->storageSpace_ = nullptr;};
        inline int64_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0L) };
        inline PolarFsPaths& setStorageSpace(int64_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline PolarFsPaths& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const PolarFsPaths::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, PolarFsPaths::Tags) };
        inline PolarFsPaths::Tags getTags() { DARABONBA_PTR_GET(tags_, PolarFsPaths::Tags) };
        inline PolarFsPaths& setTags(const PolarFsPaths::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline PolarFsPaths& setTags(PolarFsPaths::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline PolarFsPaths& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline PolarFsPaths& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline PolarFsPaths& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> accelerateType_ {};
        shared_ptr<string> acceleratedStorageSpace_ {};
        shared_ptr<string> acceleratingEnable_ {};
        shared_ptr<int64_t> bandwidth_ {};
        shared_ptr<string> category_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<string> expired_ {};
        shared_ptr<PolarFsPaths::MountInfo> mountInfo_ {};
        shared_ptr<PolarFsPaths::MountedAIDBClusters> mountedAIDBClusters_ {};
        shared_ptr<string> payType_ {};
        shared_ptr<string> polarFsInstanceDescription_ {};
        shared_ptr<string> polarFsInstanceId_ {};
        shared_ptr<string> polarFsPath_ {};
        shared_ptr<string> polarFsStatus_ {};
        shared_ptr<string> polarFsType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> relativeDbClusterId_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<int64_t> storageSpace_ {};
        shared_ptr<string> storageType_ {};
        shared_ptr<PolarFsPaths::Tags> tags_ {};
        shared_ptr<string> VPCId_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->polarFsPaths_ == nullptr; };
      // polarFsPaths Field Functions 
      bool hasPolarFsPaths() const { return this->polarFsPaths_ != nullptr;};
      void deletePolarFsPaths() { this->polarFsPaths_ = nullptr;};
      inline const vector<Items::PolarFsPaths> & getPolarFsPaths() const { DARABONBA_PTR_GET_CONST(polarFsPaths_, vector<Items::PolarFsPaths>) };
      inline vector<Items::PolarFsPaths> getPolarFsPaths() { DARABONBA_PTR_GET(polarFsPaths_, vector<Items::PolarFsPaths>) };
      inline Items& setPolarFsPaths(const vector<Items::PolarFsPaths> & polarFsPaths) { DARABONBA_PTR_SET_VALUE(polarFsPaths_, polarFsPaths) };
      inline Items& setPolarFsPaths(vector<Items::PolarFsPaths> && polarFsPaths) { DARABONBA_PTR_SET_RVALUE(polarFsPaths_, polarFsPaths) };


    protected:
      shared_ptr<vector<Items::PolarFsPaths>> polarFsPaths_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribePolarFsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribePolarFsResponseBody::Items) };
    inline DescribePolarFsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribePolarFsResponseBody::Items) };
    inline DescribePolarFsResponseBody& setItems(const DescribePolarFsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribePolarFsResponseBody& setItems(DescribePolarFsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolarFsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribePolarFsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarFsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribePolarFsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<DescribePolarFsResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
