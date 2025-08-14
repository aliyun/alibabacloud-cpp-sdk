// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaResponseBodyMediaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaInfoList, mediaInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaInfoList, mediaInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaResponseBody() = default ;
    SearchMediaResponseBody(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody(SearchMediaResponseBody &&) = default ;
    SearchMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBody() = default ;
    SearchMediaResponseBody& operator=(const SearchMediaResponseBody &) = default ;
    SearchMediaResponseBody& operator=(SearchMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->mediaInfoList_ != nullptr && this->requestId_ != nullptr && this->scrollToken_ != nullptr && this->success_ != nullptr && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaInfoList Field Functions 
    bool hasMediaInfoList() const { return this->mediaInfoList_ != nullptr;};
    void deleteMediaInfoList() { this->mediaInfoList_ = nullptr;};
    inline const vector<SearchMediaResponseBodyMediaInfoList> & mediaInfoList() const { DARABONBA_PTR_GET_CONST(mediaInfoList_, vector<SearchMediaResponseBodyMediaInfoList>) };
    inline vector<SearchMediaResponseBodyMediaInfoList> mediaInfoList() { DARABONBA_PTR_GET(mediaInfoList_, vector<SearchMediaResponseBodyMediaInfoList>) };
    inline SearchMediaResponseBody& setMediaInfoList(const vector<SearchMediaResponseBodyMediaInfoList> & mediaInfoList) { DARABONBA_PTR_SET_VALUE(mediaInfoList_, mediaInfoList) };
    inline SearchMediaResponseBody& setMediaInfoList(vector<SearchMediaResponseBodyMediaInfoList> && mediaInfoList) { DARABONBA_PTR_SET_RVALUE(mediaInfoList_, mediaInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string scrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline SearchMediaResponseBody& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The media assets that meet the requirements.
    std::shared_ptr<vector<SearchMediaResponseBodyMediaInfoList>> mediaInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The pagination identifier.
    std::shared_ptr<string> scrollToken_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
    // The total number of media assets that meet the conditions.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
