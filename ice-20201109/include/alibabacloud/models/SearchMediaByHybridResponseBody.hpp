// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYHYBRIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYHYBRIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaByHybridResponseBodyMediaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByHybridResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByHybridResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByHybridResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaByHybridResponseBody() = default ;
    SearchMediaByHybridResponseBody(const SearchMediaByHybridResponseBody &) = default ;
    SearchMediaByHybridResponseBody(SearchMediaByHybridResponseBody &&) = default ;
    SearchMediaByHybridResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByHybridResponseBody() = default ;
    SearchMediaByHybridResponseBody& operator=(const SearchMediaByHybridResponseBody &) = default ;
    SearchMediaByHybridResponseBody& operator=(SearchMediaByHybridResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->mediaList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaByHybridResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const vector<SearchMediaByHybridResponseBodyMediaList> & mediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, vector<SearchMediaByHybridResponseBodyMediaList>) };
    inline vector<SearchMediaByHybridResponseBodyMediaList> mediaList() { DARABONBA_PTR_GET(mediaList_, vector<SearchMediaByHybridResponseBodyMediaList>) };
    inline SearchMediaByHybridResponseBody& setMediaList(const vector<SearchMediaByHybridResponseBodyMediaList> & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline SearchMediaByHybridResponseBody& setMediaList(vector<SearchMediaByHybridResponseBodyMediaList> && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaByHybridResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaByHybridResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaByHybridResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The media assets that match the search query.
    std::shared_ptr<vector<SearchMediaByHybridResponseBodyMediaList>> mediaList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: true and false.
    std::shared_ptr<string> success_ = nullptr;
    // The total number of media assets that match the search criteria.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
