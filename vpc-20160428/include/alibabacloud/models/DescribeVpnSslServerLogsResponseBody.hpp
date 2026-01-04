// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNSSLSERVERLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNSSLSERVERLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnSslServerLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnSslServerLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(IsCompleted, isCompleted_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnSslServerLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(IsCompleted, isCompleted_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVpnSslServerLogsResponseBody() = default ;
    DescribeVpnSslServerLogsResponseBody(const DescribeVpnSslServerLogsResponseBody &) = default ;
    DescribeVpnSslServerLogsResponseBody(DescribeVpnSslServerLogsResponseBody &&) = default ;
    DescribeVpnSslServerLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnSslServerLogsResponseBody() = default ;
    DescribeVpnSslServerLogsResponseBody& operator=(const DescribeVpnSslServerLogsResponseBody &) = default ;
    DescribeVpnSslServerLogsResponseBody& operator=(DescribeVpnSslServerLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Logs, logs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Logs, logs_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logs_ == nullptr; };
      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<string> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
      inline vector<string> getLogs() { DARABONBA_PTR_GET(logs_, vector<string>) };
      inline Data& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline Data& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    protected:
      shared_ptr<vector<string>> logs_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->isCompleted_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeVpnSslServerLogsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeVpnSslServerLogsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeVpnSslServerLogsResponseBody::Data) };
    inline DescribeVpnSslServerLogsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeVpnSslServerLogsResponseBody::Data) };
    inline DescribeVpnSslServerLogsResponseBody& setData(const DescribeVpnSslServerLogsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVpnSslServerLogsResponseBody& setData(DescribeVpnSslServerLogsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // isCompleted Field Functions 
    bool hasIsCompleted() const { return this->isCompleted_ != nullptr;};
    void deleteIsCompleted() { this->isCompleted_ = nullptr;};
    inline bool getIsCompleted() const { DARABONBA_PTR_GET_DEFAULT(isCompleted_, false) };
    inline DescribeVpnSslServerLogsResponseBody& setIsCompleted(bool isCompleted) { DARABONBA_PTR_SET_VALUE(isCompleted_, isCompleted) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnSslServerLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnSslServerLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnSslServerLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of log entries.
    shared_ptr<int32_t> count_ {};
    // Log information list.
    shared_ptr<DescribeVpnSslServerLogsResponseBody::Data> data_ {};
    // Indicates whether the log is accurate. Valid values:
    // 
    // *   **true**: accurate
    // *   **false**: inaccurate
    shared_ptr<bool> isCompleted_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
