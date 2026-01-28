// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainSpecialBizDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSpecialBizDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainSpecialBizDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    QueryDomainSpecialBizDetailResponseBody() = default ;
    QueryDomainSpecialBizDetailResponseBody(const QueryDomainSpecialBizDetailResponseBody &) = default ;
    QueryDomainSpecialBizDetailResponseBody(QueryDomainSpecialBizDetailResponseBody &&) = default ;
    QueryDomainSpecialBizDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSpecialBizDetailResponseBody() = default ;
    QueryDomainSpecialBizDetailResponseBody& operator=(const QueryDomainSpecialBizDetailResponseBody &) = default ;
    QueryDomainSpecialBizDetailResponseBody& operator=(QueryDomainSpecialBizDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AuditMsg, auditMsg_);
        DARABONBA_PTR_TO_JSON(BizName, bizName_);
        DARABONBA_PTR_TO_JSON(BizNo, bizNo_);
        DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainSpecialBizContact, domainSpecialBizContact_);
        DARABONBA_PTR_TO_JSON(DomainSpecialBizCredentials, domainSpecialBizCredentials_);
        DARABONBA_PTR_TO_JSON(DomainSpecialOrderResult, domainSpecialOrderResult_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(SaleId, saleId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditMsg, auditMsg_);
        DARABONBA_PTR_FROM_JSON(BizName, bizName_);
        DARABONBA_PTR_FROM_JSON(BizNo, bizNo_);
        DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainSpecialBizContact, domainSpecialBizContact_);
        DARABONBA_PTR_FROM_JSON(DomainSpecialBizCredentials, domainSpecialBizCredentials_);
        DARABONBA_PTR_FROM_JSON(DomainSpecialOrderResult, domainSpecialOrderResult_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainSpecialOrderResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainSpecialOrderResult& obj) { 
          DARABONBA_PTR_TO_JSON(ActionType, actionType_);
          DARABONBA_PTR_TO_JSON(OrderAmount, orderAmount_);
          DARABONBA_PTR_TO_JSON(OrderCurrency, orderCurrency_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
          DARABONBA_PTR_TO_JSON(OrderTime, orderTime_);
          DARABONBA_PTR_TO_JSON(OrderYear, orderYear_);
          DARABONBA_PTR_TO_JSON(SaleId, saleId_);
          DARABONBA_PTR_TO_JSON(SubOrderId, subOrderId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainSpecialOrderResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
          DARABONBA_PTR_FROM_JSON(OrderAmount, orderAmount_);
          DARABONBA_PTR_FROM_JSON(OrderCurrency, orderCurrency_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
          DARABONBA_PTR_FROM_JSON(OrderTime, orderTime_);
          DARABONBA_PTR_FROM_JSON(OrderYear, orderYear_);
          DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
          DARABONBA_PTR_FROM_JSON(SubOrderId, subOrderId_);
        };
        DomainSpecialOrderResult() = default ;
        DomainSpecialOrderResult(const DomainSpecialOrderResult &) = default ;
        DomainSpecialOrderResult(DomainSpecialOrderResult &&) = default ;
        DomainSpecialOrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainSpecialOrderResult() = default ;
        DomainSpecialOrderResult& operator=(const DomainSpecialOrderResult &) = default ;
        DomainSpecialOrderResult& operator=(DomainSpecialOrderResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionType_ == nullptr
        && this->orderAmount_ == nullptr && this->orderCurrency_ == nullptr && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->orderTime_ == nullptr
        && this->orderYear_ == nullptr && this->saleId_ == nullptr && this->subOrderId_ == nullptr; };
        // actionType Field Functions 
        bool hasActionType() const { return this->actionType_ != nullptr;};
        void deleteActionType() { this->actionType_ = nullptr;};
        inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
        inline DomainSpecialOrderResult& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


        // orderAmount Field Functions 
        bool hasOrderAmount() const { return this->orderAmount_ != nullptr;};
        void deleteOrderAmount() { this->orderAmount_ = nullptr;};
        inline double getOrderAmount() const { DARABONBA_PTR_GET_DEFAULT(orderAmount_, 0.0) };
        inline DomainSpecialOrderResult& setOrderAmount(double orderAmount) { DARABONBA_PTR_SET_VALUE(orderAmount_, orderAmount) };


        // orderCurrency Field Functions 
        bool hasOrderCurrency() const { return this->orderCurrency_ != nullptr;};
        void deleteOrderCurrency() { this->orderCurrency_ = nullptr;};
        inline string getOrderCurrency() const { DARABONBA_PTR_GET_DEFAULT(orderCurrency_, "") };
        inline DomainSpecialOrderResult& setOrderCurrency(string orderCurrency) { DARABONBA_PTR_SET_VALUE(orderCurrency_, orderCurrency) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline DomainSpecialOrderResult& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
        inline DomainSpecialOrderResult& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


        // orderTime Field Functions 
        bool hasOrderTime() const { return this->orderTime_ != nullptr;};
        void deleteOrderTime() { this->orderTime_ = nullptr;};
        inline string getOrderTime() const { DARABONBA_PTR_GET_DEFAULT(orderTime_, "") };
        inline DomainSpecialOrderResult& setOrderTime(string orderTime) { DARABONBA_PTR_SET_VALUE(orderTime_, orderTime) };


        // orderYear Field Functions 
        bool hasOrderYear() const { return this->orderYear_ != nullptr;};
        void deleteOrderYear() { this->orderYear_ = nullptr;};
        inline int32_t getOrderYear() const { DARABONBA_PTR_GET_DEFAULT(orderYear_, 0) };
        inline DomainSpecialOrderResult& setOrderYear(int32_t orderYear) { DARABONBA_PTR_SET_VALUE(orderYear_, orderYear) };


        // saleId Field Functions 
        bool hasSaleId() const { return this->saleId_ != nullptr;};
        void deleteSaleId() { this->saleId_ = nullptr;};
        inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
        inline DomainSpecialOrderResult& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


        // subOrderId Field Functions 
        bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
        void deleteSubOrderId() { this->subOrderId_ = nullptr;};
        inline string getSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
        inline DomainSpecialOrderResult& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


      protected:
        // The cost type.
        shared_ptr<string> actionType_ {};
        // The amount of the order.
        shared_ptr<double> orderAmount_ {};
        // The currency.
        shared_ptr<string> orderCurrency_ {};
        // The order ID.
        shared_ptr<string> orderId_ {};
        // The order status.
        shared_ptr<string> orderStatus_ {};
        // The time when the order was placed.
        shared_ptr<string> orderTime_ {};
        // The validity period.
        shared_ptr<int32_t> orderYear_ {};
        // The instance ID.
        shared_ptr<string> saleId_ {};
        // The suborder ID.
        shared_ptr<string> subOrderId_ {};
      };

      class DomainSpecialBizCredentials : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainSpecialBizCredentials& obj) { 
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(CredentialNo, credentialNo_);
          DARABONBA_PTR_TO_JSON(CredentialType, credentialType_);
          DARABONBA_PTR_TO_JSON(CredentialUrl, credentialUrl_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(HolderCert, holderCert_);
          DARABONBA_PTR_TO_JSON(SaleId, saleId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainSpecialBizCredentials& obj) { 
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(CredentialNo, credentialNo_);
          DARABONBA_PTR_FROM_JSON(CredentialType, credentialType_);
          DARABONBA_PTR_FROM_JSON(CredentialUrl, credentialUrl_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(HolderCert, holderCert_);
          DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
        };
        DomainSpecialBizCredentials() = default ;
        DomainSpecialBizCredentials(const DomainSpecialBizCredentials &) = default ;
        DomainSpecialBizCredentials(DomainSpecialBizCredentials &&) = default ;
        DomainSpecialBizCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainSpecialBizCredentials() = default ;
        DomainSpecialBizCredentials& operator=(const DomainSpecialBizCredentials &) = default ;
        DomainSpecialBizCredentials& operator=(DomainSpecialBizCredentials &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizId_ == nullptr
        && this->credentialNo_ == nullptr && this->credentialType_ == nullptr && this->credentialUrl_ == nullptr && this->domainName_ == nullptr && this->holderCert_ == nullptr
        && this->saleId_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline int64_t getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
        inline DomainSpecialBizCredentials& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // credentialNo Field Functions 
        bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
        void deleteCredentialNo() { this->credentialNo_ = nullptr;};
        inline string getCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
        inline DomainSpecialBizCredentials& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


        // credentialType Field Functions 
        bool hasCredentialType() const { return this->credentialType_ != nullptr;};
        void deleteCredentialType() { this->credentialType_ = nullptr;};
        inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
        inline DomainSpecialBizCredentials& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


        // credentialUrl Field Functions 
        bool hasCredentialUrl() const { return this->credentialUrl_ != nullptr;};
        void deleteCredentialUrl() { this->credentialUrl_ = nullptr;};
        inline string getCredentialUrl() const { DARABONBA_PTR_GET_DEFAULT(credentialUrl_, "") };
        inline DomainSpecialBizCredentials& setCredentialUrl(string credentialUrl) { DARABONBA_PTR_SET_VALUE(credentialUrl_, credentialUrl) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainSpecialBizCredentials& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // holderCert Field Functions 
        bool hasHolderCert() const { return this->holderCert_ != nullptr;};
        void deleteHolderCert() { this->holderCert_ = nullptr;};
        inline int32_t getHolderCert() const { DARABONBA_PTR_GET_DEFAULT(holderCert_, 0) };
        inline DomainSpecialBizCredentials& setHolderCert(int32_t holderCert) { DARABONBA_PTR_SET_VALUE(holderCert_, holderCert) };


        // saleId Field Functions 
        bool hasSaleId() const { return this->saleId_ != nullptr;};
        void deleteSaleId() { this->saleId_ = nullptr;};
        inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
        inline DomainSpecialBizCredentials& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


      protected:
        // The ID of the associated workflow.
        shared_ptr<int64_t> bizId_ {};
        // The certificate number.
        shared_ptr<string> credentialNo_ {};
        // The certificate type.
        shared_ptr<string> credentialType_ {};
        // The certificate URL.
        shared_ptr<string> credentialUrl_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // Indicates whether the certificate belongs to the registrant.
        shared_ptr<int32_t> holderCert_ {};
        // The instance ID.
        shared_ptr<string> saleId_ {};
      };

      class DomainSpecialBizContact : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainSpecialBizContact& obj) { 
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(CCity, CCity_);
          DARABONBA_PTR_TO_JSON(CCompany, CCompany_);
          DARABONBA_PTR_TO_JSON(CCountry, CCountry_);
          DARABONBA_PTR_TO_JSON(CName, CName_);
          DARABONBA_PTR_TO_JSON(CProvince, CProvince_);
          DARABONBA_PTR_TO_JSON(CVenu, CVenu_);
          DARABONBA_PTR_TO_JSON(ECity, ECity_);
          DARABONBA_PTR_TO_JSON(ECompany, ECompany_);
          DARABONBA_PTR_TO_JSON(EName, EName_);
          DARABONBA_PTR_TO_JSON(EProvince, EProvince_);
          DARABONBA_PTR_TO_JSON(EVenu, EVenu_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Extend, extend_);
          DARABONBA_PTR_TO_JSON(FaxArea, faxArea_);
          DARABONBA_PTR_TO_JSON(FaxExt, faxExt_);
          DARABONBA_PTR_TO_JSON(FaxMain, faxMain_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(Postalcode, postalcode_);
          DARABONBA_PTR_TO_JSON(RegType, regType_);
          DARABONBA_PTR_TO_JSON(RegistrantId, registrantId_);
          DARABONBA_PTR_TO_JSON(TelArea, telArea_);
          DARABONBA_PTR_TO_JSON(TelExt, telExt_);
          DARABONBA_PTR_TO_JSON(TelMain, telMain_);
          DARABONBA_PTR_TO_JSON(VspContactId, vspContactId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainSpecialBizContact& obj) { 
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(CCity, CCity_);
          DARABONBA_PTR_FROM_JSON(CCompany, CCompany_);
          DARABONBA_PTR_FROM_JSON(CCountry, CCountry_);
          DARABONBA_PTR_FROM_JSON(CName, CName_);
          DARABONBA_PTR_FROM_JSON(CProvince, CProvince_);
          DARABONBA_PTR_FROM_JSON(CVenu, CVenu_);
          DARABONBA_PTR_FROM_JSON(ECity, ECity_);
          DARABONBA_PTR_FROM_JSON(ECompany, ECompany_);
          DARABONBA_PTR_FROM_JSON(EName, EName_);
          DARABONBA_PTR_FROM_JSON(EProvince, EProvince_);
          DARABONBA_PTR_FROM_JSON(EVenu, EVenu_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Extend, extend_);
          DARABONBA_PTR_FROM_JSON(FaxArea, faxArea_);
          DARABONBA_PTR_FROM_JSON(FaxExt, faxExt_);
          DARABONBA_PTR_FROM_JSON(FaxMain, faxMain_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(Postalcode, postalcode_);
          DARABONBA_PTR_FROM_JSON(RegType, regType_);
          DARABONBA_PTR_FROM_JSON(RegistrantId, registrantId_);
          DARABONBA_PTR_FROM_JSON(TelArea, telArea_);
          DARABONBA_PTR_FROM_JSON(TelExt, telExt_);
          DARABONBA_PTR_FROM_JSON(TelMain, telMain_);
          DARABONBA_PTR_FROM_JSON(VspContactId, vspContactId_);
        };
        DomainSpecialBizContact() = default ;
        DomainSpecialBizContact(const DomainSpecialBizContact &) = default ;
        DomainSpecialBizContact(DomainSpecialBizContact &&) = default ;
        DomainSpecialBizContact(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainSpecialBizContact() = default ;
        DomainSpecialBizContact& operator=(const DomainSpecialBizContact &) = default ;
        DomainSpecialBizContact& operator=(DomainSpecialBizContact &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizId_ == nullptr
        && this->CCity_ == nullptr && this->CCompany_ == nullptr && this->CCountry_ == nullptr && this->CName_ == nullptr && this->CProvince_ == nullptr
        && this->CVenu_ == nullptr && this->ECity_ == nullptr && this->ECompany_ == nullptr && this->EName_ == nullptr && this->EProvince_ == nullptr
        && this->EVenu_ == nullptr && this->email_ == nullptr && this->extend_ == nullptr && this->faxArea_ == nullptr && this->faxExt_ == nullptr
        && this->faxMain_ == nullptr && this->mobile_ == nullptr && this->postalcode_ == nullptr && this->regType_ == nullptr && this->registrantId_ == nullptr
        && this->telArea_ == nullptr && this->telExt_ == nullptr && this->telMain_ == nullptr && this->vspContactId_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline int64_t getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
        inline DomainSpecialBizContact& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // CCity Field Functions 
        bool hasCCity() const { return this->CCity_ != nullptr;};
        void deleteCCity() { this->CCity_ = nullptr;};
        inline string getCCity() const { DARABONBA_PTR_GET_DEFAULT(CCity_, "") };
        inline DomainSpecialBizContact& setCCity(string CCity) { DARABONBA_PTR_SET_VALUE(CCity_, CCity) };


        // CCompany Field Functions 
        bool hasCCompany() const { return this->CCompany_ != nullptr;};
        void deleteCCompany() { this->CCompany_ = nullptr;};
        inline string getCCompany() const { DARABONBA_PTR_GET_DEFAULT(CCompany_, "") };
        inline DomainSpecialBizContact& setCCompany(string CCompany) { DARABONBA_PTR_SET_VALUE(CCompany_, CCompany) };


        // CCountry Field Functions 
        bool hasCCountry() const { return this->CCountry_ != nullptr;};
        void deleteCCountry() { this->CCountry_ = nullptr;};
        inline string getCCountry() const { DARABONBA_PTR_GET_DEFAULT(CCountry_, "") };
        inline DomainSpecialBizContact& setCCountry(string CCountry) { DARABONBA_PTR_SET_VALUE(CCountry_, CCountry) };


        // CName Field Functions 
        bool hasCName() const { return this->CName_ != nullptr;};
        void deleteCName() { this->CName_ = nullptr;};
        inline string getCName() const { DARABONBA_PTR_GET_DEFAULT(CName_, "") };
        inline DomainSpecialBizContact& setCName(string CName) { DARABONBA_PTR_SET_VALUE(CName_, CName) };


        // CProvince Field Functions 
        bool hasCProvince() const { return this->CProvince_ != nullptr;};
        void deleteCProvince() { this->CProvince_ = nullptr;};
        inline string getCProvince() const { DARABONBA_PTR_GET_DEFAULT(CProvince_, "") };
        inline DomainSpecialBizContact& setCProvince(string CProvince) { DARABONBA_PTR_SET_VALUE(CProvince_, CProvince) };


        // CVenu Field Functions 
        bool hasCVenu() const { return this->CVenu_ != nullptr;};
        void deleteCVenu() { this->CVenu_ = nullptr;};
        inline string getCVenu() const { DARABONBA_PTR_GET_DEFAULT(CVenu_, "") };
        inline DomainSpecialBizContact& setCVenu(string CVenu) { DARABONBA_PTR_SET_VALUE(CVenu_, CVenu) };


        // ECity Field Functions 
        bool hasECity() const { return this->ECity_ != nullptr;};
        void deleteECity() { this->ECity_ = nullptr;};
        inline string getECity() const { DARABONBA_PTR_GET_DEFAULT(ECity_, "") };
        inline DomainSpecialBizContact& setECity(string ECity) { DARABONBA_PTR_SET_VALUE(ECity_, ECity) };


        // ECompany Field Functions 
        bool hasECompany() const { return this->ECompany_ != nullptr;};
        void deleteECompany() { this->ECompany_ = nullptr;};
        inline string getECompany() const { DARABONBA_PTR_GET_DEFAULT(ECompany_, "") };
        inline DomainSpecialBizContact& setECompany(string ECompany) { DARABONBA_PTR_SET_VALUE(ECompany_, ECompany) };


        // EName Field Functions 
        bool hasEName() const { return this->EName_ != nullptr;};
        void deleteEName() { this->EName_ = nullptr;};
        inline string getEName() const { DARABONBA_PTR_GET_DEFAULT(EName_, "") };
        inline DomainSpecialBizContact& setEName(string EName) { DARABONBA_PTR_SET_VALUE(EName_, EName) };


        // EProvince Field Functions 
        bool hasEProvince() const { return this->EProvince_ != nullptr;};
        void deleteEProvince() { this->EProvince_ = nullptr;};
        inline string getEProvince() const { DARABONBA_PTR_GET_DEFAULT(EProvince_, "") };
        inline DomainSpecialBizContact& setEProvince(string EProvince) { DARABONBA_PTR_SET_VALUE(EProvince_, EProvince) };


        // EVenu Field Functions 
        bool hasEVenu() const { return this->EVenu_ != nullptr;};
        void deleteEVenu() { this->EVenu_ = nullptr;};
        inline string getEVenu() const { DARABONBA_PTR_GET_DEFAULT(EVenu_, "") };
        inline DomainSpecialBizContact& setEVenu(string EVenu) { DARABONBA_PTR_SET_VALUE(EVenu_, EVenu) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline DomainSpecialBizContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // extend Field Functions 
        bool hasExtend() const { return this->extend_ != nullptr;};
        void deleteExtend() { this->extend_ = nullptr;};
        inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
        inline DomainSpecialBizContact& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


        // faxArea Field Functions 
        bool hasFaxArea() const { return this->faxArea_ != nullptr;};
        void deleteFaxArea() { this->faxArea_ = nullptr;};
        inline string getFaxArea() const { DARABONBA_PTR_GET_DEFAULT(faxArea_, "") };
        inline DomainSpecialBizContact& setFaxArea(string faxArea) { DARABONBA_PTR_SET_VALUE(faxArea_, faxArea) };


        // faxExt Field Functions 
        bool hasFaxExt() const { return this->faxExt_ != nullptr;};
        void deleteFaxExt() { this->faxExt_ = nullptr;};
        inline string getFaxExt() const { DARABONBA_PTR_GET_DEFAULT(faxExt_, "") };
        inline DomainSpecialBizContact& setFaxExt(string faxExt) { DARABONBA_PTR_SET_VALUE(faxExt_, faxExt) };


        // faxMain Field Functions 
        bool hasFaxMain() const { return this->faxMain_ != nullptr;};
        void deleteFaxMain() { this->faxMain_ = nullptr;};
        inline string getFaxMain() const { DARABONBA_PTR_GET_DEFAULT(faxMain_, "") };
        inline DomainSpecialBizContact& setFaxMain(string faxMain) { DARABONBA_PTR_SET_VALUE(faxMain_, faxMain) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline DomainSpecialBizContact& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // postalcode Field Functions 
        bool hasPostalcode() const { return this->postalcode_ != nullptr;};
        void deletePostalcode() { this->postalcode_ = nullptr;};
        inline string getPostalcode() const { DARABONBA_PTR_GET_DEFAULT(postalcode_, "") };
        inline DomainSpecialBizContact& setPostalcode(string postalcode) { DARABONBA_PTR_SET_VALUE(postalcode_, postalcode) };


        // regType Field Functions 
        bool hasRegType() const { return this->regType_ != nullptr;};
        void deleteRegType() { this->regType_ = nullptr;};
        inline int32_t getRegType() const { DARABONBA_PTR_GET_DEFAULT(regType_, 0) };
        inline DomainSpecialBizContact& setRegType(int32_t regType) { DARABONBA_PTR_SET_VALUE(regType_, regType) };


        // registrantId Field Functions 
        bool hasRegistrantId() const { return this->registrantId_ != nullptr;};
        void deleteRegistrantId() { this->registrantId_ = nullptr;};
        inline string getRegistrantId() const { DARABONBA_PTR_GET_DEFAULT(registrantId_, "") };
        inline DomainSpecialBizContact& setRegistrantId(string registrantId) { DARABONBA_PTR_SET_VALUE(registrantId_, registrantId) };


        // telArea Field Functions 
        bool hasTelArea() const { return this->telArea_ != nullptr;};
        void deleteTelArea() { this->telArea_ = nullptr;};
        inline string getTelArea() const { DARABONBA_PTR_GET_DEFAULT(telArea_, "") };
        inline DomainSpecialBizContact& setTelArea(string telArea) { DARABONBA_PTR_SET_VALUE(telArea_, telArea) };


        // telExt Field Functions 
        bool hasTelExt() const { return this->telExt_ != nullptr;};
        void deleteTelExt() { this->telExt_ = nullptr;};
        inline string getTelExt() const { DARABONBA_PTR_GET_DEFAULT(telExt_, "") };
        inline DomainSpecialBizContact& setTelExt(string telExt) { DARABONBA_PTR_SET_VALUE(telExt_, telExt) };


        // telMain Field Functions 
        bool hasTelMain() const { return this->telMain_ != nullptr;};
        void deleteTelMain() { this->telMain_ = nullptr;};
        inline string getTelMain() const { DARABONBA_PTR_GET_DEFAULT(telMain_, "") };
        inline DomainSpecialBizContact& setTelMain(string telMain) { DARABONBA_PTR_SET_VALUE(telMain_, telMain) };


        // vspContactId Field Functions 
        bool hasVspContactId() const { return this->vspContactId_ != nullptr;};
        void deleteVspContactId() { this->vspContactId_ = nullptr;};
        inline string getVspContactId() const { DARABONBA_PTR_GET_DEFAULT(vspContactId_, "") };
        inline DomainSpecialBizContact& setVspContactId(string vspContactId) { DARABONBA_PTR_SET_VALUE(vspContactId_, vspContactId) };


      protected:
        // The business ID.
        shared_ptr<int64_t> bizId_ {};
        // The city.
        shared_ptr<string> CCity_ {};
        // The organization name.
        shared_ptr<string> CCompany_ {};
        // The country code.
        shared_ptr<string> CCountry_ {};
        // The contact name.
        shared_ptr<string> CName_ {};
        // The province.
        shared_ptr<string> CProvince_ {};
        // The address.
        shared_ptr<string> CVenu_ {};
        // The city in English.
        shared_ptr<string> ECity_ {};
        // The organization name in English.
        shared_ptr<string> ECompany_ {};
        // The contact name in English.
        shared_ptr<string> EName_ {};
        // The province in English.
        shared_ptr<string> EProvince_ {};
        // The address in English.
        shared_ptr<string> EVenu_ {};
        // The email address.
        shared_ptr<string> email_ {};
        // The extended information.
        shared_ptr<string> extend_ {};
        // The fax country code.
        shared_ptr<string> faxArea_ {};
        // The fax extension number.
        shared_ptr<string> faxExt_ {};
        // The fax number with an area code or mobile number.
        shared_ptr<string> faxMain_ {};
        // The mobile number.
        shared_ptr<string> mobile_ {};
        // The zip code.
        shared_ptr<string> postalcode_ {};
        // The contact type. Valid values: 1: individual. 2: enterprise.
        shared_ptr<int32_t> regType_ {};
        // The registrant ID.
        shared_ptr<string> registrantId_ {};
        // The calling code of the country or region where the domain name contact is located.
        shared_ptr<string> telArea_ {};
        // The telephone extension number.
        shared_ptr<string> telExt_ {};
        // The landline number with an area code or mobile number.
        shared_ptr<string> telMain_ {};
        // The VSP contact ID.
        shared_ptr<string> vspContactId_ {};
      };

      virtual bool empty() const override { return this->auditMsg_ == nullptr
        && this->bizName_ == nullptr && this->bizNo_ == nullptr && this->bizStatus_ == nullptr && this->bizType_ == nullptr && this->createTime_ == nullptr
        && this->domainName_ == nullptr && this->domainSpecialBizContact_ == nullptr && this->domainSpecialBizCredentials_ == nullptr && this->domainSpecialOrderResult_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->orderId_ == nullptr && this->productId_ == nullptr && this->saleId_ == nullptr
        && this->status_ == nullptr && this->statusDesc_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
      // auditMsg Field Functions 
      bool hasAuditMsg() const { return this->auditMsg_ != nullptr;};
      void deleteAuditMsg() { this->auditMsg_ = nullptr;};
      inline string getAuditMsg() const { DARABONBA_PTR_GET_DEFAULT(auditMsg_, "") };
      inline Module& setAuditMsg(string auditMsg) { DARABONBA_PTR_SET_VALUE(auditMsg_, auditMsg) };


      // bizName Field Functions 
      bool hasBizName() const { return this->bizName_ != nullptr;};
      void deleteBizName() { this->bizName_ = nullptr;};
      inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
      inline Module& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


      // bizNo Field Functions 
      bool hasBizNo() const { return this->bizNo_ != nullptr;};
      void deleteBizNo() { this->bizNo_ = nullptr;};
      inline string getBizNo() const { DARABONBA_PTR_GET_DEFAULT(bizNo_, "") };
      inline Module& setBizNo(string bizNo) { DARABONBA_PTR_SET_VALUE(bizNo_, bizNo) };


      // bizStatus Field Functions 
      bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
      void deleteBizStatus() { this->bizStatus_ = nullptr;};
      inline string getBizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
      inline Module& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline Module& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Module& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Module& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainSpecialBizContact Field Functions 
      bool hasDomainSpecialBizContact() const { return this->domainSpecialBizContact_ != nullptr;};
      void deleteDomainSpecialBizContact() { this->domainSpecialBizContact_ = nullptr;};
      inline const Module::DomainSpecialBizContact & getDomainSpecialBizContact() const { DARABONBA_PTR_GET_CONST(domainSpecialBizContact_, Module::DomainSpecialBizContact) };
      inline Module::DomainSpecialBizContact getDomainSpecialBizContact() { DARABONBA_PTR_GET(domainSpecialBizContact_, Module::DomainSpecialBizContact) };
      inline Module& setDomainSpecialBizContact(const Module::DomainSpecialBizContact & domainSpecialBizContact) { DARABONBA_PTR_SET_VALUE(domainSpecialBizContact_, domainSpecialBizContact) };
      inline Module& setDomainSpecialBizContact(Module::DomainSpecialBizContact && domainSpecialBizContact) { DARABONBA_PTR_SET_RVALUE(domainSpecialBizContact_, domainSpecialBizContact) };


      // domainSpecialBizCredentials Field Functions 
      bool hasDomainSpecialBizCredentials() const { return this->domainSpecialBizCredentials_ != nullptr;};
      void deleteDomainSpecialBizCredentials() { this->domainSpecialBizCredentials_ = nullptr;};
      inline const vector<Module::DomainSpecialBizCredentials> & getDomainSpecialBizCredentials() const { DARABONBA_PTR_GET_CONST(domainSpecialBizCredentials_, vector<Module::DomainSpecialBizCredentials>) };
      inline vector<Module::DomainSpecialBizCredentials> getDomainSpecialBizCredentials() { DARABONBA_PTR_GET(domainSpecialBizCredentials_, vector<Module::DomainSpecialBizCredentials>) };
      inline Module& setDomainSpecialBizCredentials(const vector<Module::DomainSpecialBizCredentials> & domainSpecialBizCredentials) { DARABONBA_PTR_SET_VALUE(domainSpecialBizCredentials_, domainSpecialBizCredentials) };
      inline Module& setDomainSpecialBizCredentials(vector<Module::DomainSpecialBizCredentials> && domainSpecialBizCredentials) { DARABONBA_PTR_SET_RVALUE(domainSpecialBizCredentials_, domainSpecialBizCredentials) };


      // domainSpecialOrderResult Field Functions 
      bool hasDomainSpecialOrderResult() const { return this->domainSpecialOrderResult_ != nullptr;};
      void deleteDomainSpecialOrderResult() { this->domainSpecialOrderResult_ = nullptr;};
      inline const Module::DomainSpecialOrderResult & getDomainSpecialOrderResult() const { DARABONBA_PTR_GET_CONST(domainSpecialOrderResult_, Module::DomainSpecialOrderResult) };
      inline Module::DomainSpecialOrderResult getDomainSpecialOrderResult() { DARABONBA_PTR_GET(domainSpecialOrderResult_, Module::DomainSpecialOrderResult) };
      inline Module& setDomainSpecialOrderResult(const Module::DomainSpecialOrderResult & domainSpecialOrderResult) { DARABONBA_PTR_SET_VALUE(domainSpecialOrderResult_, domainSpecialOrderResult) };
      inline Module& setDomainSpecialOrderResult(Module::DomainSpecialOrderResult && domainSpecialOrderResult) { DARABONBA_PTR_SET_RVALUE(domainSpecialOrderResult_, domainSpecialOrderResult) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Module& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Module& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Module& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // saleId Field Functions 
      bool hasSaleId() const { return this->saleId_ != nullptr;};
      void deleteSaleId() { this->saleId_ = nullptr;};
      inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
      inline Module& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline Module& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Module& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The review information.
      shared_ptr<string> auditMsg_ {};
      // The business name.
      shared_ptr<string> bizName_ {};
      // The business ID.
      shared_ptr<string> bizNo_ {};
      // The business status.
      shared_ptr<string> bizStatus_ {};
      // The business type.
      shared_ptr<string> bizType_ {};
      // The time when the business was created.
      shared_ptr<int64_t> createTime_ {};
      // The domain name.
      shared_ptr<string> domainName_ {};
      // The contact information.
      shared_ptr<Module::DomainSpecialBizContact> domainSpecialBizContact_ {};
      // The certificate information.
      shared_ptr<vector<Module::DomainSpecialBizCredentials>> domainSpecialBizCredentials_ {};
      // The information about the order.
      shared_ptr<Module::DomainSpecialOrderResult> domainSpecialOrderResult_ {};
      // The time when the business was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the business was modified.
      shared_ptr<string> gmtModified_ {};
      // The primary key.
      shared_ptr<int64_t> id_ {};
      // The order ID.
      shared_ptr<string> orderId_ {};
      // The service ID.
      shared_ptr<string> productId_ {};
      // The instance ID.
      shared_ptr<string> saleId_ {};
      // The business status.
      shared_ptr<int32_t> status_ {};
      // The description of business status.
      shared_ptr<string> statusDesc_ {};
      // The time when the business was updated.
      shared_ptr<int64_t> updateTime_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->allowRetry_ == nullptr
        && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr && this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->httpStatusCode_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->synchro_ == nullptr; };
    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline QueryDomainSpecialBizDetailResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryDomainSpecialBizDetailResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline QueryDomainSpecialBizDetailResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline QueryDomainSpecialBizDetailResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline QueryDomainSpecialBizDetailResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline QueryDomainSpecialBizDetailResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryDomainSpecialBizDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline QueryDomainSpecialBizDetailResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryDomainSpecialBizDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryDomainSpecialBizDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryDomainSpecialBizDetailResponseBody::Module) };
    inline QueryDomainSpecialBizDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryDomainSpecialBizDetailResponseBody::Module) };
    inline QueryDomainSpecialBizDetailResponseBody& setModule(const QueryDomainSpecialBizDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryDomainSpecialBizDetailResponseBody& setModule(QueryDomainSpecialBizDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainSpecialBizDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDomainSpecialBizDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline QueryDomainSpecialBizDetailResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // Indicates whether retries are allowed.
    shared_ptr<bool> allowRetry_ {};
    // The name of the application for which the error code is returned.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The array of error parameters that are returned.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code that is directly returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned data.
    shared_ptr<QueryDomainSpecialBizDetailResponseBody::Module> module_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // Indicates whether to perform synchronous processing.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
