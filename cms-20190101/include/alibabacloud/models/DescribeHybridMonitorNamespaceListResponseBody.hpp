// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorNamespaceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorNamespaceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DescribeHybridMonitorNamespace, describeHybridMonitorNamespace_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorNamespaceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DescribeHybridMonitorNamespace, describeHybridMonitorNamespace_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeHybridMonitorNamespaceListResponseBody() = default ;
    DescribeHybridMonitorNamespaceListResponseBody(const DescribeHybridMonitorNamespaceListResponseBody &) = default ;
    DescribeHybridMonitorNamespaceListResponseBody(DescribeHybridMonitorNamespaceListResponseBody &&) = default ;
    DescribeHybridMonitorNamespaceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorNamespaceListResponseBody() = default ;
    DescribeHybridMonitorNamespaceListResponseBody& operator=(const DescribeHybridMonitorNamespaceListResponseBody &) = default ;
    DescribeHybridMonitorNamespaceListResponseBody& operator=(DescribeHybridMonitorNamespaceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->describeHybridMonitorNamespace_ != nullptr && this->message_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr
        && this->success_ != nullptr && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // describeHybridMonitorNamespace Field Functions 
    bool hasDescribeHybridMonitorNamespace() const { return this->describeHybridMonitorNamespace_ != nullptr;};
    void deleteDescribeHybridMonitorNamespace() { this->describeHybridMonitorNamespace_ = nullptr;};
    inline const vector<DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace> & describeHybridMonitorNamespace() const { DARABONBA_PTR_GET_CONST(describeHybridMonitorNamespace_, vector<DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace>) };
    inline vector<DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace> describeHybridMonitorNamespace() { DARABONBA_PTR_GET(describeHybridMonitorNamespace_, vector<DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace>) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setDescribeHybridMonitorNamespace(const vector<DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace> & describeHybridMonitorNamespace) { DARABONBA_PTR_SET_VALUE(describeHybridMonitorNamespace_, describeHybridMonitorNamespace) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setDescribeHybridMonitorNamespace(vector<DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace> && describeHybridMonitorNamespace) { DARABONBA_PTR_SET_RVALUE(describeHybridMonitorNamespace_, describeHybridMonitorNamespace) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeHybridMonitorNamespaceListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The details of the namespaces.
    std::shared_ptr<vector<DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespace>> describeHybridMonitorNamespace_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
