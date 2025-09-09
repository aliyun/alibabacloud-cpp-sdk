// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSERVICEREGISTRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSERVICEREGISTRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CancelServiceRegistrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelServiceRegistrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelServiceRegistrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
    };
    CancelServiceRegistrationRequest() = default ;
    CancelServiceRegistrationRequest(const CancelServiceRegistrationRequest &) = default ;
    CancelServiceRegistrationRequest(CancelServiceRegistrationRequest &&) = default ;
    CancelServiceRegistrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelServiceRegistrationRequest() = default ;
    CancelServiceRegistrationRequest& operator=(const CancelServiceRegistrationRequest &) = default ;
    CancelServiceRegistrationRequest& operator=(CancelServiceRegistrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->regionId_ != nullptr && this->registrationId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelServiceRegistrationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelServiceRegistrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registrationId Field Functions 
    bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
    void deleteRegistrationId() { this->registrationId_ = nullptr;};
    inline string registrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
    inline CancelServiceRegistrationRequest& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


  protected:
    // Client token, used to ensure the idempotence of requests. Generate a unique value for this parameter from your client to ensure it is unique across different requests. ClientToken supports only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Service registration ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> registrationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
