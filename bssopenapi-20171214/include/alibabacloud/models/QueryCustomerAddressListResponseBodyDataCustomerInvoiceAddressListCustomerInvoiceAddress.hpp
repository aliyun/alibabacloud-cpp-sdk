// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMERADDRESSLISTRESPONSEBODYDATACUSTOMERINVOICEADDRESSLISTCUSTOMERINVOICEADDRESS_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMERADDRESSLISTRESPONSEBODYDATACUSTOMERINVOICEADDRESSLISTCUSTOMERINVOICEADDRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& obj) { 
      DARABONBA_PTR_TO_JSON(Addressee, addressee_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(City, city_);
      DARABONBA_PTR_TO_JSON(County, county_);
      DARABONBA_PTR_TO_JSON(DeliveryAddress, deliveryAddress_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Street, street_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(Addressee, addressee_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(City, city_);
      DARABONBA_PTR_FROM_JSON(County, county_);
      DARABONBA_PTR_FROM_JSON(DeliveryAddress, deliveryAddress_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(PostalCode, postalCode_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Street, street_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress() = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress(const QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress &) = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress(QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress &&) = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress() = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& operator=(const QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress &) = default ;
    QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& operator=(QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressee_ != nullptr
        && this->bizType_ != nullptr && this->city_ != nullptr && this->county_ != nullptr && this->deliveryAddress_ != nullptr && this->id_ != nullptr
        && this->phone_ != nullptr && this->postalCode_ != nullptr && this->province_ != nullptr && this->street_ != nullptr && this->userId_ != nullptr
        && this->userNick_ != nullptr; };
    // addressee Field Functions 
    bool hasAddressee() const { return this->addressee_ != nullptr;};
    void deleteAddressee() { this->addressee_ = nullptr;};
    inline string addressee() const { DARABONBA_PTR_GET_DEFAULT(addressee_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setAddressee(string addressee) { DARABONBA_PTR_SET_VALUE(addressee_, addressee) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // county Field Functions 
    bool hasCounty() const { return this->county_ != nullptr;};
    void deleteCounty() { this->county_ = nullptr;};
    inline string county() const { DARABONBA_PTR_GET_DEFAULT(county_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setCounty(string county) { DARABONBA_PTR_SET_VALUE(county_, county) };


    // deliveryAddress Field Functions 
    bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
    void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
    inline string deliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // postalCode Field Functions 
    bool hasPostalCode() const { return this->postalCode_ != nullptr;};
    void deletePostalCode() { this->postalCode_ = nullptr;};
    inline string postalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // street Field Functions 
    bool hasStreet() const { return this->street_ != nullptr;};
    void deleteStreet() { this->street_ = nullptr;};
    inline string street() const { DARABONBA_PTR_GET_DEFAULT(street_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setStreet(string street) { DARABONBA_PTR_SET_VALUE(street_, street) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline QueryCustomerAddressListResponseBodyDataCustomerInvoiceAddressListCustomerInvoiceAddress& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // The addressee.
    std::shared_ptr<string> addressee_ = nullptr;
    // The business type.
    std::shared_ptr<string> bizType_ = nullptr;
    // The city to which the invoice is mailed.
    std::shared_ptr<string> city_ = nullptr;
    // The name of the district to which the invoice is mailed.
    std::shared_ptr<string> county_ = nullptr;
    // The detailed address to which the invoice is mailed. This parameter is returned after fields are concatenated.
    std::shared_ptr<string> deliveryAddress_ = nullptr;
    // The ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The phone number of the addressee.
    std::shared_ptr<string> phone_ = nullptr;
    // The postcode.
    std::shared_ptr<string> postalCode_ = nullptr;
    // The province to which the invoice is mailed.
    std::shared_ptr<string> province_ = nullptr;
    // The name of the street to which the invoice is mailed.
    std::shared_ptr<string> street_ = nullptr;
    // The ID of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
