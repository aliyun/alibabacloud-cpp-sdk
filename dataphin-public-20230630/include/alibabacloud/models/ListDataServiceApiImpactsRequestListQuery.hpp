// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiImpactsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiImpactsRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiImpactsRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListDataServiceApiImpactsRequestListQuery() = default ;
    ListDataServiceApiImpactsRequestListQuery(const ListDataServiceApiImpactsRequestListQuery &) = default ;
    ListDataServiceApiImpactsRequestListQuery(ListDataServiceApiImpactsRequestListQuery &&) = default ;
    ListDataServiceApiImpactsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiImpactsRequestListQuery() = default ;
    ListDataServiceApiImpactsRequestListQuery& operator=(const ListDataServiceApiImpactsRequestListQuery &) = default ;
    ListDataServiceApiImpactsRequestListQuery& operator=(ListDataServiceApiImpactsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->appName_ == nullptr && return this->endTime_ == nullptr && return this->orderColumn_ == nullptr && return this->orderType_ == nullptr && return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->startTime_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServiceApiImpactsRequestListQuery& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListDataServiceApiImpactsRequestListQuery& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListDataServiceApiImpactsRequestListQuery& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string orderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListDataServiceApiImpactsRequestListQuery& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline ListDataServiceApiImpactsRequestListQuery& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListDataServiceApiImpactsRequestListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceApiImpactsRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListDataServiceApiImpactsRequestListQuery& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> orderColumn_ = nullptr;
    std::shared_ptr<int32_t> orderType_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
