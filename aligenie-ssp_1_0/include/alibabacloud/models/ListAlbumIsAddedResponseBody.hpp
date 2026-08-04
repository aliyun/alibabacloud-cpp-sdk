// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALBUMISADDEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALBUMISADDEDRESPONSEBODY_HPP_
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
  class ListAlbumIsAddedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlbumIsAddedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlbumIsAddedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListAlbumIsAddedResponseBody() = default ;
    ListAlbumIsAddedResponseBody(const ListAlbumIsAddedResponseBody &) = default ;
    ListAlbumIsAddedResponseBody(ListAlbumIsAddedResponseBody &&) = default ;
    ListAlbumIsAddedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlbumIsAddedResponseBody() = default ;
    ListAlbumIsAddedResponseBody& operator=(const ListAlbumIsAddedResponseBody &) = default ;
    ListAlbumIsAddedResponseBody& operator=(ListAlbumIsAddedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
        DARABONBA_PTR_TO_JSON(IsAdded, isAdded_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
        DARABONBA_PTR_FROM_JSON(IsAdded, isAdded_);
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
      virtual bool empty() const override { return this->albumId_ == nullptr
        && this->isAdded_ == nullptr; };
      // albumId Field Functions 
      bool hasAlbumId() const { return this->albumId_ != nullptr;};
      void deleteAlbumId() { this->albumId_ = nullptr;};
      inline string getAlbumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
      inline Result& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


      // isAdded Field Functions 
      bool hasIsAdded() const { return this->isAdded_ != nullptr;};
      void deleteIsAdded() { this->isAdded_ = nullptr;};
      inline string getIsAdded() const { DARABONBA_PTR_GET_DEFAULT(isAdded_, "") };
      inline Result& setIsAdded(string isAdded) { DARABONBA_PTR_SET_VALUE(isAdded_, isAdded) };


    protected:
      // Album ID
      shared_ptr<string> albumId_ {};
      // Whether it is subscribed
      shared_ptr<string> isAdded_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAlbumIsAddedResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAlbumIsAddedResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlbumIsAddedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListAlbumIsAddedResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListAlbumIsAddedResponseBody::Result>) };
    inline vector<ListAlbumIsAddedResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListAlbumIsAddedResponseBody::Result>) };
    inline ListAlbumIsAddedResponseBody& setResult(const vector<ListAlbumIsAddedResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAlbumIsAddedResponseBody& setResult(vector<ListAlbumIsAddedResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code
    shared_ptr<int32_t> code_ {};
    // Additional information
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Result
    shared_ptr<vector<ListAlbumIsAddedResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
