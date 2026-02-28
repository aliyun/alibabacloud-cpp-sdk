// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONVERSATIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONVERSATIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetConversationDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConversationDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Phrases, phrases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConversationDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Phrases, phrases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConversationDetailResponseBody() = default ;
    GetConversationDetailResponseBody(const GetConversationDetailResponseBody &) = default ;
    GetConversationDetailResponseBody(GetConversationDetailResponseBody &&) = default ;
    GetConversationDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConversationDetailResponseBody() = default ;
    GetConversationDetailResponseBody& operator=(const GetConversationDetailResponseBody &) = default ;
    GetConversationDetailResponseBody& operator=(GetConversationDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Phrases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Phrases& obj) { 
        DARABONBA_PTR_TO_JSON(Begin, begin_);
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(Finished, finished_);
        DARABONBA_PTR_TO_JSON(Identity, identity_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Words, words_);
      };
      friend void from_json(const Darabonba::Json& j, Phrases& obj) { 
        DARABONBA_PTR_FROM_JSON(Begin, begin_);
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(Finished, finished_);
        DARABONBA_PTR_FROM_JSON(Identity, identity_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Words, words_);
      };
      Phrases() = default ;
      Phrases(const Phrases &) = default ;
      Phrases(Phrases &&) = default ;
      Phrases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Phrases() = default ;
      Phrases& operator=(const Phrases &) = default ;
      Phrases& operator=(Phrases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr && this->finished_ == nullptr && this->identity_ == nullptr && this->role_ == nullptr && this->words_ == nullptr; };
      // begin Field Functions 
      bool hasBegin() const { return this->begin_ != nullptr;};
      void deleteBegin() { this->begin_ = nullptr;};
      inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
      inline Phrases& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline Phrases& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // finished Field Functions 
      bool hasFinished() const { return this->finished_ != nullptr;};
      void deleteFinished() { this->finished_ = nullptr;};
      inline bool getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
      inline Phrases& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


      // identity Field Functions 
      bool hasIdentity() const { return this->identity_ != nullptr;};
      void deleteIdentity() { this->identity_ = nullptr;};
      inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
      inline Phrases& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Phrases& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // words Field Functions 
      bool hasWords() const { return this->words_ != nullptr;};
      void deleteWords() { this->words_ = nullptr;};
      inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
      inline Phrases& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


    protected:
      shared_ptr<int32_t> begin_ {};
      shared_ptr<int32_t> end_ {};
      shared_ptr<bool> finished_ {};
      shared_ptr<string> identity_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> words_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->phrases_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConversationDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetConversationDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConversationDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phrases Field Functions 
    bool hasPhrases() const { return this->phrases_ != nullptr;};
    void deletePhrases() { this->phrases_ = nullptr;};
    inline const vector<GetConversationDetailResponseBody::Phrases> & getPhrases() const { DARABONBA_PTR_GET_CONST(phrases_, vector<GetConversationDetailResponseBody::Phrases>) };
    inline vector<GetConversationDetailResponseBody::Phrases> getPhrases() { DARABONBA_PTR_GET(phrases_, vector<GetConversationDetailResponseBody::Phrases>) };
    inline GetConversationDetailResponseBody& setPhrases(const vector<GetConversationDetailResponseBody::Phrases> & phrases) { DARABONBA_PTR_SET_VALUE(phrases_, phrases) };
    inline GetConversationDetailResponseBody& setPhrases(vector<GetConversationDetailResponseBody::Phrases> && phrases) { DARABONBA_PTR_SET_RVALUE(phrases_, phrases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConversationDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<GetConversationDetailResponseBody::Phrases>> phrases_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
