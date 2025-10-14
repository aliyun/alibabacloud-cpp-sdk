// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_TO_JSON(DataSourceStoreStatus, dataSourceStoreStatus_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateIds, dataSourceTemplateIdsShrink_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogUserIds, logUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_FROM_JSON(DataSourceStoreStatus, dataSourceStoreStatus_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateIds, dataSourceTemplateIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    ListDataSourcesShrinkRequest() = default ;
    ListDataSourcesShrinkRequest(const ListDataSourcesShrinkRequest &) = default ;
    ListDataSourcesShrinkRequest(ListDataSourcesShrinkRequest &&) = default ;
    ListDataSourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesShrinkRequest() = default ;
    ListDataSourcesShrinkRequest& operator=(const ListDataSourcesShrinkRequest &) = default ;
    ListDataSourcesShrinkRequest& operator=(ListDataSourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceFrom_ == nullptr
        && return this->dataSourceIdsShrink_ == nullptr && return this->dataSourceName_ == nullptr && return this->dataSourceStatus_ == nullptr && return this->dataSourceStoreStatus_ == nullptr && return this->dataSourceTemplateIdsShrink_ == nullptr
        && return this->dataSourceType_ == nullptr && return this->lang_ == nullptr && return this->logProjectName_ == nullptr && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr
        && return this->logUserIdsShrink_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->order_ == nullptr && return this->orderField_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataSourceFrom Field Functions 
    bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
    void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
    inline string dataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
    inline ListDataSourcesShrinkRequest& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


    // dataSourceIdsShrink Field Functions 
    bool hasDataSourceIdsShrink() const { return this->dataSourceIdsShrink_ != nullptr;};
    void deleteDataSourceIdsShrink() { this->dataSourceIdsShrink_ = nullptr;};
    inline string dataSourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceIdsShrink_, "") };
    inline ListDataSourcesShrinkRequest& setDataSourceIdsShrink(string dataSourceIdsShrink) { DARABONBA_PTR_SET_VALUE(dataSourceIdsShrink_, dataSourceIdsShrink) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ListDataSourcesShrinkRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceStatus Field Functions 
    bool hasDataSourceStatus() const { return this->dataSourceStatus_ != nullptr;};
    void deleteDataSourceStatus() { this->dataSourceStatus_ = nullptr;};
    inline string dataSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStatus_, "") };
    inline ListDataSourcesShrinkRequest& setDataSourceStatus(string dataSourceStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStatus_, dataSourceStatus) };


    // dataSourceStoreStatus Field Functions 
    bool hasDataSourceStoreStatus() const { return this->dataSourceStoreStatus_ != nullptr;};
    void deleteDataSourceStoreStatus() { this->dataSourceStoreStatus_ = nullptr;};
    inline string dataSourceStoreStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreStatus_, "") };
    inline ListDataSourcesShrinkRequest& setDataSourceStoreStatus(string dataSourceStoreStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStoreStatus_, dataSourceStoreStatus) };


    // dataSourceTemplateIdsShrink Field Functions 
    bool hasDataSourceTemplateIdsShrink() const { return this->dataSourceTemplateIdsShrink_ != nullptr;};
    void deleteDataSourceTemplateIdsShrink() { this->dataSourceTemplateIdsShrink_ = nullptr;};
    inline string dataSourceTemplateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateIdsShrink_, "") };
    inline ListDataSourcesShrinkRequest& setDataSourceTemplateIdsShrink(string dataSourceTemplateIdsShrink) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateIdsShrink_, dataSourceTemplateIdsShrink) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListDataSourcesShrinkRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListDataSourcesShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string logProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline ListDataSourcesShrinkRequest& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline ListDataSourcesShrinkRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline ListDataSourcesShrinkRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserIdsShrink Field Functions 
    bool hasLogUserIdsShrink() const { return this->logUserIdsShrink_ != nullptr;};
    void deleteLogUserIdsShrink() { this->logUserIdsShrink_ = nullptr;};
    inline string logUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(logUserIdsShrink_, "") };
    inline ListDataSourcesShrinkRequest& setLogUserIdsShrink(string logUserIdsShrink) { DARABONBA_PTR_SET_VALUE(logUserIdsShrink_, logUserIdsShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataSourcesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataSourcesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDataSourcesShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string orderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListDataSourcesShrinkRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataSourcesShrinkRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataSourcesShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDataSourcesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListDataSourcesShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataSourceFrom_ = nullptr;
    std::shared_ptr<string> dataSourceIdsShrink_ = nullptr;
    std::shared_ptr<string> dataSourceName_ = nullptr;
    std::shared_ptr<string> dataSourceStatus_ = nullptr;
    std::shared_ptr<string> dataSourceStoreStatus_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateIdsShrink_ = nullptr;
    std::shared_ptr<string> dataSourceType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> logProjectName_ = nullptr;
    std::shared_ptr<string> logRegionId_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<string> logUserIdsShrink_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> orderField_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
