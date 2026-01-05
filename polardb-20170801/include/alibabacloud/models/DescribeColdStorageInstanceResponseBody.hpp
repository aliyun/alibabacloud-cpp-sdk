// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODY_HPP_
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
  class DescribeColdStorageInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdStorageInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OssClusterEnabled, ossClusterEnabled_);
      DARABONBA_PTR_TO_JSON(OssClusterInfoList, ossClusterInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportOssCluster, supportOssCluster_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TotalRecord, totalRecord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdStorageInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OssClusterEnabled, ossClusterEnabled_);
      DARABONBA_PTR_FROM_JSON(OssClusterInfoList, ossClusterInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportOssCluster, supportOssCluster_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TotalRecord, totalRecord_);
    };
    DescribeColdStorageInstanceResponseBody() = default ;
    DescribeColdStorageInstanceResponseBody(const DescribeColdStorageInstanceResponseBody &) = default ;
    DescribeColdStorageInstanceResponseBody(DescribeColdStorageInstanceResponseBody &&) = default ;
    DescribeColdStorageInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdStorageInstanceResponseBody() = default ;
    DescribeColdStorageInstanceResponseBody& operator=(const DescribeColdStorageInstanceResponseBody &) = default ;
    DescribeColdStorageInstanceResponseBody& operator=(DescribeColdStorageInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(ChildObjects, childObjects_);
        DARABONBA_PTR_TO_JSON(DB, DB_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(OssClusterId, ossClusterId_);
        DARABONBA_PTR_TO_JSON(Partion, partion_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Table, table_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(ChildObjects, childObjects_);
        DARABONBA_PTR_FROM_JSON(DB, DB_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(OssClusterId, ossClusterId_);
        DARABONBA_PTR_FROM_JSON(Partion, partion_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Table, table_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      Tables() = default ;
      Tables(const Tables &) = default ;
      Tables(Tables &&) = default ;
      Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tables() = default ;
      Tables& operator=(const Tables &) = default ;
      Tables& operator=(Tables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChildObjects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChildObjects& obj) { 
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ChildObjects& obj) { 
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ChildObjects() = default ;
        ChildObjects(const ChildObjects &) = default ;
        ChildObjects(ChildObjects &&) = default ;
        ChildObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChildObjects() = default ;
        ChildObjects& operator=(const ChildObjects &) = default ;
        ChildObjects& operator=(ChildObjects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->objectName_ == nullptr
        && this->objectType_ == nullptr && this->size_ == nullptr && this->status_ == nullptr; };
        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline ChildObjects& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline ChildObjects& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline ChildObjects& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ChildObjects& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> objectName_ {};
        shared_ptr<string> objectType_ {};
        shared_ptr<string> size_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->childObjects_ == nullptr
        && this->DB_ == nullptr && this->DBName_ == nullptr && this->fieldName_ == nullptr && this->ossClusterId_ == nullptr && this->partion_ == nullptr
        && this->size_ == nullptr && this->status_ == nullptr && this->table_ == nullptr && this->tableName_ == nullptr; };
      // childObjects Field Functions 
      bool hasChildObjects() const { return this->childObjects_ != nullptr;};
      void deleteChildObjects() { this->childObjects_ = nullptr;};
      inline const vector<Tables::ChildObjects> & getChildObjects() const { DARABONBA_PTR_GET_CONST(childObjects_, vector<Tables::ChildObjects>) };
      inline vector<Tables::ChildObjects> getChildObjects() { DARABONBA_PTR_GET(childObjects_, vector<Tables::ChildObjects>) };
      inline Tables& setChildObjects(const vector<Tables::ChildObjects> & childObjects) { DARABONBA_PTR_SET_VALUE(childObjects_, childObjects) };
      inline Tables& setChildObjects(vector<Tables::ChildObjects> && childObjects) { DARABONBA_PTR_SET_RVALUE(childObjects_, childObjects) };


      // DB Field Functions 
      bool hasDB() const { return this->DB_ != nullptr;};
      void deleteDB() { this->DB_ = nullptr;};
      inline string getDB() const { DARABONBA_PTR_GET_DEFAULT(DB_, "") };
      inline Tables& setDB(string DB) { DARABONBA_PTR_SET_VALUE(DB_, DB) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Tables& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Tables& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // ossClusterId Field Functions 
      bool hasOssClusterId() const { return this->ossClusterId_ != nullptr;};
      void deleteOssClusterId() { this->ossClusterId_ = nullptr;};
      inline string getOssClusterId() const { DARABONBA_PTR_GET_DEFAULT(ossClusterId_, "") };
      inline Tables& setOssClusterId(string ossClusterId) { DARABONBA_PTR_SET_VALUE(ossClusterId_, ossClusterId) };


      // partion Field Functions 
      bool hasPartion() const { return this->partion_ != nullptr;};
      void deletePartion() { this->partion_ = nullptr;};
      inline string getPartion() const { DARABONBA_PTR_GET_DEFAULT(partion_, "") };
      inline Tables& setPartion(string partion) { DARABONBA_PTR_SET_VALUE(partion_, partion) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Tables& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Tables& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // table Field Functions 
      bool hasTable() const { return this->table_ != nullptr;};
      void deleteTable() { this->table_ = nullptr;};
      inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
      inline Tables& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Tables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      shared_ptr<vector<Tables::ChildObjects>> childObjects_ {};
      shared_ptr<string> DB_ {};
      shared_ptr<string> DBName_ {};
      shared_ptr<string> fieldName_ {};
      shared_ptr<string> ossClusterId_ {};
      shared_ptr<string> partion_ {};
      shared_ptr<string> size_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> table_ {};
      shared_ptr<string> tableName_ {};
    };

    class OssClusterInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OssClusterInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(OssClusterId, ossClusterId_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, OssClusterInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(OssClusterId, ossClusterId_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      OssClusterInfoList() = default ;
      OssClusterInfoList(const OssClusterInfoList &) = default ;
      OssClusterInfoList(OssClusterInfoList &&) = default ;
      OssClusterInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OssClusterInfoList() = default ;
      OssClusterInfoList& operator=(const OssClusterInfoList &) = default ;
      OssClusterInfoList& operator=(OssClusterInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->ossClusterId_ == nullptr && this->region_ == nullptr && this->size_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline OssClusterInfoList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // ossClusterId Field Functions 
      bool hasOssClusterId() const { return this->ossClusterId_ != nullptr;};
      void deleteOssClusterId() { this->ossClusterId_ = nullptr;};
      inline string getOssClusterId() const { DARABONBA_PTR_GET_DEFAULT(ossClusterId_, "") };
      inline OssClusterInfoList& setOssClusterId(string ossClusterId) { DARABONBA_PTR_SET_VALUE(ossClusterId_, ossClusterId) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline OssClusterInfoList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline OssClusterInfoList& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> ossClusterId_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> size_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->objectType_ == nullptr && this->ossClusterEnabled_ == nullptr && this->ossClusterInfoList_ == nullptr && this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->supportOssCluster_ == nullptr && this->tables_ == nullptr
        && this->totalRecord_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeColdStorageInstanceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline DescribeColdStorageInstanceResponseBody& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ossClusterEnabled Field Functions 
    bool hasOssClusterEnabled() const { return this->ossClusterEnabled_ != nullptr;};
    void deleteOssClusterEnabled() { this->ossClusterEnabled_ = nullptr;};
    inline string getOssClusterEnabled() const { DARABONBA_PTR_GET_DEFAULT(ossClusterEnabled_, "") };
    inline DescribeColdStorageInstanceResponseBody& setOssClusterEnabled(string ossClusterEnabled) { DARABONBA_PTR_SET_VALUE(ossClusterEnabled_, ossClusterEnabled) };


    // ossClusterInfoList Field Functions 
    bool hasOssClusterInfoList() const { return this->ossClusterInfoList_ != nullptr;};
    void deleteOssClusterInfoList() { this->ossClusterInfoList_ = nullptr;};
    inline const vector<DescribeColdStorageInstanceResponseBody::OssClusterInfoList> & getOssClusterInfoList() const { DARABONBA_PTR_GET_CONST(ossClusterInfoList_, vector<DescribeColdStorageInstanceResponseBody::OssClusterInfoList>) };
    inline vector<DescribeColdStorageInstanceResponseBody::OssClusterInfoList> getOssClusterInfoList() { DARABONBA_PTR_GET(ossClusterInfoList_, vector<DescribeColdStorageInstanceResponseBody::OssClusterInfoList>) };
    inline DescribeColdStorageInstanceResponseBody& setOssClusterInfoList(const vector<DescribeColdStorageInstanceResponseBody::OssClusterInfoList> & ossClusterInfoList) { DARABONBA_PTR_SET_VALUE(ossClusterInfoList_, ossClusterInfoList) };
    inline DescribeColdStorageInstanceResponseBody& setOssClusterInfoList(vector<DescribeColdStorageInstanceResponseBody::OssClusterInfoList> && ossClusterInfoList) { DARABONBA_PTR_SET_RVALUE(ossClusterInfoList_, ossClusterInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColdStorageInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportOssCluster Field Functions 
    bool hasSupportOssCluster() const { return this->supportOssCluster_ != nullptr;};
    void deleteSupportOssCluster() { this->supportOssCluster_ = nullptr;};
    inline string getSupportOssCluster() const { DARABONBA_PTR_GET_DEFAULT(supportOssCluster_, "") };
    inline DescribeColdStorageInstanceResponseBody& setSupportOssCluster(string supportOssCluster) { DARABONBA_PTR_SET_VALUE(supportOssCluster_, supportOssCluster) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<DescribeColdStorageInstanceResponseBody::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<DescribeColdStorageInstanceResponseBody::Tables>) };
    inline vector<DescribeColdStorageInstanceResponseBody::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<DescribeColdStorageInstanceResponseBody::Tables>) };
    inline DescribeColdStorageInstanceResponseBody& setTables(const vector<DescribeColdStorageInstanceResponseBody::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeColdStorageInstanceResponseBody& setTables(vector<DescribeColdStorageInstanceResponseBody::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // totalRecord Field Functions 
    bool hasTotalRecord() const { return this->totalRecord_ != nullptr;};
    void deleteTotalRecord() { this->totalRecord_ = nullptr;};
    inline int32_t getTotalRecord() const { DARABONBA_PTR_GET_DEFAULT(totalRecord_, 0) };
    inline DescribeColdStorageInstanceResponseBody& setTotalRecord(int32_t totalRecord) { DARABONBA_PTR_SET_VALUE(totalRecord_, totalRecord) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> objectType_ {};
    shared_ptr<string> ossClusterEnabled_ {};
    shared_ptr<vector<DescribeColdStorageInstanceResponseBody::OssClusterInfoList>> ossClusterInfoList_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> supportOssCluster_ {};
    shared_ptr<vector<DescribeColdStorageInstanceResponseBody::Tables>> tables_ {};
    shared_ptr<int32_t> totalRecord_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
