// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataLimitSet, dataLimitSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLimitSet, dataLimitSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataLimitSetResponseBody() = default ;
    DescribeDataLimitSetResponseBody(const DescribeDataLimitSetResponseBody &) = default ;
    DescribeDataLimitSetResponseBody(DescribeDataLimitSetResponseBody &&) = default ;
    DescribeDataLimitSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitSetResponseBody() = default ;
    DescribeDataLimitSetResponseBody& operator=(const DescribeDataLimitSetResponseBody &) = default ;
    DescribeDataLimitSetResponseBody& operator=(DescribeDataLimitSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataLimitSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataLimitSet& obj) { 
        DARABONBA_PTR_TO_JSON(DataLimitList, dataLimitList_);
        DARABONBA_PTR_TO_JSON(OssBucketList, ossBucketList_);
        DARABONBA_PTR_TO_JSON(RegionList, regionList_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, DataLimitSet& obj) { 
        DARABONBA_PTR_FROM_JSON(DataLimitList, dataLimitList_);
        DARABONBA_PTR_FROM_JSON(OssBucketList, ossBucketList_);
        DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      DataLimitSet() = default ;
      DataLimitSet(const DataLimitSet &) = default ;
      DataLimitSet(DataLimitSet &&) = default ;
      DataLimitSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataLimitSet() = default ;
      DataLimitSet& operator=(const DataLimitSet &) = default ;
      DataLimitSet& operator=(DataLimitSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionList& obj) { 
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, RegionList& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        RegionList() = default ;
        RegionList(const RegionList &) = default ;
        RegionList(RegionList &&) = default ;
        RegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionList() = default ;
        RegionList& operator=(const RegionList &) = default ;
        RegionList& operator=(RegionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->localName_ == nullptr
        && this->regionId_ == nullptr; };
        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline RegionList& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RegionList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The name of the region.
        shared_ptr<string> localName_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
      };

      class OssBucketList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssBucketList& obj) { 
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, OssBucketList& obj) { 
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        OssBucketList() = default ;
        OssBucketList(const OssBucketList &) = default ;
        OssBucketList(OssBucketList &&) = default ;
        OssBucketList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssBucketList() = default ;
        OssBucketList& operator=(const OssBucketList &) = default ;
        OssBucketList& operator=(OssBucketList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->regionId_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssBucketList& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline OssBucketList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The name of the OSS bucket to which the OSS object belongs.
        shared_ptr<string> bucketName_ {};
        // The region ID of the OSS object.
        shared_ptr<string> regionId_ {};
      };

      class DataLimitList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataLimitList& obj) { 
          DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_TO_JSON(CheckStatusName, checkStatusName_);
          DARABONBA_PTR_TO_JSON(Connector, connector_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, DataLimitList& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
          DARABONBA_PTR_FROM_JSON(CheckStatusName, checkStatusName_);
          DARABONBA_PTR_FROM_JSON(Connector, connector_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        DataLimitList() = default ;
        DataLimitList(const DataLimitList &) = default ;
        DataLimitList(DataLimitList &&) = default ;
        DataLimitList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataLimitList() = default ;
        DataLimitList& operator=(const DataLimitList &) = default ;
        DataLimitList& operator=(DataLimitList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkStatus_ == nullptr
        && this->checkStatusName_ == nullptr && this->connector_ == nullptr && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->localName_ == nullptr
        && this->parentId_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->resourceTypeCode_ == nullptr && this->userName_ == nullptr; };
        // checkStatus Field Functions 
        bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
        void deleteCheckStatus() { this->checkStatus_ = nullptr;};
        inline int32_t getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0) };
        inline DataLimitList& setCheckStatus(int32_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


        // checkStatusName Field Functions 
        bool hasCheckStatusName() const { return this->checkStatusName_ != nullptr;};
        void deleteCheckStatusName() { this->checkStatusName_ = nullptr;};
        inline string getCheckStatusName() const { DARABONBA_PTR_GET_DEFAULT(checkStatusName_, "") };
        inline DataLimitList& setCheckStatusName(string checkStatusName) { DARABONBA_PTR_SET_VALUE(checkStatusName_, checkStatusName) };


        // connector Field Functions 
        bool hasConnector() const { return this->connector_ != nullptr;};
        void deleteConnector() { this->connector_ = nullptr;};
        inline string getConnector() const { DARABONBA_PTR_GET_DEFAULT(connector_, "") };
        inline DataLimitList& setConnector(string connector) { DARABONBA_PTR_SET_VALUE(connector_, connector) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline DataLimitList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataLimitList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline DataLimitList& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline DataLimitList& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DataLimitList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline int64_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
        inline DataLimitList& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // resourceTypeCode Field Functions 
        bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
        void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
        inline string getResourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
        inline DataLimitList& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline DataLimitList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // Indicates whether the test of connectivity between DSC and the data asset is passed.
        // 
        // *   **2**: The connectivity test is in progress.
        // *   **3**: The connectivity test is passed.
        // *   **4**: The connectivity test failed.
        shared_ptr<int32_t> checkStatus_ {};
        // The name of the data detection status.
        shared_ptr<string> checkStatusName_ {};
        // The connection string that is used to access the data asset.
        shared_ptr<string> connector_ {};
        // The time when the data asset was created. Unit: milliseconds.
        shared_ptr<int64_t> gmtCreate_ {};
        // The ID of the data asset.
        shared_ptr<int64_t> id_ {};
        // The region in which the data asset resides.
        shared_ptr<string> localName_ {};
        // The parent asset ID of the data asset.
        shared_ptr<string> parentId_ {};
        // The region in which the data asset resides.
        shared_ptr<string> regionId_ {};
        // The type of service to which the data asset belongs. Valid values:
        // 
        // *   **1**: MaxCompute
        // *   **2**: OSS
        // *   **3**: AnalyticDB for MySQL
        // *   **4**: Tablestore
        // *   **5**: ApsaraDB RDS
        shared_ptr<int64_t> resourceType_ {};
        // The code of the service to which the data asset belongs. Valid values:
        // 
        // *   **ODPS**
        // *   **OSS**
        // *   **ADS**
        // *   **OTS**
        // *   **RDS**
        shared_ptr<string> resourceTypeCode_ {};
        // The username that is used to access the data asset.
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->dataLimitList_ == nullptr
        && this->ossBucketList_ == nullptr && this->regionList_ == nullptr && this->resourceType_ == nullptr && this->resourceTypeCode_ == nullptr && this->totalCount_ == nullptr; };
      // dataLimitList Field Functions 
      bool hasDataLimitList() const { return this->dataLimitList_ != nullptr;};
      void deleteDataLimitList() { this->dataLimitList_ = nullptr;};
      inline const vector<DataLimitSet::DataLimitList> & getDataLimitList() const { DARABONBA_PTR_GET_CONST(dataLimitList_, vector<DataLimitSet::DataLimitList>) };
      inline vector<DataLimitSet::DataLimitList> getDataLimitList() { DARABONBA_PTR_GET(dataLimitList_, vector<DataLimitSet::DataLimitList>) };
      inline DataLimitSet& setDataLimitList(const vector<DataLimitSet::DataLimitList> & dataLimitList) { DARABONBA_PTR_SET_VALUE(dataLimitList_, dataLimitList) };
      inline DataLimitSet& setDataLimitList(vector<DataLimitSet::DataLimitList> && dataLimitList) { DARABONBA_PTR_SET_RVALUE(dataLimitList_, dataLimitList) };


      // ossBucketList Field Functions 
      bool hasOssBucketList() const { return this->ossBucketList_ != nullptr;};
      void deleteOssBucketList() { this->ossBucketList_ = nullptr;};
      inline const vector<DataLimitSet::OssBucketList> & getOssBucketList() const { DARABONBA_PTR_GET_CONST(ossBucketList_, vector<DataLimitSet::OssBucketList>) };
      inline vector<DataLimitSet::OssBucketList> getOssBucketList() { DARABONBA_PTR_GET(ossBucketList_, vector<DataLimitSet::OssBucketList>) };
      inline DataLimitSet& setOssBucketList(const vector<DataLimitSet::OssBucketList> & ossBucketList) { DARABONBA_PTR_SET_VALUE(ossBucketList_, ossBucketList) };
      inline DataLimitSet& setOssBucketList(vector<DataLimitSet::OssBucketList> && ossBucketList) { DARABONBA_PTR_SET_RVALUE(ossBucketList_, ossBucketList) };


      // regionList Field Functions 
      bool hasRegionList() const { return this->regionList_ != nullptr;};
      void deleteRegionList() { this->regionList_ = nullptr;};
      inline const vector<DataLimitSet::RegionList> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<DataLimitSet::RegionList>) };
      inline vector<DataLimitSet::RegionList> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<DataLimitSet::RegionList>) };
      inline DataLimitSet& setRegionList(const vector<DataLimitSet::RegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
      inline DataLimitSet& setRegionList(vector<DataLimitSet::RegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline int64_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
      inline DataLimitSet& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // resourceTypeCode Field Functions 
      bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
      void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
      inline string getResourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
      inline DataLimitSet& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline DataLimitSet& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // An array that consists of data assets that DSC is authorized to scan.
      shared_ptr<vector<DataLimitSet::DataLimitList>> dataLimitList_ {};
      // An array consisting of the OSS objects that DSC is authorized to scan.
      shared_ptr<vector<DataLimitSet::OssBucketList>> ossBucketList_ {};
      // An array consisting of the regions in which the data assets can be scanned.
      shared_ptr<vector<DataLimitSet::RegionList>> regionList_ {};
      // The type of service to which the data asset belongs. Valid values:
      // 
      // *   **1**: MaxCompute
      // *   **2**: OSS
      // *   **3**: AnalyticDB for MySQL
      // *   **4**: Tablestore
      // *   **5**: ApsaraDB RDS
      shared_ptr<int64_t> resourceType_ {};
      // The service to which the data asset belongs. Valid values:
      // 
      // *   **ODPS**
      // *   **OSS**
      // *   **ADS**
      // *   **OTS**
      // *   **RDS**
      shared_ptr<string> resourceTypeCode_ {};
      // The total number of data objects in the data assets.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->dataLimitSet_ == nullptr
        && this->requestId_ == nullptr; };
    // dataLimitSet Field Functions 
    bool hasDataLimitSet() const { return this->dataLimitSet_ != nullptr;};
    void deleteDataLimitSet() { this->dataLimitSet_ = nullptr;};
    inline const DescribeDataLimitSetResponseBody::DataLimitSet & getDataLimitSet() const { DARABONBA_PTR_GET_CONST(dataLimitSet_, DescribeDataLimitSetResponseBody::DataLimitSet) };
    inline DescribeDataLimitSetResponseBody::DataLimitSet getDataLimitSet() { DARABONBA_PTR_GET(dataLimitSet_, DescribeDataLimitSetResponseBody::DataLimitSet) };
    inline DescribeDataLimitSetResponseBody& setDataLimitSet(const DescribeDataLimitSetResponseBody::DataLimitSet & dataLimitSet) { DARABONBA_PTR_SET_VALUE(dataLimitSet_, dataLimitSet) };
    inline DescribeDataLimitSetResponseBody& setDataLimitSet(DescribeDataLimitSetResponseBody::DataLimitSet && dataLimitSet) { DARABONBA_PTR_SET_RVALUE(dataLimitSet_, dataLimitSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataLimitSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the data asset.
    shared_ptr<DescribeDataLimitSetResponseBody::DataLimitSet> dataLimitSet_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
