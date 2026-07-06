// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACONNECTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACONNECTORSREQUEST_HPP_
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
  class ListDataConnectorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataConnectorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataConnectorIds, dataConnectorIds_);
      DARABONBA_PTR_TO_JSON(DataConnectorName, dataConnectorName_);
      DARABONBA_PTR_TO_JSON(DataConnectorStatus, dataConnectorStatus_);
      DARABONBA_PTR_TO_JSON(DataConnectorType, dataConnectorType_);
      DARABONBA_PTR_TO_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(SlsIngestionJobName, slsIngestionJobName_);
      DARABONBA_PTR_TO_JSON(SrcDataType, srcDataType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataConnectorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataConnectorIds, dataConnectorIds_);
      DARABONBA_PTR_FROM_JSON(DataConnectorName, dataConnectorName_);
      DARABONBA_PTR_FROM_JSON(DataConnectorStatus, dataConnectorStatus_);
      DARABONBA_PTR_FROM_JSON(DataConnectorType, dataConnectorType_);
      DARABONBA_PTR_FROM_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(SlsIngestionJobName, slsIngestionJobName_);
      DARABONBA_PTR_FROM_JSON(SrcDataType, srcDataType_);
    };
    ListDataConnectorsRequest() = default ;
    ListDataConnectorsRequest(const ListDataConnectorsRequest &) = default ;
    ListDataConnectorsRequest(ListDataConnectorsRequest &&) = default ;
    ListDataConnectorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataConnectorsRequest() = default ;
    ListDataConnectorsRequest& operator=(const ListDataConnectorsRequest &) = default ;
    ListDataConnectorsRequest& operator=(ListDataConnectorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataConnectorIds_ == nullptr
        && this->dataConnectorName_ == nullptr && this->dataConnectorStatus_ == nullptr && this->dataConnectorType_ == nullptr && this->destDataSourceId_ == nullptr && this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderField_ == nullptr && this->orderType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr && this->slsIngestionJobName_ == nullptr && this->srcDataType_ == nullptr; };
    // dataConnectorIds Field Functions 
    bool hasDataConnectorIds() const { return this->dataConnectorIds_ != nullptr;};
    void deleteDataConnectorIds() { this->dataConnectorIds_ = nullptr;};
    inline const vector<string> & getDataConnectorIds() const { DARABONBA_PTR_GET_CONST(dataConnectorIds_, vector<string>) };
    inline vector<string> getDataConnectorIds() { DARABONBA_PTR_GET(dataConnectorIds_, vector<string>) };
    inline ListDataConnectorsRequest& setDataConnectorIds(const vector<string> & dataConnectorIds) { DARABONBA_PTR_SET_VALUE(dataConnectorIds_, dataConnectorIds) };
    inline ListDataConnectorsRequest& setDataConnectorIds(vector<string> && dataConnectorIds) { DARABONBA_PTR_SET_RVALUE(dataConnectorIds_, dataConnectorIds) };


    // dataConnectorName Field Functions 
    bool hasDataConnectorName() const { return this->dataConnectorName_ != nullptr;};
    void deleteDataConnectorName() { this->dataConnectorName_ = nullptr;};
    inline string getDataConnectorName() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorName_, "") };
    inline ListDataConnectorsRequest& setDataConnectorName(string dataConnectorName) { DARABONBA_PTR_SET_VALUE(dataConnectorName_, dataConnectorName) };


    // dataConnectorStatus Field Functions 
    bool hasDataConnectorStatus() const { return this->dataConnectorStatus_ != nullptr;};
    void deleteDataConnectorStatus() { this->dataConnectorStatus_ = nullptr;};
    inline string getDataConnectorStatus() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorStatus_, "") };
    inline ListDataConnectorsRequest& setDataConnectorStatus(string dataConnectorStatus) { DARABONBA_PTR_SET_VALUE(dataConnectorStatus_, dataConnectorStatus) };


    // dataConnectorType Field Functions 
    bool hasDataConnectorType() const { return this->dataConnectorType_ != nullptr;};
    void deleteDataConnectorType() { this->dataConnectorType_ = nullptr;};
    inline string getDataConnectorType() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorType_, "") };
    inline ListDataConnectorsRequest& setDataConnectorType(string dataConnectorType) { DARABONBA_PTR_SET_VALUE(dataConnectorType_, dataConnectorType) };


    // destDataSourceId Field Functions 
    bool hasDestDataSourceId() const { return this->destDataSourceId_ != nullptr;};
    void deleteDestDataSourceId() { this->destDataSourceId_ = nullptr;};
    inline string getDestDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceId_, "") };
    inline ListDataConnectorsRequest& setDestDataSourceId(string destDataSourceId) { DARABONBA_PTR_SET_VALUE(destDataSourceId_, destDataSourceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataConnectorsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataConnectorsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataConnectorsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListDataConnectorsRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDataConnectorsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataConnectorsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataConnectorsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataConnectorsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDataConnectorsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // slsIngestionJobName Field Functions 
    bool hasSlsIngestionJobName() const { return this->slsIngestionJobName_ != nullptr;};
    void deleteSlsIngestionJobName() { this->slsIngestionJobName_ = nullptr;};
    inline string getSlsIngestionJobName() const { DARABONBA_PTR_GET_DEFAULT(slsIngestionJobName_, "") };
    inline ListDataConnectorsRequest& setSlsIngestionJobName(string slsIngestionJobName) { DARABONBA_PTR_SET_VALUE(slsIngestionJobName_, slsIngestionJobName) };


    // srcDataType Field Functions 
    bool hasSrcDataType() const { return this->srcDataType_ != nullptr;};
    void deleteSrcDataType() { this->srcDataType_ = nullptr;};
    inline string getSrcDataType() const { DARABONBA_PTR_GET_DEFAULT(srcDataType_, "") };
    inline ListDataConnectorsRequest& setSrcDataType(string srcDataType) { DARABONBA_PTR_SET_VALUE(srcDataType_, srcDataType) };


  protected:
    // The list of collector IDs.
    shared_ptr<vector<string>> dataConnectorIds_ {};
    // The collector name.
    shared_ptr<string> dataConnectorName_ {};
    // The collector status. Valid values:
    // - "enabled": enabled.
    // - "disabled" (default): disabled.
    shared_ptr<string> dataConnectorStatus_ {};
    // The collector type. Valid values:
    // - oss
    // - s3
    // - kafka
    shared_ptr<string> dataConnectorType_ {};
    // The destination data source ID. This parameter is required only for synchronization.
    shared_ptr<string> destDataSourceId_ {};
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of results to return when you use the NextToken-based pagination method. Valid values: 1 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. You do not need to set this parameter for the first request or if no more results exist. If more results exist, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The sort field. Currently, only sorting by updateTime is supported. If OrderField is left empty, the default order returned by the database is used.
    shared_ptr<string> orderField_ {};
    // The sort order. Valid values:
    // - "asc": ascending order.
    // - "desc" (default): descending order.
    shared_ptr<string> orderType_ {};
    // The current page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page. Default value: 1000.
    shared_ptr<int32_t> pageSize_ {};
    // The region where the threat analysis data management center resides. Specify the management center region based on the region of your assets. Valid values:
    // - cn-hangzhou: The assets reside in the Chinese mainland.
    // - ap-southeast-1: The assets reside outside China.
    shared_ptr<string> regionId_ {};
    // The user ID that the administrator switches to when viewing as another member.
    shared_ptr<int64_t> roleFor_ {};
    // The name of the Simple Log Service (SLS) data import job for the collector.
    shared_ptr<string> slsIngestionJobName_ {};
    // The source data type.
    shared_ptr<string> srcDataType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
