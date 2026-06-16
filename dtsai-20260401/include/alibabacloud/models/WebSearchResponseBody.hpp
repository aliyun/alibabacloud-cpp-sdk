// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_WEBSEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
namespace Models
{
  class WebSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
    };
    friend void from_json(const Darabonba::Json& j, WebSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchResult, searchResult_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
    };
    WebSearchResponseBody() = default ;
    WebSearchResponseBody(const WebSearchResponseBody &) = default ;
    WebSearchResponseBody(WebSearchResponseBody &&) = default ;
    WebSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebSearchResponseBody() = default ;
    WebSearchResponseBody& operator=(const WebSearchResponseBody &) = default ;
    WebSearchResponseBody& operator=(WebSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchResult& obj) { 
        DARABONBA_PTR_TO_JSON(Snippet, snippet_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, SearchResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Snippet, snippet_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      SearchResult() = default ;
      SearchResult(const SearchResult &) = default ;
      SearchResult(SearchResult &&) = default ;
      SearchResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchResult() = default ;
      SearchResult& operator=(const SearchResult &) = default ;
      SearchResult& operator=(SearchResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->snippet_ == nullptr
        && this->title_ == nullptr && this->url_ == nullptr; };
      // snippet Field Functions 
      bool hasSnippet() const { return this->snippet_ != nullptr;};
      void deleteSnippet() { this->snippet_ = nullptr;};
      inline string getSnippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
      inline SearchResult& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SearchResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline SearchResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> snippet_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->query_ == nullptr && this->requestId_ == nullptr && this->searchResult_ == nullptr
        && this->success_ == nullptr && this->totalResults_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline WebSearchResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline WebSearchResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline WebSearchResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline WebSearchResponseBody& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline WebSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchResult Field Functions 
    bool hasSearchResult() const { return this->searchResult_ != nullptr;};
    void deleteSearchResult() { this->searchResult_ = nullptr;};
    inline const vector<WebSearchResponseBody::SearchResult> & getSearchResult() const { DARABONBA_PTR_GET_CONST(searchResult_, vector<WebSearchResponseBody::SearchResult>) };
    inline vector<WebSearchResponseBody::SearchResult> getSearchResult() { DARABONBA_PTR_GET(searchResult_, vector<WebSearchResponseBody::SearchResult>) };
    inline WebSearchResponseBody& setSearchResult(const vector<WebSearchResponseBody::SearchResult> & searchResult) { DARABONBA_PTR_SET_VALUE(searchResult_, searchResult) };
    inline WebSearchResponseBody& setSearchResult(vector<WebSearchResponseBody::SearchResult> && searchResult) { DARABONBA_PTR_SET_RVALUE(searchResult_, searchResult) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline WebSearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalResults Field Functions 
    bool hasTotalResults() const { return this->totalResults_ != nullptr;};
    void deleteTotalResults() { this->totalResults_ = nullptr;};
    inline int32_t getTotalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0) };
    inline WebSearchResponseBody& setTotalResults(int32_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<WebSearchResponseBody::SearchResult>> searchResult_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalResults_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif
