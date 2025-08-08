// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULTUSERADDRESSDTO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOICEFORISVRESPONSEBODYRESULTUSERADDRESSDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeInvoiceForIsvResponseBodyResultUserAddressDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvoiceForIsvResponseBodyResultUserAddressDto& obj) { 
      DARABONBA_PTR_TO_JSON(Addressee, addressee_);
      DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DeliveryAddress, deliveryAddress_);
      DARABONBA_PTR_TO_JSON(Emails, emails_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvoiceForIsvResponseBodyResultUserAddressDto& obj) { 
      DARABONBA_PTR_FROM_JSON(Addressee, addressee_);
      DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DeliveryAddress, deliveryAddress_);
      DARABONBA_PTR_FROM_JSON(Emails, emails_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
    };
    DescribeInvoiceForIsvResponseBodyResultUserAddressDto() = default ;
    DescribeInvoiceForIsvResponseBodyResultUserAddressDto(const DescribeInvoiceForIsvResponseBodyResultUserAddressDto &) = default ;
    DescribeInvoiceForIsvResponseBodyResultUserAddressDto(DescribeInvoiceForIsvResponseBodyResultUserAddressDto &&) = default ;
    DescribeInvoiceForIsvResponseBodyResultUserAddressDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvoiceForIsvResponseBodyResultUserAddressDto() = default ;
    DescribeInvoiceForIsvResponseBodyResultUserAddressDto& operator=(const DescribeInvoiceForIsvResponseBodyResultUserAddressDto &) = default ;
    DescribeInvoiceForIsvResponseBodyResultUserAddressDto& operator=(DescribeInvoiceForIsvResponseBodyResultUserAddressDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressee_ != nullptr
        && this->aliyunPk_ != nullptr && this->bizType_ != nullptr && this->deliveryAddress_ != nullptr && this->emails_ != nullptr && this->phone_ != nullptr
        && this->postalCode_ != nullptr; };
    // addressee Field Functions 
    bool hasAddressee() const { return this->addressee_ != nullptr;};
    void deleteAddressee() { this->addressee_ = nullptr;};
    inline string addressee() const { DARABONBA_PTR_GET_DEFAULT(addressee_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultUserAddressDto& setAddressee(string addressee) { DARABONBA_PTR_SET_VALUE(addressee_, addressee) };


    // aliyunPk Field Functions 
    bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
    void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
    inline string aliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultUserAddressDto& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultUserAddressDto& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // deliveryAddress Field Functions 
    bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
    void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
    inline string deliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultUserAddressDto& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


    // emails Field Functions 
    bool hasEmails() const { return this->emails_ != nullptr;};
    void deleteEmails() { this->emails_ = nullptr;};
    inline string emails() const { DARABONBA_PTR_GET_DEFAULT(emails_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultUserAddressDto& setEmails(string emails) { DARABONBA_PTR_SET_VALUE(emails_, emails) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultUserAddressDto& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string postalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline DescribeInvoiceForIsvResponseBodyResultUserAddressDto& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


  protected:
    std::shared_ptr<string> addressee_ = nullptr;
    std::shared_ptr<string> aliyunPk_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> deliveryAddress_ = nullptr;
    std::shared_ptr<string> emails_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> postalCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
