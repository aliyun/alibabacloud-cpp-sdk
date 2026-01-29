// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREPAIDCARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREPAIDCARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPrepaidCardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPrepaidCardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPrepaidCardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPrepaidCardsResponseBody() = default ;
    QueryPrepaidCardsResponseBody(const QueryPrepaidCardsResponseBody &) = default ;
    QueryPrepaidCardsResponseBody(QueryPrepaidCardsResponseBody &&) = default ;
    QueryPrepaidCardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPrepaidCardsResponseBody() = default ;
    QueryPrepaidCardsResponseBody& operator=(const QueryPrepaidCardsResponseBody &) = default ;
    QueryPrepaidCardsResponseBody& operator=(QueryPrepaidCardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PrepaidCard, prepaidCard_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PrepaidCard, prepaidCard_);
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
      class PrepaidCard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrepaidCard& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
          DARABONBA_PTR_TO_JSON(ApplicableScenarios, applicableScenarios_);
          DARABONBA_PTR_TO_JSON(Balance, balance_);
          DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
          DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
          DARABONBA_PTR_TO_JSON(GrantedTime, grantedTime_);
          DARABONBA_PTR_TO_JSON(NominalValue, nominalValue_);
          DARABONBA_PTR_TO_JSON(PrepaidCardId, prepaidCardId_);
          DARABONBA_PTR_TO_JSON(PrepaidCardNo, prepaidCardNo_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrepaidCard& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
          DARABONBA_PTR_FROM_JSON(ApplicableScenarios, applicableScenarios_);
          DARABONBA_PTR_FROM_JSON(Balance, balance_);
          DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
          DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
          DARABONBA_PTR_FROM_JSON(GrantedTime, grantedTime_);
          DARABONBA_PTR_FROM_JSON(NominalValue, nominalValue_);
          DARABONBA_PTR_FROM_JSON(PrepaidCardId, prepaidCardId_);
          DARABONBA_PTR_FROM_JSON(PrepaidCardNo, prepaidCardNo_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PrepaidCard() = default ;
        PrepaidCard(const PrepaidCard &) = default ;
        PrepaidCard(PrepaidCard &&) = default ;
        PrepaidCard(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrepaidCard() = default ;
        PrepaidCard& operator=(const PrepaidCard &) = default ;
        PrepaidCard& operator=(PrepaidCard &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && this->applicableScenarios_ == nullptr && this->balance_ == nullptr && this->effectiveTime_ == nullptr && this->expiryTime_ == nullptr && this->grantedTime_ == nullptr
        && this->nominalValue_ == nullptr && this->prepaidCardId_ == nullptr && this->prepaidCardNo_ == nullptr && this->status_ == nullptr; };
        // applicableProducts Field Functions 
        bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
        void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
        inline string getApplicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
        inline PrepaidCard& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


        // applicableScenarios Field Functions 
        bool hasApplicableScenarios() const { return this->applicableScenarios_ != nullptr;};
        void deleteApplicableScenarios() { this->applicableScenarios_ = nullptr;};
        inline string getApplicableScenarios() const { DARABONBA_PTR_GET_DEFAULT(applicableScenarios_, "") };
        inline PrepaidCard& setApplicableScenarios(string applicableScenarios) { DARABONBA_PTR_SET_VALUE(applicableScenarios_, applicableScenarios) };


        // balance Field Functions 
        bool hasBalance() const { return this->balance_ != nullptr;};
        void deleteBalance() { this->balance_ = nullptr;};
        inline string getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
        inline PrepaidCard& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


        // effectiveTime Field Functions 
        bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
        void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
        inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
        inline PrepaidCard& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


        // expiryTime Field Functions 
        bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
        void deleteExpiryTime() { this->expiryTime_ = nullptr;};
        inline string getExpiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
        inline PrepaidCard& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


        // grantedTime Field Functions 
        bool hasGrantedTime() const { return this->grantedTime_ != nullptr;};
        void deleteGrantedTime() { this->grantedTime_ = nullptr;};
        inline string getGrantedTime() const { DARABONBA_PTR_GET_DEFAULT(grantedTime_, "") };
        inline PrepaidCard& setGrantedTime(string grantedTime) { DARABONBA_PTR_SET_VALUE(grantedTime_, grantedTime) };


        // nominalValue Field Functions 
        bool hasNominalValue() const { return this->nominalValue_ != nullptr;};
        void deleteNominalValue() { this->nominalValue_ = nullptr;};
        inline string getNominalValue() const { DARABONBA_PTR_GET_DEFAULT(nominalValue_, "") };
        inline PrepaidCard& setNominalValue(string nominalValue) { DARABONBA_PTR_SET_VALUE(nominalValue_, nominalValue) };


        // prepaidCardId Field Functions 
        bool hasPrepaidCardId() const { return this->prepaidCardId_ != nullptr;};
        void deletePrepaidCardId() { this->prepaidCardId_ = nullptr;};
        inline int64_t getPrepaidCardId() const { DARABONBA_PTR_GET_DEFAULT(prepaidCardId_, 0L) };
        inline PrepaidCard& setPrepaidCardId(int64_t prepaidCardId) { DARABONBA_PTR_SET_VALUE(prepaidCardId_, prepaidCardId) };


        // prepaidCardNo Field Functions 
        bool hasPrepaidCardNo() const { return this->prepaidCardNo_ != nullptr;};
        void deletePrepaidCardNo() { this->prepaidCardNo_ = nullptr;};
        inline string getPrepaidCardNo() const { DARABONBA_PTR_GET_DEFAULT(prepaidCardNo_, "") };
        inline PrepaidCard& setPrepaidCardNo(string prepaidCardNo) { DARABONBA_PTR_SET_VALUE(prepaidCardNo_, prepaidCardNo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PrepaidCard& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The services to which the prepaid card is applicable.
        shared_ptr<string> applicableProducts_ {};
        // The scenario to which the prepaid card is applicable.
        shared_ptr<string> applicableScenarios_ {};
        // The balance of the prepaid card.
        shared_ptr<string> balance_ {};
        // The time when the prepaid card took effect.
        shared_ptr<string> effectiveTime_ {};
        // The time when the prepaid card expired.
        shared_ptr<string> expiryTime_ {};
        // The time when the prepaid card was issued.
        shared_ptr<string> grantedTime_ {};
        // The nominal value of the prepaid card.
        shared_ptr<string> nominalValue_ {};
        // The ID of the prepaid card.
        shared_ptr<int64_t> prepaidCardId_ {};
        // The number of the prepaid card.
        shared_ptr<string> prepaidCardNo_ {};
        // The status of the prepaid card. Valid values:
        // 
        // *   Available: The prepaid card is valid.
        // *   Expired: The prepaid card expired.
        // *   Cancelled: The prepaid card is invalid.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->prepaidCard_ == nullptr; };
      // prepaidCard Field Functions 
      bool hasPrepaidCard() const { return this->prepaidCard_ != nullptr;};
      void deletePrepaidCard() { this->prepaidCard_ = nullptr;};
      inline const vector<Data::PrepaidCard> & getPrepaidCard() const { DARABONBA_PTR_GET_CONST(prepaidCard_, vector<Data::PrepaidCard>) };
      inline vector<Data::PrepaidCard> getPrepaidCard() { DARABONBA_PTR_GET(prepaidCard_, vector<Data::PrepaidCard>) };
      inline Data& setPrepaidCard(const vector<Data::PrepaidCard> & prepaidCard) { DARABONBA_PTR_SET_VALUE(prepaidCard_, prepaidCard) };
      inline Data& setPrepaidCard(vector<Data::PrepaidCard> && prepaidCard) { DARABONBA_PTR_SET_RVALUE(prepaidCard_, prepaidCard) };


    protected:
      shared_ptr<vector<Data::PrepaidCard>> prepaidCard_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPrepaidCardsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPrepaidCardsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPrepaidCardsResponseBody::Data) };
    inline QueryPrepaidCardsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPrepaidCardsResponseBody::Data) };
    inline QueryPrepaidCardsResponseBody& setData(const QueryPrepaidCardsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPrepaidCardsResponseBody& setData(QueryPrepaidCardsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPrepaidCardsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPrepaidCardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPrepaidCardsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryPrepaidCardsResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
