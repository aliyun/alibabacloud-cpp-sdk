// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMERADDRESSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMERADDRESSLISTRESPONSEBODY_HPP_
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
  class QueryCustomerAddressListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomerAddressListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomerAddressListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCustomerAddressListResponseBody() = default ;
    QueryCustomerAddressListResponseBody(const QueryCustomerAddressListResponseBody &) = default ;
    QueryCustomerAddressListResponseBody(QueryCustomerAddressListResponseBody &&) = default ;
    QueryCustomerAddressListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomerAddressListResponseBody() = default ;
    QueryCustomerAddressListResponseBody& operator=(const QueryCustomerAddressListResponseBody &) = default ;
    QueryCustomerAddressListResponseBody& operator=(QueryCustomerAddressListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomerInvoiceAddressList, customerInvoiceAddressList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomerInvoiceAddressList, customerInvoiceAddressList_);
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
      class CustomerInvoiceAddressList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomerInvoiceAddressList& obj) { 
          DARABONBA_PTR_TO_JSON(CustomerInvoiceAddress, customerInvoiceAddress_);
        };
        friend void from_json(const Darabonba::Json& j, CustomerInvoiceAddressList& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomerInvoiceAddress, customerInvoiceAddress_);
        };
        CustomerInvoiceAddressList() = default ;
        CustomerInvoiceAddressList(const CustomerInvoiceAddressList &) = default ;
        CustomerInvoiceAddressList(CustomerInvoiceAddressList &&) = default ;
        CustomerInvoiceAddressList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomerInvoiceAddressList() = default ;
        CustomerInvoiceAddressList& operator=(const CustomerInvoiceAddressList &) = default ;
        CustomerInvoiceAddressList& operator=(CustomerInvoiceAddressList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CustomerInvoiceAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomerInvoiceAddress& obj) { 
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
          friend void from_json(const Darabonba::Json& j, CustomerInvoiceAddress& obj) { 
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
          CustomerInvoiceAddress() = default ;
          CustomerInvoiceAddress(const CustomerInvoiceAddress &) = default ;
          CustomerInvoiceAddress(CustomerInvoiceAddress &&) = default ;
          CustomerInvoiceAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomerInvoiceAddress() = default ;
          CustomerInvoiceAddress& operator=(const CustomerInvoiceAddress &) = default ;
          CustomerInvoiceAddress& operator=(CustomerInvoiceAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->addressee_ == nullptr
        && this->bizType_ == nullptr && this->city_ == nullptr && this->county_ == nullptr && this->deliveryAddress_ == nullptr && this->id_ == nullptr
        && this->phone_ == nullptr && this->postalCode_ == nullptr && this->province_ == nullptr && this->street_ == nullptr && this->userId_ == nullptr
        && this->userNick_ == nullptr; };
          // addressee Field Functions 
          bool hasAddressee() const { return this->addressee_ != nullptr;};
          void deleteAddressee() { this->addressee_ = nullptr;};
          inline string getAddressee() const { DARABONBA_PTR_GET_DEFAULT(addressee_, "") };
          inline CustomerInvoiceAddress& setAddressee(string addressee) { DARABONBA_PTR_SET_VALUE(addressee_, addressee) };


          // bizType Field Functions 
          bool hasBizType() const { return this->bizType_ != nullptr;};
          void deleteBizType() { this->bizType_ = nullptr;};
          inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
          inline CustomerInvoiceAddress& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


          // city Field Functions 
          bool hasCity() const { return this->city_ != nullptr;};
          void deleteCity() { this->city_ = nullptr;};
          inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
          inline CustomerInvoiceAddress& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


          // county Field Functions 
          bool hasCounty() const { return this->county_ != nullptr;};
          void deleteCounty() { this->county_ = nullptr;};
          inline string getCounty() const { DARABONBA_PTR_GET_DEFAULT(county_, "") };
          inline CustomerInvoiceAddress& setCounty(string county) { DARABONBA_PTR_SET_VALUE(county_, county) };


          // deliveryAddress Field Functions 
          bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
          void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
          inline string getDeliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
          inline CustomerInvoiceAddress& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline CustomerInvoiceAddress& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // phone Field Functions 
          bool hasPhone() const { return this->phone_ != nullptr;};
          void deletePhone() { this->phone_ = nullptr;};
          inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
          inline CustomerInvoiceAddress& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


          // postalCode Field Functions 
          bool hasPostalCode() const { return this->postalCode_ != nullptr;};
          void deletePostalCode() { this->postalCode_ = nullptr;};
          inline string getPostalCode() const { DARABONBA_PTR_GET_DEFAULT(postalCode_, "") };
          inline CustomerInvoiceAddress& setPostalCode(string postalCode) { DARABONBA_PTR_SET_VALUE(postalCode_, postalCode) };


          // province Field Functions 
          bool hasProvince() const { return this->province_ != nullptr;};
          void deleteProvince() { this->province_ = nullptr;};
          inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
          inline CustomerInvoiceAddress& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


          // street Field Functions 
          bool hasStreet() const { return this->street_ != nullptr;};
          void deleteStreet() { this->street_ = nullptr;};
          inline string getStreet() const { DARABONBA_PTR_GET_DEFAULT(street_, "") };
          inline CustomerInvoiceAddress& setStreet(string street) { DARABONBA_PTR_SET_VALUE(street_, street) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
          inline CustomerInvoiceAddress& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userNick Field Functions 
          bool hasUserNick() const { return this->userNick_ != nullptr;};
          void deleteUserNick() { this->userNick_ = nullptr;};
          inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
          inline CustomerInvoiceAddress& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


        protected:
          // The addressee.
          shared_ptr<string> addressee_ {};
          // The business type.
          shared_ptr<string> bizType_ {};
          // The city to which the invoice is mailed.
          shared_ptr<string> city_ {};
          // The name of the district to which the invoice is mailed.
          shared_ptr<string> county_ {};
          // The detailed address to which the invoice is mailed. This parameter is returned after fields are concatenated.
          shared_ptr<string> deliveryAddress_ {};
          // The ID.
          shared_ptr<int64_t> id_ {};
          // The phone number of the addressee.
          shared_ptr<string> phone_ {};
          // The postcode.
          shared_ptr<string> postalCode_ {};
          // The province to which the invoice is mailed.
          shared_ptr<string> province_ {};
          // The name of the street to which the invoice is mailed.
          shared_ptr<string> street_ {};
          // The ID of the user.
          shared_ptr<int64_t> userId_ {};
          // The nickname of the user.
          shared_ptr<string> userNick_ {};
        };

        virtual bool empty() const override { return this->customerInvoiceAddress_ == nullptr; };
        // customerInvoiceAddress Field Functions 
        bool hasCustomerInvoiceAddress() const { return this->customerInvoiceAddress_ != nullptr;};
        void deleteCustomerInvoiceAddress() { this->customerInvoiceAddress_ = nullptr;};
        inline const vector<CustomerInvoiceAddressList::CustomerInvoiceAddress> & getCustomerInvoiceAddress() const { DARABONBA_PTR_GET_CONST(customerInvoiceAddress_, vector<CustomerInvoiceAddressList::CustomerInvoiceAddress>) };
        inline vector<CustomerInvoiceAddressList::CustomerInvoiceAddress> getCustomerInvoiceAddress() { DARABONBA_PTR_GET(customerInvoiceAddress_, vector<CustomerInvoiceAddressList::CustomerInvoiceAddress>) };
        inline CustomerInvoiceAddressList& setCustomerInvoiceAddress(const vector<CustomerInvoiceAddressList::CustomerInvoiceAddress> & customerInvoiceAddress) { DARABONBA_PTR_SET_VALUE(customerInvoiceAddress_, customerInvoiceAddress) };
        inline CustomerInvoiceAddressList& setCustomerInvoiceAddress(vector<CustomerInvoiceAddressList::CustomerInvoiceAddress> && customerInvoiceAddress) { DARABONBA_PTR_SET_RVALUE(customerInvoiceAddress_, customerInvoiceAddress) };


      protected:
        shared_ptr<vector<CustomerInvoiceAddressList::CustomerInvoiceAddress>> customerInvoiceAddress_ {};
      };

      virtual bool empty() const override { return this->customerInvoiceAddressList_ == nullptr; };
      // customerInvoiceAddressList Field Functions 
      bool hasCustomerInvoiceAddressList() const { return this->customerInvoiceAddressList_ != nullptr;};
      void deleteCustomerInvoiceAddressList() { this->customerInvoiceAddressList_ = nullptr;};
      inline const Data::CustomerInvoiceAddressList & getCustomerInvoiceAddressList() const { DARABONBA_PTR_GET_CONST(customerInvoiceAddressList_, Data::CustomerInvoiceAddressList) };
      inline Data::CustomerInvoiceAddressList getCustomerInvoiceAddressList() { DARABONBA_PTR_GET(customerInvoiceAddressList_, Data::CustomerInvoiceAddressList) };
      inline Data& setCustomerInvoiceAddressList(const Data::CustomerInvoiceAddressList & customerInvoiceAddressList) { DARABONBA_PTR_SET_VALUE(customerInvoiceAddressList_, customerInvoiceAddressList) };
      inline Data& setCustomerInvoiceAddressList(Data::CustomerInvoiceAddressList && customerInvoiceAddressList) { DARABONBA_PTR_SET_RVALUE(customerInvoiceAddressList_, customerInvoiceAddressList) };


    protected:
      // The details of addresses to which invoices are mailed.
      shared_ptr<Data::CustomerInvoiceAddressList> customerInvoiceAddressList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCustomerAddressListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCustomerAddressListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCustomerAddressListResponseBody::Data) };
    inline QueryCustomerAddressListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCustomerAddressListResponseBody::Data) };
    inline QueryCustomerAddressListResponseBody& setData(const QueryCustomerAddressListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCustomerAddressListResponseBody& setData(QueryCustomerAddressListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCustomerAddressListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCustomerAddressListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCustomerAddressListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryCustomerAddressListResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
