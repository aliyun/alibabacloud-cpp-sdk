// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEUSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEUSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateServiceUsageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceUsageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(UserInformation, userInformationShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceUsageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(UserInformation, userInformationShrink_);
    };
    CreateServiceUsageShrinkRequest() = default ;
    CreateServiceUsageShrinkRequest(const CreateServiceUsageShrinkRequest &) = default ;
    CreateServiceUsageShrinkRequest(CreateServiceUsageShrinkRequest &&) = default ;
    CreateServiceUsageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceUsageShrinkRequest() = default ;
    CreateServiceUsageShrinkRequest& operator=(const CreateServiceUsageShrinkRequest &) = default ;
    CreateServiceUsageShrinkRequest& operator=(CreateServiceUsageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->serviceId_ != nullptr && this->userInformationShrink_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServiceUsageShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateServiceUsageShrinkRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // userInformationShrink Field Functions 
    bool hasUserInformationShrink() const { return this->userInformationShrink_ != nullptr;};
    void deleteUserInformationShrink() { this->userInformationShrink_ = nullptr;};
    inline string userInformationShrink() const { DARABONBA_PTR_GET_DEFAULT(userInformationShrink_, "") };
    inline CreateServiceUsageShrinkRequest& setUserInformationShrink(string userInformationShrink) { DARABONBA_PTR_SET_VALUE(userInformationShrink_, userInformationShrink) };


  protected:
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The application information.
    std::shared_ptr<string> userInformationShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
