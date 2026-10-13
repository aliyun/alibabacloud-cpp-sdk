// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetTableInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetTableInfoResponseBody() = default ;
    GetTableInfoResponseBody(const GetTableInfoResponseBody &) = default ;
    GetTableInfoResponseBody(GetTableInfoResponseBody &&) = default ;
    GetTableInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableInfoResponseBody() = default ;
    GetTableInfoResponseBody& operator=(const GetTableInfoResponseBody &) = default ;
    GetTableInfoResponseBody& operator=(GetTableInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(autoRefreshEnabled, autoRefreshEnabled_);
        DARABONBA_PTR_TO_JSON(clusterInfo, clusterInfo_);
        DARABONBA_PTR_TO_JSON(comment, comment_);
        DARABONBA_PTR_TO_JSON(createTableDDL, createTableDDL_);
        DARABONBA_PTR_TO_JSON(creationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
        DARABONBA_PTR_TO_JSON(fileNum, fileNum_);
        DARABONBA_PTR_TO_JSON(isExternalTable, isExternalTable_);
        DARABONBA_PTR_TO_JSON(isOutdated, isOutdated_);
        DARABONBA_PTR_TO_JSON(lastAccessTime, lastAccessTime_);
        DARABONBA_PTR_TO_JSON(lastDDLTime, lastDDLTime_);
        DARABONBA_PTR_TO_JSON(lastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_TO_JSON(lifecycle, lifecycle_);
        DARABONBA_PTR_TO_JSON(location, location_);
        DARABONBA_PTR_TO_JSON(materializedView, materializedView_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(nativeColumns, nativeColumns_);
        DARABONBA_PTR_TO_JSON(odpsPropertiesRolearn, odpsPropertiesRolearn_);
        DARABONBA_PTR_TO_JSON(odpsSqlTextOptionFlushHeader, odpsSqlTextOptionFlushHeader_);
        DARABONBA_PTR_TO_JSON(odpsTextOptionHeaderLinesCount, odpsTextOptionHeaderLinesCount_);
        DARABONBA_PTR_TO_JSON(owner, owner_);
        DARABONBA_PTR_TO_JSON(partitionColumns, partitionColumns_);
        DARABONBA_PTR_TO_JSON(physicalSize, physicalSize_);
        DARABONBA_PTR_TO_JSON(projectName, projectName_);
        DARABONBA_PTR_TO_JSON(rewriteEnabled, rewriteEnabled_);
        DARABONBA_PTR_TO_JSON(schema, schema_);
        DARABONBA_PTR_TO_JSON(size, size_);
        DARABONBA_PTR_TO_JSON(storageHandler, storageHandler_);
        DARABONBA_PTR_TO_JSON(tableLabel, tableLabel_);
        DARABONBA_PTR_TO_JSON(tablesotreTableName, tablesotreTableName_);
        DARABONBA_PTR_TO_JSON(tablestoreColumnsMapping, tablestoreColumnsMapping_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(viewText, viewText_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(autoRefreshEnabled, autoRefreshEnabled_);
        DARABONBA_PTR_FROM_JSON(clusterInfo, clusterInfo_);
        DARABONBA_PTR_FROM_JSON(comment, comment_);
        DARABONBA_PTR_FROM_JSON(createTableDDL, createTableDDL_);
        DARABONBA_PTR_FROM_JSON(creationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        DARABONBA_PTR_FROM_JSON(fileNum, fileNum_);
        DARABONBA_PTR_FROM_JSON(isExternalTable, isExternalTable_);
        DARABONBA_PTR_FROM_JSON(isOutdated, isOutdated_);
        DARABONBA_PTR_FROM_JSON(lastAccessTime, lastAccessTime_);
        DARABONBA_PTR_FROM_JSON(lastDDLTime, lastDDLTime_);
        DARABONBA_PTR_FROM_JSON(lastModifiedTime, lastModifiedTime_);
        DARABONBA_PTR_FROM_JSON(lifecycle, lifecycle_);
        DARABONBA_PTR_FROM_JSON(location, location_);
        DARABONBA_PTR_FROM_JSON(materializedView, materializedView_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(nativeColumns, nativeColumns_);
        DARABONBA_PTR_FROM_JSON(odpsPropertiesRolearn, odpsPropertiesRolearn_);
        DARABONBA_PTR_FROM_JSON(odpsSqlTextOptionFlushHeader, odpsSqlTextOptionFlushHeader_);
        DARABONBA_PTR_FROM_JSON(odpsTextOptionHeaderLinesCount, odpsTextOptionHeaderLinesCount_);
        DARABONBA_PTR_FROM_JSON(owner, owner_);
        DARABONBA_PTR_FROM_JSON(partitionColumns, partitionColumns_);
        DARABONBA_PTR_FROM_JSON(physicalSize, physicalSize_);
        DARABONBA_PTR_FROM_JSON(projectName, projectName_);
        DARABONBA_PTR_FROM_JSON(rewriteEnabled, rewriteEnabled_);
        DARABONBA_PTR_FROM_JSON(schema, schema_);
        DARABONBA_PTR_FROM_JSON(size, size_);
        DARABONBA_PTR_FROM_JSON(storageHandler, storageHandler_);
        DARABONBA_PTR_FROM_JSON(tableLabel, tableLabel_);
        DARABONBA_PTR_FROM_JSON(tablesotreTableName, tablesotreTableName_);
        DARABONBA_PTR_FROM_JSON(tablestoreColumnsMapping, tablestoreColumnsMapping_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(viewText, viewText_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PartitionColumns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PartitionColumns& obj) { 
          DARABONBA_PTR_TO_JSON(comment, comment_);
          DARABONBA_PTR_TO_JSON(label, label_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PartitionColumns& obj) { 
          DARABONBA_PTR_FROM_JSON(comment, comment_);
          DARABONBA_PTR_FROM_JSON(label, label_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        PartitionColumns() = default ;
        PartitionColumns(const PartitionColumns &) = default ;
        PartitionColumns(PartitionColumns &&) = default ;
        PartitionColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PartitionColumns() = default ;
        PartitionColumns& operator=(const PartitionColumns &) = default ;
        PartitionColumns& operator=(PartitionColumns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->label_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline PartitionColumns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline PartitionColumns& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PartitionColumns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline PartitionColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The partition column comment.
        shared_ptr<string> comment_ {};
        // The sensitivity level label of the column. For more information, see <props="china">[Label-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/label-based-access-control)
        // <props="intl">[Label-based access control](https://www.alibabacloud.com/help/maxcompute/user-guide/label-based-access-control).
        shared_ptr<string> label_ {};
        // The partition name.
        shared_ptr<string> name_ {};
        // The data type.
        shared_ptr<string> type_ {};
      };

      class NativeColumns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NativeColumns& obj) { 
          DARABONBA_PTR_TO_JSON(comment, comment_);
          DARABONBA_PTR_TO_JSON(label, label_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, NativeColumns& obj) { 
          DARABONBA_PTR_FROM_JSON(comment, comment_);
          DARABONBA_PTR_FROM_JSON(label, label_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        NativeColumns() = default ;
        NativeColumns(const NativeColumns &) = default ;
        NativeColumns(NativeColumns &&) = default ;
        NativeColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NativeColumns() = default ;
        NativeColumns& operator=(const NativeColumns &) = default ;
        NativeColumns& operator=(NativeColumns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->label_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline NativeColumns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline NativeColumns& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NativeColumns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NativeColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The column comment.
        shared_ptr<string> comment_ {};
        // The sensitivity level label of the column. For more information, see <props="china">[Label-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/label-based-access-control)
        // <props="intl">[Label-based access control](https://www.alibabacloud.com/help/maxcompute/user-guide/label-based-access-control).
        shared_ptr<string> label_ {};
        // The column name.
        shared_ptr<string> name_ {};
        // The data type.
        shared_ptr<string> type_ {};
      };

      class ClusterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(bucketNum, bucketNum_);
          DARABONBA_PTR_TO_JSON(clusterCols, clusterCols_);
          DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
          DARABONBA_PTR_TO_JSON(sortCols, sortCols_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(bucketNum, bucketNum_);
          DARABONBA_PTR_FROM_JSON(clusterCols, clusterCols_);
          DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
          DARABONBA_PTR_FROM_JSON(sortCols, sortCols_);
        };
        ClusterInfo() = default ;
        ClusterInfo(const ClusterInfo &) = default ;
        ClusterInfo(ClusterInfo &&) = default ;
        ClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterInfo() = default ;
        ClusterInfo& operator=(const ClusterInfo &) = default ;
        ClusterInfo& operator=(ClusterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SortCols : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SortCols& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(order, order_);
          };
          friend void from_json(const Darabonba::Json& j, SortCols& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(order, order_);
          };
          SortCols() = default ;
          SortCols(const SortCols &) = default ;
          SortCols(SortCols &&) = default ;
          SortCols(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SortCols() = default ;
          SortCols& operator=(const SortCols &) = default ;
          SortCols& operator=(SortCols &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->order_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SortCols& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // order Field Functions 
          bool hasOrder() const { return this->order_ != nullptr;};
          void deleteOrder() { this->order_ = nullptr;};
          inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
          inline SortCols& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


        protected:
          // The name of the sort column.
          shared_ptr<string> name_ {};
          // The sort order.
          shared_ptr<string> order_ {};
        };

        virtual bool empty() const override { return this->bucketNum_ == nullptr
        && this->clusterCols_ == nullptr && this->clusterType_ == nullptr && this->sortCols_ == nullptr; };
        // bucketNum Field Functions 
        bool hasBucketNum() const { return this->bucketNum_ != nullptr;};
        void deleteBucketNum() { this->bucketNum_ = nullptr;};
        inline int64_t getBucketNum() const { DARABONBA_PTR_GET_DEFAULT(bucketNum_, 0L) };
        inline ClusterInfo& setBucketNum(int64_t bucketNum) { DARABONBA_PTR_SET_VALUE(bucketNum_, bucketNum) };


        // clusterCols Field Functions 
        bool hasClusterCols() const { return this->clusterCols_ != nullptr;};
        void deleteClusterCols() { this->clusterCols_ = nullptr;};
        inline const vector<string> & getClusterCols() const { DARABONBA_PTR_GET_CONST(clusterCols_, vector<string>) };
        inline vector<string> getClusterCols() { DARABONBA_PTR_GET(clusterCols_, vector<string>) };
        inline ClusterInfo& setClusterCols(const vector<string> & clusterCols) { DARABONBA_PTR_SET_VALUE(clusterCols_, clusterCols) };
        inline ClusterInfo& setClusterCols(vector<string> && clusterCols) { DARABONBA_PTR_SET_RVALUE(clusterCols_, clusterCols) };


        // clusterType Field Functions 
        bool hasClusterType() const { return this->clusterType_ != nullptr;};
        void deleteClusterType() { this->clusterType_ = nullptr;};
        inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
        inline ClusterInfo& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


        // sortCols Field Functions 
        bool hasSortCols() const { return this->sortCols_ != nullptr;};
        void deleteSortCols() { this->sortCols_ = nullptr;};
        inline const vector<ClusterInfo::SortCols> & getSortCols() const { DARABONBA_PTR_GET_CONST(sortCols_, vector<ClusterInfo::SortCols>) };
        inline vector<ClusterInfo::SortCols> getSortCols() { DARABONBA_PTR_GET(sortCols_, vector<ClusterInfo::SortCols>) };
        inline ClusterInfo& setSortCols(const vector<ClusterInfo::SortCols> & sortCols) { DARABONBA_PTR_SET_VALUE(sortCols_, sortCols) };
        inline ClusterInfo& setSortCols(vector<ClusterInfo::SortCols> && sortCols) { DARABONBA_PTR_SET_RVALUE(sortCols_, sortCols) };


      protected:
        // The number of buckets in the clustered table. This is an optional field. A value of 0 indicates that the number of buckets is dynamically determined during job execution.
        shared_ptr<int64_t> bucketNum_ {};
        // The cluster key.
        shared_ptr<vector<string>> clusterCols_ {};
        // The clustering type of the table. MaxCompute currently supports <props="china">[Hash Clustering](https://www.alibabacloud.com/help/en/maxcompute/use-cases/hash-clustering)
        // <props="intl">[Hash Clustering](https://www.alibabacloud.com/help/maxcompute/use-cases/hash-clustering) and
        // <props="china"> [Range Clustering](https://www.alibabacloud.com/help/en/maxcompute/use-cases/hash-clustering)
        // <props="intl">[Range Clustering](https://www.alibabacloud.com/help/maxcompute/use-cases/range-clustering).
        shared_ptr<string> clusterType_ {};
        // The sort columns.
        shared_ptr<vector<ClusterInfo::SortCols>> sortCols_ {};
      };

      virtual bool empty() const override { return this->autoRefreshEnabled_ == nullptr
        && this->clusterInfo_ == nullptr && this->comment_ == nullptr && this->createTableDDL_ == nullptr && this->creationTime_ == nullptr && this->displayName_ == nullptr
        && this->fileNum_ == nullptr && this->isExternalTable_ == nullptr && this->isOutdated_ == nullptr && this->lastAccessTime_ == nullptr && this->lastDDLTime_ == nullptr
        && this->lastModifiedTime_ == nullptr && this->lifecycle_ == nullptr && this->location_ == nullptr && this->materializedView_ == nullptr && this->name_ == nullptr
        && this->nativeColumns_ == nullptr && this->odpsPropertiesRolearn_ == nullptr && this->odpsSqlTextOptionFlushHeader_ == nullptr && this->odpsTextOptionHeaderLinesCount_ == nullptr && this->owner_ == nullptr
        && this->partitionColumns_ == nullptr && this->physicalSize_ == nullptr && this->projectName_ == nullptr && this->rewriteEnabled_ == nullptr && this->schema_ == nullptr
        && this->size_ == nullptr && this->storageHandler_ == nullptr && this->tableLabel_ == nullptr && this->tablesotreTableName_ == nullptr && this->tablestoreColumnsMapping_ == nullptr
        && this->type_ == nullptr && this->viewText_ == nullptr; };
      // autoRefreshEnabled Field Functions 
      bool hasAutoRefreshEnabled() const { return this->autoRefreshEnabled_ != nullptr;};
      void deleteAutoRefreshEnabled() { this->autoRefreshEnabled_ = nullptr;};
      inline bool getAutoRefreshEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoRefreshEnabled_, false) };
      inline Data& setAutoRefreshEnabled(bool autoRefreshEnabled) { DARABONBA_PTR_SET_VALUE(autoRefreshEnabled_, autoRefreshEnabled) };


      // clusterInfo Field Functions 
      bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
      void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
      inline const Data::ClusterInfo & getClusterInfo() const { DARABONBA_PTR_GET_CONST(clusterInfo_, Data::ClusterInfo) };
      inline Data::ClusterInfo getClusterInfo() { DARABONBA_PTR_GET(clusterInfo_, Data::ClusterInfo) };
      inline Data& setClusterInfo(const Data::ClusterInfo & clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };
      inline Data& setClusterInfo(Data::ClusterInfo && clusterInfo) { DARABONBA_PTR_SET_RVALUE(clusterInfo_, clusterInfo) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTableDDL Field Functions 
      bool hasCreateTableDDL() const { return this->createTableDDL_ != nullptr;};
      void deleteCreateTableDDL() { this->createTableDDL_ = nullptr;};
      inline string getCreateTableDDL() const { DARABONBA_PTR_GET_DEFAULT(createTableDDL_, "") };
      inline Data& setCreateTableDDL(string createTableDDL) { DARABONBA_PTR_SET_VALUE(createTableDDL_, createTableDDL) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline Data& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // fileNum Field Functions 
      bool hasFileNum() const { return this->fileNum_ != nullptr;};
      void deleteFileNum() { this->fileNum_ = nullptr;};
      inline int64_t getFileNum() const { DARABONBA_PTR_GET_DEFAULT(fileNum_, 0L) };
      inline Data& setFileNum(int64_t fileNum) { DARABONBA_PTR_SET_VALUE(fileNum_, fileNum) };


      // isExternalTable Field Functions 
      bool hasIsExternalTable() const { return this->isExternalTable_ != nullptr;};
      void deleteIsExternalTable() { this->isExternalTable_ = nullptr;};
      inline bool getIsExternalTable() const { DARABONBA_PTR_GET_DEFAULT(isExternalTable_, false) };
      inline Data& setIsExternalTable(bool isExternalTable) { DARABONBA_PTR_SET_VALUE(isExternalTable_, isExternalTable) };


      // isOutdated Field Functions 
      bool hasIsOutdated() const { return this->isOutdated_ != nullptr;};
      void deleteIsOutdated() { this->isOutdated_ = nullptr;};
      inline bool getIsOutdated() const { DARABONBA_PTR_GET_DEFAULT(isOutdated_, false) };
      inline Data& setIsOutdated(bool isOutdated) { DARABONBA_PTR_SET_VALUE(isOutdated_, isOutdated) };


      // lastAccessTime Field Functions 
      bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
      void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
      inline int64_t getLastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
      inline Data& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


      // lastDDLTime Field Functions 
      bool hasLastDDLTime() const { return this->lastDDLTime_ != nullptr;};
      void deleteLastDDLTime() { this->lastDDLTime_ = nullptr;};
      inline int64_t getLastDDLTime() const { DARABONBA_PTR_GET_DEFAULT(lastDDLTime_, 0L) };
      inline Data& setLastDDLTime(int64_t lastDDLTime) { DARABONBA_PTR_SET_VALUE(lastDDLTime_, lastDDLTime) };


      // lastModifiedTime Field Functions 
      bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
      void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
      inline int64_t getLastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
      inline Data& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


      // lifecycle Field Functions 
      bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
      void deleteLifecycle() { this->lifecycle_ = nullptr;};
      inline string getLifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, "") };
      inline Data& setLifecycle(string lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Data& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // materializedView Field Functions 
      bool hasMaterializedView() const { return this->materializedView_ != nullptr;};
      void deleteMaterializedView() { this->materializedView_ = nullptr;};
      inline bool getMaterializedView() const { DARABONBA_PTR_GET_DEFAULT(materializedView_, false) };
      inline Data& setMaterializedView(bool materializedView) { DARABONBA_PTR_SET_VALUE(materializedView_, materializedView) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nativeColumns Field Functions 
      bool hasNativeColumns() const { return this->nativeColumns_ != nullptr;};
      void deleteNativeColumns() { this->nativeColumns_ = nullptr;};
      inline const vector<Data::NativeColumns> & getNativeColumns() const { DARABONBA_PTR_GET_CONST(nativeColumns_, vector<Data::NativeColumns>) };
      inline vector<Data::NativeColumns> getNativeColumns() { DARABONBA_PTR_GET(nativeColumns_, vector<Data::NativeColumns>) };
      inline Data& setNativeColumns(const vector<Data::NativeColumns> & nativeColumns) { DARABONBA_PTR_SET_VALUE(nativeColumns_, nativeColumns) };
      inline Data& setNativeColumns(vector<Data::NativeColumns> && nativeColumns) { DARABONBA_PTR_SET_RVALUE(nativeColumns_, nativeColumns) };


      // odpsPropertiesRolearn Field Functions 
      bool hasOdpsPropertiesRolearn() const { return this->odpsPropertiesRolearn_ != nullptr;};
      void deleteOdpsPropertiesRolearn() { this->odpsPropertiesRolearn_ = nullptr;};
      inline string getOdpsPropertiesRolearn() const { DARABONBA_PTR_GET_DEFAULT(odpsPropertiesRolearn_, "") };
      inline Data& setOdpsPropertiesRolearn(string odpsPropertiesRolearn) { DARABONBA_PTR_SET_VALUE(odpsPropertiesRolearn_, odpsPropertiesRolearn) };


      // odpsSqlTextOptionFlushHeader Field Functions 
      bool hasOdpsSqlTextOptionFlushHeader() const { return this->odpsSqlTextOptionFlushHeader_ != nullptr;};
      void deleteOdpsSqlTextOptionFlushHeader() { this->odpsSqlTextOptionFlushHeader_ = nullptr;};
      inline bool getOdpsSqlTextOptionFlushHeader() const { DARABONBA_PTR_GET_DEFAULT(odpsSqlTextOptionFlushHeader_, false) };
      inline Data& setOdpsSqlTextOptionFlushHeader(bool odpsSqlTextOptionFlushHeader) { DARABONBA_PTR_SET_VALUE(odpsSqlTextOptionFlushHeader_, odpsSqlTextOptionFlushHeader) };


      // odpsTextOptionHeaderLinesCount Field Functions 
      bool hasOdpsTextOptionHeaderLinesCount() const { return this->odpsTextOptionHeaderLinesCount_ != nullptr;};
      void deleteOdpsTextOptionHeaderLinesCount() { this->odpsTextOptionHeaderLinesCount_ = nullptr;};
      inline int64_t getOdpsTextOptionHeaderLinesCount() const { DARABONBA_PTR_GET_DEFAULT(odpsTextOptionHeaderLinesCount_, 0L) };
      inline Data& setOdpsTextOptionHeaderLinesCount(int64_t odpsTextOptionHeaderLinesCount) { DARABONBA_PTR_SET_VALUE(odpsTextOptionHeaderLinesCount_, odpsTextOptionHeaderLinesCount) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // partitionColumns Field Functions 
      bool hasPartitionColumns() const { return this->partitionColumns_ != nullptr;};
      void deletePartitionColumns() { this->partitionColumns_ = nullptr;};
      inline const vector<Data::PartitionColumns> & getPartitionColumns() const { DARABONBA_PTR_GET_CONST(partitionColumns_, vector<Data::PartitionColumns>) };
      inline vector<Data::PartitionColumns> getPartitionColumns() { DARABONBA_PTR_GET(partitionColumns_, vector<Data::PartitionColumns>) };
      inline Data& setPartitionColumns(const vector<Data::PartitionColumns> & partitionColumns) { DARABONBA_PTR_SET_VALUE(partitionColumns_, partitionColumns) };
      inline Data& setPartitionColumns(vector<Data::PartitionColumns> && partitionColumns) { DARABONBA_PTR_SET_RVALUE(partitionColumns_, partitionColumns) };


      // physicalSize Field Functions 
      bool hasPhysicalSize() const { return this->physicalSize_ != nullptr;};
      void deletePhysicalSize() { this->physicalSize_ = nullptr;};
      inline int64_t getPhysicalSize() const { DARABONBA_PTR_GET_DEFAULT(physicalSize_, 0L) };
      inline Data& setPhysicalSize(int64_t physicalSize) { DARABONBA_PTR_SET_VALUE(physicalSize_, physicalSize) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // rewriteEnabled Field Functions 
      bool hasRewriteEnabled() const { return this->rewriteEnabled_ != nullptr;};
      void deleteRewriteEnabled() { this->rewriteEnabled_ = nullptr;};
      inline bool getRewriteEnabled() const { DARABONBA_PTR_GET_DEFAULT(rewriteEnabled_, false) };
      inline Data& setRewriteEnabled(bool rewriteEnabled) { DARABONBA_PTR_SET_VALUE(rewriteEnabled_, rewriteEnabled) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Data& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // storageHandler Field Functions 
      bool hasStorageHandler() const { return this->storageHandler_ != nullptr;};
      void deleteStorageHandler() { this->storageHandler_ = nullptr;};
      inline string getStorageHandler() const { DARABONBA_PTR_GET_DEFAULT(storageHandler_, "") };
      inline Data& setStorageHandler(string storageHandler) { DARABONBA_PTR_SET_VALUE(storageHandler_, storageHandler) };


      // tableLabel Field Functions 
      bool hasTableLabel() const { return this->tableLabel_ != nullptr;};
      void deleteTableLabel() { this->tableLabel_ = nullptr;};
      inline string getTableLabel() const { DARABONBA_PTR_GET_DEFAULT(tableLabel_, "") };
      inline Data& setTableLabel(string tableLabel) { DARABONBA_PTR_SET_VALUE(tableLabel_, tableLabel) };


      // tablesotreTableName Field Functions 
      bool hasTablesotreTableName() const { return this->tablesotreTableName_ != nullptr;};
      void deleteTablesotreTableName() { this->tablesotreTableName_ = nullptr;};
      inline string getTablesotreTableName() const { DARABONBA_PTR_GET_DEFAULT(tablesotreTableName_, "") };
      inline Data& setTablesotreTableName(string tablesotreTableName) { DARABONBA_PTR_SET_VALUE(tablesotreTableName_, tablesotreTableName) };


      // tablestoreColumnsMapping Field Functions 
      bool hasTablestoreColumnsMapping() const { return this->tablestoreColumnsMapping_ != nullptr;};
      void deleteTablestoreColumnsMapping() { this->tablestoreColumnsMapping_ = nullptr;};
      inline string getTablestoreColumnsMapping() const { DARABONBA_PTR_GET_DEFAULT(tablestoreColumnsMapping_, "") };
      inline Data& setTablestoreColumnsMapping(string tablestoreColumnsMapping) { DARABONBA_PTR_SET_VALUE(tablestoreColumnsMapping_, tablestoreColumnsMapping) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // viewText Field Functions 
      bool hasViewText() const { return this->viewText_ != nullptr;};
      void deleteViewText() { this->viewText_ = nullptr;};
      inline string getViewText() const { DARABONBA_PTR_GET_DEFAULT(viewText_, "") };
      inline Data& setViewText(string viewText) { DARABONBA_PTR_SET_VALUE(viewText_, viewText) };


    protected:
      // Indicates whether automatic refresh of the materialized view is enabled. This parameter is returned only when the type is materialized view.
      shared_ptr<bool> autoRefreshEnabled_ {};
      // The clustering properties. This parameter is returned only when the table type is clustered table.
      shared_ptr<Data::ClusterInfo> clusterInfo_ {};
      // The table comment.
      shared_ptr<string> comment_ {};
      // The DDL statement used to create the table.
      shared_ptr<string> createTableDDL_ {};
      // The creation time. The time is in ISO 8601 format and in the UTC time zone.
      shared_ptr<int64_t> creationTime_ {};
      // The display name.
      shared_ptr<string> displayName_ {};
      // The number of files.
      shared_ptr<int64_t> fileNum_ {};
      // Indicates whether the table is an external table. This parameter is returned only when the type is table.
      shared_ptr<bool> isExternalTable_ {};
      // Indicates whether the data in the materialized view is invalid due to changes in the source table data. This parameter is returned only when the type is materialized view.
      shared_ptr<bool> isOutdated_ {};
      // The time when the data of the table or view was last accessed. This parameter is returned only when the table is a non-partitioned table.
      // > This data has been gradually collected since July 2023. If the table has not been accessed after the upgrade, or if it is accessed through ALGO jobs or Hologres direct read, the last_access_time cannot be collected.
      shared_ptr<int64_t> lastAccessTime_ {};
      // The time when the DDL statement of the table or view was last modified.
      shared_ptr<int64_t> lastDDLTime_ {};
      // The time when the data of the table or view was last modified. The time is in ISO 8601 format and in the UTC time zone.
      shared_ptr<int64_t> lastModifiedTime_ {};
      // The lifecycle in days.
      shared_ptr<string> lifecycle_ {};
      // The external table location. This parameter is returned only when the type is external table.
      shared_ptr<string> location_ {};
      // Indicates whether the table is a <props="china">[materialized view](https://www.alibabacloud.com/help/en/maxcompute/user-guide/materialized-view-operations)
      // <props="intl">[materialized view](https://www.alibabacloud.com/help/maxcompute/user-guide/materialized-view-operations).
      shared_ptr<bool> materializedView_ {};
      // The name of the table or view.
      shared_ptr<string> name_ {};
      // The column information.
      shared_ptr<vector<Data::NativeColumns>> nativeColumns_ {};
      // The ARN of AliyunODPSDefaultRole in RAM. This parameter is returned only when the type is external table.
      shared_ptr<string> odpsPropertiesRolearn_ {};
      // Indicates whether to ignore the header. This parameter is returned only when the type is external table.
      shared_ptr<bool> odpsSqlTextOptionFlushHeader_ {};
      // The number of header lines to ignore. This parameter is returned only when the type is external table.
      shared_ptr<int64_t> odpsTextOptionHeaderLinesCount_ {};
      // The account information of the owner of the table or view.
      shared_ptr<string> owner_ {};
      // The partition column information. This parameter is returned only for partitioned tables.
      shared_ptr<vector<Data::PartitionColumns>> partitionColumns_ {};
      // The physical size.
      shared_ptr<int64_t> physicalSize_ {};
      // The name of the project to which the table or view belongs.
      shared_ptr<string> projectName_ {};
      // Indicates whether query rewrite through the materialized view is allowed. This parameter is returned only when the type is materialized view.
      shared_ptr<bool> rewriteEnabled_ {};
      // The name of the schema to which the table or view belongs.
      shared_ptr<string> schema_ {};
      // The data size of the table. If the table is a non-partitioned table, the value is the data size of the table. If the table is a partitioned table, the system does not calculate the data size of the table, and the value is NULL. The PARTITIONS view contains the data size of each partition in the partitioned table. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The external table parser. This parameter is returned only when the type is external table.
      shared_ptr<string> storageHandler_ {};
      // The sensitivity level label of the table. For more information, see <props="china">[Label-based access control](https://www.alibabacloud.com/help/en/maxcompute/user-guide/label-based-access-control)
      // <props="intl">[Label-based access control](https://www.alibabacloud.com/help/maxcompute/user-guide/label-based-access-control).
      shared_ptr<string> tableLabel_ {};
      // The name of the Tablestore table to be accessed. This parameter is returned only when the type is external table.
      shared_ptr<string> tablesotreTableName_ {};
      // The columns of the Tablestore table to be accessed by MaxCompute, including the primary key columns and attribute columns. This parameter is returned only when the type is external table.
      shared_ptr<string> tablestoreColumnsMapping_ {};
      // The type of the table or view. Valid values:
      // - **internal**: Internal table.
      // - **external**: External table.
      // - **view**: View.
      // - **materializedView**: <props="china">[Materialized view](https://www.alibabacloud.com/help/en/maxcompute/user-guide/materialized-view-operations)
      // <props="intl">[Materialized view](https://www.alibabacloud.com/help/maxcompute/user-guide/materialized-view-operations).
      shared_ptr<string> type_ {};
      // The statement used to create the view. This parameter is returned only when the type is view.
      shared_ptr<string> viewText_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTableInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTableInfoResponseBody::Data) };
    inline GetTableInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTableInfoResponseBody::Data) };
    inline GetTableInfoResponseBody& setData(const GetTableInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTableInfoResponseBody& setData(GetTableInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response result.
    shared_ptr<GetTableInfoResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
