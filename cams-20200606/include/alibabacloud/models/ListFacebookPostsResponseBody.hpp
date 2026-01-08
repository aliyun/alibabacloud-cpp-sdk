// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFACEBOOKPOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFACEBOOKPOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListFacebookPostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFacebookPostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListFacebookPostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListFacebookPostsResponseBody() = default ;
    ListFacebookPostsResponseBody(const ListFacebookPostsResponseBody &) = default ;
    ListFacebookPostsResponseBody(ListFacebookPostsResponseBody &&) = default ;
    ListFacebookPostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFacebookPostsResponseBody() = default ;
    ListFacebookPostsResponseBody& operator=(const ListFacebookPostsResponseBody &) = default ;
    ListFacebookPostsResponseBody& operator=(ListFacebookPostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(FullPicture, fullPicture_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
        DARABONBA_PTR_TO_JSON(MediaUrl, mediaUrl_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PermalinkUrl, permalinkUrl_);
        DARABONBA_PTR_TO_JSON(RequestNo, requestNo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(FullPicture, fullPicture_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
        DARABONBA_PTR_FROM_JSON(MediaUrl, mediaUrl_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PermalinkUrl, permalinkUrl_);
        DARABONBA_PTR_FROM_JSON(RequestNo, requestNo_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->fullPicture_ == nullptr && this->id_ == nullptr && this->mediaType_ == nullptr && this->mediaUrl_ == nullptr && this->message_ == nullptr
        && this->permalinkUrl_ == nullptr && this->requestNo_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Data& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // fullPicture Field Functions 
      bool hasFullPicture() const { return this->fullPicture_ != nullptr;};
      void deleteFullPicture() { this->fullPicture_ = nullptr;};
      inline string getFullPicture() const { DARABONBA_PTR_GET_DEFAULT(fullPicture_, "") };
      inline Data& setFullPicture(string fullPicture) { DARABONBA_PTR_SET_VALUE(fullPicture_, fullPicture) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mediaType Field Functions 
      bool hasMediaType() const { return this->mediaType_ != nullptr;};
      void deleteMediaType() { this->mediaType_ = nullptr;};
      inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
      inline Data& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


      // mediaUrl Field Functions 
      bool hasMediaUrl() const { return this->mediaUrl_ != nullptr;};
      void deleteMediaUrl() { this->mediaUrl_ = nullptr;};
      inline string getMediaUrl() const { DARABONBA_PTR_GET_DEFAULT(mediaUrl_, "") };
      inline Data& setMediaUrl(string mediaUrl) { DARABONBA_PTR_SET_VALUE(mediaUrl_, mediaUrl) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // permalinkUrl Field Functions 
      bool hasPermalinkUrl() const { return this->permalinkUrl_ != nullptr;};
      void deletePermalinkUrl() { this->permalinkUrl_ = nullptr;};
      inline string getPermalinkUrl() const { DARABONBA_PTR_GET_DEFAULT(permalinkUrl_, "") };
      inline Data& setPermalinkUrl(string permalinkUrl) { DARABONBA_PTR_SET_VALUE(permalinkUrl_, permalinkUrl) };


      // requestNo Field Functions 
      bool hasRequestNo() const { return this->requestNo_ != nullptr;};
      void deleteRequestNo() { this->requestNo_ = nullptr;};
      inline string getRequestNo() const { DARABONBA_PTR_GET_DEFAULT(requestNo_, "") };
      inline Data& setRequestNo(string requestNo) { DARABONBA_PTR_SET_VALUE(requestNo_, requestNo) };


    protected:
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> fullPicture_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> mediaType_ {};
      shared_ptr<string> mediaUrl_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> permalinkUrl_ {};
      shared_ptr<string> requestNo_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListFacebookPostsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFacebookPostsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListFacebookPostsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListFacebookPostsResponseBody::Data>) };
    inline vector<ListFacebookPostsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListFacebookPostsResponseBody::Data>) };
    inline ListFacebookPostsResponseBody& setData(const vector<ListFacebookPostsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFacebookPostsResponseBody& setData(vector<ListFacebookPostsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFacebookPostsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFacebookPostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListFacebookPostsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListFacebookPostsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
