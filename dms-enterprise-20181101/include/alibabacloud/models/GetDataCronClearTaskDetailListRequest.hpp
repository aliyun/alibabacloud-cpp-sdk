// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACRONCLEARTASKDETAILLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACRONCLEARTASKDETAILLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCronClearTaskDetailListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCronClearTaskDetailListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCronClearTaskDetailListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetDataCronClearTaskDetailListRequest() = default ;
    GetDataCronClearTaskDetailListRequest(const GetDataCronClearTaskDetailListRequest &) = default ;
    GetDataCronClearTaskDetailListRequest(GetDataCronClearTaskDetailListRequest &&) = default ;
    GetDataCronClearTaskDetailListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCronClearTaskDetailListRequest() = default ;
    GetDataCronClearTaskDetailListRequest& operator=(const GetDataCronClearTaskDetailListRequest &) = default ;
    GetDataCronClearTaskDetailListRequest& operator=(GetDataCronClearTaskDetailListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->tid_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetDataCronClearTaskDetailListRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetDataCronClearTaskDetailListRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetDataCronClearTaskDetailListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetDataCronClearTaskDetailListRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the ticket. You can query the ticket ID from the response parameters of the [CreateDataCronClearOrder](https://help.aliyun.com/document_detail/208385.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
