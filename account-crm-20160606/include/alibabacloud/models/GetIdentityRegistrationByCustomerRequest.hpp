// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYREGISTRATIONBYCUSTOMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYREGISTRATIONBYCUSTOMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetIdentityRegistrationByCustomerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityRegistrationByCustomerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityRegistrationByCustomerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
    };
    GetIdentityRegistrationByCustomerRequest() = default ;
    GetIdentityRegistrationByCustomerRequest(const GetIdentityRegistrationByCustomerRequest &) = default ;
    GetIdentityRegistrationByCustomerRequest(GetIdentityRegistrationByCustomerRequest &&) = default ;
    GetIdentityRegistrationByCustomerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityRegistrationByCustomerRequest() = default ;
    GetIdentityRegistrationByCustomerRequest& operator=(const GetIdentityRegistrationByCustomerRequest &) = default ;
    GetIdentityRegistrationByCustomerRequest& operator=(GetIdentityRegistrationByCustomerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerId_ == nullptr; };
    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string getCustomerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline GetIdentityRegistrationByCustomerRequest& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> customerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
