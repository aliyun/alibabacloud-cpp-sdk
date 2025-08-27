// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUESTINVOICEINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUESTINVOICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCreateRequestInvoiceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCreateRequestInvoiceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(buyer_add, buyerAdd_);
      DARABONBA_PTR_TO_JSON(buyer_bank_acc, buyerBankAcc_);
      DARABONBA_PTR_TO_JSON(buyer_bank_add, buyerBankAdd_);
      DARABONBA_PTR_TO_JSON(buyer_phone, buyerPhone_);
      DARABONBA_PTR_TO_JSON(buyer_tax_num, buyerTaxNum_);
      DARABONBA_PTR_TO_JSON(delivery_address, deliveryAddress_);
      DARABONBA_PTR_TO_JSON(delivery_area, deliveryArea_);
      DARABONBA_PTR_TO_JSON(delivery_city, deliveryCity_);
      DARABONBA_PTR_TO_JSON(delivery_province, deliveryProvince_);
      DARABONBA_PTR_TO_JSON(delivery_street, deliveryStreet_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(invoice_material, invoiceMaterial_);
      DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_TO_JSON(receiver_name, receiverName_);
      DARABONBA_PTR_TO_JSON(receiver_phone, receiverPhone_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCreateRequestInvoiceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(buyer_add, buyerAdd_);
      DARABONBA_PTR_FROM_JSON(buyer_bank_acc, buyerBankAcc_);
      DARABONBA_PTR_FROM_JSON(buyer_bank_add, buyerBankAdd_);
      DARABONBA_PTR_FROM_JSON(buyer_phone, buyerPhone_);
      DARABONBA_PTR_FROM_JSON(buyer_tax_num, buyerTaxNum_);
      DARABONBA_PTR_FROM_JSON(delivery_address, deliveryAddress_);
      DARABONBA_PTR_FROM_JSON(delivery_area, deliveryArea_);
      DARABONBA_PTR_FROM_JSON(delivery_city, deliveryCity_);
      DARABONBA_PTR_FROM_JSON(delivery_province, deliveryProvince_);
      DARABONBA_PTR_FROM_JSON(delivery_street, deliveryStreet_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(invoice_material, invoiceMaterial_);
      DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
      DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
      DARABONBA_PTR_FROM_JSON(receiver_name, receiverName_);
      DARABONBA_PTR_FROM_JSON(receiver_phone, receiverPhone_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    HotelOrderCreateRequestInvoiceInfo() = default ;
    HotelOrderCreateRequestInvoiceInfo(const HotelOrderCreateRequestInvoiceInfo &) = default ;
    HotelOrderCreateRequestInvoiceInfo(HotelOrderCreateRequestInvoiceInfo &&) = default ;
    HotelOrderCreateRequestInvoiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCreateRequestInvoiceInfo() = default ;
    HotelOrderCreateRequestInvoiceInfo& operator=(const HotelOrderCreateRequestInvoiceInfo &) = default ;
    HotelOrderCreateRequestInvoiceInfo& operator=(HotelOrderCreateRequestInvoiceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buyerAdd_ != nullptr
        && this->buyerBankAcc_ != nullptr && this->buyerBankAdd_ != nullptr && this->buyerPhone_ != nullptr && this->buyerTaxNum_ != nullptr && this->deliveryAddress_ != nullptr
        && this->deliveryArea_ != nullptr && this->deliveryCity_ != nullptr && this->deliveryProvince_ != nullptr && this->deliveryStreet_ != nullptr && this->email_ != nullptr
        && this->invoiceMaterial_ != nullptr && this->invoiceTitle_ != nullptr && this->invoiceType_ != nullptr && this->receiverName_ != nullptr && this->receiverPhone_ != nullptr
        && this->remark_ != nullptr; };
    // buyerAdd Field Functions 
    bool hasBuyerAdd() const { return this->buyerAdd_ != nullptr;};
    void deleteBuyerAdd() { this->buyerAdd_ = nullptr;};
    inline string buyerAdd() const { DARABONBA_PTR_GET_DEFAULT(buyerAdd_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setBuyerAdd(string buyerAdd) { DARABONBA_PTR_SET_VALUE(buyerAdd_, buyerAdd) };


    // buyerBankAcc Field Functions 
    bool hasBuyerBankAcc() const { return this->buyerBankAcc_ != nullptr;};
    void deleteBuyerBankAcc() { this->buyerBankAcc_ = nullptr;};
    inline string buyerBankAcc() const { DARABONBA_PTR_GET_DEFAULT(buyerBankAcc_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setBuyerBankAcc(string buyerBankAcc) { DARABONBA_PTR_SET_VALUE(buyerBankAcc_, buyerBankAcc) };


    // buyerBankAdd Field Functions 
    bool hasBuyerBankAdd() const { return this->buyerBankAdd_ != nullptr;};
    void deleteBuyerBankAdd() { this->buyerBankAdd_ = nullptr;};
    inline string buyerBankAdd() const { DARABONBA_PTR_GET_DEFAULT(buyerBankAdd_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setBuyerBankAdd(string buyerBankAdd) { DARABONBA_PTR_SET_VALUE(buyerBankAdd_, buyerBankAdd) };


    // buyerPhone Field Functions 
    bool hasBuyerPhone() const { return this->buyerPhone_ != nullptr;};
    void deleteBuyerPhone() { this->buyerPhone_ = nullptr;};
    inline string buyerPhone() const { DARABONBA_PTR_GET_DEFAULT(buyerPhone_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setBuyerPhone(string buyerPhone) { DARABONBA_PTR_SET_VALUE(buyerPhone_, buyerPhone) };


    // buyerTaxNum Field Functions 
    bool hasBuyerTaxNum() const { return this->buyerTaxNum_ != nullptr;};
    void deleteBuyerTaxNum() { this->buyerTaxNum_ = nullptr;};
    inline string buyerTaxNum() const { DARABONBA_PTR_GET_DEFAULT(buyerTaxNum_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setBuyerTaxNum(string buyerTaxNum) { DARABONBA_PTR_SET_VALUE(buyerTaxNum_, buyerTaxNum) };


    // deliveryAddress Field Functions 
    bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
    void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
    inline string deliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


    // deliveryArea Field Functions 
    bool hasDeliveryArea() const { return this->deliveryArea_ != nullptr;};
    void deleteDeliveryArea() { this->deliveryArea_ = nullptr;};
    inline string deliveryArea() const { DARABONBA_PTR_GET_DEFAULT(deliveryArea_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setDeliveryArea(string deliveryArea) { DARABONBA_PTR_SET_VALUE(deliveryArea_, deliveryArea) };


    // deliveryCity Field Functions 
    bool hasDeliveryCity() const { return this->deliveryCity_ != nullptr;};
    void deleteDeliveryCity() { this->deliveryCity_ = nullptr;};
    inline string deliveryCity() const { DARABONBA_PTR_GET_DEFAULT(deliveryCity_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setDeliveryCity(string deliveryCity) { DARABONBA_PTR_SET_VALUE(deliveryCity_, deliveryCity) };


    // deliveryProvince Field Functions 
    bool hasDeliveryProvince() const { return this->deliveryProvince_ != nullptr;};
    void deleteDeliveryProvince() { this->deliveryProvince_ = nullptr;};
    inline string deliveryProvince() const { DARABONBA_PTR_GET_DEFAULT(deliveryProvince_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setDeliveryProvince(string deliveryProvince) { DARABONBA_PTR_SET_VALUE(deliveryProvince_, deliveryProvince) };


    // deliveryStreet Field Functions 
    bool hasDeliveryStreet() const { return this->deliveryStreet_ != nullptr;};
    void deleteDeliveryStreet() { this->deliveryStreet_ = nullptr;};
    inline string deliveryStreet() const { DARABONBA_PTR_GET_DEFAULT(deliveryStreet_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setDeliveryStreet(string deliveryStreet) { DARABONBA_PTR_SET_VALUE(deliveryStreet_, deliveryStreet) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // invoiceMaterial Field Functions 
    bool hasInvoiceMaterial() const { return this->invoiceMaterial_ != nullptr;};
    void deleteInvoiceMaterial() { this->invoiceMaterial_ = nullptr;};
    inline int32_t invoiceMaterial() const { DARABONBA_PTR_GET_DEFAULT(invoiceMaterial_, 0) };
    inline HotelOrderCreateRequestInvoiceInfo& setInvoiceMaterial(int32_t invoiceMaterial) { DARABONBA_PTR_SET_VALUE(invoiceMaterial_, invoiceMaterial) };


    // invoiceTitle Field Functions 
    bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
    void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
    inline string invoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline int32_t invoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
    inline HotelOrderCreateRequestInvoiceInfo& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


    // receiverName Field Functions 
    bool hasReceiverName() const { return this->receiverName_ != nullptr;};
    void deleteReceiverName() { this->receiverName_ = nullptr;};
    inline string receiverName() const { DARABONBA_PTR_GET_DEFAULT(receiverName_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setReceiverName(string receiverName) { DARABONBA_PTR_SET_VALUE(receiverName_, receiverName) };


    // receiverPhone Field Functions 
    bool hasReceiverPhone() const { return this->receiverPhone_ != nullptr;};
    void deleteReceiverPhone() { this->receiverPhone_ = nullptr;};
    inline string receiverPhone() const { DARABONBA_PTR_GET_DEFAULT(receiverPhone_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setReceiverPhone(string receiverPhone) { DARABONBA_PTR_SET_VALUE(receiverPhone_, receiverPhone) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline HotelOrderCreateRequestInvoiceInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<string> buyerAdd_ = nullptr;
    std::shared_ptr<string> buyerBankAcc_ = nullptr;
    std::shared_ptr<string> buyerBankAdd_ = nullptr;
    std::shared_ptr<string> buyerPhone_ = nullptr;
    std::shared_ptr<string> buyerTaxNum_ = nullptr;
    std::shared_ptr<string> deliveryAddress_ = nullptr;
    std::shared_ptr<string> deliveryArea_ = nullptr;
    std::shared_ptr<string> deliveryCity_ = nullptr;
    std::shared_ptr<string> deliveryProvince_ = nullptr;
    std::shared_ptr<string> deliveryStreet_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int32_t> invoiceMaterial_ = nullptr;
    std::shared_ptr<string> invoiceTitle_ = nullptr;
    std::shared_ptr<int32_t> invoiceType_ = nullptr;
    std::shared_ptr<string> receiverName_ = nullptr;
    std::shared_ptr<string> receiverPhone_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
