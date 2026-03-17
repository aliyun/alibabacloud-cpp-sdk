// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMARTACCESSGATEWAYCLIENTUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESMARTACCESSGATEWAYCLIENTUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateSmartAccessGatewayClientUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmartAccessGatewayClientUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserMail, userMail_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmartAccessGatewayClientUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserMail, userMail_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateSmartAccessGatewayClientUserResponseBody() = default ;
    CreateSmartAccessGatewayClientUserResponseBody(const CreateSmartAccessGatewayClientUserResponseBody &) = default ;
    CreateSmartAccessGatewayClientUserResponseBody(CreateSmartAccessGatewayClientUserResponseBody &&) = default ;
    CreateSmartAccessGatewayClientUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmartAccessGatewayClientUserResponseBody() = default ;
    CreateSmartAccessGatewayClientUserResponseBody& operator=(const CreateSmartAccessGatewayClientUserResponseBody &) = default ;
    CreateSmartAccessGatewayClientUserResponseBody& operator=(CreateSmartAccessGatewayClientUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientIp_ == nullptr && this->requestId_ == nullptr && this->userMail_ == nullptr && this->userName_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateSmartAccessGatewayClientUserResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline CreateSmartAccessGatewayClientUserResponseBody& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSmartAccessGatewayClientUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userMail Field Functions 
    bool hasUserMail() const { return this->userMail_ != nullptr;};
    void deleteUserMail() { this->userMail_ = nullptr;};
    inline string getUserMail() const { DARABONBA_PTR_GET_DEFAULT(userMail_, "") };
    inline CreateSmartAccessGatewayClientUserResponseBody& setUserMail(string userMail) { DARABONBA_PTR_SET_VALUE(userMail_, userMail) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateSmartAccessGatewayClientUserResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The maximum bandwidth value. Unit: Kbit/s.
    shared_ptr<int32_t> bandwidth_ {};
    // The IP address of the client app.
    shared_ptr<string> clientIp_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The email address of the client account.
    shared_ptr<string> userMail_ {};
    // The username.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
