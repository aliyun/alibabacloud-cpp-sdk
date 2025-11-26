// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTaskResponseBodyLabels.hpp>
#include <alibabacloud/models/SearchTaskResponseBodySearchTaskInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SearchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchTaskInfoList, searchTaskInfoList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(VariableNames, variableNames_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchTaskInfoList, searchTaskInfoList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(VariableNames, variableNames_);
    };
    SearchTaskResponseBody() = default ;
    SearchTaskResponseBody(const SearchTaskResponseBody &) = default ;
    SearchTaskResponseBody(SearchTaskResponseBody &&) = default ;
    SearchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTaskResponseBody() = default ;
    SearchTaskResponseBody& operator=(const SearchTaskResponseBody &) = default ;
    SearchTaskResponseBody& operator=(SearchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->labels_ == nullptr && return this->message_ == nullptr && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr
        && return this->requestId_ == nullptr && return this->searchTaskInfoList_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr && return this->variableNames_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SearchTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<SearchTaskResponseBodyLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<SearchTaskResponseBodyLabels>) };
    inline vector<SearchTaskResponseBodyLabels> labels() { DARABONBA_PTR_GET(labels_, vector<SearchTaskResponseBodyLabels>) };
    inline SearchTaskResponseBody& setLabels(const vector<SearchTaskResponseBodyLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline SearchTaskResponseBody& setLabels(vector<SearchTaskResponseBodyLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline SearchTaskResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchTaskInfoList Field Functions 
    bool hasSearchTaskInfoList() const { return this->searchTaskInfoList_ != nullptr;};
    void deleteSearchTaskInfoList() { this->searchTaskInfoList_ = nullptr;};
    inline const vector<SearchTaskResponseBodySearchTaskInfoList> & searchTaskInfoList() const { DARABONBA_PTR_GET_CONST(searchTaskInfoList_, vector<SearchTaskResponseBodySearchTaskInfoList>) };
    inline vector<SearchTaskResponseBodySearchTaskInfoList> searchTaskInfoList() { DARABONBA_PTR_GET(searchTaskInfoList_, vector<SearchTaskResponseBodySearchTaskInfoList>) };
    inline SearchTaskResponseBody& setSearchTaskInfoList(const vector<SearchTaskResponseBodySearchTaskInfoList> & searchTaskInfoList) { DARABONBA_PTR_SET_VALUE(searchTaskInfoList_, searchTaskInfoList) };
    inline SearchTaskResponseBody& setSearchTaskInfoList(vector<SearchTaskResponseBodySearchTaskInfoList> && searchTaskInfoList) { DARABONBA_PTR_SET_RVALUE(searchTaskInfoList_, searchTaskInfoList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchTaskResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // variableNames Field Functions 
    bool hasVariableNames() const { return this->variableNames_ != nullptr;};
    void deleteVariableNames() { this->variableNames_ = nullptr;};
    inline const vector<string> & variableNames() const { DARABONBA_PTR_GET_CONST(variableNames_, vector<string>) };
    inline vector<string> variableNames() { DARABONBA_PTR_GET(variableNames_, vector<string>) };
    inline SearchTaskResponseBody& setVariableNames(const vector<string> & variableNames) { DARABONBA_PTR_SET_VALUE(variableNames_, variableNames) };
    inline SearchTaskResponseBody& setVariableNames(vector<string> && variableNames) { DARABONBA_PTR_SET_RVALUE(variableNames_, variableNames) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<vector<SearchTaskResponseBodyLabels>> labels_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<SearchTaskResponseBodySearchTaskInfoList>> searchTaskInfoList_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
    std::shared_ptr<vector<string>> variableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
