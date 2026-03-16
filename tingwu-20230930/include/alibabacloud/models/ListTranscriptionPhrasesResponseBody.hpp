// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCRIPTIONPHRASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCRIPTIONPHRASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class ListTranscriptionPhrasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscriptionPhrasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscriptionPhrasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTranscriptionPhrasesResponseBody() = default ;
    ListTranscriptionPhrasesResponseBody(const ListTranscriptionPhrasesResponseBody &) = default ;
    ListTranscriptionPhrasesResponseBody(ListTranscriptionPhrasesResponseBody &&) = default ;
    ListTranscriptionPhrasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscriptionPhrasesResponseBody() = default ;
    ListTranscriptionPhrasesResponseBody& operator=(const ListTranscriptionPhrasesResponseBody &) = default ;
    ListTranscriptionPhrasesResponseBody& operator=(ListTranscriptionPhrasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Phrases, phrases_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Phrases, phrases_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class Phrases : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Phrases& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PhraseId, phraseId_);
        };
        friend void from_json(const Darabonba::Json& j, Phrases& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PhraseId, phraseId_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->phraseId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Phrases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Phrases& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // phraseId Field Functions 
        bool hasPhraseId() const { return this->phraseId_ != nullptr;};
        void deletePhraseId() { this->phraseId_ = nullptr;};
        inline string getPhraseId() const { DARABONBA_PTR_GET_DEFAULT(phraseId_, "") };
        inline Phrases& setPhraseId(string phraseId) { DARABONBA_PTR_SET_VALUE(phraseId_, phraseId) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> phraseId_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->phrases_ == nullptr && this->status_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // phrases Field Functions 
      bool hasPhrases() const { return this->phrases_ != nullptr;};
      void deletePhrases() { this->phrases_ = nullptr;};
      inline const vector<Data::Phrases> & getPhrases() const { DARABONBA_PTR_GET_CONST(phrases_, vector<Data::Phrases>) };
      inline vector<Data::Phrases> getPhrases() { DARABONBA_PTR_GET(phrases_, vector<Data::Phrases>) };
      inline Data& setPhrases(const vector<Data::Phrases> & phrases) { DARABONBA_PTR_SET_VALUE(phrases_, phrases) };
      inline Data& setPhrases(vector<Data::Phrases> && phrases) { DARABONBA_PTR_SET_RVALUE(phrases_, phrases) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<vector<Data::Phrases>> phrases_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTranscriptionPhrasesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTranscriptionPhrasesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTranscriptionPhrasesResponseBody::Data) };
    inline ListTranscriptionPhrasesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTranscriptionPhrasesResponseBody::Data) };
    inline ListTranscriptionPhrasesResponseBody& setData(const ListTranscriptionPhrasesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTranscriptionPhrasesResponseBody& setData(ListTranscriptionPhrasesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTranscriptionPhrasesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTranscriptionPhrasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListTranscriptionPhrasesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
