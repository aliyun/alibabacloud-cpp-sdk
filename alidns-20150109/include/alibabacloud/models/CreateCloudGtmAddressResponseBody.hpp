// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDGTMADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDGTMADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreateCloudGtmAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudGtmAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressId, addressId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudGtmAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressId, addressId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateCloudGtmAddressResponseBody() = default ;
    CreateCloudGtmAddressResponseBody(const CreateCloudGtmAddressResponseBody &) = default ;
    CreateCloudGtmAddressResponseBody(CreateCloudGtmAddressResponseBody &&) = default ;
    CreateCloudGtmAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudGtmAddressResponseBody() = default ;
    CreateCloudGtmAddressResponseBody& operator=(const CreateCloudGtmAddressResponseBody &) = default ;
    CreateCloudGtmAddressResponseBody& operator=(CreateCloudGtmAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressId_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // addressId Field Functions 
    bool hasAddressId() const { return this->addressId_ != nullptr;};
    void deleteAddressId() { this->addressId_ = nullptr;};
    inline string getAddressId() const { DARABONBA_PTR_GET_DEFAULT(addressId_, "") };
    inline CreateCloudGtmAddressResponseBody& setAddressId(string addressId) { DARABONBA_PTR_SET_VALUE(addressId_, addressId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudGtmAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateCloudGtmAddressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The address ID. This ID uniquely identifies the address.
    shared_ptr<string> addressId_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // Indicates whether the address creation operation is successful:
    // - true: Operation was successful
    // - false: Operation was failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
