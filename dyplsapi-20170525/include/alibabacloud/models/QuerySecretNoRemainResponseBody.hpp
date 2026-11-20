// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNOREMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoRemainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoRemainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretRemainDTO, secretRemainDTO_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoRemainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretRemainDTO, secretRemainDTO_);
    };
    QuerySecretNoRemainResponseBody() = default ;
    QuerySecretNoRemainResponseBody(const QuerySecretNoRemainResponseBody &) = default ;
    QuerySecretNoRemainResponseBody(QuerySecretNoRemainResponseBody &&) = default ;
    QuerySecretNoRemainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoRemainResponseBody() = default ;
    QuerySecretNoRemainResponseBody& operator=(const QuerySecretNoRemainResponseBody &) = default ;
    QuerySecretNoRemainResponseBody& operator=(QuerySecretNoRemainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretRemainDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretRemainDTO& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(RemainDTOList, remainDTOList_);
      };
      friend void from_json(const Darabonba::Json& j, SecretRemainDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(RemainDTOList, remainDTOList_);
      };
      SecretRemainDTO() = default ;
      SecretRemainDTO(const SecretRemainDTO &) = default ;
      SecretRemainDTO(SecretRemainDTO &&) = default ;
      SecretRemainDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretRemainDTO() = default ;
      SecretRemainDTO& operator=(const SecretRemainDTO &) = default ;
      SecretRemainDTO& operator=(SecretRemainDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RemainDTOList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RemainDTOList& obj) { 
          DARABONBA_PTR_TO_JSON(remainDTO, remainDTO_);
        };
        friend void from_json(const Darabonba::Json& j, RemainDTOList& obj) { 
          DARABONBA_PTR_FROM_JSON(remainDTO, remainDTO_);
        };
        RemainDTOList() = default ;
        RemainDTOList(const RemainDTOList &) = default ;
        RemainDTOList(RemainDTOList &&) = default ;
        RemainDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RemainDTOList() = default ;
        RemainDTOList& operator=(const RemainDTOList &) = default ;
        RemainDTOList& operator=(RemainDTOList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RemainDTO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RemainDTO& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(City, city_);
          };
          friend void from_json(const Darabonba::Json& j, RemainDTO& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(City, city_);
          };
          RemainDTO() = default ;
          RemainDTO(const RemainDTO &) = default ;
          RemainDTO(RemainDTO &&) = default ;
          RemainDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RemainDTO() = default ;
          RemainDTO& operator=(const RemainDTO &) = default ;
          RemainDTO& operator=(RemainDTO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->city_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
          inline RemainDTO& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // city Field Functions 
          bool hasCity() const { return this->city_ != nullptr;};
          void deleteCity() { this->city_ = nullptr;};
          inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
          inline RemainDTO& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        protected:
          shared_ptr<int64_t> amount_ {};
          shared_ptr<string> city_ {};
        };

        virtual bool empty() const override { return this->remainDTO_ == nullptr; };
        // remainDTO Field Functions 
        bool hasRemainDTO() const { return this->remainDTO_ != nullptr;};
        void deleteRemainDTO() { this->remainDTO_ = nullptr;};
        inline const vector<RemainDTOList::RemainDTO> & getRemainDTO() const { DARABONBA_PTR_GET_CONST(remainDTO_, vector<RemainDTOList::RemainDTO>) };
        inline vector<RemainDTOList::RemainDTO> getRemainDTO() { DARABONBA_PTR_GET(remainDTO_, vector<RemainDTOList::RemainDTO>) };
        inline RemainDTOList& setRemainDTO(const vector<RemainDTOList::RemainDTO> & remainDTO) { DARABONBA_PTR_SET_VALUE(remainDTO_, remainDTO) };
        inline RemainDTOList& setRemainDTO(vector<RemainDTOList::RemainDTO> && remainDTO) { DARABONBA_PTR_SET_RVALUE(remainDTO_, remainDTO) };


      protected:
        shared_ptr<vector<RemainDTOList::RemainDTO>> remainDTO_ {};
      };

      virtual bool empty() const override { return this->amount_ == nullptr
        && this->city_ == nullptr && this->remainDTOList_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
      inline SecretRemainDTO& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline SecretRemainDTO& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // remainDTOList Field Functions 
      bool hasRemainDTOList() const { return this->remainDTOList_ != nullptr;};
      void deleteRemainDTOList() { this->remainDTOList_ = nullptr;};
      inline const SecretRemainDTO::RemainDTOList & getRemainDTOList() const { DARABONBA_PTR_GET_CONST(remainDTOList_, SecretRemainDTO::RemainDTOList) };
      inline SecretRemainDTO::RemainDTOList getRemainDTOList() { DARABONBA_PTR_GET(remainDTOList_, SecretRemainDTO::RemainDTOList) };
      inline SecretRemainDTO& setRemainDTOList(const SecretRemainDTO::RemainDTOList & remainDTOList) { DARABONBA_PTR_SET_VALUE(remainDTOList_, remainDTOList) };
      inline SecretRemainDTO& setRemainDTOList(SecretRemainDTO::RemainDTOList && remainDTOList) { DARABONBA_PTR_SET_RVALUE(remainDTOList_, remainDTOList) };


    protected:
      // The quantity of remaining phone numbers available for online purchase.
      shared_ptr<int64_t> amount_ {};
      // The home location of the phone numbers.
      shared_ptr<string> city_ {};
      shared_ptr<SecretRemainDTO::RemainDTOList> remainDTOList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->secretRemainDTO_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySecretNoRemainResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySecretNoRemainResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySecretNoRemainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretRemainDTO Field Functions 
    bool hasSecretRemainDTO() const { return this->secretRemainDTO_ != nullptr;};
    void deleteSecretRemainDTO() { this->secretRemainDTO_ = nullptr;};
    inline const QuerySecretNoRemainResponseBody::SecretRemainDTO & getSecretRemainDTO() const { DARABONBA_PTR_GET_CONST(secretRemainDTO_, QuerySecretNoRemainResponseBody::SecretRemainDTO) };
    inline QuerySecretNoRemainResponseBody::SecretRemainDTO getSecretRemainDTO() { DARABONBA_PTR_GET(secretRemainDTO_, QuerySecretNoRemainResponseBody::SecretRemainDTO) };
    inline QuerySecretNoRemainResponseBody& setSecretRemainDTO(const QuerySecretNoRemainResponseBody::SecretRemainDTO & secretRemainDTO) { DARABONBA_PTR_SET_VALUE(secretRemainDTO_, secretRemainDTO) };
    inline QuerySecretNoRemainResponseBody& setSecretRemainDTO(QuerySecretNoRemainResponseBody::SecretRemainDTO && secretRemainDTO) { DARABONBA_PTR_SET_RVALUE(secretRemainDTO_, secretRemainDTO) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other status codes indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information returned after the operation was called.
    shared_ptr<QuerySecretNoRemainResponseBody::SecretRemainDTO> secretRemainDTO_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
