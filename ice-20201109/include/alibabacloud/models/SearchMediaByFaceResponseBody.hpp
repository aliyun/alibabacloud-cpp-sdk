// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaByFaceResponseBodyMediaInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByFaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByFaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaInfoList, mediaInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByFaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaInfoList, mediaInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaByFaceResponseBody() = default ;
    SearchMediaByFaceResponseBody(const SearchMediaByFaceResponseBody &) = default ;
    SearchMediaByFaceResponseBody(SearchMediaByFaceResponseBody &&) = default ;
    SearchMediaByFaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByFaceResponseBody() = default ;
    SearchMediaByFaceResponseBody& operator=(const SearchMediaByFaceResponseBody &) = default ;
    SearchMediaByFaceResponseBody& operator=(SearchMediaByFaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->mediaInfoList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaByFaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaInfoList Field Functions 
    bool hasMediaInfoList() const { return this->mediaInfoList_ != nullptr;};
    void deleteMediaInfoList() { this->mediaInfoList_ = nullptr;};
    inline const vector<SearchMediaByFaceResponseBodyMediaInfoList> & mediaInfoList() const { DARABONBA_PTR_GET_CONST(mediaInfoList_, vector<SearchMediaByFaceResponseBodyMediaInfoList>) };
    inline vector<SearchMediaByFaceResponseBodyMediaInfoList> mediaInfoList() { DARABONBA_PTR_GET(mediaInfoList_, vector<SearchMediaByFaceResponseBodyMediaInfoList>) };
    inline SearchMediaByFaceResponseBody& setMediaInfoList(const vector<SearchMediaByFaceResponseBodyMediaInfoList> & mediaInfoList) { DARABONBA_PTR_SET_VALUE(mediaInfoList_, mediaInfoList) };
    inline SearchMediaByFaceResponseBody& setMediaInfoList(vector<SearchMediaByFaceResponseBodyMediaInfoList> && mediaInfoList) { DARABONBA_PTR_SET_RVALUE(mediaInfoList_, mediaInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaByFaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaByFaceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaByFaceResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The media assets that meet the conditions.
    std::shared_ptr<vector<SearchMediaByFaceResponseBodyMediaInfoList>> mediaInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: true false
    std::shared_ptr<string> success_ = nullptr;
    // The total number of data records that meet the specified filter condition.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
