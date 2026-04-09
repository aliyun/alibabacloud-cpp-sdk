// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class FindIdpListByLoginIdentifierRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindIdpListByLoginIdentifierRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableFeatures, availableFeatures_);
      DARABONBA_PTR_TO_JSON(ClientChannel, clientChannel_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(LoginIdentifier, loginIdentifier_);
      DARABONBA_PTR_TO_JSON(SupportTypes, supportTypes_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, FindIdpListByLoginIdentifierRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableFeatures, availableFeatures_);
      DARABONBA_PTR_FROM_JSON(ClientChannel, clientChannel_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(LoginIdentifier, loginIdentifier_);
      DARABONBA_PTR_FROM_JSON(SupportTypes, supportTypes_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    FindIdpListByLoginIdentifierRequest() = default ;
    FindIdpListByLoginIdentifierRequest(const FindIdpListByLoginIdentifierRequest &) = default ;
    FindIdpListByLoginIdentifierRequest(FindIdpListByLoginIdentifierRequest &&) = default ;
    FindIdpListByLoginIdentifierRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindIdpListByLoginIdentifierRequest() = default ;
    FindIdpListByLoginIdentifierRequest& operator=(const FindIdpListByLoginIdentifierRequest &) = default ;
    FindIdpListByLoginIdentifierRequest& operator=(FindIdpListByLoginIdentifierRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableFeatures_ == nullptr
        && this->clientChannel_ == nullptr && this->clientId_ == nullptr && this->clientIp_ == nullptr && this->clientOS_ == nullptr && this->clientVersion_ == nullptr
        && this->loginIdentifier_ == nullptr && this->supportTypes_ == nullptr && this->uuid_ == nullptr; };
    // availableFeatures Field Functions 
    bool hasAvailableFeatures() const { return this->availableFeatures_ != nullptr;};
    void deleteAvailableFeatures() { this->availableFeatures_ = nullptr;};
    inline const map<string, string> & getAvailableFeatures() const { DARABONBA_PTR_GET_CONST(availableFeatures_, map<string, string>) };
    inline map<string, string> getAvailableFeatures() { DARABONBA_PTR_GET(availableFeatures_, map<string, string>) };
    inline FindIdpListByLoginIdentifierRequest& setAvailableFeatures(const map<string, string> & availableFeatures) { DARABONBA_PTR_SET_VALUE(availableFeatures_, availableFeatures) };
    inline FindIdpListByLoginIdentifierRequest& setAvailableFeatures(map<string, string> && availableFeatures) { DARABONBA_PTR_SET_RVALUE(availableFeatures_, availableFeatures) };


    // clientChannel Field Functions 
    bool hasClientChannel() const { return this->clientChannel_ != nullptr;};
    void deleteClientChannel() { this->clientChannel_ = nullptr;};
    inline string getClientChannel() const { DARABONBA_PTR_GET_DEFAULT(clientChannel_, "") };
    inline FindIdpListByLoginIdentifierRequest& setClientChannel(string clientChannel) { DARABONBA_PTR_SET_VALUE(clientChannel_, clientChannel) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline FindIdpListByLoginIdentifierRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline FindIdpListByLoginIdentifierRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string getClientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline FindIdpListByLoginIdentifierRequest& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline FindIdpListByLoginIdentifierRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // loginIdentifier Field Functions 
    bool hasLoginIdentifier() const { return this->loginIdentifier_ != nullptr;};
    void deleteLoginIdentifier() { this->loginIdentifier_ = nullptr;};
    inline string getLoginIdentifier() const { DARABONBA_PTR_GET_DEFAULT(loginIdentifier_, "") };
    inline FindIdpListByLoginIdentifierRequest& setLoginIdentifier(string loginIdentifier) { DARABONBA_PTR_SET_VALUE(loginIdentifier_, loginIdentifier) };


    // supportTypes Field Functions 
    bool hasSupportTypes() const { return this->supportTypes_ != nullptr;};
    void deleteSupportTypes() { this->supportTypes_ = nullptr;};
    inline const vector<string> & getSupportTypes() const { DARABONBA_PTR_GET_CONST(supportTypes_, vector<string>) };
    inline vector<string> getSupportTypes() { DARABONBA_PTR_GET(supportTypes_, vector<string>) };
    inline FindIdpListByLoginIdentifierRequest& setSupportTypes(const vector<string> & supportTypes) { DARABONBA_PTR_SET_VALUE(supportTypes_, supportTypes) };
    inline FindIdpListByLoginIdentifierRequest& setSupportTypes(vector<string> && supportTypes) { DARABONBA_PTR_SET_RVALUE(supportTypes_, supportTypes) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline FindIdpListByLoginIdentifierRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<map<string, string>> availableFeatures_ {};
    shared_ptr<string> clientChannel_ {};
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientIp_ {};
    shared_ptr<string> clientOS_ {};
    shared_ptr<string> clientVersion_ {};
    // This parameter is required.
    shared_ptr<string> loginIdentifier_ {};
    shared_ptr<vector<string>> supportTypes_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
