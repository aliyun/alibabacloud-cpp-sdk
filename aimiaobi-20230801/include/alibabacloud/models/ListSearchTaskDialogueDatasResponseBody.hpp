// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUEDATASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHTASKDIALOGUEDATASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSearchTaskDialogueDatasResponseBodyArticles.hpp>
#include <alibabacloud/models/ListSearchTaskDialogueDatasResponseBodyAudios.hpp>
#include <alibabacloud/models/ListSearchTaskDialogueDatasResponseBodyImages.hpp>
#include <alibabacloud/models/ListSearchTaskDialogueDatasResponseBodyVideos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListSearchTaskDialogueDatasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchTaskDialogueDatasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Audios, audios_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RealtimeSearch, realtimeSearch_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Videos, videos_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchTaskDialogueDatasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Audios, audios_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RealtimeSearch, realtimeSearch_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Videos, videos_);
    };
    ListSearchTaskDialogueDatasResponseBody() = default ;
    ListSearchTaskDialogueDatasResponseBody(const ListSearchTaskDialogueDatasResponseBody &) = default ;
    ListSearchTaskDialogueDatasResponseBody(ListSearchTaskDialogueDatasResponseBody &&) = default ;
    ListSearchTaskDialogueDatasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchTaskDialogueDatasResponseBody() = default ;
    ListSearchTaskDialogueDatasResponseBody& operator=(const ListSearchTaskDialogueDatasResponseBody &) = default ;
    ListSearchTaskDialogueDatasResponseBody& operator=(ListSearchTaskDialogueDatasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articles_ != nullptr
        && this->audios_ != nullptr && this->code_ != nullptr && this->httpStatusCode_ != nullptr && this->images_ != nullptr && this->message_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->realtimeSearch_ != nullptr && this->requestId_ != nullptr && this->searchType_ != nullptr
        && this->success_ != nullptr && this->totalCount_ != nullptr && this->videos_ != nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<ListSearchTaskDialogueDatasResponseBodyArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<ListSearchTaskDialogueDatasResponseBodyArticles>) };
    inline vector<ListSearchTaskDialogueDatasResponseBodyArticles> articles() { DARABONBA_PTR_GET(articles_, vector<ListSearchTaskDialogueDatasResponseBodyArticles>) };
    inline ListSearchTaskDialogueDatasResponseBody& setArticles(const vector<ListSearchTaskDialogueDatasResponseBodyArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline ListSearchTaskDialogueDatasResponseBody& setArticles(vector<ListSearchTaskDialogueDatasResponseBodyArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // audios Field Functions 
    bool hasAudios() const { return this->audios_ != nullptr;};
    void deleteAudios() { this->audios_ = nullptr;};
    inline const vector<ListSearchTaskDialogueDatasResponseBodyAudios> & audios() const { DARABONBA_PTR_GET_CONST(audios_, vector<ListSearchTaskDialogueDatasResponseBodyAudios>) };
    inline vector<ListSearchTaskDialogueDatasResponseBodyAudios> audios() { DARABONBA_PTR_GET(audios_, vector<ListSearchTaskDialogueDatasResponseBodyAudios>) };
    inline ListSearchTaskDialogueDatasResponseBody& setAudios(const vector<ListSearchTaskDialogueDatasResponseBodyAudios> & audios) { DARABONBA_PTR_SET_VALUE(audios_, audios) };
    inline ListSearchTaskDialogueDatasResponseBody& setAudios(vector<ListSearchTaskDialogueDatasResponseBodyAudios> && audios) { DARABONBA_PTR_SET_RVALUE(audios_, audios) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSearchTaskDialogueDatasResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSearchTaskDialogueDatasResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<ListSearchTaskDialogueDatasResponseBodyImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<ListSearchTaskDialogueDatasResponseBodyImages>) };
    inline vector<ListSearchTaskDialogueDatasResponseBodyImages> images() { DARABONBA_PTR_GET(images_, vector<ListSearchTaskDialogueDatasResponseBodyImages>) };
    inline ListSearchTaskDialogueDatasResponseBody& setImages(const vector<ListSearchTaskDialogueDatasResponseBodyImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ListSearchTaskDialogueDatasResponseBody& setImages(vector<ListSearchTaskDialogueDatasResponseBodyImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSearchTaskDialogueDatasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSearchTaskDialogueDatasResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSearchTaskDialogueDatasResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // realtimeSearch Field Functions 
    bool hasRealtimeSearch() const { return this->realtimeSearch_ != nullptr;};
    void deleteRealtimeSearch() { this->realtimeSearch_ = nullptr;};
    inline bool realtimeSearch() const { DARABONBA_PTR_GET_DEFAULT(realtimeSearch_, false) };
    inline ListSearchTaskDialogueDatasResponseBody& setRealtimeSearch(bool realtimeSearch) { DARABONBA_PTR_SET_VALUE(realtimeSearch_, realtimeSearch) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSearchTaskDialogueDatasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline ListSearchTaskDialogueDatasResponseBody& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSearchTaskDialogueDatasResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSearchTaskDialogueDatasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // videos Field Functions 
    bool hasVideos() const { return this->videos_ != nullptr;};
    void deleteVideos() { this->videos_ = nullptr;};
    inline const vector<ListSearchTaskDialogueDatasResponseBodyVideos> & videos() const { DARABONBA_PTR_GET_CONST(videos_, vector<ListSearchTaskDialogueDatasResponseBodyVideos>) };
    inline vector<ListSearchTaskDialogueDatasResponseBodyVideos> videos() { DARABONBA_PTR_GET(videos_, vector<ListSearchTaskDialogueDatasResponseBodyVideos>) };
    inline ListSearchTaskDialogueDatasResponseBody& setVideos(const vector<ListSearchTaskDialogueDatasResponseBodyVideos> & videos) { DARABONBA_PTR_SET_VALUE(videos_, videos) };
    inline ListSearchTaskDialogueDatasResponseBody& setVideos(vector<ListSearchTaskDialogueDatasResponseBodyVideos> && videos) { DARABONBA_PTR_SET_RVALUE(videos_, videos) };


  protected:
    std::shared_ptr<vector<ListSearchTaskDialogueDatasResponseBodyArticles>> articles_ = nullptr;
    std::shared_ptr<vector<ListSearchTaskDialogueDatasResponseBodyAudios>> audios_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<vector<ListSearchTaskDialogueDatasResponseBodyImages>> images_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<bool> realtimeSearch_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> searchType_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<ListSearchTaskDialogueDatasResponseBodyVideos>> videos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
