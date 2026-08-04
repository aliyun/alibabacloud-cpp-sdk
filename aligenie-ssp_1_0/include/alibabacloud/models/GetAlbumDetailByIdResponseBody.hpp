// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALBUMDETAILBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALBUMDETAILBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlbumDetailByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlbumDetailByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlbumDetailByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetAlbumDetailByIdResponseBody() = default ;
    GetAlbumDetailByIdResponseBody(const GetAlbumDetailByIdResponseBody &) = default ;
    GetAlbumDetailByIdResponseBody(GetAlbumDetailByIdResponseBody &&) = default ;
    GetAlbumDetailByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlbumDetailByIdResponseBody() = default ;
    GetAlbumDetailByIdResponseBody& operator=(const GetAlbumDetailByIdResponseBody &) = default ;
    GetAlbumDetailByIdResponseBody& operator=(GetAlbumDetailByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AlbumContentList, albumContentList_);
        DARABONBA_PTR_TO_JSON(AlbumCoverUrl, albumCoverUrl_);
        DARABONBA_PTR_TO_JSON(AlbumDescription, albumDescription_);
        DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
        DARABONBA_PTR_TO_JSON(AlbumTitle, albumTitle_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbumContentList, albumContentList_);
        DARABONBA_PTR_FROM_JSON(AlbumCoverUrl, albumCoverUrl_);
        DARABONBA_PTR_FROM_JSON(AlbumDescription, albumDescription_);
        DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
        DARABONBA_PTR_FROM_JSON(AlbumTitle, albumTitle_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlbumContentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlbumContentList& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(OrderIndex, orderIndex_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, AlbumContentList& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(OrderIndex, orderIndex_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        AlbumContentList() = default ;
        AlbumContentList(const AlbumContentList &) = default ;
        AlbumContentList(AlbumContentList &&) = default ;
        AlbumContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlbumContentList() = default ;
        AlbumContentList& operator=(const AlbumContentList &) = default ;
        AlbumContentList& operator=(AlbumContentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->id_ == nullptr && this->orderIndex_ == nullptr && this->title_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline AlbumContentList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AlbumContentList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // orderIndex Field Functions 
        bool hasOrderIndex() const { return this->orderIndex_ != nullptr;};
        void deleteOrderIndex() { this->orderIndex_ = nullptr;};
        inline string getOrderIndex() const { DARABONBA_PTR_GET_DEFAULT(orderIndex_, "") };
        inline AlbumContentList& setOrderIndex(string orderIndex) { DARABONBA_PTR_SET_VALUE(orderIndex_, orderIndex) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline AlbumContentList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Album content duration
        shared_ptr<string> duration_ {};
        // Album content ID
        shared_ptr<string> id_ {};
        // Album content sorting
        shared_ptr<string> orderIndex_ {};
        // Album content title
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->albumContentList_ == nullptr
        && this->albumCoverUrl_ == nullptr && this->albumDescription_ == nullptr && this->albumId_ == nullptr && this->albumTitle_ == nullptr; };
      // albumContentList Field Functions 
      bool hasAlbumContentList() const { return this->albumContentList_ != nullptr;};
      void deleteAlbumContentList() { this->albumContentList_ = nullptr;};
      inline const vector<Result::AlbumContentList> & getAlbumContentList() const { DARABONBA_PTR_GET_CONST(albumContentList_, vector<Result::AlbumContentList>) };
      inline vector<Result::AlbumContentList> getAlbumContentList() { DARABONBA_PTR_GET(albumContentList_, vector<Result::AlbumContentList>) };
      inline Result& setAlbumContentList(const vector<Result::AlbumContentList> & albumContentList) { DARABONBA_PTR_SET_VALUE(albumContentList_, albumContentList) };
      inline Result& setAlbumContentList(vector<Result::AlbumContentList> && albumContentList) { DARABONBA_PTR_SET_RVALUE(albumContentList_, albumContentList) };


      // albumCoverUrl Field Functions 
      bool hasAlbumCoverUrl() const { return this->albumCoverUrl_ != nullptr;};
      void deleteAlbumCoverUrl() { this->albumCoverUrl_ = nullptr;};
      inline string getAlbumCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(albumCoverUrl_, "") };
      inline Result& setAlbumCoverUrl(string albumCoverUrl) { DARABONBA_PTR_SET_VALUE(albumCoverUrl_, albumCoverUrl) };


      // albumDescription Field Functions 
      bool hasAlbumDescription() const { return this->albumDescription_ != nullptr;};
      void deleteAlbumDescription() { this->albumDescription_ = nullptr;};
      inline string getAlbumDescription() const { DARABONBA_PTR_GET_DEFAULT(albumDescription_, "") };
      inline Result& setAlbumDescription(string albumDescription) { DARABONBA_PTR_SET_VALUE(albumDescription_, albumDescription) };


      // albumId Field Functions 
      bool hasAlbumId() const { return this->albumId_ != nullptr;};
      void deleteAlbumId() { this->albumId_ = nullptr;};
      inline string getAlbumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
      inline Result& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


      // albumTitle Field Functions 
      bool hasAlbumTitle() const { return this->albumTitle_ != nullptr;};
      void deleteAlbumTitle() { this->albumTitle_ = nullptr;};
      inline string getAlbumTitle() const { DARABONBA_PTR_GET_DEFAULT(albumTitle_, "") };
      inline Result& setAlbumTitle(string albumTitle) { DARABONBA_PTR_SET_VALUE(albumTitle_, albumTitle) };


    protected:
      // Album content list
      shared_ptr<vector<Result::AlbumContentList>> albumContentList_ {};
      // Album thumbnail
      shared_ptr<string> albumCoverUrl_ {};
      // Album Description
      shared_ptr<string> albumDescription_ {};
      // Album ID
      shared_ptr<string> albumId_ {};
      // Album Title
      shared_ptr<string> albumTitle_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAlbumDetailByIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAlbumDetailByIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlbumDetailByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetAlbumDetailByIdResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetAlbumDetailByIdResponseBody::Result) };
    inline GetAlbumDetailByIdResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetAlbumDetailByIdResponseBody::Result) };
    inline GetAlbumDetailByIdResponseBody& setResult(const GetAlbumDetailByIdResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetAlbumDetailByIdResponseBody& setResult(GetAlbumDetailByIdResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code
    shared_ptr<int32_t> code_ {};
    // Additional information
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Album content
    shared_ptr<GetAlbumDetailByIdResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
