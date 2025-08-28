// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpnConnectionLogsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(IsCompleted, isCompleted_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(IsCompleted, isCompleted_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVpnConnectionLogsResponseBody() = default ;
    DescribeVpnConnectionLogsResponseBody(const DescribeVpnConnectionLogsResponseBody &) = default ;
    DescribeVpnConnectionLogsResponseBody(DescribeVpnConnectionLogsResponseBody &&) = default ;
    DescribeVpnConnectionLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionLogsResponseBody() = default ;
    DescribeVpnConnectionLogsResponseBody& operator=(const DescribeVpnConnectionLogsResponseBody &) = default ;
    DescribeVpnConnectionLogsResponseBody& operator=(DescribeVpnConnectionLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->data_ != nullptr && this->isCompleted_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeVpnConnectionLogsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeVpnConnectionLogsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeVpnConnectionLogsResponseBodyData) };
    inline DescribeVpnConnectionLogsResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeVpnConnectionLogsResponseBodyData) };
    inline DescribeVpnConnectionLogsResponseBody& setData(const DescribeVpnConnectionLogsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVpnConnectionLogsResponseBody& setData(DescribeVpnConnectionLogsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // isCompleted Field Functions 
    bool hasIsCompleted() const { return this->isCompleted_ != nullptr;};
    void deleteIsCompleted() { this->isCompleted_ = nullptr;};
    inline bool isCompleted() const { DARABONBA_PTR_GET_DEFAULT(isCompleted_, false) };
    inline DescribeVpnConnectionLogsResponseBody& setIsCompleted(bool isCompleted) { DARABONBA_PTR_SET_VALUE(isCompleted_, isCompleted) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnConnectionLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnConnectionLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnConnectionLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The log list.
    std::shared_ptr<DescribeVpnConnectionLogsResponseBodyData> data_ = nullptr;
    // Indicates whether the log is accurate. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isCompleted_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
