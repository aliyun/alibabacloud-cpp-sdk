// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETFINGERPRINTTEMPLATEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETFINGERPRINTTEMPLATEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class SetFingerPrintTemplateDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetFingerPrintTemplateDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetFingerPrintTemplateDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    SetFingerPrintTemplateDescriptionRequest() = default ;
    SetFingerPrintTemplateDescriptionRequest(const SetFingerPrintTemplateDescriptionRequest &) = default ;
    SetFingerPrintTemplateDescriptionRequest(SetFingerPrintTemplateDescriptionRequest &&) = default ;
    SetFingerPrintTemplateDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetFingerPrintTemplateDescriptionRequest() = default ;
    SetFingerPrintTemplateDescriptionRequest& operator=(const SetFingerPrintTemplateDescriptionRequest &) = default ;
    SetFingerPrintTemplateDescriptionRequest& operator=(SetFingerPrintTemplateDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->index_ == nullptr && this->loginToken_ == nullptr && this->regionId_ == nullptr
        && this->sessionId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline SetFingerPrintTemplateDescriptionRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetFingerPrintTemplateDescriptionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetFingerPrintTemplateDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline SetFingerPrintTemplateDescriptionRequest& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline SetFingerPrintTemplateDescriptionRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetFingerPrintTemplateDescriptionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SetFingerPrintTemplateDescriptionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The client ID. The system generates a unique ID for each client.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The client token to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The index.
    // 
    // This parameter is required.
    shared_ptr<int32_t> index_ {};
    // The logon token.
    // 
    // This parameter is required.
    shared_ptr<string> loginToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The session ID.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
