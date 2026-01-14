// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDatasetListResponseBody() = default ;
    QueryDatasetListResponseBody(const QueryDatasetListResponseBody &) = default ;
    QueryDatasetListResponseBody(QueryDatasetListResponseBody &&) = default ;
    QueryDatasetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetListResponseBody() = default ;
    QueryDatasetListResponseBody& operator=(const QueryDatasetListResponseBody &) = default ;
    QueryDatasetListResponseBody& operator=(QueryDatasetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
          DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Directory, directory_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(OpenOfflineAcceleration, openOfflineAcceleration_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(RowLevel, rowLevel_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
          DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Directory, directory_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(OpenOfflineAcceleration, openOfflineAcceleration_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(RowLevel, rowLevel_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
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
        class Directory : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Directory& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(PathId, pathId_);
            DARABONBA_PTR_TO_JSON(PathName, pathName_);
          };
          friend void from_json(const Darabonba::Json& j, Directory& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(PathId, pathId_);
            DARABONBA_PTR_FROM_JSON(PathName, pathName_);
          };
          Directory() = default ;
          Directory(const Directory &) = default ;
          Directory(Directory &&) = default ;
          Directory(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Directory() = default ;
          Directory& operator=(const Directory &) = default ;
          Directory& operator=(Directory &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->pathId_ == nullptr && this->pathName_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Directory& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Directory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // pathId Field Functions 
          bool hasPathId() const { return this->pathId_ != nullptr;};
          void deletePathId() { this->pathId_ = nullptr;};
          inline string getPathId() const { DARABONBA_PTR_GET_DEFAULT(pathId_, "") };
          inline Directory& setPathId(string pathId) { DARABONBA_PTR_SET_VALUE(pathId_, pathId) };


          // pathName Field Functions 
          bool hasPathName() const { return this->pathName_ != nullptr;};
          void deletePathName() { this->pathName_ = nullptr;};
          inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
          inline Directory& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


        protected:
          // The ID of the directory path.
          shared_ptr<string> id_ {};
          // The ID of the data source.
          shared_ptr<string> name_ {};
          // The type of the data source.
          shared_ptr<string> pathId_ {};
          // The name of the data source.
          shared_ptr<string> pathName_ {};
        };

        class DataSource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
            DARABONBA_PTR_TO_JSON(DsId, dsId_);
            DARABONBA_PTR_TO_JSON(DsName, dsName_);
            DARABONBA_PTR_TO_JSON(DsType, dsType_);
          };
          friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
            DARABONBA_PTR_FROM_JSON(DsId, dsId_);
            DARABONBA_PTR_FROM_JSON(DsName, dsName_);
            DARABONBA_PTR_FROM_JSON(DsType, dsType_);
          };
          DataSource() = default ;
          DataSource(const DataSource &) = default ;
          DataSource(DataSource &&) = default ;
          DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSource() = default ;
          DataSource& operator=(const DataSource &) = default ;
          DataSource& operator=(DataSource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dsId_ == nullptr
        && this->dsName_ == nullptr && this->dsType_ == nullptr; };
          // dsId Field Functions 
          bool hasDsId() const { return this->dsId_ != nullptr;};
          void deleteDsId() { this->dsId_ = nullptr;};
          inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
          inline DataSource& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


          // dsName Field Functions 
          bool hasDsName() const { return this->dsName_ != nullptr;};
          void deleteDsName() { this->dsName_ = nullptr;};
          inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
          inline DataSource& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


          // dsType Field Functions 
          bool hasDsType() const { return this->dsType_ != nullptr;};
          void deleteDsType() { this->dsType_ = nullptr;};
          inline string getDsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
          inline DataSource& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


        protected:
          // The ID of the training dataset that you want to remove from the specified custom linguistic model.
          shared_ptr<string> dsId_ {};
          // The time when the scaling group was modified.
          shared_ptr<string> dsName_ {};
          // The user ID of the dataset owner in the Quick BI.
          shared_ptr<string> dsType_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSource_ == nullptr && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->description_ == nullptr && this->directory_ == nullptr
        && this->modifyTime_ == nullptr && this->openOfflineAcceleration_ == nullptr && this->ownerId_ == nullptr && this->ownerName_ == nullptr && this->rowLevel_ == nullptr
        && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataSource Field Functions 
        bool hasDataSource() const { return this->dataSource_ != nullptr;};
        void deleteDataSource() { this->dataSource_ = nullptr;};
        inline const Data::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Data::DataSource) };
        inline Data::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, Data::DataSource) };
        inline Data& setDataSource(const Data::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
        inline Data& setDataSource(Data::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


        // datasetId Field Functions 
        bool hasDatasetId() const { return this->datasetId_ != nullptr;};
        void deleteDatasetId() { this->datasetId_ = nullptr;};
        inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
        inline Data& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


        // datasetName Field Functions 
        bool hasDatasetName() const { return this->datasetName_ != nullptr;};
        void deleteDatasetName() { this->datasetName_ = nullptr;};
        inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
        inline Data& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // directory Field Functions 
        bool hasDirectory() const { return this->directory_ != nullptr;};
        void deleteDirectory() { this->directory_ = nullptr;};
        inline const Data::Directory & getDirectory() const { DARABONBA_PTR_GET_CONST(directory_, Data::Directory) };
        inline Data::Directory getDirectory() { DARABONBA_PTR_GET(directory_, Data::Directory) };
        inline Data& setDirectory(const Data::Directory & directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };
        inline Data& setDirectory(Data::Directory && directory) { DARABONBA_PTR_SET_RVALUE(directory_, directory) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline Data& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // openOfflineAcceleration Field Functions 
        bool hasOpenOfflineAcceleration() const { return this->openOfflineAcceleration_ != nullptr;};
        void deleteOpenOfflineAcceleration() { this->openOfflineAcceleration_ = nullptr;};
        inline bool getOpenOfflineAcceleration() const { DARABONBA_PTR_GET_DEFAULT(openOfflineAcceleration_, false) };
        inline Data& setOpenOfflineAcceleration(bool openOfflineAcceleration) { DARABONBA_PTR_SET_VALUE(openOfflineAcceleration_, openOfflineAcceleration) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline Data& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline Data& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // rowLevel Field Functions 
        bool hasRowLevel() const { return this->rowLevel_ != nullptr;};
        void deleteRowLevel() { this->rowLevel_ = nullptr;};
        inline bool getRowLevel() const { DARABONBA_PTR_GET_DEFAULT(rowLevel_, false) };
        inline Data& setRowLevel(bool rowLevel) { DARABONBA_PTR_SET_VALUE(rowLevel_, rowLevel) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        // workspaceName Field Functions 
        bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
        void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
        inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
        inline Data& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      protected:
        // The details of the dataset list.
        shared_ptr<string> createTime_ {};
        // Test Space
        shared_ptr<Data::DataSource> dataSource_ {};
        // The name of the workspace.
        shared_ptr<string> datasetId_ {};
        // Tom
        shared_ptr<string> datasetName_ {};
        // The number of rows per page set when the interface is requested.
        shared_ptr<string> description_ {};
        // The information about the data source to which the dataset belongs.
        shared_ptr<Data::Directory> directory_ {};
        // The nickname of the dataset owner.
        shared_ptr<string> modifyTime_ {};
        shared_ptr<bool> openOfflineAcceleration_ {};
        // The creation time.
        shared_ptr<string> ownerId_ {};
        // Whether to enable row-level permissions. Valid values:
        // 
        // *   true: The VIP Netty channel is enabled.
        // *   false: The incremental log backup feature is disabled.
        shared_ptr<string> ownerName_ {};
        // The total number of pages returned.
        shared_ptr<bool> rowLevel_ {};
        // The page number of the returned page.
        shared_ptr<string> workspaceId_ {};
        // The description of the dataset.
        shared_ptr<string> workspaceName_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalNum_ == nullptr && this->totalPages_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Result& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Result& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Result& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // Returns the pagination results of the dataset list. The detailed information of the dataset list is stored in the response parameter Data.
      shared_ptr<vector<Result::Data>> data_ {};
      // The number of rows per page in a paged query.
      // 
      // *   Default value: 10.
      // *   Maximum value: 1,000.
      shared_ptr<int32_t> pageNum_ {};
      // Indicates whether the request is successful. Valid values:
      // 
      // *   true: The request was successful.
      // *   false: The request failed.
      shared_ptr<int32_t> pageSize_ {};
      // The ID of the request.
      shared_ptr<int32_t> totalNum_ {};
      // Current page number for dataset list:
      // 
      // *   Pages start from page 1.
      // *   Default value: 1.
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDatasetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDatasetListResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryDatasetListResponseBody::Result) };
    inline QueryDatasetListResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryDatasetListResponseBody::Result) };
    inline QueryDatasetListResponseBody& setResult(const QueryDatasetListResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDatasetListResponseBody& setResult(QueryDatasetListResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDatasetListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The keyword used to search for the dataset name.
    shared_ptr<string> requestId_ {};
    // Test dataset
    shared_ptr<QueryDatasetListResponseBody::Result> result_ {};
    // Whether to recursively wrap the dataset in the subdirectory. Valid values:
    // 
    // *   true: returns datasets in all recursive subdirectories in the directoryId directory.
    // *   false: Only datasets in the directory specified by directoryId are returned, excluding subdirectories.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
