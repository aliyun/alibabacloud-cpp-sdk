// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
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
    class DataSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSourceFrom, dataSourceFrom_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
        DARABONBA_PTR_TO_JSON(DataSourceRecognizer, dataSourceRecognizer_);
        DARABONBA_PTR_TO_JSON(DataSourceReferences, dataSourceReferences_);
        DARABONBA_PTR_TO_JSON(DataSourceStatus, dataSourceStatus_);
        DARABONBA_PTR_TO_JSON(DataSourceStores, dataSourceStores_);
        DARABONBA_PTR_TO_JSON(DataSourceTemplateId, dataSourceTemplateId_);
        DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
        DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSourceFrom, dataSourceFrom_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
        DARABONBA_PTR_FROM_JSON(DataSourceRecognizer, dataSourceRecognizer_);
        DARABONBA_PTR_FROM_JSON(DataSourceReferences, dataSourceReferences_);
        DARABONBA_PTR_FROM_JSON(DataSourceStatus, dataSourceStatus_);
        DARABONBA_PTR_FROM_JSON(DataSourceStores, dataSourceStores_);
        DARABONBA_PTR_FROM_JSON(DataSourceTemplateId, dataSourceTemplateId_);
        DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
        DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
      class DataSourceStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceStores& obj) { 
          DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
          DARABONBA_PTR_TO_JSON(DataSourceStoreId, dataSourceStoreId_);
          DARABONBA_PTR_TO_JSON(DataSourceStoreStatus, dataSourceStoreStatus_);
          DARABONBA_PTR_TO_JSON(DataSourceStoreStatusCode, dataSourceStoreStatusCode_);
          DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
          DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceStores& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
          DARABONBA_PTR_FROM_JSON(DataSourceStoreId, dataSourceStoreId_);
          DARABONBA_PTR_FROM_JSON(DataSourceStoreStatus, dataSourceStoreStatus_);
          DARABONBA_PTR_FROM_JSON(DataSourceStoreStatusCode, dataSourceStoreStatusCode_);
          DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
          DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        DataSourceStores() = default ;
        DataSourceStores(const DataSourceStores &) = default ;
        DataSourceStores(DataSourceStores &&) = default ;
        DataSourceStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceStores() = default ;
        DataSourceStores& operator=(const DataSourceStores &) = default ;
        DataSourceStores& operator=(DataSourceStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkTime_ == nullptr
        && this->createTime_ == nullptr && this->dataSourceStoreFrom_ == nullptr && this->dataSourceStoreId_ == nullptr && this->dataSourceStoreStatus_ == nullptr && this->dataSourceStoreStatusCode_ == nullptr
        && this->logProjectName_ == nullptr && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr && this->updateTime_ == nullptr; };
        // checkTime Field Functions 
        bool hasCheckTime() const { return this->checkTime_ != nullptr;};
        void deleteCheckTime() { this->checkTime_ = nullptr;};
        inline int64_t getCheckTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, 0L) };
        inline DataSourceStores& setCheckTime(int64_t checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataSourceStores& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataSourceStoreFrom Field Functions 
        bool hasDataSourceStoreFrom() const { return this->dataSourceStoreFrom_ != nullptr;};
        void deleteDataSourceStoreFrom() { this->dataSourceStoreFrom_ = nullptr;};
        inline string getDataSourceStoreFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreFrom_, "") };
        inline DataSourceStores& setDataSourceStoreFrom(string dataSourceStoreFrom) { DARABONBA_PTR_SET_VALUE(dataSourceStoreFrom_, dataSourceStoreFrom) };


        // dataSourceStoreId Field Functions 
        bool hasDataSourceStoreId() const { return this->dataSourceStoreId_ != nullptr;};
        void deleteDataSourceStoreId() { this->dataSourceStoreId_ = nullptr;};
        inline string getDataSourceStoreId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreId_, "") };
        inline DataSourceStores& setDataSourceStoreId(string dataSourceStoreId) { DARABONBA_PTR_SET_VALUE(dataSourceStoreId_, dataSourceStoreId) };


        // dataSourceStoreStatus Field Functions 
        bool hasDataSourceStoreStatus() const { return this->dataSourceStoreStatus_ != nullptr;};
        void deleteDataSourceStoreStatus() { this->dataSourceStoreStatus_ = nullptr;};
        inline string getDataSourceStoreStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreStatus_, "") };
        inline DataSourceStores& setDataSourceStoreStatus(string dataSourceStoreStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStoreStatus_, dataSourceStoreStatus) };


        // dataSourceStoreStatusCode Field Functions 
        bool hasDataSourceStoreStatusCode() const { return this->dataSourceStoreStatusCode_ != nullptr;};
        void deleteDataSourceStoreStatusCode() { this->dataSourceStoreStatusCode_ = nullptr;};
        inline string getDataSourceStoreStatusCode() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreStatusCode_, "") };
        inline DataSourceStores& setDataSourceStoreStatusCode(string dataSourceStoreStatusCode) { DARABONBA_PTR_SET_VALUE(dataSourceStoreStatusCode_, dataSourceStoreStatusCode) };


        // logProjectName Field Functions 
        bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
        void deleteLogProjectName() { this->logProjectName_ = nullptr;};
        inline string getLogProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
        inline DataSourceStores& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


        // logRegionId Field Functions 
        bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
        void deleteLogRegionId() { this->logRegionId_ = nullptr;};
        inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
        inline DataSourceStores& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline DataSourceStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline DataSourceStores& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<int64_t> checkTime_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> dataSourceStoreFrom_ {};
        shared_ptr<string> dataSourceStoreId_ {};
        shared_ptr<string> dataSourceStoreStatus_ {};
        shared_ptr<string> dataSourceStoreStatusCode_ {};
        shared_ptr<string> logProjectName_ {};
        shared_ptr<string> logRegionId_ {};
        shared_ptr<string> logStoreName_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      class DataSourceReferences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceReferences& obj) { 
          DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceReferences& obj) { 
          DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
        };
        DataSourceReferences() = default ;
        DataSourceReferences(const DataSourceReferences &) = default ;
        DataSourceReferences(DataSourceReferences &&) = default ;
        DataSourceReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceReferences() = default ;
        DataSourceReferences& operator=(const DataSourceReferences &) = default ;
        DataSourceReferences& operator=(DataSourceReferences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataIngestionId_ == nullptr; };
        // dataIngestionId Field Functions 
        bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
        void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
        inline string getDataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
        inline DataSourceReferences& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


      protected:
        shared_ptr<string> dataIngestionId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dataSourceFrom_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceRecognizeEnabled_ == nullptr && this->dataSourceRecognizer_ == nullptr
        && this->dataSourceReferences_ == nullptr && this->dataSourceStatus_ == nullptr && this->dataSourceStores_ == nullptr && this->dataSourceTemplateId_ == nullptr && this->dataSourceType_ == nullptr
        && this->logProjectName_ == nullptr && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr && this->logUserId_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataSources& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSourceFrom Field Functions 
      bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
      void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
      inline string getDataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
      inline DataSources& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline DataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline DataSources& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // dataSourceRecognizeEnabled Field Functions 
      bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
      void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
      inline bool getDataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
      inline DataSources& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


      // dataSourceRecognizer Field Functions 
      bool hasDataSourceRecognizer() const { return this->dataSourceRecognizer_ != nullptr;};
      void deleteDataSourceRecognizer() { this->dataSourceRecognizer_ = nullptr;};
      inline string getDataSourceRecognizer() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizer_, "") };
      inline DataSources& setDataSourceRecognizer(string dataSourceRecognizer) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizer_, dataSourceRecognizer) };


      // dataSourceReferences Field Functions 
      bool hasDataSourceReferences() const { return this->dataSourceReferences_ != nullptr;};
      void deleteDataSourceReferences() { this->dataSourceReferences_ = nullptr;};
      inline const vector<DataSources::DataSourceReferences> & getDataSourceReferences() const { DARABONBA_PTR_GET_CONST(dataSourceReferences_, vector<DataSources::DataSourceReferences>) };
      inline vector<DataSources::DataSourceReferences> getDataSourceReferences() { DARABONBA_PTR_GET(dataSourceReferences_, vector<DataSources::DataSourceReferences>) };
      inline DataSources& setDataSourceReferences(const vector<DataSources::DataSourceReferences> & dataSourceReferences) { DARABONBA_PTR_SET_VALUE(dataSourceReferences_, dataSourceReferences) };
      inline DataSources& setDataSourceReferences(vector<DataSources::DataSourceReferences> && dataSourceReferences) { DARABONBA_PTR_SET_RVALUE(dataSourceReferences_, dataSourceReferences) };


      // dataSourceStatus Field Functions 
      bool hasDataSourceStatus() const { return this->dataSourceStatus_ != nullptr;};
      void deleteDataSourceStatus() { this->dataSourceStatus_ = nullptr;};
      inline string getDataSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStatus_, "") };
      inline DataSources& setDataSourceStatus(string dataSourceStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStatus_, dataSourceStatus) };


      // dataSourceStores Field Functions 
      bool hasDataSourceStores() const { return this->dataSourceStores_ != nullptr;};
      void deleteDataSourceStores() { this->dataSourceStores_ = nullptr;};
      inline const vector<DataSources::DataSourceStores> & getDataSourceStores() const { DARABONBA_PTR_GET_CONST(dataSourceStores_, vector<DataSources::DataSourceStores>) };
      inline vector<DataSources::DataSourceStores> getDataSourceStores() { DARABONBA_PTR_GET(dataSourceStores_, vector<DataSources::DataSourceStores>) };
      inline DataSources& setDataSourceStores(const vector<DataSources::DataSourceStores> & dataSourceStores) { DARABONBA_PTR_SET_VALUE(dataSourceStores_, dataSourceStores) };
      inline DataSources& setDataSourceStores(vector<DataSources::DataSourceStores> && dataSourceStores) { DARABONBA_PTR_SET_RVALUE(dataSourceStores_, dataSourceStores) };


      // dataSourceTemplateId Field Functions 
      bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
      void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
      inline string getDataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
      inline DataSources& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


      // dataSourceType Field Functions 
      bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
      void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
      inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
      inline DataSources& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


      // logProjectName Field Functions 
      bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
      void deleteLogProjectName() { this->logProjectName_ = nullptr;};
      inline string getLogProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
      inline DataSources& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


      // logRegionId Field Functions 
      bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
      void deleteLogRegionId() { this->logRegionId_ = nullptr;};
      inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
      inline DataSources& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline DataSources& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // logUserId Field Functions 
      bool hasLogUserId() const { return this->logUserId_ != nullptr;};
      void deleteLogUserId() { this->logUserId_ = nullptr;};
      inline int64_t getLogUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
      inline DataSources& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DataSources& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> dataSourceFrom_ {};
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<string> dataSourceName_ {};
      shared_ptr<bool> dataSourceRecognizeEnabled_ {};
      shared_ptr<string> dataSourceRecognizer_ {};
      shared_ptr<vector<DataSources::DataSourceReferences>> dataSourceReferences_ {};
      shared_ptr<string> dataSourceStatus_ {};
      shared_ptr<vector<DataSources::DataSourceStores>> dataSourceStores_ {};
      shared_ptr<string> dataSourceTemplateId_ {};
      shared_ptr<string> dataSourceType_ {};
      shared_ptr<string> logProjectName_ {};
      shared_ptr<string> logRegionId_ {};
      shared_ptr<string> logStoreName_ {};
      shared_ptr<int64_t> logUserId_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->dataSources_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<ListDataSourcesResponseBody::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<ListDataSourcesResponseBody::DataSources>) };
    inline vector<ListDataSourcesResponseBody::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<ListDataSourcesResponseBody::DataSources>) };
    inline ListDataSourcesResponseBody& setDataSources(const vector<ListDataSourcesResponseBody::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline ListDataSourcesResponseBody& setDataSources(vector<ListDataSourcesResponseBody::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataSourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataSourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataSourcesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataSourcesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataSourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListDataSourcesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<ListDataSourcesResponseBody::DataSources>> dataSources_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
