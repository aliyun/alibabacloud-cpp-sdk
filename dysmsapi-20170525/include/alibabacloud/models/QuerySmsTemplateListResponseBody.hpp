// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySmsTemplateListResponseBodySmsTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmsTemplateList, smsTemplateList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateList, smsTemplateList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySmsTemplateListResponseBody() = default ;
    QuerySmsTemplateListResponseBody(const QuerySmsTemplateListResponseBody &) = default ;
    QuerySmsTemplateListResponseBody(QuerySmsTemplateListResponseBody &&) = default ;
    QuerySmsTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsTemplateListResponseBody() = default ;
    QuerySmsTemplateListResponseBody& operator=(const QuerySmsTemplateListResponseBody &) = default ;
    QuerySmsTemplateListResponseBody& operator=(QuerySmsTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->currentPage_ == nullptr && return this->message_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->smsTemplateList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsTemplateListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QuerySmsTemplateListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsTemplateListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySmsTemplateListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smsTemplateList Field Functions 
    bool hasSmsTemplateList() const { return this->smsTemplateList_ != nullptr;};
    void deleteSmsTemplateList() { this->smsTemplateList_ = nullptr;};
    inline const vector<QuerySmsTemplateListResponseBodySmsTemplateList> & smsTemplateList() const { DARABONBA_PTR_GET_CONST(smsTemplateList_, vector<QuerySmsTemplateListResponseBodySmsTemplateList>) };
    inline vector<QuerySmsTemplateListResponseBodySmsTemplateList> smsTemplateList() { DARABONBA_PTR_GET(smsTemplateList_, vector<QuerySmsTemplateListResponseBodySmsTemplateList>) };
    inline QuerySmsTemplateListResponseBody& setSmsTemplateList(const vector<QuerySmsTemplateListResponseBodySmsTemplateList> & smsTemplateList) { DARABONBA_PTR_SET_VALUE(smsTemplateList_, smsTemplateList) };
    inline QuerySmsTemplateListResponseBody& setSmsTemplateList(vector<QuerySmsTemplateListResponseBodySmsTemplateList> && smsTemplateList) { DARABONBA_PTR_SET_RVALUE(smsTemplateList_, smsTemplateList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QuerySmsTemplateListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    std::shared_ptr<string> code_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The number of templates per page. Valid values: **1 to 50**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried message templates.
    std::shared_ptr<vector<QuerySmsTemplateListResponseBodySmsTemplateList>> smsTemplateList_ = nullptr;
    // The total number of templates.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
