// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREDEEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREDEEMRESPONSEBODY_HPP_
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
  class QueryRedeemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRedeemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRedeemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryRedeemResponseBody() = default ;
    QueryRedeemResponseBody(const QueryRedeemResponseBody &) = default ;
    QueryRedeemResponseBody(QueryRedeemResponseBody &&) = default ;
    QueryRedeemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRedeemResponseBody() = default ;
    QueryRedeemResponseBody& operator=(const QueryRedeemResponseBody &) = default ;
    QueryRedeemResponseBody& operator=(QueryRedeemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Redeem, redeem_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Redeem, redeem_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Redeem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Redeem& obj) { 
          DARABONBA_PTR_TO_JSON(Redeem, redeem_);
        };
        friend void from_json(const Darabonba::Json& j, Redeem& obj) { 
          DARABONBA_PTR_FROM_JSON(Redeem, redeem_);
        };
        Redeem() = default ;
        Redeem(const Redeem &) = default ;
        Redeem(Redeem &&) = default ;
        Redeem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Redeem() = default ;
        Redeem& operator=(const Redeem &) = default ;
        Redeem& operator=(Redeem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RedeemItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RedeemItem& obj) { 
            DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
            DARABONBA_PTR_TO_JSON(Balance, balance_);
            DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
            DARABONBA_PTR_TO_JSON(ExpiryTime, expiryTime_);
            DARABONBA_PTR_TO_JSON(GrantedTime, grantedTime_);
            DARABONBA_PTR_TO_JSON(NominalValue, nominalValue_);
            DARABONBA_PTR_TO_JSON(RedeemId, redeemId_);
            DARABONBA_PTR_TO_JSON(RedeemNo, redeemNo_);
            DARABONBA_PTR_TO_JSON(Specification, specification_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, RedeemItem& obj) { 
            DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
            DARABONBA_PTR_FROM_JSON(Balance, balance_);
            DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
            DARABONBA_PTR_FROM_JSON(ExpiryTime, expiryTime_);
            DARABONBA_PTR_FROM_JSON(GrantedTime, grantedTime_);
            DARABONBA_PTR_FROM_JSON(NominalValue, nominalValue_);
            DARABONBA_PTR_FROM_JSON(RedeemId, redeemId_);
            DARABONBA_PTR_FROM_JSON(RedeemNo, redeemNo_);
            DARABONBA_PTR_FROM_JSON(Specification, specification_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          RedeemItem() = default ;
          RedeemItem(const RedeemItem &) = default ;
          RedeemItem(RedeemItem &&) = default ;
          RedeemItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RedeemItem() = default ;
          RedeemItem& operator=(const RedeemItem &) = default ;
          RedeemItem& operator=(RedeemItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && this->balance_ == nullptr && this->effectiveTime_ == nullptr && this->expiryTime_ == nullptr && this->grantedTime_ == nullptr && this->nominalValue_ == nullptr
        && this->redeemId_ == nullptr && this->redeemNo_ == nullptr && this->specification_ == nullptr && this->status_ == nullptr; };
          // applicableProducts Field Functions 
          bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
          void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
          inline string getApplicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
          inline RedeemItem& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


          // balance Field Functions 
          bool hasBalance() const { return this->balance_ != nullptr;};
          void deleteBalance() { this->balance_ = nullptr;};
          inline string getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, "") };
          inline RedeemItem& setBalance(string balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


          // effectiveTime Field Functions 
          bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
          void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
          inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
          inline RedeemItem& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


          // expiryTime Field Functions 
          bool hasExpiryTime() const { return this->expiryTime_ != nullptr;};
          void deleteExpiryTime() { this->expiryTime_ = nullptr;};
          inline string getExpiryTime() const { DARABONBA_PTR_GET_DEFAULT(expiryTime_, "") };
          inline RedeemItem& setExpiryTime(string expiryTime) { DARABONBA_PTR_SET_VALUE(expiryTime_, expiryTime) };


          // grantedTime Field Functions 
          bool hasGrantedTime() const { return this->grantedTime_ != nullptr;};
          void deleteGrantedTime() { this->grantedTime_ = nullptr;};
          inline string getGrantedTime() const { DARABONBA_PTR_GET_DEFAULT(grantedTime_, "") };
          inline RedeemItem& setGrantedTime(string grantedTime) { DARABONBA_PTR_SET_VALUE(grantedTime_, grantedTime) };


          // nominalValue Field Functions 
          bool hasNominalValue() const { return this->nominalValue_ != nullptr;};
          void deleteNominalValue() { this->nominalValue_ = nullptr;};
          inline string getNominalValue() const { DARABONBA_PTR_GET_DEFAULT(nominalValue_, "") };
          inline RedeemItem& setNominalValue(string nominalValue) { DARABONBA_PTR_SET_VALUE(nominalValue_, nominalValue) };


          // redeemId Field Functions 
          bool hasRedeemId() const { return this->redeemId_ != nullptr;};
          void deleteRedeemId() { this->redeemId_ = nullptr;};
          inline string getRedeemId() const { DARABONBA_PTR_GET_DEFAULT(redeemId_, "") };
          inline RedeemItem& setRedeemId(string redeemId) { DARABONBA_PTR_SET_VALUE(redeemId_, redeemId) };


          // redeemNo Field Functions 
          bool hasRedeemNo() const { return this->redeemNo_ != nullptr;};
          void deleteRedeemNo() { this->redeemNo_ = nullptr;};
          inline string getRedeemNo() const { DARABONBA_PTR_GET_DEFAULT(redeemNo_, "") };
          inline RedeemItem& setRedeemNo(string redeemNo) { DARABONBA_PTR_SET_VALUE(redeemNo_, redeemNo) };


          // specification Field Functions 
          bool hasSpecification() const { return this->specification_ != nullptr;};
          void deleteSpecification() { this->specification_ = nullptr;};
          inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
          inline RedeemItem& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline RedeemItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The services to which the redemption coupon is applicable.
          shared_ptr<string> applicableProducts_ {};
          // The balance of the redemption coupon.
          shared_ptr<string> balance_ {};
          // The time when the redemption coupon took effect.
          shared_ptr<string> effectiveTime_ {};
          // The time when the redemption coupon expired.
          shared_ptr<string> expiryTime_ {};
          // The time when the redemption coupon was issued.
          shared_ptr<string> grantedTime_ {};
          // The nominal value of the redemption coupon.
          shared_ptr<string> nominalValue_ {};
          // The ID of the redemption coupon.
          shared_ptr<string> redeemId_ {};
          // The number of the redemption coupon.
          shared_ptr<string> redeemNo_ {};
          // The specifications of the redemption coupon.
          shared_ptr<string> specification_ {};
          // The status of the redemption coupon. Valid values:
          // 
          // *   Generated
          // *   CallBack
          // *   RefundPending
          // *   Canceled
          // *   Order_Canceled
          // *   ActivePending
          // *   ActiveSuccess
          // *   ExchangePending
          // *   ExchangeSuccess
          // *   Expired
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->redeem_ == nullptr; };
        // redeem Field Functions 
        bool hasRedeem() const { return this->redeem_ != nullptr;};
        void deleteRedeem() { this->redeem_ = nullptr;};
        inline const vector<Redeem::RedeemItem> & getRedeem() const { DARABONBA_PTR_GET_CONST(redeem_, vector<Redeem::RedeemItem>) };
        inline vector<Redeem::RedeemItem> getRedeem() { DARABONBA_PTR_GET(redeem_, vector<Redeem::RedeemItem>) };
        inline Redeem& setRedeem(const vector<Redeem::RedeemItem> & redeem) { DARABONBA_PTR_SET_VALUE(redeem_, redeem) };
        inline Redeem& setRedeem(vector<Redeem::RedeemItem> && redeem) { DARABONBA_PTR_SET_RVALUE(redeem_, redeem) };


      protected:
        shared_ptr<vector<Redeem::RedeemItem>> redeem_ {};
      };

      virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->redeem_ == nullptr && this->totalCount_ == nullptr; };
      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
      inline Data& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // redeem Field Functions 
      bool hasRedeem() const { return this->redeem_ != nullptr;};
      void deleteRedeem() { this->redeem_ = nullptr;};
      inline const Data::Redeem & getRedeem() const { DARABONBA_PTR_GET_CONST(redeem_, Data::Redeem) };
      inline Data::Redeem getRedeem() { DARABONBA_PTR_GET(redeem_, Data::Redeem) };
      inline Data& setRedeem(const Data::Redeem & redeem) { DARABONBA_PTR_SET_VALUE(redeem_, redeem) };
      inline Data& setRedeem(Data::Redeem && redeem) { DARABONBA_PTR_SET_RVALUE(redeem_, redeem) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int64_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int64_t> pageSize_ {};
      // The details of the redemption coupon.
      shared_ptr<Data::Redeem> redeem_ {};
      // The total number of returned entries.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRedeemResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryRedeemResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryRedeemResponseBody::Data) };
    inline QueryRedeemResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryRedeemResponseBody::Data) };
    inline QueryRedeemResponseBody& setData(const QueryRedeemResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryRedeemResponseBody& setData(QueryRedeemResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRedeemResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRedeemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryRedeemResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryRedeemResponseBody::Data> data_ {};
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
