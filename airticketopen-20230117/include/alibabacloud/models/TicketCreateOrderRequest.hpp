// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketCreateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketCreateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(DistributorOrderId, distributorOrderId_);
      DARABONBA_PTR_TO_JSON(OrderProduct, orderProduct_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(TotalDistributionPrice, totalDistributionPrice_);
      DARABONBA_PTR_TO_JSON(Travelers, travelers_);
    };
    friend void from_json(const Darabonba::Json& j, TicketCreateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(DistributorOrderId, distributorOrderId_);
      DARABONBA_PTR_FROM_JSON(OrderProduct, orderProduct_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(TotalDistributionPrice, totalDistributionPrice_);
      DARABONBA_PTR_FROM_JSON(Travelers, travelers_);
    };
    TicketCreateOrderRequest() = default ;
    TicketCreateOrderRequest(const TicketCreateOrderRequest &) = default ;
    TicketCreateOrderRequest(TicketCreateOrderRequest &&) = default ;
    TicketCreateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketCreateOrderRequest() = default ;
    TicketCreateOrderRequest& operator=(const TicketCreateOrderRequest &) = default ;
    TicketCreateOrderRequest& operator=(TicketCreateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Travelers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Travelers& obj) { 
        DARABONBA_PTR_TO_JSON(Birthday, birthday_);
        DARABONBA_PTR_TO_JSON(CertificateNo, certificateNo_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(DialingCode, dialingCode_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(FirstName, firstName_);
        DARABONBA_PTR_TO_JSON(Gender, gender_);
        DARABONBA_PTR_TO_JSON(LastName, lastName_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Nationality, nationality_);
      };
      friend void from_json(const Darabonba::Json& j, Travelers& obj) { 
        DARABONBA_PTR_FROM_JSON(Birthday, birthday_);
        DARABONBA_PTR_FROM_JSON(CertificateNo, certificateNo_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(DialingCode, dialingCode_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
        DARABONBA_PTR_FROM_JSON(Gender, gender_);
        DARABONBA_PTR_FROM_JSON(LastName, lastName_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Nationality, nationality_);
      };
      Travelers() = default ;
      Travelers(const Travelers &) = default ;
      Travelers(Travelers &&) = default ;
      Travelers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Travelers() = default ;
      Travelers& operator=(const Travelers &) = default ;
      Travelers& operator=(Travelers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->birthday_ == nullptr
        && this->certificateNo_ == nullptr && this->certificateType_ == nullptr && this->dialingCode_ == nullptr && this->email_ == nullptr && this->firstName_ == nullptr
        && this->gender_ == nullptr && this->lastName_ == nullptr && this->mobile_ == nullptr && this->name_ == nullptr && this->nationality_ == nullptr; };
      // birthday Field Functions 
      bool hasBirthday() const { return this->birthday_ != nullptr;};
      void deleteBirthday() { this->birthday_ = nullptr;};
      inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
      inline Travelers& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


      // certificateNo Field Functions 
      bool hasCertificateNo() const { return this->certificateNo_ != nullptr;};
      void deleteCertificateNo() { this->certificateNo_ = nullptr;};
      inline string getCertificateNo() const { DARABONBA_PTR_GET_DEFAULT(certificateNo_, "") };
      inline Travelers& setCertificateNo(string certificateNo) { DARABONBA_PTR_SET_VALUE(certificateNo_, certificateNo) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline int32_t getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, 0) };
      inline Travelers& setCertificateType(int32_t certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // dialingCode Field Functions 
      bool hasDialingCode() const { return this->dialingCode_ != nullptr;};
      void deleteDialingCode() { this->dialingCode_ = nullptr;};
      inline string getDialingCode() const { DARABONBA_PTR_GET_DEFAULT(dialingCode_, "") };
      inline Travelers& setDialingCode(string dialingCode) { DARABONBA_PTR_SET_VALUE(dialingCode_, dialingCode) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Travelers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline Travelers& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
      inline Travelers& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline Travelers& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Travelers& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Travelers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nationality Field Functions 
      bool hasNationality() const { return this->nationality_ != nullptr;};
      void deleteNationality() { this->nationality_ = nullptr;};
      inline string getNationality() const { DARABONBA_PTR_GET_DEFAULT(nationality_, "") };
      inline Travelers& setNationality(string nationality) { DARABONBA_PTR_SET_VALUE(nationality_, nationality) };


    protected:
      shared_ptr<string> birthday_ {};
      shared_ptr<string> certificateNo_ {};
      shared_ptr<int32_t> certificateType_ {};
      shared_ptr<string> dialingCode_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> firstName_ {};
      shared_ptr<int32_t> gender_ {};
      shared_ptr<string> lastName_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nationality_ {};
    };

    class TotalDistributionPrice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TotalDistributionPrice& obj) { 
        DARABONBA_PTR_TO_JSON(Amount, amount_);
        DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
      };
      friend void from_json(const Darabonba::Json& j, TotalDistributionPrice& obj) { 
        DARABONBA_PTR_FROM_JSON(Amount, amount_);
        DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
      };
      TotalDistributionPrice() = default ;
      TotalDistributionPrice(const TotalDistributionPrice &) = default ;
      TotalDistributionPrice(TotalDistributionPrice &&) = default ;
      TotalDistributionPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TotalDistributionPrice() = default ;
      TotalDistributionPrice& operator=(const TotalDistributionPrice &) = default ;
      TotalDistributionPrice& operator=(TotalDistributionPrice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->amount_ == nullptr
        && this->currencyCode_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
      inline TotalDistributionPrice& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // currencyCode Field Functions 
      bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
      void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
      inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
      inline TotalDistributionPrice& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> amount_ {};
      // This parameter is required.
      shared_ptr<string> currencyCode_ {};
    };

    class OrderProduct : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderProduct& obj) { 
        DARABONBA_PTR_TO_JSON(DistributionPrice, distributionPrice_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(TravelDate, travelDate_);
      };
      friend void from_json(const Darabonba::Json& j, OrderProduct& obj) { 
        DARABONBA_PTR_FROM_JSON(DistributionPrice, distributionPrice_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(TravelDate, travelDate_);
      };
      OrderProduct() = default ;
      OrderProduct(const OrderProduct &) = default ;
      OrderProduct(OrderProduct &&) = default ;
      OrderProduct(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderProduct() = default ;
      OrderProduct& operator=(const OrderProduct &) = default ;
      OrderProduct& operator=(OrderProduct &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DistributionPrice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DistributionPrice& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
        };
        friend void from_json(const Darabonba::Json& j, DistributionPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
        };
        DistributionPrice() = default ;
        DistributionPrice(const DistributionPrice &) = default ;
        DistributionPrice(DistributionPrice &&) = default ;
        DistributionPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DistributionPrice() = default ;
        DistributionPrice& operator=(const DistributionPrice &) = default ;
        DistributionPrice& operator=(DistributionPrice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->currencyCode_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
        inline DistributionPrice& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currencyCode Field Functions 
        bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
        void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
        inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
        inline DistributionPrice& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


      protected:
        // This parameter is required.
        shared_ptr<int64_t> amount_ {};
        // This parameter is required.
        shared_ptr<string> currencyCode_ {};
      };

      virtual bool empty() const override { return this->distributionPrice_ == nullptr
        && this->productId_ == nullptr && this->travelDate_ == nullptr; };
      // distributionPrice Field Functions 
      bool hasDistributionPrice() const { return this->distributionPrice_ != nullptr;};
      void deleteDistributionPrice() { this->distributionPrice_ = nullptr;};
      inline const OrderProduct::DistributionPrice & getDistributionPrice() const { DARABONBA_PTR_GET_CONST(distributionPrice_, OrderProduct::DistributionPrice) };
      inline OrderProduct::DistributionPrice getDistributionPrice() { DARABONBA_PTR_GET(distributionPrice_, OrderProduct::DistributionPrice) };
      inline OrderProduct& setDistributionPrice(const OrderProduct::DistributionPrice & distributionPrice) { DARABONBA_PTR_SET_VALUE(distributionPrice_, distributionPrice) };
      inline OrderProduct& setDistributionPrice(OrderProduct::DistributionPrice && distributionPrice) { DARABONBA_PTR_SET_RVALUE(distributionPrice_, distributionPrice) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline OrderProduct& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // travelDate Field Functions 
      bool hasTravelDate() const { return this->travelDate_ != nullptr;};
      void deleteTravelDate() { this->travelDate_ = nullptr;};
      inline string getTravelDate() const { DARABONBA_PTR_GET_DEFAULT(travelDate_, "") };
      inline OrderProduct& setTravelDate(string travelDate) { DARABONBA_PTR_SET_VALUE(travelDate_, travelDate) };


    protected:
      // This parameter is required.
      shared_ptr<OrderProduct::DistributionPrice> distributionPrice_ {};
      // This parameter is required.
      shared_ptr<string> productId_ {};
      // This parameter is required.
      shared_ptr<string> travelDate_ {};
    };

    class Contact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contact& obj) { 
        DARABONBA_PTR_TO_JSON(CertificateNo, certificateNo_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(DialingCode, dialingCode_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(FirstName, firstName_);
        DARABONBA_PTR_TO_JSON(LastName, lastName_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Contact& obj) { 
        DARABONBA_PTR_FROM_JSON(CertificateNo, certificateNo_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(DialingCode, dialingCode_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(FirstName, firstName_);
        DARABONBA_PTR_FROM_JSON(LastName, lastName_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Contact() = default ;
      Contact(const Contact &) = default ;
      Contact(Contact &&) = default ;
      Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contact() = default ;
      Contact& operator=(const Contact &) = default ;
      Contact& operator=(Contact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certificateNo_ == nullptr
        && this->certificateType_ == nullptr && this->dialingCode_ == nullptr && this->email_ == nullptr && this->firstName_ == nullptr && this->lastName_ == nullptr
        && this->mobile_ == nullptr && this->name_ == nullptr; };
      // certificateNo Field Functions 
      bool hasCertificateNo() const { return this->certificateNo_ != nullptr;};
      void deleteCertificateNo() { this->certificateNo_ = nullptr;};
      inline string getCertificateNo() const { DARABONBA_PTR_GET_DEFAULT(certificateNo_, "") };
      inline Contact& setCertificateNo(string certificateNo) { DARABONBA_PTR_SET_VALUE(certificateNo_, certificateNo) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline int32_t getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, 0) };
      inline Contact& setCertificateType(int32_t certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // dialingCode Field Functions 
      bool hasDialingCode() const { return this->dialingCode_ != nullptr;};
      void deleteDialingCode() { this->dialingCode_ = nullptr;};
      inline string getDialingCode() const { DARABONBA_PTR_GET_DEFAULT(dialingCode_, "") };
      inline Contact& setDialingCode(string dialingCode) { DARABONBA_PTR_SET_VALUE(dialingCode_, dialingCode) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Contact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline Contact& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline Contact& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Contact& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Contact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> certificateNo_ {};
      shared_ptr<int32_t> certificateType_ {};
      shared_ptr<string> dialingCode_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> firstName_ {};
      shared_ptr<string> lastName_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->contact_ == nullptr && this->distributorOrderId_ == nullptr && this->orderProduct_ == nullptr && this->quantity_ == nullptr && this->totalDistributionPrice_ == nullptr
        && this->travelers_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline TicketCreateOrderRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const TicketCreateOrderRequest::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, TicketCreateOrderRequest::Contact) };
    inline TicketCreateOrderRequest::Contact getContact() { DARABONBA_PTR_GET(contact_, TicketCreateOrderRequest::Contact) };
    inline TicketCreateOrderRequest& setContact(const TicketCreateOrderRequest::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline TicketCreateOrderRequest& setContact(TicketCreateOrderRequest::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // distributorOrderId Field Functions 
    bool hasDistributorOrderId() const { return this->distributorOrderId_ != nullptr;};
    void deleteDistributorOrderId() { this->distributorOrderId_ = nullptr;};
    inline string getDistributorOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributorOrderId_, "") };
    inline TicketCreateOrderRequest& setDistributorOrderId(string distributorOrderId) { DARABONBA_PTR_SET_VALUE(distributorOrderId_, distributorOrderId) };


    // orderProduct Field Functions 
    bool hasOrderProduct() const { return this->orderProduct_ != nullptr;};
    void deleteOrderProduct() { this->orderProduct_ = nullptr;};
    inline const TicketCreateOrderRequest::OrderProduct & getOrderProduct() const { DARABONBA_PTR_GET_CONST(orderProduct_, TicketCreateOrderRequest::OrderProduct) };
    inline TicketCreateOrderRequest::OrderProduct getOrderProduct() { DARABONBA_PTR_GET(orderProduct_, TicketCreateOrderRequest::OrderProduct) };
    inline TicketCreateOrderRequest& setOrderProduct(const TicketCreateOrderRequest::OrderProduct & orderProduct) { DARABONBA_PTR_SET_VALUE(orderProduct_, orderProduct) };
    inline TicketCreateOrderRequest& setOrderProduct(TicketCreateOrderRequest::OrderProduct && orderProduct) { DARABONBA_PTR_SET_RVALUE(orderProduct_, orderProduct) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline TicketCreateOrderRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // totalDistributionPrice Field Functions 
    bool hasTotalDistributionPrice() const { return this->totalDistributionPrice_ != nullptr;};
    void deleteTotalDistributionPrice() { this->totalDistributionPrice_ = nullptr;};
    inline const TicketCreateOrderRequest::TotalDistributionPrice & getTotalDistributionPrice() const { DARABONBA_PTR_GET_CONST(totalDistributionPrice_, TicketCreateOrderRequest::TotalDistributionPrice) };
    inline TicketCreateOrderRequest::TotalDistributionPrice getTotalDistributionPrice() { DARABONBA_PTR_GET(totalDistributionPrice_, TicketCreateOrderRequest::TotalDistributionPrice) };
    inline TicketCreateOrderRequest& setTotalDistributionPrice(const TicketCreateOrderRequest::TotalDistributionPrice & totalDistributionPrice) { DARABONBA_PTR_SET_VALUE(totalDistributionPrice_, totalDistributionPrice) };
    inline TicketCreateOrderRequest& setTotalDistributionPrice(TicketCreateOrderRequest::TotalDistributionPrice && totalDistributionPrice) { DARABONBA_PTR_SET_RVALUE(totalDistributionPrice_, totalDistributionPrice) };


    // travelers Field Functions 
    bool hasTravelers() const { return this->travelers_ != nullptr;};
    void deleteTravelers() { this->travelers_ = nullptr;};
    inline const vector<TicketCreateOrderRequest::Travelers> & getTravelers() const { DARABONBA_PTR_GET_CONST(travelers_, vector<TicketCreateOrderRequest::Travelers>) };
    inline vector<TicketCreateOrderRequest::Travelers> getTravelers() { DARABONBA_PTR_GET(travelers_, vector<TicketCreateOrderRequest::Travelers>) };
    inline TicketCreateOrderRequest& setTravelers(const vector<TicketCreateOrderRequest::Travelers> & travelers) { DARABONBA_PTR_SET_VALUE(travelers_, travelers) };
    inline TicketCreateOrderRequest& setTravelers(vector<TicketCreateOrderRequest::Travelers> && travelers) { DARABONBA_PTR_SET_RVALUE(travelers_, travelers) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<TicketCreateOrderRequest::Contact> contact_ {};
    // This parameter is required.
    shared_ptr<string> distributorOrderId_ {};
    // This parameter is required.
    shared_ptr<TicketCreateOrderRequest::OrderProduct> orderProduct_ {};
    // This parameter is required.
    shared_ptr<int32_t> quantity_ {};
    // This parameter is required.
    shared_ptr<TicketCreateOrderRequest::TotalDistributionPrice> totalDistributionPrice_ {};
    shared_ptr<vector<TicketCreateOrderRequest::Travelers>> travelers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
