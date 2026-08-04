// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMUSICTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMUSICTYPERESPONSEBODY_HPP_
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
  class QueryMusicTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMusicTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMusicTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    QueryMusicTypeResponseBody() = default ;
    QueryMusicTypeResponseBody(const QueryMusicTypeResponseBody &) = default ;
    QueryMusicTypeResponseBody(QueryMusicTypeResponseBody &&) = default ;
    QueryMusicTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMusicTypeResponseBody() = default ;
    QueryMusicTypeResponseBody& operator=(const QueryMusicTypeResponseBody &) = default ;
    QueryMusicTypeResponseBody& operator=(QueryMusicTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(MusicType, musicType_);
        DARABONBA_PTR_TO_JSON(MusicTypeName, musicTypeName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(MusicType, musicType_);
        DARABONBA_PTR_FROM_JSON(MusicTypeName, musicTypeName_);
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
      virtual bool empty() const override { return this->musicType_ == nullptr
        && this->musicTypeName_ == nullptr; };
      // musicType Field Functions 
      bool hasMusicType() const { return this->musicType_ != nullptr;};
      void deleteMusicType() { this->musicType_ = nullptr;};
      inline int64_t getMusicType() const { DARABONBA_PTR_GET_DEFAULT(musicType_, 0L) };
      inline Result& setMusicType(int64_t musicType) { DARABONBA_PTR_SET_VALUE(musicType_, musicType) };


      // musicTypeName Field Functions 
      bool hasMusicTypeName() const { return this->musicTypeName_ != nullptr;};
      void deleteMusicTypeName() { this->musicTypeName_ = nullptr;};
      inline string getMusicTypeName() const { DARABONBA_PTR_GET_DEFAULT(musicTypeName_, "") };
      inline Result& setMusicTypeName(string musicTypeName) { DARABONBA_PTR_SET_VALUE(musicTypeName_, musicTypeName) };


    protected:
      // Ringtone type ID
      shared_ptr<int64_t> musicType_ {};
      // Name of the ringtone category
      shared_ptr<string> musicTypeName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryMusicTypeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMusicTypeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMusicTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryMusicTypeResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryMusicTypeResponseBody::Result>) };
    inline vector<QueryMusicTypeResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryMusicTypeResponseBody::Result>) };
    inline QueryMusicTypeResponseBody& setResult(const vector<QueryMusicTypeResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryMusicTypeResponseBody& setResult(vector<QueryMusicTypeResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code returned by the alarm service
    shared_ptr<int32_t> code_ {};
    // error message
    shared_ptr<string> message_ {};
    // request ID
    shared_ptr<string> requestId_ {};
    // List of ringtone types
    shared_ptr<vector<QueryMusicTypeResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
