// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaClipByFaceResponseBodyMediaClipList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaClipByFaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaClipByFaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaClipList, mediaClipList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaClipByFaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaClipList, mediaClipList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaClipByFaceResponseBody() = default ;
    SearchMediaClipByFaceResponseBody(const SearchMediaClipByFaceResponseBody &) = default ;
    SearchMediaClipByFaceResponseBody(SearchMediaClipByFaceResponseBody &&) = default ;
    SearchMediaClipByFaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaClipByFaceResponseBody() = default ;
    SearchMediaClipByFaceResponseBody& operator=(const SearchMediaClipByFaceResponseBody &) = default ;
    SearchMediaClipByFaceResponseBody& operator=(SearchMediaClipByFaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->mediaClipList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaClipByFaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaClipList Field Functions 
    bool hasMediaClipList() const { return this->mediaClipList_ != nullptr;};
    void deleteMediaClipList() { this->mediaClipList_ = nullptr;};
    inline const vector<SearchMediaClipByFaceResponseBodyMediaClipList> & mediaClipList() const { DARABONBA_PTR_GET_CONST(mediaClipList_, vector<SearchMediaClipByFaceResponseBodyMediaClipList>) };
    inline vector<SearchMediaClipByFaceResponseBodyMediaClipList> mediaClipList() { DARABONBA_PTR_GET(mediaClipList_, vector<SearchMediaClipByFaceResponseBodyMediaClipList>) };
    inline SearchMediaClipByFaceResponseBody& setMediaClipList(const vector<SearchMediaClipByFaceResponseBodyMediaClipList> & mediaClipList) { DARABONBA_PTR_SET_VALUE(mediaClipList_, mediaClipList) };
    inline SearchMediaClipByFaceResponseBody& setMediaClipList(vector<SearchMediaClipByFaceResponseBodyMediaClipList> && mediaClipList) { DARABONBA_PTR_SET_RVALUE(mediaClipList_, mediaClipList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaClipByFaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaClipByFaceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaClipByFaceResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The media asset clips that meet the requirements.
    std::shared_ptr<vector<SearchMediaClipByFaceResponseBodyMediaClipList>> mediaClipList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: true and false.
    std::shared_ptr<string> success_ = nullptr;
    // The total number of media asset clips that meet the conditions.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
