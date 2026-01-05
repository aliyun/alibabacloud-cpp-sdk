// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourcesResponseBody() = default ;
    ListDataSourcesResponseBody(const ListDataSourcesResponseBody &) = default ;
    ListDataSourcesResponseBody(ListDataSourcesResponseBody &&) = default ;
    ListDataSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBody() = default ;
    ListDataSourcesResponseBody& operator=(const ListDataSourcesResponseBody &) = default ;
    ListDataSourcesResponseBody& operator=(ListDataSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
          DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
          DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DataSources() = default ;
        DataSources(const DataSources &) = default ;
        DataSources(DataSources &&) = default ;
        DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSources() = default ;
        DataSources& operator=(const DataSources &) = default ;
        DataSources& operator=(DataSources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataSource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
            DARABONBA_ANY_TO_JSON(ConnectionProperties, connectionProperties_);
            DARABONBA_PTR_TO_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
            DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
          };
          friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
            DARABONBA_ANY_FROM_JSON(ConnectionProperties, connectionProperties_);
            DARABONBA_PTR_FROM_JSON(ConnectionPropertiesMode, connectionPropertiesMode_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
            DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
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
          virtual bool empty() const override { return this->connectionProperties_ == nullptr
        && this->connectionPropertiesMode_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->description_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUser_ == nullptr && this->qualifiedName_ == nullptr; };
          // connectionProperties Field Functions 
          bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
          void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
          inline           const Darabonba::Json & getConnectionProperties() const { DARABONBA_GET(connectionProperties_) };
          Darabonba::Json & getConnectionProperties() { DARABONBA_GET(connectionProperties_) };
          inline DataSource& setConnectionProperties(const Darabonba::Json & connectionProperties) { DARABONBA_SET_VALUE(connectionProperties_, connectionProperties) };
          inline DataSource& setConnectionProperties(Darabonba::Json && connectionProperties) { DARABONBA_SET_RVALUE(connectionProperties_, connectionProperties) };


          // connectionPropertiesMode Field Functions 
          bool hasConnectionPropertiesMode() const { return this->connectionPropertiesMode_ != nullptr;};
          void deleteConnectionPropertiesMode() { this->connectionPropertiesMode_ = nullptr;};
          inline string getConnectionPropertiesMode() const { DARABONBA_PTR_GET_DEFAULT(connectionPropertiesMode_, "") };
          inline DataSource& setConnectionPropertiesMode(string connectionPropertiesMode) { DARABONBA_PTR_SET_VALUE(connectionPropertiesMode_, connectionPropertiesMode) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
          inline DataSource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // createUser Field Functions 
          bool hasCreateUser() const { return this->createUser_ != nullptr;};
          void deleteCreateUser() { this->createUser_ = nullptr;};
          inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
          inline DataSource& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline DataSource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline DataSource& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
          inline DataSource& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // modifyUser Field Functions 
          bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
          void deleteModifyUser() { this->modifyUser_ = nullptr;};
          inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
          inline DataSource& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


          // qualifiedName Field Functions 
          bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
          void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
          inline string getQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
          inline DataSource& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


        protected:
          // The connection configurations of the data source, including the connection address, access identity, and environment information. The envType parameter specifies the environment in which the data source is used. Valid values of the envType parameter:
          // 
          // *   Dev: development environment
          // *   Prod: production environment
          // 
          // The parameters that you need to configure for the data source vary based on the mode in which the data source is added. For more information, see [Data source connection information (ConnectionProperties)](https://help.aliyun.com/document_detail/2852465.html).
          Darabonba::Json connectionProperties_ {};
          // The mode in which the data source is added. The mode varies based on the data source type. Valid values:
          // 
          // *   InstanceMode: instance mode
          // *   UrlMode: connection string mode
          shared_ptr<string> connectionPropertiesMode_ {};
          // The time when the data source was added. This value is a UNIX timestamp.
          shared_ptr<int64_t> createTime_ {};
          // The ID of the user who adds the data source.
          shared_ptr<string> createUser_ {};
          // The description of the data source.
          shared_ptr<string> description_ {};
          // The ID of the data source.
          shared_ptr<int64_t> id_ {};
          // The time when the data source was last modified. This value is a UNIX timestamp.
          shared_ptr<int64_t> modifyTime_ {};
          // The ID of the user who modifies the data source.
          shared_ptr<string> modifyUser_ {};
          // The unique business key of the data source. For example, the unique business key of a Hologres data source is in the `${tenantOwnerId}:${regionId}:${type}:${instanceId}:${database}` format.
          shared_ptr<string> qualifiedName_ {};
        };

        virtual bool empty() const override { return this->dataSource_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
        // dataSource Field Functions 
        bool hasDataSource() const { return this->dataSource_ != nullptr;};
        void deleteDataSource() { this->dataSource_ = nullptr;};
        inline const vector<DataSources::DataSource> & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, vector<DataSources::DataSource>) };
        inline vector<DataSources::DataSource> getDataSource() { DARABONBA_PTR_GET(dataSource_, vector<DataSources::DataSource>) };
        inline DataSources& setDataSource(const vector<DataSources::DataSource> & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
        inline DataSources& setDataSource(vector<DataSources::DataSource> && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataSources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataSources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The data sources. Each element is the information of a single data source with a unique data source ID.
        shared_ptr<vector<DataSources::DataSource>> dataSource_ {};
        // The name of the data source.
        shared_ptr<string> name_ {};
        // The type of the data source.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dataSources_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataSources Field Functions 
      bool hasDataSources() const { return this->dataSources_ != nullptr;};
      void deleteDataSources() { this->dataSources_ = nullptr;};
      inline const vector<PagingInfo::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<PagingInfo::DataSources>) };
      inline vector<PagingInfo::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<PagingInfo::DataSources>) };
      inline PagingInfo& setDataSources(const vector<PagingInfo::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
      inline PagingInfo& setDataSources(vector<PagingInfo::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline PagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline PagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The data source groups. Each element in the array indicates a data source group. Each data source group contains data sources in the development environment (if any) and the production environment.
      shared_ptr<vector<PagingInfo::DataSources>> dataSources_ {};
      // The page number.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDataSourcesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDataSourcesResponseBody::PagingInfo) };
    inline ListDataSourcesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDataSourcesResponseBody::PagingInfo) };
    inline ListDataSourcesResponseBody& setPagingInfo(const ListDataSourcesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDataSourcesResponseBody& setPagingInfo(ListDataSourcesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDataSourcesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
