// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OrderResultType, orderResultType_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(SearchContent, searchContent_);
      DARABONBA_PTR_TO_JSON(SearchDateType, searchDateType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OrderResultType, orderResultType_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(SearchContent, searchContent_);
      DARABONBA_PTR_FROM_JSON(SearchDateType, searchDateType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListOrdersRequest() = default ;
    ListOrdersRequest(const ListOrdersRequest &) = default ;
    ListOrdersRequest(ListOrdersRequest &&) = default ;
    ListOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrdersRequest() = default ;
    ListOrdersRequest& operator=(const ListOrdersRequest &) = default ;
    ListOrdersRequest& operator=(ListOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->orderResultType_ == nullptr && return this->orderStatus_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->pluginType_ == nullptr
        && return this->searchContent_ == nullptr && return this->searchDateType_ == nullptr && return this->startTime_ == nullptr && return this->tid_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListOrdersRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // orderResultType Field Functions 
    bool hasOrderResultType() const { return this->orderResultType_ != nullptr;};
    void deleteOrderResultType() { this->orderResultType_ = nullptr;};
    inline string orderResultType() const { DARABONBA_PTR_GET_DEFAULT(orderResultType_, "") };
    inline ListOrdersRequest& setOrderResultType(string orderResultType) { DARABONBA_PTR_SET_VALUE(orderResultType_, orderResultType) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline ListOrdersRequest& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOrdersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline ListOrdersRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // searchContent Field Functions 
    bool hasSearchContent() const { return this->searchContent_ != nullptr;};
    void deleteSearchContent() { this->searchContent_ = nullptr;};
    inline string searchContent() const { DARABONBA_PTR_GET_DEFAULT(searchContent_, "") };
    inline ListOrdersRequest& setSearchContent(string searchContent) { DARABONBA_PTR_SET_VALUE(searchContent_, searchContent) };


    // searchDateType Field Functions 
    bool hasSearchDateType() const { return this->searchDateType_ != nullptr;};
    void deleteSearchDateType() { this->searchDateType_ = nullptr;};
    inline string searchDateType() const { DARABONBA_PTR_GET_DEFAULT(searchDateType_, "") };
    inline ListOrdersRequest& setSearchDateType(string searchDateType) { DARABONBA_PTR_SET_VALUE(searchDateType_, searchDateType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListOrdersRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListOrdersRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The end of the time range to query.
    std::shared_ptr<string> endTime_ = nullptr;
    // The scope of the tickets that you want to query. Valid values:
    // 
    // *   **AS_ADMIN**: all tickets.
    // *   **AS_COMMITTER**: the tickets that are submitted by the current user.
    // *   **AS_HANDLER**: the tickets to be processed by the current user.
    // *   **AS_OWNER**: the tickets that are processed by the current user.
    // *   **AS_Related**: the tickets that are related to the current user.
    std::shared_ptr<string> orderResultType_ = nullptr;
    // The status of the tickets that you want to query. Valid values:
    // 
    // *   **ALL**: queries the tickets of all statuses.
    // *   **FINISHED**: queries the tickets that are completed.
    // *   **RUNNING**: queries the tickets that are being processed.
    std::shared_ptr<string> orderStatus_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the tickets that you want to query. For more information, see [PluginType parameter](https://help.aliyun.com/document_detail/429109.html).
    std::shared_ptr<string> pluginType_ = nullptr;
    // The keyword that is used to query tickets.
    std::shared_ptr<string> searchContent_ = nullptr;
    // The time condition based on which you want to query tickets. Valid values:
    // 
    // *   **CREATE_TIME**: the time when a ticket was created.
    // *   **MODIFY_TIME**: the time when a ticket was last modified.
    std::shared_ptr<string> searchDateType_ = nullptr;
    // The beginning of the time range to query.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
