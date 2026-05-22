// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInvoiceForIsvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvoiceForIsvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvoiceForIsvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInvoiceForIsvResponseBody() = default ;
    DescribeInvoiceForIsvResponseBody(const DescribeInvoiceForIsvResponseBody &) = default ;
    DescribeInvoiceForIsvResponseBody(DescribeInvoiceForIsvResponseBody &&) = default ;
    DescribeInvoiceForIsvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvoiceForIsvResponseBody() = default ;
    DescribeInvoiceForIsvResponseBody& operator=(const DescribeInvoiceForIsvResponseBody &) = default ;
    DescribeInvoiceForIsvResponseBody& operator=(DescribeInvoiceForIsvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
        DARABONBA_PTR_TO_JSON(CheckNotice, checkNotice_);
        DARABONBA_PTR_TO_JSON(CreateTimeStr, createTimeStr_);
        DARABONBA_PTR_TO_JSON(EvaluateList, evaluateList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InvoiceId, invoiceId_);
        DARABONBA_PTR_TO_JSON(InvoiceList, invoiceList_);
        DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTimeStr, modifiedTimeStr_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(ReceiptUserInfoDto, receiptUserInfoDto_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserAddressDto, userAddressDto_);
        DARABONBA_PTR_TO_JSON(UserNotice, userNotice_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
        DARABONBA_PTR_FROM_JSON(CheckNotice, checkNotice_);
        DARABONBA_PTR_FROM_JSON(CreateTimeStr, createTimeStr_);
        DARABONBA_PTR_FROM_JSON(EvaluateList, evaluateList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InvoiceId, invoiceId_);
        DARABONBA_PTR_FROM_JSON(InvoiceList, invoiceList_);
        DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTimeStr, modifiedTimeStr_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(ReceiptUserInfoDto, receiptUserInfoDto_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserAddressDto, userAddressDto_);
        DARABONBA_PTR_FROM_JSON(UserNotice, userNotice_);
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
      class UserAddressDto : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserAddressDto& obj) { 
          DARABONBA_PTR_TO_JSON(Addressee, addressee_);
          DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(DeliveryAddress, deliveryAddress_);
          DARABONBA_PTR_TO_JSON(Emails, emails_);
          DARABONBA_PTR_TO_JSON(Phone, phone_);
          DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
        };
        friend void from_json(const Darabonba::Json& j, UserAddressDto& obj) { 
          DARABONBA_PTR_FROM_JSON(Addressee, addressee_);
          DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(DeliveryAddress, deliveryAddress_);
          DARABONBA_PTR_FROM_JSON(Emails, emails_);
          DARABONBA_PTR_FROM_JSON(Phone, phone_);
          DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
        };
        UserAddressDto() = default ;
        UserAddressDto(const UserAddressDto &) = default ;
        UserAddressDto(UserAddressDto &&) = default ;
        UserAddressDto(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserAddressDto() = default ;
        UserAddressDto& operator=(const UserAddressDto &) = default ;
        UserAddressDto& operator=(UserAddressDto &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addressee_ == nullptr
        && this->aliyunPk_ == nullptr && this->bizType_ == nullptr && this->deliveryAddress_ == nullptr && this->emails_ == nullptr && this->phone_ == nullptr
        && this->postalCode_ == nullptr; };
        // addressee Field Functions 
        bool hasAddressee() const { return this->addressee_ != nullptr;};
        void deleteAddressee() { this->addressee_ = nullptr;};
        inline string getAddressee() const { DARABONBA_PTR_GET_DEFAULT(addressee_, "") };
        inline UserAddressDto& setAddressee(string addressee) { DARABONBA_PTR_SET_VALUE(addressee_, addressee) };


        // aliyunPk Field Functions 
        bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
        void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
        inline string getAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
        inline UserAddressDto& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline UserAddressDto& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // deliveryAddress Field Functions 
        bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
        void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
        inline string getDeliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
        inline UserAddressDto& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


        // emails Field Functions 
        bool hasEmails() const { return this->emails_ != nullptr;};
        void deleteEmails() { this->emails_ = nullptr;};
        inline string getEmails() const { DARABONBA_PTR_GET_DEFAULT(emails_, "") };
        inline UserAddressDto& setEmails(string emails) { DARABONBA_PTR_SET_VALUE(emails_, emails) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline UserAddressDto& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // postalCode Field Functions 
        bool hasPostalCode() const { return this->postalCode_ != nullptr;};
        void deletePostalCode() { this->postalCode_ = nullptr;};
        inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
        inline UserAddressDto& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


      protected:
        shared_ptr<string> addressee_ {};
        shared_ptr<string> aliyunPk_ {};
        shared_ptr<string> bizType_ {};
        shared_ptr<string> deliveryAddress_ {};
        shared_ptr<string> emails_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<string> postalCode_ {};
      };

      class ReceiptUserInfoDto : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReceiptUserInfoDto& obj) { 
          DARABONBA_PTR_TO_JSON(TaxNumber, taxNumber_);
        };
        friend void from_json(const Darabonba::Json& j, ReceiptUserInfoDto& obj) { 
          DARABONBA_PTR_FROM_JSON(TaxNumber, taxNumber_);
        };
        ReceiptUserInfoDto() = default ;
        ReceiptUserInfoDto(const ReceiptUserInfoDto &) = default ;
        ReceiptUserInfoDto(ReceiptUserInfoDto &&) = default ;
        ReceiptUserInfoDto(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReceiptUserInfoDto() = default ;
        ReceiptUserInfoDto& operator=(const ReceiptUserInfoDto &) = default ;
        ReceiptUserInfoDto& operator=(ReceiptUserInfoDto &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->taxNumber_ == nullptr; };
        // taxNumber Field Functions 
        bool hasTaxNumber() const { return this->taxNumber_ != nullptr;};
        void deleteTaxNumber() { this->taxNumber_ = nullptr;};
        inline string getTaxNumber() const { DARABONBA_PTR_GET_DEFAULT(taxNumber_, "") };
        inline ReceiptUserInfoDto& setTaxNumber(string taxNumber) { DARABONBA_PTR_SET_VALUE(taxNumber_, taxNumber) };


      protected:
        shared_ptr<string> taxNumber_ {};
      };

      class InvoiceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvoiceList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InvoiceAmount, invoiceAmount_);
        };
        friend void from_json(const Darabonba::Json& j, InvoiceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InvoiceAmount, invoiceAmount_);
        };
        InvoiceList() = default ;
        InvoiceList(const InvoiceList &) = default ;
        InvoiceList(InvoiceList &&) = default ;
        InvoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InvoiceList() = default ;
        InvoiceList& operator=(const InvoiceList &) = default ;
        InvoiceList& operator=(InvoiceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->invoiceAmount_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline InvoiceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // invoiceAmount Field Functions 
        bool hasInvoiceAmount() const { return this->invoiceAmount_ != nullptr;};
        void deleteInvoiceAmount() { this->invoiceAmount_ = nullptr;};
        inline string getInvoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(invoiceAmount_, "") };
        inline InvoiceList& setInvoiceAmount(string invoiceAmount) { DARABONBA_PTR_SET_VALUE(invoiceAmount_, invoiceAmount) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> invoiceAmount_ {};
      };

      class EvaluateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EvaluateList& obj) { 
          DARABONBA_PTR_TO_JSON(Agent, agent_);
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(BizTimeStr, bizTimeStr_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(OrderType, orderType_);
          DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(ProductName, productName_);
          DARABONBA_PTR_TO_JSON(RealAliyunId, realAliyunId_);
          DARABONBA_PTR_TO_JSON(RealAliyunPk, realAliyunPk_);
        };
        friend void from_json(const Darabonba::Json& j, EvaluateList& obj) { 
          DARABONBA_PTR_FROM_JSON(Agent, agent_);
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(BizTimeStr, bizTimeStr_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
          DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(ProductName, productName_);
          DARABONBA_PTR_FROM_JSON(RealAliyunId, realAliyunId_);
          DARABONBA_PTR_FROM_JSON(RealAliyunPk, realAliyunPk_);
        };
        EvaluateList() = default ;
        EvaluateList(const EvaluateList &) = default ;
        EvaluateList(EvaluateList &&) = default ;
        EvaluateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EvaluateList() = default ;
        EvaluateList& operator=(const EvaluateList &) = default ;
        EvaluateList& operator=(EvaluateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agent_ == nullptr
        && this->amount_ == nullptr && this->bizTimeStr_ == nullptr && this->id_ == nullptr && this->orderType_ == nullptr && this->outBizId_ == nullptr
        && this->productCode_ == nullptr && this->productName_ == nullptr && this->realAliyunId_ == nullptr && this->realAliyunPk_ == nullptr; };
        // agent Field Functions 
        bool hasAgent() const { return this->agent_ != nullptr;};
        void deleteAgent() { this->agent_ = nullptr;};
        inline bool getAgent() const { DARABONBA_PTR_GET_DEFAULT(agent_, false) };
        inline EvaluateList& setAgent(bool agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline EvaluateList& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // bizTimeStr Field Functions 
        bool hasBizTimeStr() const { return this->bizTimeStr_ != nullptr;};
        void deleteBizTimeStr() { this->bizTimeStr_ = nullptr;};
        inline string getBizTimeStr() const { DARABONBA_PTR_GET_DEFAULT(bizTimeStr_, "") };
        inline EvaluateList& setBizTimeStr(string bizTimeStr) { DARABONBA_PTR_SET_VALUE(bizTimeStr_, bizTimeStr) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline EvaluateList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline EvaluateList& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // outBizId Field Functions 
        bool hasOutBizId() const { return this->outBizId_ != nullptr;};
        void deleteOutBizId() { this->outBizId_ = nullptr;};
        inline string getOutBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
        inline EvaluateList& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline EvaluateList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline EvaluateList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


        // realAliyunId Field Functions 
        bool hasRealAliyunId() const { return this->realAliyunId_ != nullptr;};
        void deleteRealAliyunId() { this->realAliyunId_ = nullptr;};
        inline string getRealAliyunId() const { DARABONBA_PTR_GET_DEFAULT(realAliyunId_, "") };
        inline EvaluateList& setRealAliyunId(string realAliyunId) { DARABONBA_PTR_SET_VALUE(realAliyunId_, realAliyunId) };


        // realAliyunPk Field Functions 
        bool hasRealAliyunPk() const { return this->realAliyunPk_ != nullptr;};
        void deleteRealAliyunPk() { this->realAliyunPk_ = nullptr;};
        inline string getRealAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(realAliyunPk_, "") };
        inline EvaluateList& setRealAliyunPk(string realAliyunPk) { DARABONBA_PTR_SET_VALUE(realAliyunPk_, realAliyunPk) };


      protected:
        shared_ptr<bool> agent_ {};
        shared_ptr<string> amount_ {};
        shared_ptr<string> bizTimeStr_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> orderType_ {};
        shared_ptr<string> outBizId_ {};
        shared_ptr<string> productCode_ {};
        shared_ptr<string> productName_ {};
        shared_ptr<string> realAliyunId_ {};
        shared_ptr<string> realAliyunPk_ {};
      };

      virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && this->checkNotice_ == nullptr && this->createTimeStr_ == nullptr && this->evaluateList_ == nullptr && this->id_ == nullptr && this->invoiceId_ == nullptr
        && this->invoiceList_ == nullptr && this->materialType_ == nullptr && this->modifiedTime_ == nullptr && this->modifiedTimeStr_ == nullptr && this->price_ == nullptr
        && this->receiptUserInfoDto_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->type_ == nullptr && this->userAddressDto_ == nullptr
        && this->userNotice_ == nullptr; };
      // aliyunPk Field Functions 
      bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
      void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
      inline string getAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
      inline Result& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


      // checkNotice Field Functions 
      bool hasCheckNotice() const { return this->checkNotice_ != nullptr;};
      void deleteCheckNotice() { this->checkNotice_ = nullptr;};
      inline string getCheckNotice() const { DARABONBA_PTR_GET_DEFAULT(checkNotice_, "") };
      inline Result& setCheckNotice(string checkNotice) { DARABONBA_PTR_SET_VALUE(checkNotice_, checkNotice) };


      // createTimeStr Field Functions 
      bool hasCreateTimeStr() const { return this->createTimeStr_ != nullptr;};
      void deleteCreateTimeStr() { this->createTimeStr_ = nullptr;};
      inline string getCreateTimeStr() const { DARABONBA_PTR_GET_DEFAULT(createTimeStr_, "") };
      inline Result& setCreateTimeStr(string createTimeStr) { DARABONBA_PTR_SET_VALUE(createTimeStr_, createTimeStr) };


      // evaluateList Field Functions 
      bool hasEvaluateList() const { return this->evaluateList_ != nullptr;};
      void deleteEvaluateList() { this->evaluateList_ = nullptr;};
      inline const vector<Result::EvaluateList> & getEvaluateList() const { DARABONBA_PTR_GET_CONST(evaluateList_, vector<Result::EvaluateList>) };
      inline vector<Result::EvaluateList> getEvaluateList() { DARABONBA_PTR_GET(evaluateList_, vector<Result::EvaluateList>) };
      inline Result& setEvaluateList(const vector<Result::EvaluateList> & evaluateList) { DARABONBA_PTR_SET_VALUE(evaluateList_, evaluateList) };
      inline Result& setEvaluateList(vector<Result::EvaluateList> && evaluateList) { DARABONBA_PTR_SET_RVALUE(evaluateList_, evaluateList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // invoiceId Field Functions 
      bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
      void deleteInvoiceId() { this->invoiceId_ = nullptr;};
      inline string getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, "") };
      inline Result& setInvoiceId(string invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


      // invoiceList Field Functions 
      bool hasInvoiceList() const { return this->invoiceList_ != nullptr;};
      void deleteInvoiceList() { this->invoiceList_ = nullptr;};
      inline const vector<Result::InvoiceList> & getInvoiceList() const { DARABONBA_PTR_GET_CONST(invoiceList_, vector<Result::InvoiceList>) };
      inline vector<Result::InvoiceList> getInvoiceList() { DARABONBA_PTR_GET(invoiceList_, vector<Result::InvoiceList>) };
      inline Result& setInvoiceList(const vector<Result::InvoiceList> & invoiceList) { DARABONBA_PTR_SET_VALUE(invoiceList_, invoiceList) };
      inline Result& setInvoiceList(vector<Result::InvoiceList> && invoiceList) { DARABONBA_PTR_SET_RVALUE(invoiceList_, invoiceList) };


      // materialType Field Functions 
      bool hasMaterialType() const { return this->materialType_ != nullptr;};
      void deleteMaterialType() { this->materialType_ = nullptr;};
      inline string getMaterialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
      inline Result& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Result& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // modifiedTimeStr Field Functions 
      bool hasModifiedTimeStr() const { return this->modifiedTimeStr_ != nullptr;};
      void deleteModifiedTimeStr() { this->modifiedTimeStr_ = nullptr;};
      inline string getModifiedTimeStr() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeStr_, "") };
      inline Result& setModifiedTimeStr(string modifiedTimeStr) { DARABONBA_PTR_SET_VALUE(modifiedTimeStr_, modifiedTimeStr) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
      inline Result& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // receiptUserInfoDto Field Functions 
      bool hasReceiptUserInfoDto() const { return this->receiptUserInfoDto_ != nullptr;};
      void deleteReceiptUserInfoDto() { this->receiptUserInfoDto_ = nullptr;};
      inline const Result::ReceiptUserInfoDto & getReceiptUserInfoDto() const { DARABONBA_PTR_GET_CONST(receiptUserInfoDto_, Result::ReceiptUserInfoDto) };
      inline Result::ReceiptUserInfoDto getReceiptUserInfoDto() { DARABONBA_PTR_GET(receiptUserInfoDto_, Result::ReceiptUserInfoDto) };
      inline Result& setReceiptUserInfoDto(const Result::ReceiptUserInfoDto & receiptUserInfoDto) { DARABONBA_PTR_SET_VALUE(receiptUserInfoDto_, receiptUserInfoDto) };
      inline Result& setReceiptUserInfoDto(Result::ReceiptUserInfoDto && receiptUserInfoDto) { DARABONBA_PTR_SET_RVALUE(receiptUserInfoDto_, receiptUserInfoDto) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Result& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userAddressDto Field Functions 
      bool hasUserAddressDto() const { return this->userAddressDto_ != nullptr;};
      void deleteUserAddressDto() { this->userAddressDto_ = nullptr;};
      inline const Result::UserAddressDto & getUserAddressDto() const { DARABONBA_PTR_GET_CONST(userAddressDto_, Result::UserAddressDto) };
      inline Result::UserAddressDto getUserAddressDto() { DARABONBA_PTR_GET(userAddressDto_, Result::UserAddressDto) };
      inline Result& setUserAddressDto(const Result::UserAddressDto & userAddressDto) { DARABONBA_PTR_SET_VALUE(userAddressDto_, userAddressDto) };
      inline Result& setUserAddressDto(Result::UserAddressDto && userAddressDto) { DARABONBA_PTR_SET_RVALUE(userAddressDto_, userAddressDto) };


      // userNotice Field Functions 
      bool hasUserNotice() const { return this->userNotice_ != nullptr;};
      void deleteUserNotice() { this->userNotice_ = nullptr;};
      inline string getUserNotice() const { DARABONBA_PTR_GET_DEFAULT(userNotice_, "") };
      inline Result& setUserNotice(string userNotice) { DARABONBA_PTR_SET_VALUE(userNotice_, userNotice) };


    protected:
      shared_ptr<string> aliyunPk_ {};
      shared_ptr<string> checkNotice_ {};
      shared_ptr<string> createTimeStr_ {};
      shared_ptr<vector<Result::EvaluateList>> evaluateList_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> invoiceId_ {};
      shared_ptr<vector<Result::InvoiceList>> invoiceList_ {};
      shared_ptr<string> materialType_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> modifiedTimeStr_ {};
      shared_ptr<string> price_ {};
      shared_ptr<Result::ReceiptUserInfoDto> receiptUserInfoDto_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> type_ {};
      shared_ptr<Result::UserAddressDto> userAddressDto_ {};
      shared_ptr<string> userNotice_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeInvoiceForIsvResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline DescribeInvoiceForIsvResponseBody& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInvoiceForIsvResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInvoiceForIsvResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeInvoiceForIsvResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInvoiceForIsvResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvoiceForIsvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeInvoiceForIsvResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeInvoiceForIsvResponseBody::Result>) };
    inline vector<DescribeInvoiceForIsvResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<DescribeInvoiceForIsvResponseBody::Result>) };
    inline DescribeInvoiceForIsvResponseBody& setResult(const vector<DescribeInvoiceForIsvResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeInvoiceForIsvResponseBody& setResult(vector<DescribeInvoiceForIsvResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInvoiceForIsvResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> count_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeInvoiceForIsvResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
