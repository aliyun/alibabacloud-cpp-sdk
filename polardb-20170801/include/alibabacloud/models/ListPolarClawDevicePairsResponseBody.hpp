// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLARCLAWDEVICEPAIRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLARCLAWDEVICEPAIRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ListPolarClawDevicePairsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolarClawDevicePairsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Paired, paired_);
      DARABONBA_PTR_TO_JSON(Pending, pending_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolarClawDevicePairsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Paired, paired_);
      DARABONBA_PTR_FROM_JSON(Pending, pending_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPolarClawDevicePairsResponseBody() = default ;
    ListPolarClawDevicePairsResponseBody(const ListPolarClawDevicePairsResponseBody &) = default ;
    ListPolarClawDevicePairsResponseBody(ListPolarClawDevicePairsResponseBody &&) = default ;
    ListPolarClawDevicePairsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolarClawDevicePairsResponseBody() = default ;
    ListPolarClawDevicePairsResponseBody& operator=(const ListPolarClawDevicePairsResponseBody &) = default ;
    ListPolarClawDevicePairsResponseBody& operator=(ListPolarClawDevicePairsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pending : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pending& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientMode, clientMode_);
        DARABONBA_PTR_TO_JSON(DeviceFamily, deviceFamily_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(IsRepair, isRepair_);
        DARABONBA_PTR_TO_JSON(PairRequestId, pairRequestId_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
        DARABONBA_PTR_TO_JSON(RemoteIp, remoteIp_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(Scopes, scopes_);
        DARABONBA_PTR_TO_JSON(Silent, silent_);
        DARABONBA_PTR_TO_JSON(Ts, ts_);
      };
      friend void from_json(const Darabonba::Json& j, Pending& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientMode, clientMode_);
        DARABONBA_PTR_FROM_JSON(DeviceFamily, deviceFamily_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(IsRepair, isRepair_);
        DARABONBA_PTR_FROM_JSON(PairRequestId, pairRequestId_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
        DARABONBA_PTR_FROM_JSON(RemoteIp, remoteIp_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
        DARABONBA_PTR_FROM_JSON(Silent, silent_);
        DARABONBA_PTR_FROM_JSON(Ts, ts_);
      };
      Pending() = default ;
      Pending(const Pending &) = default ;
      Pending(Pending &&) = default ;
      Pending(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pending() = default ;
      Pending& operator=(const Pending &) = default ;
      Pending& operator=(Pending &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientMode_ == nullptr && this->deviceFamily_ == nullptr && this->deviceId_ == nullptr && this->displayName_ == nullptr && this->isRepair_ == nullptr
        && this->pairRequestId_ == nullptr && this->platform_ == nullptr && this->publicKey_ == nullptr && this->remoteIp_ == nullptr && this->role_ == nullptr
        && this->roles_ == nullptr && this->scopes_ == nullptr && this->silent_ == nullptr && this->ts_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Pending& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientMode Field Functions 
      bool hasClientMode() const { return this->clientMode_ != nullptr;};
      void deleteClientMode() { this->clientMode_ = nullptr;};
      inline string getClientMode() const { DARABONBA_PTR_GET_DEFAULT(clientMode_, "") };
      inline Pending& setClientMode(string clientMode) { DARABONBA_PTR_SET_VALUE(clientMode_, clientMode) };


      // deviceFamily Field Functions 
      bool hasDeviceFamily() const { return this->deviceFamily_ != nullptr;};
      void deleteDeviceFamily() { this->deviceFamily_ = nullptr;};
      inline string getDeviceFamily() const { DARABONBA_PTR_GET_DEFAULT(deviceFamily_, "") };
      inline Pending& setDeviceFamily(string deviceFamily) { DARABONBA_PTR_SET_VALUE(deviceFamily_, deviceFamily) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Pending& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Pending& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // isRepair Field Functions 
      bool hasIsRepair() const { return this->isRepair_ != nullptr;};
      void deleteIsRepair() { this->isRepair_ = nullptr;};
      inline bool getIsRepair() const { DARABONBA_PTR_GET_DEFAULT(isRepair_, false) };
      inline Pending& setIsRepair(bool isRepair) { DARABONBA_PTR_SET_VALUE(isRepair_, isRepair) };


      // pairRequestId Field Functions 
      bool hasPairRequestId() const { return this->pairRequestId_ != nullptr;};
      void deletePairRequestId() { this->pairRequestId_ = nullptr;};
      inline string getPairRequestId() const { DARABONBA_PTR_GET_DEFAULT(pairRequestId_, "") };
      inline Pending& setPairRequestId(string pairRequestId) { DARABONBA_PTR_SET_VALUE(pairRequestId_, pairRequestId) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Pending& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // publicKey Field Functions 
      bool hasPublicKey() const { return this->publicKey_ != nullptr;};
      void deletePublicKey() { this->publicKey_ = nullptr;};
      inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
      inline Pending& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


      // remoteIp Field Functions 
      bool hasRemoteIp() const { return this->remoteIp_ != nullptr;};
      void deleteRemoteIp() { this->remoteIp_ = nullptr;};
      inline string getRemoteIp() const { DARABONBA_PTR_GET_DEFAULT(remoteIp_, "") };
      inline Pending& setRemoteIp(string remoteIp) { DARABONBA_PTR_SET_VALUE(remoteIp_, remoteIp) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Pending& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline Pending& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Pending& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // scopes Field Functions 
      bool hasScopes() const { return this->scopes_ != nullptr;};
      void deleteScopes() { this->scopes_ = nullptr;};
      inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
      inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
      inline Pending& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
      inline Pending& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


      // silent Field Functions 
      bool hasSilent() const { return this->silent_ != nullptr;};
      void deleteSilent() { this->silent_ = nullptr;};
      inline bool getSilent() const { DARABONBA_PTR_GET_DEFAULT(silent_, false) };
      inline Pending& setSilent(bool silent) { DARABONBA_PTR_SET_VALUE(silent_, silent) };


      // ts Field Functions 
      bool hasTs() const { return this->ts_ != nullptr;};
      void deleteTs() { this->ts_ = nullptr;};
      inline int64_t getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
      inline Pending& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


    protected:
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientMode_ {};
      shared_ptr<string> deviceFamily_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<bool> isRepair_ {};
      shared_ptr<string> pairRequestId_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<string> publicKey_ {};
      shared_ptr<string> remoteIp_ {};
      shared_ptr<string> role_ {};
      shared_ptr<vector<string>> roles_ {};
      shared_ptr<vector<string>> scopes_ {};
      shared_ptr<bool> silent_ {};
      shared_ptr<int64_t> ts_ {};
    };

    class Paired : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Paired& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientMode, clientMode_);
        DARABONBA_PTR_TO_JSON(CreatedAtMs, createdAtMs_);
        DARABONBA_PTR_TO_JSON(DeviceFamily, deviceFamily_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(LastSeenAtMs, lastSeenAtMs_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      };
      friend void from_json(const Darabonba::Json& j, Paired& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientMode, clientMode_);
        DARABONBA_PTR_FROM_JSON(CreatedAtMs, createdAtMs_);
        DARABONBA_PTR_FROM_JSON(DeviceFamily, deviceFamily_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(LastSeenAtMs, lastSeenAtMs_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      };
      Paired() = default ;
      Paired(const Paired &) = default ;
      Paired(Paired &&) = default ;
      Paired(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Paired() = default ;
      Paired& operator=(const Paired &) = default ;
      Paired& operator=(Paired &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientMode_ == nullptr && this->createdAtMs_ == nullptr && this->deviceFamily_ == nullptr && this->deviceId_ == nullptr && this->displayName_ == nullptr
        && this->lastSeenAtMs_ == nullptr && this->platform_ == nullptr && this->role_ == nullptr && this->scopes_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline Paired& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientMode Field Functions 
      bool hasClientMode() const { return this->clientMode_ != nullptr;};
      void deleteClientMode() { this->clientMode_ = nullptr;};
      inline string getClientMode() const { DARABONBA_PTR_GET_DEFAULT(clientMode_, "") };
      inline Paired& setClientMode(string clientMode) { DARABONBA_PTR_SET_VALUE(clientMode_, clientMode) };


      // createdAtMs Field Functions 
      bool hasCreatedAtMs() const { return this->createdAtMs_ != nullptr;};
      void deleteCreatedAtMs() { this->createdAtMs_ = nullptr;};
      inline int64_t getCreatedAtMs() const { DARABONBA_PTR_GET_DEFAULT(createdAtMs_, 0L) };
      inline Paired& setCreatedAtMs(int64_t createdAtMs) { DARABONBA_PTR_SET_VALUE(createdAtMs_, createdAtMs) };


      // deviceFamily Field Functions 
      bool hasDeviceFamily() const { return this->deviceFamily_ != nullptr;};
      void deleteDeviceFamily() { this->deviceFamily_ = nullptr;};
      inline string getDeviceFamily() const { DARABONBA_PTR_GET_DEFAULT(deviceFamily_, "") };
      inline Paired& setDeviceFamily(string deviceFamily) { DARABONBA_PTR_SET_VALUE(deviceFamily_, deviceFamily) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Paired& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Paired& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // lastSeenAtMs Field Functions 
      bool hasLastSeenAtMs() const { return this->lastSeenAtMs_ != nullptr;};
      void deleteLastSeenAtMs() { this->lastSeenAtMs_ = nullptr;};
      inline int64_t getLastSeenAtMs() const { DARABONBA_PTR_GET_DEFAULT(lastSeenAtMs_, 0L) };
      inline Paired& setLastSeenAtMs(int64_t lastSeenAtMs) { DARABONBA_PTR_SET_VALUE(lastSeenAtMs_, lastSeenAtMs) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Paired& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Paired& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // scopes Field Functions 
      bool hasScopes() const { return this->scopes_ != nullptr;};
      void deleteScopes() { this->scopes_ = nullptr;};
      inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
      inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
      inline Paired& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
      inline Paired& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    protected:
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientMode_ {};
      shared_ptr<int64_t> createdAtMs_ {};
      shared_ptr<string> deviceFamily_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<int64_t> lastSeenAtMs_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<string> role_ {};
      shared_ptr<vector<string>> scopes_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->paired_ == nullptr && this->pending_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListPolarClawDevicePairsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListPolarClawDevicePairsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPolarClawDevicePairsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // paired Field Functions 
    bool hasPaired() const { return this->paired_ != nullptr;};
    void deletePaired() { this->paired_ = nullptr;};
    inline const vector<ListPolarClawDevicePairsResponseBody::Paired> & getPaired() const { DARABONBA_PTR_GET_CONST(paired_, vector<ListPolarClawDevicePairsResponseBody::Paired>) };
    inline vector<ListPolarClawDevicePairsResponseBody::Paired> getPaired() { DARABONBA_PTR_GET(paired_, vector<ListPolarClawDevicePairsResponseBody::Paired>) };
    inline ListPolarClawDevicePairsResponseBody& setPaired(const vector<ListPolarClawDevicePairsResponseBody::Paired> & paired) { DARABONBA_PTR_SET_VALUE(paired_, paired) };
    inline ListPolarClawDevicePairsResponseBody& setPaired(vector<ListPolarClawDevicePairsResponseBody::Paired> && paired) { DARABONBA_PTR_SET_RVALUE(paired_, paired) };


    // pending Field Functions 
    bool hasPending() const { return this->pending_ != nullptr;};
    void deletePending() { this->pending_ = nullptr;};
    inline const vector<ListPolarClawDevicePairsResponseBody::Pending> & getPending() const { DARABONBA_PTR_GET_CONST(pending_, vector<ListPolarClawDevicePairsResponseBody::Pending>) };
    inline vector<ListPolarClawDevicePairsResponseBody::Pending> getPending() { DARABONBA_PTR_GET(pending_, vector<ListPolarClawDevicePairsResponseBody::Pending>) };
    inline ListPolarClawDevicePairsResponseBody& setPending(const vector<ListPolarClawDevicePairsResponseBody::Pending> & pending) { DARABONBA_PTR_SET_VALUE(pending_, pending) };
    inline ListPolarClawDevicePairsResponseBody& setPending(vector<ListPolarClawDevicePairsResponseBody::Pending> && pending) { DARABONBA_PTR_SET_RVALUE(pending_, pending) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolarClawDevicePairsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<ListPolarClawDevicePairsResponseBody::Paired>> paired_ {};
    shared_ptr<vector<ListPolarClawDevicePairsResponseBody::Pending>> pending_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
