// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class MediaInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      };
      friend void from_json(const Darabonba::Json& j, MediaInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      };
      MediaInfoList() = default ;
      MediaInfoList(const MediaInfoList &) = default ;
      MediaInfoList(MediaInfoList &&) = default ;
      MediaInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaInfoList() = default ;
      MediaInfoList& operator=(const MediaInfoList &) = default ;
      MediaInfoList& operator=(MediaInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mediaId_ == nullptr; };
      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaInfoList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    protected:
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->mediaInfoList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaByFaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaInfoList Field Functions 
    bool hasMediaInfoList() const { return this->mediaInfoList_ != nullptr;};
    void deleteMediaInfoList() { this->mediaInfoList_ = nullptr;};
    inline const vector<SearchMediaByFaceResponseBody::MediaInfoList> & getMediaInfoList() const { DARABONBA_PTR_GET_CONST(mediaInfoList_, vector<SearchMediaByFaceResponseBody::MediaInfoList>) };
    inline vector<SearchMediaByFaceResponseBody::MediaInfoList> getMediaInfoList() { DARABONBA_PTR_GET(mediaInfoList_, vector<SearchMediaByFaceResponseBody::MediaInfoList>) };
    inline SearchMediaByFaceResponseBody& setMediaInfoList(const vector<SearchMediaByFaceResponseBody::MediaInfoList> & mediaInfoList) { DARABONBA_PTR_SET_VALUE(mediaInfoList_, mediaInfoList) };
    inline SearchMediaByFaceResponseBody& setMediaInfoList(vector<SearchMediaByFaceResponseBody::MediaInfoList> && mediaInfoList) { DARABONBA_PTR_SET_RVALUE(mediaInfoList_, mediaInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaByFaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaByFaceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaByFaceResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The media assets that meet the conditions.
    shared_ptr<vector<SearchMediaByFaceResponseBody::MediaInfoList>> mediaInfoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true false
    shared_ptr<string> success_ {};
    // The total number of data records that meet the specified filter condition.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
