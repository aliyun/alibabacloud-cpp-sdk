// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCASHCOUPONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCASHCOUPONSRESPONSEBODY_HPP_
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
  class QueryCashCouponsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCashCouponsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCashCouponsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCashCouponsResponseBody() = default ;
    QueryCashCouponsResponseBody(const QueryCashCouponsResponseBody &) = default ;
    QueryCashCouponsResponseBody(QueryCashCouponsResponseBody &&) = default ;
    QueryCashCouponsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCashCouponsResponseBody() = default ;
    QueryCashCouponsResponseBody& operator=(const QueryCashCouponsResponseBody &) = default ;
    QueryCashCouponsResponseBody& operator=(QueryCashCouponsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CashCoupon, cashCoupon_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CashCoupon, cashCoupon_);
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
      class CashCoupon : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CashCoupon& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
          DARABONBA_PTR_TO_JSON(ApplicableScenarios, applicableScenarios_);
          DARABONBA_PTR_TO_JSON(Balance, balance_);
          DARABONBA_PTR_TO_JSON(CashCouponId, cashCouponId_);
          DARABONBA_PTR_TO_JSON(CashCouponNo, cashCouponNo_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
          DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
          DARABONBA_PTR_TO_JSON(GrantedTime, grantedTime_);
          DARABONBA_PTR_TO_JSON(NominalValue, nominalValue_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, CashCoupon& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
          DARABONBA_PTR_FROM_JSON(ApplicableScenarios, applicableScenarios_);
          DARABONBA_PTR_FROM_JSON(Balance, balance_);
          DARABONBA_PTR_FROM_JSON(CashCouponId, cashCouponId_);
          DARABONBA_PTR_FROM_JSON(CashCouponNo, cashCouponNo_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
          DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
          DARABONBA_PTR_FROM_JSON(GrantedTime, grantedTime_);
          DARABONBA_PTR_FROM_JSON(NominalValue, nominalValue_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        CashCoupon() = default ;
        CashCoupon(const CashCoupon &) = default ;
        CashCoupon(CashCoupon &&) = default ;
        CashCoupon(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CashCoupon() = default ;
        CashCoupon& operator=(const CashCoupon &) = default ;
        CashCoupon& operator=(CashCoupon &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && this->applicableScenarios_ == nullptr && this->balance_ == nullptr && this->cashCouponId_ == nullptr && this->cashCouponNo_ == nullptr && this->description_ == nullptr
        && this->effectiveTime_ == nullptr && this->expiryTime_ == nullptr && this->grantedTime_ == nullptr && this->nominalValue_ == nullptr && this->status_ == nullptr; };
        // applicableProducts Field Functions 
        bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
        void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
        inline string getApplicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
        inline CashCoupon& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


        // applicableScenarios Field Functions 
        bool hasApplicableScenarios() const { return this->applicableScenarios_ != nullptr;};
        void deleteApplicableScenarios() { this->applicableScenarios_ = nullptr;};
        inline string getApplicableScenarios() const { DARABONBA_PTR_GET_DEFAULT(applicableScenarios_, "") };
        inline CashCoupon& setApplicableScenarios(string applicableScenarios) { DARABONBA_PTR_SET_VALUE(applicableScenarios_, applicableScenarios) };


        // balance Field Functions 
        bool hasBalance() const { return this->balance_ != nullptr;};
        void deleteBalance() { this->balance_ = nullptr;};
        inline string getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
        inline CashCoupon& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


        // cashCouponId Field Functions 
        bool hasCashCouponId() const { return this->cashCouponId_ != nullptr;};
        void deleteCashCouponId() { this->cashCouponId_ = nullptr;};
        inline int64_t getCashCouponId() const { DARABONBA_PTR_GET_DEFAULT(cashCouponId_, 0L) };
        inline CashCoupon& setCashCouponId(int64_t cashCouponId) { DARABONBA_PTR_SET_VALUE(cashCouponId_, cashCouponId) };


        // cashCouponNo Field Functions 
        bool hasCashCouponNo() const { return this->cashCouponNo_ != nullptr;};
        void deleteCashCouponNo() { this->cashCouponNo_ = nullptr;};
        inline string getCashCouponNo() const { DARABONBA_PTR_GET_DEFAULT(cashCouponNo_, "") };
        inline CashCoupon& setCashCouponNo(string cashCouponNo) { DARABONBA_PTR_SET_VALUE(cashCouponNo_, cashCouponNo) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CashCoupon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // effectiveTime Field Functions 
        bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
        void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
        inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
        inline CashCoupon& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


        // expiryTime Field Functions 
        bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
        void deleteExpiryTime() { this->expiryTime_ = nullptr;};
        inline string getExpiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
        inline CashCoupon& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


        // grantedTime Field Functions 
        bool hasGrantedTime() const { return this->grantedTime_ != nullptr;};
        void deleteGrantedTime() { this->grantedTime_ = nullptr;};
        inline string getGrantedTime() const { DARABONBA_PTR_GET_DEFAULT(grantedTime_, "") };
        inline CashCoupon& setGrantedTime(string grantedTime) { DARABONBA_PTR_SET_VALUE(grantedTime_, grantedTime) };


        // nominalValue Field Functions 
        bool hasNominalValue() const { return this->nominalValue_ != nullptr;};
        void deleteNominalValue() { this->nominalValue_ = nullptr;};
        inline string getNominalValue() const { DARABONBA_PTR_GET_DEFAULT(nominalValue_, "") };
        inline CashCoupon& setNominalValue(string nominalValue) { DARABONBA_PTR_SET_VALUE(nominalValue_, nominalValue) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CashCoupon& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The service to which the voucher is applicable.
        shared_ptr<string> applicableProducts_ {};
        // The scenario to which the voucher is applicable.
        shared_ptr<string> applicableScenarios_ {};
        // The remaining quota of the voucher.
        shared_ptr<string> balance_ {};
        // The ID of the voucher.
        shared_ptr<int64_t> cashCouponId_ {};
        // The code of the voucher.
        shared_ptr<string> cashCouponNo_ {};
        // The description of the voucher.
        shared_ptr<string> description_ {};
        // The time when the voucher took effect.
        shared_ptr<string> effectiveTime_ {};
        // The time when the voucher expired.
        shared_ptr<string> expiryTime_ {};
        // The time when the voucher was released.
        shared_ptr<string> grantedTime_ {};
        // The denomination of the voucher.
        shared_ptr<string> nominalValue_ {};
        // The state of the voucher. Valid values:
        // 
        // *   Available: The voucher is valid.
        // *   Expired: The voucher has expired.
        // *   Cancelled: The voucher is canceled.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->cashCoupon_ == nullptr; };
      // cashCoupon Field Functions 
      bool hasCashCoupon() const { return this->cashCoupon_ != nullptr;};
      void deleteCashCoupon() { this->cashCoupon_ = nullptr;};
      inline const vector<Data::CashCoupon> & getCashCoupon() const { DARABONBA_PTR_GET_CONST(cashCoupon_, vector<Data::CashCoupon>) };
      inline vector<Data::CashCoupon> getCashCoupon() { DARABONBA_PTR_GET(cashCoupon_, vector<Data::CashCoupon>) };
      inline Data& setCashCoupon(const vector<Data::CashCoupon> & cashCoupon) { DARABONBA_PTR_SET_VALUE(cashCoupon_, cashCoupon) };
      inline Data& setCashCoupon(vector<Data::CashCoupon> && cashCoupon) { DARABONBA_PTR_SET_RVALUE(cashCoupon_, cashCoupon) };


    protected:
      shared_ptr<vector<Data::CashCoupon>> cashCoupon_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCashCouponsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCashCouponsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCashCouponsResponseBody::Data) };
    inline QueryCashCouponsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCashCouponsResponseBody::Data) };
    inline QueryCashCouponsResponseBody& setData(const QueryCashCouponsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCashCouponsResponseBody& setData(QueryCashCouponsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCashCouponsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCashCouponsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCashCouponsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryCashCouponsResponseBody::Data> data_ {};
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
