// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateServiceUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(UserInformation, userInformation_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(UserInformation, userInformation_);
    };
    UpdateServiceUsageRequest() = default ;
    UpdateServiceUsageRequest(const UpdateServiceUsageRequest &) = default ;
    UpdateServiceUsageRequest(UpdateServiceUsageRequest &&) = default ;
    UpdateServiceUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceUsageRequest() = default ;
    UpdateServiceUsageRequest& operator=(const UpdateServiceUsageRequest &) = default ;
    UpdateServiceUsageRequest& operator=(UpdateServiceUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->serviceId_ != nullptr && this->userInformation_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServiceUsageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateServiceUsageRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // userInformation Field Functions 
    bool hasUserInformation() const { return this->userInformation_ != nullptr;};
    void deleteUserInformation() { this->userInformation_ = nullptr;};
    inline const map<string, string> & userInformation() const { DARABONBA_PTR_GET_CONST(userInformation_, map<string, string>) };
    inline map<string, string> userInformation() { DARABONBA_PTR_GET(userInformation_, map<string, string>) };
    inline UpdateServiceUsageRequest& setUserInformation(const map<string, string> & userInformation) { DARABONBA_PTR_SET_VALUE(userInformation_, userInformation) };
    inline UpdateServiceUsageRequest& setUserInformation(map<string, string> && userInformation) { DARABONBA_PTR_SET_RVALUE(userInformation_, userInformation) };


  protected:
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The information about the applicant.
    std::shared_ptr<map<string, string>> userInformation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
