// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETISSUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETISSUESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIssuesRequestFilter.hpp>
#include <alibabacloud/models/GetIssuesRequestTimeRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetIssuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIssuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(BizModule, bizModule_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
    };
    friend void from_json(const Darabonba::Json& j, GetIssuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(BizModule, bizModule_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
    };
    GetIssuesRequest() = default ;
    GetIssuesRequest(const GetIssuesRequest &) = default ;
    GetIssuesRequest(GetIssuesRequest &&) = default ;
    GetIssuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIssuesRequest() = default ;
    GetIssuesRequest& operator=(const GetIssuesRequest &) = default ;
    GetIssuesRequest& operator=(GetIssuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->bizModule_ != nullptr && this->filter_ != nullptr && this->name_ != nullptr && this->orderBy_ != nullptr && this->orderType_ != nullptr
        && this->os_ != nullptr && this->pageIndex_ != nullptr && this->pageSize_ != nullptr && this->status_ != nullptr && this->timeRange_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetIssuesRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // bizModule Field Functions 
    bool hasBizModule() const { return this->bizModule_ != nullptr;};
    void deleteBizModule() { this->bizModule_ = nullptr;};
    inline string bizModule() const { DARABONBA_PTR_GET_DEFAULT(bizModule_, "") };
    inline GetIssuesRequest& setBizModule(string bizModule) { DARABONBA_PTR_SET_VALUE(bizModule_, bizModule) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetIssuesRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, GetIssuesRequestFilter) };
    inline GetIssuesRequestFilter filter() { DARABONBA_PTR_GET(filter_, GetIssuesRequestFilter) };
    inline GetIssuesRequest& setFilter(const GetIssuesRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetIssuesRequest& setFilter(GetIssuesRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetIssuesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline GetIssuesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetIssuesRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetIssuesRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetIssuesRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetIssuesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetIssuesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const GetIssuesRequestTimeRange & timeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, GetIssuesRequestTimeRange) };
    inline GetIssuesRequestTimeRange timeRange() { DARABONBA_PTR_GET(timeRange_, GetIssuesRequestTimeRange) };
    inline GetIssuesRequest& setTimeRange(const GetIssuesRequestTimeRange & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline GetIssuesRequest& setTimeRange(GetIssuesRequestTimeRange && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizModule_ = nullptr;
    std::shared_ptr<GetIssuesRequestFilter> filter_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetIssuesRequestTimeRange> timeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
