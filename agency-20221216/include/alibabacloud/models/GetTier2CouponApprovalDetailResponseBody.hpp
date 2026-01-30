// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIER2COUPONAPPROVALDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTIER2COUPONAPPROVALDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetTier2CouponApprovalDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTier2CouponApprovalDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTier2CouponApprovalDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTier2CouponApprovalDetailResponseBody() = default ;
    GetTier2CouponApprovalDetailResponseBody(const GetTier2CouponApprovalDetailResponseBody &) = default ;
    GetTier2CouponApprovalDetailResponseBody(GetTier2CouponApprovalDetailResponseBody &&) = default ;
    GetTier2CouponApprovalDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTier2CouponApprovalDetailResponseBody() = default ;
    GetTier2CouponApprovalDetailResponseBody& operator=(const GetTier2CouponApprovalDetailResponseBody &) = default ;
    GetTier2CouponApprovalDetailResponseBody& operator=(GetTier2CouponApprovalDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicantInfo, applicantInfo_);
        DARABONBA_PTR_TO_JSON(ApplicationReason, applicationReason_);
        DARABONBA_PTR_TO_JSON(ApplicationSheetId, applicationSheetId_);
        DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
        DARABONBA_PTR_TO_JSON(CouponReceiptUidList, couponReceiptUidList_);
        DARABONBA_PTR_TO_JSON(RemainingQuota, remainingQuota_);
        DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicantInfo, applicantInfo_);
        DARABONBA_PTR_FROM_JSON(ApplicationReason, applicationReason_);
        DARABONBA_PTR_FROM_JSON(ApplicationSheetId, applicationSheetId_);
        DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
        DARABONBA_PTR_FROM_JSON(CouponReceiptUidList, couponReceiptUidList_);
        DARABONBA_PTR_FROM_JSON(RemainingQuota, remainingQuota_);
        DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
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
      class CouponReceiptUidList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CouponReceiptUidList& obj) { 
          DARABONBA_PTR_TO_JSON(NominalValue, nominalValue_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
        };
        friend void from_json(const Darabonba::Json& j, CouponReceiptUidList& obj) { 
          DARABONBA_PTR_FROM_JSON(NominalValue, nominalValue_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
        };
        CouponReceiptUidList() = default ;
        CouponReceiptUidList(const CouponReceiptUidList &) = default ;
        CouponReceiptUidList(CouponReceiptUidList &&) = default ;
        CouponReceiptUidList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CouponReceiptUidList() = default ;
        CouponReceiptUidList& operator=(const CouponReceiptUidList &) = default ;
        CouponReceiptUidList& operator=(CouponReceiptUidList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nominalValue_ == nullptr
        && this->uid_ == nullptr; };
        // nominalValue Field Functions 
        bool hasNominalValue() const { return this->nominalValue_ != nullptr;};
        void deleteNominalValue() { this->nominalValue_ = nullptr;};
        inline string getNominalValue() const { DARABONBA_PTR_GET_DEFAULT(nominalValue_, "") };
        inline CouponReceiptUidList& setNominalValue(string nominalValue) { DARABONBA_PTR_SET_VALUE(nominalValue_, nominalValue) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
        inline CouponReceiptUidList& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      protected:
        shared_ptr<string> nominalValue_ {};
        shared_ptr<int64_t> uid_ {};
      };

      class ApplicantInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicantInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicableProducts, applicableProducts_);
          DARABONBA_PTR_TO_JSON(ApplicationTime, applicationTime_);
          DARABONBA_PTR_TO_JSON(OrderType, orderType_);
          DARABONBA_PTR_TO_JSON(T2PartnerName, t2PartnerName_);
          DARABONBA_PTR_TO_JSON(T2PartnerUid, t2PartnerUid_);
          DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicantInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicableProducts, applicableProducts_);
          DARABONBA_PTR_FROM_JSON(ApplicationTime, applicationTime_);
          DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
          DARABONBA_PTR_FROM_JSON(T2PartnerName, t2PartnerName_);
          DARABONBA_PTR_FROM_JSON(T2PartnerUid, t2PartnerUid_);
          DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
        };
        ApplicantInfo() = default ;
        ApplicantInfo(const ApplicantInfo &) = default ;
        ApplicantInfo(ApplicantInfo &&) = default ;
        ApplicantInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicantInfo() = default ;
        ApplicantInfo& operator=(const ApplicantInfo &) = default ;
        ApplicantInfo& operator=(ApplicantInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicableProducts_ == nullptr
        && this->applicationTime_ == nullptr && this->orderType_ == nullptr && this->t2PartnerName_ == nullptr && this->t2PartnerUid_ == nullptr && this->validUntil_ == nullptr; };
        // applicableProducts Field Functions 
        bool hasApplicableProducts() const { return this->applicableProducts_ != nullptr;};
        void deleteApplicableProducts() { this->applicableProducts_ = nullptr;};
        inline string getApplicableProducts() const { DARABONBA_PTR_GET_DEFAULT(applicableProducts_, "") };
        inline ApplicantInfo& setApplicableProducts(string applicableProducts) { DARABONBA_PTR_SET_VALUE(applicableProducts_, applicableProducts) };


        // applicationTime Field Functions 
        bool hasApplicationTime() const { return this->applicationTime_ != nullptr;};
        void deleteApplicationTime() { this->applicationTime_ = nullptr;};
        inline string getApplicationTime() const { DARABONBA_PTR_GET_DEFAULT(applicationTime_, "") };
        inline ApplicantInfo& setApplicationTime(string applicationTime) { DARABONBA_PTR_SET_VALUE(applicationTime_, applicationTime) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline ApplicantInfo& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // t2PartnerName Field Functions 
        bool hasT2PartnerName() const { return this->t2PartnerName_ != nullptr;};
        void deleteT2PartnerName() { this->t2PartnerName_ = nullptr;};
        inline string getT2PartnerName() const { DARABONBA_PTR_GET_DEFAULT(t2PartnerName_, "") };
        inline ApplicantInfo& setT2PartnerName(string t2PartnerName) { DARABONBA_PTR_SET_VALUE(t2PartnerName_, t2PartnerName) };


        // t2PartnerUid Field Functions 
        bool hasT2PartnerUid() const { return this->t2PartnerUid_ != nullptr;};
        void deleteT2PartnerUid() { this->t2PartnerUid_ = nullptr;};
        inline int64_t getT2PartnerUid() const { DARABONBA_PTR_GET_DEFAULT(t2PartnerUid_, 0L) };
        inline ApplicantInfo& setT2PartnerUid(int64_t t2PartnerUid) { DARABONBA_PTR_SET_VALUE(t2PartnerUid_, t2PartnerUid) };


        // validUntil Field Functions 
        bool hasValidUntil() const { return this->validUntil_ != nullptr;};
        void deleteValidUntil() { this->validUntil_ = nullptr;};
        inline string getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
        inline ApplicantInfo& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


      protected:
        shared_ptr<string> applicableProducts_ {};
        shared_ptr<string> applicationTime_ {};
        shared_ptr<string> orderType_ {};
        shared_ptr<string> t2PartnerName_ {};
        shared_ptr<int64_t> t2PartnerUid_ {};
        shared_ptr<string> validUntil_ {};
      };

      virtual bool empty() const override { return this->applicantInfo_ == nullptr
        && this->applicationReason_ == nullptr && this->applicationSheetId_ == nullptr && this->approvalStatus_ == nullptr && this->couponReceiptUidList_ == nullptr && this->remainingQuota_ == nullptr
        && this->totalAmount_ == nullptr; };
      // applicantInfo Field Functions 
      bool hasApplicantInfo() const { return this->applicantInfo_ != nullptr;};
      void deleteApplicantInfo() { this->applicantInfo_ = nullptr;};
      inline const Data::ApplicantInfo & getApplicantInfo() const { DARABONBA_PTR_GET_CONST(applicantInfo_, Data::ApplicantInfo) };
      inline Data::ApplicantInfo getApplicantInfo() { DARABONBA_PTR_GET(applicantInfo_, Data::ApplicantInfo) };
      inline Data& setApplicantInfo(const Data::ApplicantInfo & applicantInfo) { DARABONBA_PTR_SET_VALUE(applicantInfo_, applicantInfo) };
      inline Data& setApplicantInfo(Data::ApplicantInfo && applicantInfo) { DARABONBA_PTR_SET_RVALUE(applicantInfo_, applicantInfo) };


      // applicationReason Field Functions 
      bool hasApplicationReason() const { return this->applicationReason_ != nullptr;};
      void deleteApplicationReason() { this->applicationReason_ = nullptr;};
      inline string getApplicationReason() const { DARABONBA_PTR_GET_DEFAULT(applicationReason_, "") };
      inline Data& setApplicationReason(string applicationReason) { DARABONBA_PTR_SET_VALUE(applicationReason_, applicationReason) };


      // applicationSheetId Field Functions 
      bool hasApplicationSheetId() const { return this->applicationSheetId_ != nullptr;};
      void deleteApplicationSheetId() { this->applicationSheetId_ = nullptr;};
      inline string getApplicationSheetId() const { DARABONBA_PTR_GET_DEFAULT(applicationSheetId_, "") };
      inline Data& setApplicationSheetId(string applicationSheetId) { DARABONBA_PTR_SET_VALUE(applicationSheetId_, applicationSheetId) };


      // approvalStatus Field Functions 
      bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
      void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
      inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
      inline Data& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


      // couponReceiptUidList Field Functions 
      bool hasCouponReceiptUidList() const { return this->couponReceiptUidList_ != nullptr;};
      void deleteCouponReceiptUidList() { this->couponReceiptUidList_ = nullptr;};
      inline const vector<Data::CouponReceiptUidList> & getCouponReceiptUidList() const { DARABONBA_PTR_GET_CONST(couponReceiptUidList_, vector<Data::CouponReceiptUidList>) };
      inline vector<Data::CouponReceiptUidList> getCouponReceiptUidList() { DARABONBA_PTR_GET(couponReceiptUidList_, vector<Data::CouponReceiptUidList>) };
      inline Data& setCouponReceiptUidList(const vector<Data::CouponReceiptUidList> & couponReceiptUidList) { DARABONBA_PTR_SET_VALUE(couponReceiptUidList_, couponReceiptUidList) };
      inline Data& setCouponReceiptUidList(vector<Data::CouponReceiptUidList> && couponReceiptUidList) { DARABONBA_PTR_SET_RVALUE(couponReceiptUidList_, couponReceiptUidList) };


      // remainingQuota Field Functions 
      bool hasRemainingQuota() const { return this->remainingQuota_ != nullptr;};
      void deleteRemainingQuota() { this->remainingQuota_ = nullptr;};
      inline string getRemainingQuota() const { DARABONBA_PTR_GET_DEFAULT(remainingQuota_, "") };
      inline Data& setRemainingQuota(string remainingQuota) { DARABONBA_PTR_SET_VALUE(remainingQuota_, remainingQuota) };


      // totalAmount Field Functions 
      bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
      void deleteTotalAmount() { this->totalAmount_ = nullptr;};
      inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
      inline Data& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    protected:
      shared_ptr<Data::ApplicantInfo> applicantInfo_ {};
      shared_ptr<string> applicationReason_ {};
      shared_ptr<string> applicationSheetId_ {};
      shared_ptr<string> approvalStatus_ {};
      shared_ptr<vector<Data::CouponReceiptUidList>> couponReceiptUidList_ {};
      shared_ptr<string> remainingQuota_ {};
      shared_ptr<string> totalAmount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTier2CouponApprovalDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTier2CouponApprovalDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTier2CouponApprovalDetailResponseBody::Data) };
    inline GetTier2CouponApprovalDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTier2CouponApprovalDetailResponseBody::Data) };
    inline GetTier2CouponApprovalDetailResponseBody& setData(const GetTier2CouponApprovalDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTier2CouponApprovalDetailResponseBody& setData(GetTier2CouponApprovalDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTier2CouponApprovalDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTier2CouponApprovalDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTier2CouponApprovalDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
