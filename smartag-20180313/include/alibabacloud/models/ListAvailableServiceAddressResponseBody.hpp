// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLESERVICEADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLESERVICEADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListAvailableServiceAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableServiceAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableServiceAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAvailableServiceAddressResponseBody() = default ;
    ListAvailableServiceAddressResponseBody(const ListAvailableServiceAddressResponseBody &) = default ;
    ListAvailableServiceAddressResponseBody(ListAvailableServiceAddressResponseBody &&) = default ;
    ListAvailableServiceAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableServiceAddressResponseBody() = default ;
    ListAvailableServiceAddressResponseBody& operator=(const ListAvailableServiceAddressResponseBody &) = default ;
    ListAvailableServiceAddressResponseBody& operator=(ListAvailableServiceAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
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
      virtual bool empty() const override { return this->address_ == nullptr
        && this->addressType_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Data& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // addressType Field Functions 
      bool hasAddressType() const { return this->addressType_ != nullptr;};
      void deleteAddressType() { this->addressType_ = nullptr;};
      inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
      inline Data& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    protected:
      // The service address.
      shared_ptr<string> address_ {};
      // The type of the service address.
      shared_ptr<string> addressType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAvailableServiceAddressResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAvailableServiceAddressResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAvailableServiceAddressResponseBody::Data>) };
    inline vector<ListAvailableServiceAddressResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAvailableServiceAddressResponseBody::Data>) };
    inline ListAvailableServiceAddressResponseBody& setData(const vector<ListAvailableServiceAddressResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAvailableServiceAddressResponseBody& setData(vector<ListAvailableServiceAddressResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAvailableServiceAddressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableServiceAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAvailableServiceAddressResponseBody::Data>> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
