// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSPOOLBASICCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMADDRESSPOOLBASICCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmAddressPoolBasicConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmAddressPoolBasicConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmAddressPoolBasicConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPoolId, addressPoolId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateCloudGtmAddressPoolBasicConfigResponseBody() = default ;
    UpdateCloudGtmAddressPoolBasicConfigResponseBody(const UpdateCloudGtmAddressPoolBasicConfigResponseBody &) = default ;
    UpdateCloudGtmAddressPoolBasicConfigResponseBody(UpdateCloudGtmAddressPoolBasicConfigResponseBody &&) = default ;
    UpdateCloudGtmAddressPoolBasicConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmAddressPoolBasicConfigResponseBody() = default ;
    UpdateCloudGtmAddressPoolBasicConfigResponseBody& operator=(const UpdateCloudGtmAddressPoolBasicConfigResponseBody &) = default ;
    UpdateCloudGtmAddressPoolBasicConfigResponseBody& operator=(UpdateCloudGtmAddressPoolBasicConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressPoolId_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // addressPoolId Field Functions 
    bool hasAddressPoolId() const { return this->addressPoolId_ != nullptr;};
    void deleteAddressPoolId() { this->addressPoolId_ = nullptr;};
    inline string getAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(addressPoolId_, "") };
    inline UpdateCloudGtmAddressPoolBasicConfigResponseBody& setAddressPoolId(string addressPoolId) { DARABONBA_PTR_SET_VALUE(addressPoolId_, addressPoolId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCloudGtmAddressPoolBasicConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateCloudGtmAddressPoolBasicConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the address pool. This ID uniquely identifies the address pool.
    shared_ptr<string> addressPoolId_ {};
    // Unique request identification code.
    shared_ptr<string> requestId_ {};
    // Modify the basic configuration of the address pool operation success:
    // - true: Operation successful
    // - false: Operation failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
