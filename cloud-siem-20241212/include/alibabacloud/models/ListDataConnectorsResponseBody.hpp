// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACONNECTORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACONNECTORSRESPONSEBODY_HPP_
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
  class ListDataConnectorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataConnectorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataConnector, dataConnector_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataConnectorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataConnector, dataConnector_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataConnectorsResponseBody() = default ;
    ListDataConnectorsResponseBody(const ListDataConnectorsResponseBody &) = default ;
    ListDataConnectorsResponseBody(ListDataConnectorsResponseBody &&) = default ;
    ListDataConnectorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataConnectorsResponseBody() = default ;
    ListDataConnectorsResponseBody& operator=(const ListDataConnectorsResponseBody &) = default ;
    ListDataConnectorsResponseBody& operator=(ListDataConnectorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataConnector : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataConnector& obj) { 
        DARABONBA_PTR_TO_JSON(AuthConfigId, authConfigId_);
        DARABONBA_PTR_TO_JSON(AuthConfigProduct, authConfigProduct_);
        DARABONBA_PTR_TO_JSON(AuthConfigVendor, authConfigVendor_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataConnectorConfig, dataConnectorConfig_);
        DARABONBA_PTR_TO_JSON(DataConnectorId, dataConnectorId_);
        DARABONBA_PTR_TO_JSON(DataConnectorName, dataConnectorName_);
        DARABONBA_PTR_TO_JSON(DataConnectorStatus, dataConnectorStatus_);
        DARABONBA_PTR_TO_JSON(DataConnectorType, dataConnectorType_);
        DARABONBA_PTR_TO_JSON(DestDataSourceId, destDataSourceId_);
        DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
        DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_TO_JSON(SlsIngestionJobName, slsIngestionJobName_);
        DARABONBA_PTR_TO_JSON(SlsIngestionJobState, slsIngestionJobState_);
        DARABONBA_PTR_TO_JSON(SrcDataType, srcDataType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DataConnector& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthConfigId, authConfigId_);
        DARABONBA_PTR_FROM_JSON(AuthConfigProduct, authConfigProduct_);
        DARABONBA_PTR_FROM_JSON(AuthConfigVendor, authConfigVendor_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataConnectorConfig, dataConnectorConfig_);
        DARABONBA_PTR_FROM_JSON(DataConnectorId, dataConnectorId_);
        DARABONBA_PTR_FROM_JSON(DataConnectorName, dataConnectorName_);
        DARABONBA_PTR_FROM_JSON(DataConnectorStatus, dataConnectorStatus_);
        DARABONBA_PTR_FROM_JSON(DataConnectorType, dataConnectorType_);
        DARABONBA_PTR_FROM_JSON(DestDataSourceId, destDataSourceId_);
        DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
        DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_FROM_JSON(SlsIngestionJobName, slsIngestionJobName_);
        DARABONBA_PTR_FROM_JSON(SlsIngestionJobState, slsIngestionJobState_);
        DARABONBA_PTR_FROM_JSON(SrcDataType, srcDataType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DataConnector() = default ;
      DataConnector(const DataConnector &) = default ;
      DataConnector(DataConnector &&) = default ;
      DataConnector(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataConnector() = default ;
      DataConnector& operator=(const DataConnector &) = default ;
      DataConnector& operator=(DataConnector &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authConfigId_ == nullptr
        && this->authConfigProduct_ == nullptr && this->authConfigVendor_ == nullptr && this->creationTime_ == nullptr && this->dataConnectorConfig_ == nullptr && this->dataConnectorId_ == nullptr
        && this->dataConnectorName_ == nullptr && this->dataConnectorStatus_ == nullptr && this->dataConnectorType_ == nullptr && this->destDataSourceId_ == nullptr && this->logProjectName_ == nullptr
        && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr && this->slsIngestionJobName_ == nullptr && this->slsIngestionJobState_ == nullptr && this->srcDataType_ == nullptr
        && this->updateTime_ == nullptr; };
      // authConfigId Field Functions 
      bool hasAuthConfigId() const { return this->authConfigId_ != nullptr;};
      void deleteAuthConfigId() { this->authConfigId_ = nullptr;};
      inline string getAuthConfigId() const { DARABONBA_PTR_GET_DEFAULT(authConfigId_, "") };
      inline DataConnector& setAuthConfigId(string authConfigId) { DARABONBA_PTR_SET_VALUE(authConfigId_, authConfigId) };


      // authConfigProduct Field Functions 
      bool hasAuthConfigProduct() const { return this->authConfigProduct_ != nullptr;};
      void deleteAuthConfigProduct() { this->authConfigProduct_ = nullptr;};
      inline string getAuthConfigProduct() const { DARABONBA_PTR_GET_DEFAULT(authConfigProduct_, "") };
      inline DataConnector& setAuthConfigProduct(string authConfigProduct) { DARABONBA_PTR_SET_VALUE(authConfigProduct_, authConfigProduct) };


      // authConfigVendor Field Functions 
      bool hasAuthConfigVendor() const { return this->authConfigVendor_ != nullptr;};
      void deleteAuthConfigVendor() { this->authConfigVendor_ = nullptr;};
      inline string getAuthConfigVendor() const { DARABONBA_PTR_GET_DEFAULT(authConfigVendor_, "") };
      inline DataConnector& setAuthConfigVendor(string authConfigVendor) { DARABONBA_PTR_SET_VALUE(authConfigVendor_, authConfigVendor) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline DataConnector& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataConnectorConfig Field Functions 
      bool hasDataConnectorConfig() const { return this->dataConnectorConfig_ != nullptr;};
      void deleteDataConnectorConfig() { this->dataConnectorConfig_ = nullptr;};
      inline string getDataConnectorConfig() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorConfig_, "") };
      inline DataConnector& setDataConnectorConfig(string dataConnectorConfig) { DARABONBA_PTR_SET_VALUE(dataConnectorConfig_, dataConnectorConfig) };


      // dataConnectorId Field Functions 
      bool hasDataConnectorId() const { return this->dataConnectorId_ != nullptr;};
      void deleteDataConnectorId() { this->dataConnectorId_ = nullptr;};
      inline string getDataConnectorId() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorId_, "") };
      inline DataConnector& setDataConnectorId(string dataConnectorId) { DARABONBA_PTR_SET_VALUE(dataConnectorId_, dataConnectorId) };


      // dataConnectorName Field Functions 
      bool hasDataConnectorName() const { return this->dataConnectorName_ != nullptr;};
      void deleteDataConnectorName() { this->dataConnectorName_ = nullptr;};
      inline string getDataConnectorName() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorName_, "") };
      inline DataConnector& setDataConnectorName(string dataConnectorName) { DARABONBA_PTR_SET_VALUE(dataConnectorName_, dataConnectorName) };


      // dataConnectorStatus Field Functions 
      bool hasDataConnectorStatus() const { return this->dataConnectorStatus_ != nullptr;};
      void deleteDataConnectorStatus() { this->dataConnectorStatus_ = nullptr;};
      inline string getDataConnectorStatus() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorStatus_, "") };
      inline DataConnector& setDataConnectorStatus(string dataConnectorStatus) { DARABONBA_PTR_SET_VALUE(dataConnectorStatus_, dataConnectorStatus) };


      // dataConnectorType Field Functions 
      bool hasDataConnectorType() const { return this->dataConnectorType_ != nullptr;};
      void deleteDataConnectorType() { this->dataConnectorType_ = nullptr;};
      inline string getDataConnectorType() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorType_, "") };
      inline DataConnector& setDataConnectorType(string dataConnectorType) { DARABONBA_PTR_SET_VALUE(dataConnectorType_, dataConnectorType) };


      // destDataSourceId Field Functions 
      bool hasDestDataSourceId() const { return this->destDataSourceId_ != nullptr;};
      void deleteDestDataSourceId() { this->destDataSourceId_ = nullptr;};
      inline string getDestDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceId_, "") };
      inline DataConnector& setDestDataSourceId(string destDataSourceId) { DARABONBA_PTR_SET_VALUE(destDataSourceId_, destDataSourceId) };


      // logProjectName Field Functions 
      bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
      void deleteLogProjectName() { this->logProjectName_ = nullptr;};
      inline string getLogProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
      inline DataConnector& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


      // logRegionId Field Functions 
      bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
      void deleteLogRegionId() { this->logRegionId_ = nullptr;};
      inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
      inline DataConnector& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline DataConnector& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // slsIngestionJobName Field Functions 
      bool hasSlsIngestionJobName() const { return this->slsIngestionJobName_ != nullptr;};
      void deleteSlsIngestionJobName() { this->slsIngestionJobName_ = nullptr;};
      inline string getSlsIngestionJobName() const { DARABONBA_PTR_GET_DEFAULT(slsIngestionJobName_, "") };
      inline DataConnector& setSlsIngestionJobName(string slsIngestionJobName) { DARABONBA_PTR_SET_VALUE(slsIngestionJobName_, slsIngestionJobName) };


      // slsIngestionJobState Field Functions 
      bool hasSlsIngestionJobState() const { return this->slsIngestionJobState_ != nullptr;};
      void deleteSlsIngestionJobState() { this->slsIngestionJobState_ = nullptr;};
      inline string getSlsIngestionJobState() const { DARABONBA_PTR_GET_DEFAULT(slsIngestionJobState_, "") };
      inline DataConnector& setSlsIngestionJobState(string slsIngestionJobState) { DARABONBA_PTR_SET_VALUE(slsIngestionJobState_, slsIngestionJobState) };


      // srcDataType Field Functions 
      bool hasSrcDataType() const { return this->srcDataType_ != nullptr;};
      void deleteSrcDataType() { this->srcDataType_ = nullptr;};
      inline string getSrcDataType() const { DARABONBA_PTR_GET_DEFAULT(srcDataType_, "") };
      inline DataConnector& setSrcDataType(string srcDataType) { DARABONBA_PTR_SET_VALUE(srcDataType_, srcDataType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DataConnector& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The configuration item ID of the collector access object in the multi-cloud configuration.
      shared_ptr<string> authConfigId_ {};
      // The cloud product of the authentication configuration.
      shared_ptr<string> authConfigProduct_ {};
      // The cloud vendor of the authentication configuration.
      shared_ptr<string> authConfigVendor_ {};
      // The creation time.
      shared_ptr<int64_t> creationTime_ {};
      // The collector configuration information.
      shared_ptr<string> dataConnectorConfig_ {};
      // The collector ID.
      shared_ptr<string> dataConnectorId_ {};
      // The data connector name.
      shared_ptr<string> dataConnectorName_ {};
      // The connector status.
      shared_ptr<string> dataConnectorStatus_ {};
      // The connector type.
      shared_ptr<string> dataConnectorType_ {};
      // The destination data source ID. This parameter is required only for synchronization.
      shared_ptr<string> destDataSourceId_ {};
      // The Simple Log Service project name.
      shared_ptr<string> logProjectName_ {};
      // The log storage region ID.
      shared_ptr<string> logRegionId_ {};
      // The Simple Log Service Logstore name.
      shared_ptr<string> logStoreName_ {};
      // The name of the SLS data import job associated with the collector.
      shared_ptr<string> slsIngestionJobName_ {};
      // The status of the SLS data import job associated with the collector.
      shared_ptr<string> slsIngestionJobState_ {};
      // The source data type.
      shared_ptr<string> srcDataType_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->dataConnector_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // dataConnector Field Functions 
    bool hasDataConnector() const { return this->dataConnector_ != nullptr;};
    void deleteDataConnector() { this->dataConnector_ = nullptr;};
    inline const vector<ListDataConnectorsResponseBody::DataConnector> & getDataConnector() const { DARABONBA_PTR_GET_CONST(dataConnector_, vector<ListDataConnectorsResponseBody::DataConnector>) };
    inline vector<ListDataConnectorsResponseBody::DataConnector> getDataConnector() { DARABONBA_PTR_GET(dataConnector_, vector<ListDataConnectorsResponseBody::DataConnector>) };
    inline ListDataConnectorsResponseBody& setDataConnector(const vector<ListDataConnectorsResponseBody::DataConnector> & dataConnector) { DARABONBA_PTR_SET_VALUE(dataConnector_, dataConnector) };
    inline ListDataConnectorsResponseBody& setDataConnector(vector<ListDataConnectorsResponseBody::DataConnector> && dataConnector) { DARABONBA_PTR_SET_RVALUE(dataConnector_, dataConnector) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataConnectorsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataConnectorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataConnectorsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataConnectorsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataConnectorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataConnectorsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of collectors.
    shared_ptr<vector<ListDataConnectorsResponseBody::DataConnector>> dataConnector_ {};
    // The maximum number of records returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query.
    shared_ptr<string> nextToken_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
