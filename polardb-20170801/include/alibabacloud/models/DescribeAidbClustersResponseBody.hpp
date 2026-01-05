// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERSRESPONSEBODY_HPP_
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
  class DescribeAIDBClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeAIDBClustersResponseBody() = default ;
    DescribeAIDBClustersResponseBody(const DescribeAIDBClustersResponseBody &) = default ;
    DescribeAIDBClustersResponseBody(DescribeAIDBClustersResponseBody &&) = default ;
    DescribeAIDBClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClustersResponseBody() = default ;
    DescribeAIDBClustersResponseBody& operator=(const DescribeAIDBClustersResponseBody &) = default ;
    DescribeAIDBClustersResponseBody& operator=(DescribeAIDBClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBCluster, DBCluster_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBCluster, DBCluster_);
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
      class DBCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBCluster& obj) { 
          DARABONBA_PTR_TO_JSON(AiNodeType, aiNodeType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_TO_JSON(DBType, DBType_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(KubeClusterId, kubeClusterId_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(ModelType, modelType_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RelativeDBClusterId, relativeDBClusterId_);
          DARABONBA_PTR_TO_JSON(RunType, runType_);
          DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DBCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(AiNodeType, aiNodeType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
          DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
          DARABONBA_PTR_FROM_JSON(DBType, DBType_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(KubeClusterId, kubeClusterId_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RelativeDBClusterId, relativeDBClusterId_);
          DARABONBA_PTR_FROM_JSON(RunType, runType_);
          DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DBCluster() = default ;
        DBCluster(const DBCluster &) = default ;
        DBCluster(DBCluster &&) = default ;
        DBCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBCluster() = default ;
        DBCluster& operator=(const DBCluster &) = default ;
        DBCluster& operator=(DBCluster &&) = default ;
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

        virtual bool empty() const override { return this->aiNodeType_ == nullptr
        && this->createTime_ == nullptr && this->DBClusterDescription_ == nullptr && this->DBClusterId_ == nullptr && this->DBClusterStatus_ == nullptr && this->DBNodeClass_ == nullptr
        && this->DBType_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->kubeClusterId_ == nullptr && this->lockMode_ == nullptr
        && this->modelType_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr && this->relativeDBClusterId_ == nullptr && this->runType_ == nullptr
        && this->storageSpace_ == nullptr && this->storageType_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr && this->vswitchId_ == nullptr
        && this->zoneId_ == nullptr; };
        // aiNodeType Field Functions 
        bool hasAiNodeType() const { return this->aiNodeType_ != nullptr;};
        void deleteAiNodeType() { this->aiNodeType_ = nullptr;};
        inline string getAiNodeType() const { DARABONBA_PTR_GET_DEFAULT(aiNodeType_, "") };
        inline DBCluster& setAiNodeType(string aiNodeType) { DARABONBA_PTR_SET_VALUE(aiNodeType_, aiNodeType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DBCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBClusterDescription Field Functions 
        bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
        void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
        inline string getDBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
        inline DBCluster& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline DBCluster& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // DBClusterStatus Field Functions 
        bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
        void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
        inline string getDBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
        inline DBCluster& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


        // DBNodeClass Field Functions 
        bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
        void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
        inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
        inline DBCluster& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


        // DBType Field Functions 
        bool hasDBType() const { return this->DBType_ != nullptr;};
        void deleteDBType() { this->DBType_ = nullptr;};
        inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
        inline DBCluster& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline DBCluster& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
        inline DBCluster& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // kubeClusterId Field Functions 
        bool hasKubeClusterId() const { return this->kubeClusterId_ != nullptr;};
        void deleteKubeClusterId() { this->kubeClusterId_ = nullptr;};
        inline string getKubeClusterId() const { DARABONBA_PTR_GET_DEFAULT(kubeClusterId_, "") };
        inline DBCluster& setKubeClusterId(string kubeClusterId) { DARABONBA_PTR_SET_VALUE(kubeClusterId_, kubeClusterId) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline DBCluster& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // modelType Field Functions 
        bool hasModelType() const { return this->modelType_ != nullptr;};
        void deleteModelType() { this->modelType_ = nullptr;};
        inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
        inline DBCluster& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline DBCluster& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DBCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // relativeDBClusterId Field Functions 
        bool hasRelativeDBClusterId() const { return this->relativeDBClusterId_ != nullptr;};
        void deleteRelativeDBClusterId() { this->relativeDBClusterId_ = nullptr;};
        inline string getRelativeDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDBClusterId_, "") };
        inline DBCluster& setRelativeDBClusterId(string relativeDBClusterId) { DARABONBA_PTR_SET_VALUE(relativeDBClusterId_, relativeDBClusterId) };


        // runType Field Functions 
        bool hasRunType() const { return this->runType_ != nullptr;};
        void deleteRunType() { this->runType_ = nullptr;};
        inline string getRunType() const { DARABONBA_PTR_GET_DEFAULT(runType_, "") };
        inline DBCluster& setRunType(string runType) { DARABONBA_PTR_SET_VALUE(runType_, runType) };


        // storageSpace Field Functions 
        bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
        void deleteStorageSpace() { this->storageSpace_ = nullptr;};
        inline int32_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0) };
        inline DBCluster& setStorageSpace(int32_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DBCluster& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DBCluster::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DBCluster::Tags) };
        inline DBCluster::Tags getTags() { DARABONBA_PTR_GET(tags_, DBCluster::Tags) };
        inline DBCluster& setTags(const DBCluster::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DBCluster& setTags(DBCluster::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DBCluster& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline DBCluster& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DBCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> aiNodeType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> DBClusterDescription_ {};
        shared_ptr<string> DBClusterId_ {};
        shared_ptr<string> DBClusterStatus_ {};
        shared_ptr<string> DBNodeClass_ {};
        shared_ptr<string> DBType_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<bool> expired_ {};
        shared_ptr<string> kubeClusterId_ {};
        shared_ptr<string> lockMode_ {};
        shared_ptr<string> modelType_ {};
        shared_ptr<string> payType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> relativeDBClusterId_ {};
        shared_ptr<string> runType_ {};
        shared_ptr<int32_t> storageSpace_ {};
        shared_ptr<string> storageType_ {};
        shared_ptr<DBCluster::Tags> tags_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vswitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->DBCluster_ == nullptr; };
      // DBCluster Field Functions 
      bool hasDBCluster() const { return this->DBCluster_ != nullptr;};
      void deleteDBCluster() { this->DBCluster_ = nullptr;};
      inline const vector<Items::DBCluster> & getDBCluster() const { DARABONBA_PTR_GET_CONST(DBCluster_, vector<Items::DBCluster>) };
      inline vector<Items::DBCluster> getDBCluster() { DARABONBA_PTR_GET(DBCluster_, vector<Items::DBCluster>) };
      inline Items& setDBCluster(const vector<Items::DBCluster> & dBCluster) { DARABONBA_PTR_SET_VALUE(DBCluster_, dBCluster) };
      inline Items& setDBCluster(vector<Items::DBCluster> && dBCluster) { DARABONBA_PTR_SET_RVALUE(DBCluster_, dBCluster) };


    protected:
      shared_ptr<vector<Items::DBCluster>> DBCluster_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeAIDBClustersResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeAIDBClustersResponseBody::Items) };
    inline DescribeAIDBClustersResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeAIDBClustersResponseBody::Items) };
    inline DescribeAIDBClustersResponseBody& setItems(const DescribeAIDBClustersResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAIDBClustersResponseBody& setItems(DescribeAIDBClustersResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAIDBClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeAIDBClustersResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeAIDBClustersResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<DescribeAIDBClustersResponseBody::Items> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
