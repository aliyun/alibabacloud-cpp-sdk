// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListDataSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectStatus, connectStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DataAssetId, dataAssetId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(IdentifyStatus, identifyStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectStatus, connectStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DataAssetId, dataAssetId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(IdentifyStatus, identifyStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    ListDataSourcesRequest() = default ;
    ListDataSourcesRequest(const ListDataSourcesRequest &) = default ;
    ListDataSourcesRequest(ListDataSourcesRequest &&) = default ;
    ListDataSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesRequest() = default ;
    ListDataSourcesRequest& operator=(const ListDataSourcesRequest &) = default ;
    ListDataSourcesRequest& operator=(ListDataSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectStatus_ == nullptr
        && this->currentPage_ == nullptr && this->dataAssetId_ == nullptr && this->dataSourceId_ == nullptr && this->dbName_ == nullptr && this->engineType_ == nullptr
        && this->identifyStatus_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->pageSize_ == nullptr && this->port_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->sourceIp_ == nullptr; };
    // connectStatus Field Functions 
    bool hasConnectStatus() const { return this->connectStatus_ != nullptr;};
    void deleteConnectStatus() { this->connectStatus_ = nullptr;};
    inline string getConnectStatus() const { DARABONBA_PTR_GET_DEFAULT(connectStatus_, "") };
    inline ListDataSourcesRequest& setConnectStatus(string connectStatus) { DARABONBA_PTR_SET_VALUE(connectStatus_, connectStatus) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDataSourcesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataAssetId Field Functions 
    bool hasDataAssetId() const { return this->dataAssetId_ != nullptr;};
    void deleteDataAssetId() { this->dataAssetId_ = nullptr;};
    inline string getDataAssetId() const { DARABONBA_PTR_GET_DEFAULT(dataAssetId_, "") };
    inline ListDataSourcesRequest& setDataAssetId(string dataAssetId) { DARABONBA_PTR_SET_VALUE(dataAssetId_, dataAssetId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ListDataSourcesRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListDataSourcesRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ListDataSourcesRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // identifyStatus Field Functions 
    bool hasIdentifyStatus() const { return this->identifyStatus_ != nullptr;};
    void deleteIdentifyStatus() { this->identifyStatus_ = nullptr;};
    inline string getIdentifyStatus() const { DARABONBA_PTR_GET_DEFAULT(identifyStatus_, "") };
    inline ListDataSourcesRequest& setIdentifyStatus(string identifyStatus) { DARABONBA_PTR_SET_VALUE(identifyStatus_, identifyStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDataSourcesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataSourcesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataSourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataSourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataSourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListDataSourcesRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListDataSourcesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline ListDataSourcesRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ListDataSourcesRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The connection status of the data source. Valid values:
    // - UnConnected: Not connected.
    // - Processing: Connecting.
    // - Success: Connected.
    // - Failed: Connection failed.
    shared_ptr<string> connectStatus_ {};
    // The current page number. Pages start from 1.
    shared_ptr<int32_t> currentPage_ {};
    // The identifier of the data asset in Data Security Center.
    shared_ptr<string> dataAssetId_ {};
    // The identifier of the data source in Data Security Center. You can obtain the value from the Items[].DataSourceId parameter in the response of the ListDataSources operation.
    shared_ptr<string> dataSourceId_ {};
    // The name of the database.
    shared_ptr<string> dbName_ {};
    // The engine type. Valid values:
    // - **MySQL**
    // - **MariaDB**
    // - **Oracle**
    // - **PostgreSQL**
    // - **SQLServer**
    shared_ptr<string> engineType_ {};
    // The status of the data source detection switch. Valid values:
    // - Enable: Submitted for enabling.
    // - Enabling: Enabling.
    // - Enabled: Enabled.
    // - EnableFailed: Enabling failed.
    // - Disable: Submitted for disabling.
    // - Disabling: Disabling.
    // - Disabled: Disabled.
    // - DisableFailed: Disabling failed.
    shared_ptr<string> identifyStatus_ {};
    // The database instance identity. You can obtain the value from the Items[].InstanceId parameter in the response of the ListDataMaskingInstances operation.
    shared_ptr<string> instanceId_ {};
    // The language of the response message. Valid values:
    // - zh: Chinese.
    // - en: English.
    shared_ptr<string> lang_ {};
    // A reserved pagination parameter. The ListDataSources operation uses CurrentPage and PageSize for pagination. Omit this parameter when you call the operation.
    shared_ptr<int32_t> maxResults_ {};
    // A reserved pagination cursor parameter. The ListDataSources operation uses CurrentPage and PageSize for pagination. Omit this parameter when you call the operation.
    shared_ptr<string> nextToken_ {};
    // The number of entries to return on each page. Keep other filter conditions consistent when you query the next page.
    shared_ptr<int32_t> pageSize_ {};
    // The port for the database connection.
    shared_ptr<int32_t> port_ {};
    // The code of the cloud service. Column encryption supports ApsaraDB RDS, PolarDB, and PolarDB-X 2.0. If this parameter is specified together with ProductId, the values must match.
    shared_ptr<string> productCode_ {};
    // The identifier of the cloud service type. 5: ApsaraDB RDS; 8: PolarDB; 27: PolarDB-X 2.0. If this parameter is specified together with ProductCode, the values must match.
    shared_ptr<int64_t> productId_ {};
    // The source IP address of the call.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
