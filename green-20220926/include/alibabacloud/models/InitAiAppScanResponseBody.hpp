// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITAIAPPSCANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITAIAPPSCANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AuthInfoConfigValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class InitAiAppScanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitAiAppScanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(AuthInfoConfig, authInfoConfig_);
      DARABONBA_PTR_TO_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_TO_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_TO_JSON(ReadyStatus, readyStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InitAiAppScanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(AuthInfoConfig, authInfoConfig_);
      DARABONBA_PTR_FROM_JSON(AuthStatus, authStatus_);
      DARABONBA_PTR_FROM_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_FROM_JSON(ReadyStatus, readyStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InitAiAppScanResponseBody() = default ;
    InitAiAppScanResponseBody(const InitAiAppScanResponseBody &) = default ;
    InitAiAppScanResponseBody(InitAiAppScanResponseBody &&) = default ;
    InitAiAppScanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitAiAppScanResponseBody() = default ;
    InitAiAppScanResponseBody& operator=(const InitAiAppScanResponseBody &) = default ;
    InitAiAppScanResponseBody& operator=(InitAiAppScanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
        DARABONBA_PTR_TO_JSON(PrivateDomain, privateDomain_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(PublicDomain, publicDomain_);
      };
      friend void from_json(const Darabonba::Json& j, AuthInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
        DARABONBA_PTR_FROM_JSON(PrivateDomain, privateDomain_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(PublicDomain, publicDomain_);
      };
      AuthInfo() = default ;
      AuthInfo(const AuthInfo &) = default ;
      AuthInfo(AuthInfo &&) = default ;
      AuthInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthInfo() = default ;
      AuthInfo& operator=(const AuthInfo &) = default ;
      AuthInfo& operator=(AuthInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authToken_ == nullptr
        && this->privateDomain_ == nullptr && this->project_ == nullptr && this->publicDomain_ == nullptr; };
      // authToken Field Functions 
      bool hasAuthToken() const { return this->authToken_ != nullptr;};
      void deleteAuthToken() { this->authToken_ = nullptr;};
      inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
      inline AuthInfo& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


      // privateDomain Field Functions 
      bool hasPrivateDomain() const { return this->privateDomain_ != nullptr;};
      void deletePrivateDomain() { this->privateDomain_ = nullptr;};
      inline string getPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(privateDomain_, "") };
      inline AuthInfo& setPrivateDomain(string privateDomain) { DARABONBA_PTR_SET_VALUE(privateDomain_, privateDomain) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline AuthInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // publicDomain Field Functions 
      bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
      void deletePublicDomain() { this->publicDomain_ = nullptr;};
      inline string getPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
      inline AuthInfo& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


    protected:
      // The credential.
      shared_ptr<string> authToken_ {};
      // The private domain name.
      shared_ptr<string> privateDomain_ {};
      // The project space.
      shared_ptr<string> project_ {};
      // The public domain name.
      shared_ptr<string> publicDomain_ {};
    };

    virtual bool empty() const override { return this->authInfo_ == nullptr
        && this->authInfoConfig_ == nullptr && this->authStatus_ == nullptr && this->openStatus_ == nullptr && this->readyStatus_ == nullptr && this->requestId_ == nullptr; };
    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline const InitAiAppScanResponseBody::AuthInfo & getAuthInfo() const { DARABONBA_PTR_GET_CONST(authInfo_, InitAiAppScanResponseBody::AuthInfo) };
    inline InitAiAppScanResponseBody::AuthInfo getAuthInfo() { DARABONBA_PTR_GET(authInfo_, InitAiAppScanResponseBody::AuthInfo) };
    inline InitAiAppScanResponseBody& setAuthInfo(const InitAiAppScanResponseBody::AuthInfo & authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };
    inline InitAiAppScanResponseBody& setAuthInfo(InitAiAppScanResponseBody::AuthInfo && authInfo) { DARABONBA_PTR_SET_RVALUE(authInfo_, authInfo) };


    // authInfoConfig Field Functions 
    bool hasAuthInfoConfig() const { return this->authInfoConfig_ != nullptr;};
    void deleteAuthInfoConfig() { this->authInfoConfig_ = nullptr;};
    inline const map<string, AuthInfoConfigValue> & getAuthInfoConfig() const { DARABONBA_PTR_GET_CONST(authInfoConfig_, map<string, AuthInfoConfigValue>) };
    inline map<string, AuthInfoConfigValue> getAuthInfoConfig() { DARABONBA_PTR_GET(authInfoConfig_, map<string, AuthInfoConfigValue>) };
    inline InitAiAppScanResponseBody& setAuthInfoConfig(const map<string, AuthInfoConfigValue> & authInfoConfig) { DARABONBA_PTR_SET_VALUE(authInfoConfig_, authInfoConfig) };
    inline InitAiAppScanResponseBody& setAuthInfoConfig(map<string, AuthInfoConfigValue> && authInfoConfig) { DARABONBA_PTR_SET_RVALUE(authInfoConfig_, authInfoConfig) };


    // authStatus Field Functions 
    bool hasAuthStatus() const { return this->authStatus_ != nullptr;};
    void deleteAuthStatus() { this->authStatus_ = nullptr;};
    inline string getAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(authStatus_, "") };
    inline InitAiAppScanResponseBody& setAuthStatus(string authStatus) { DARABONBA_PTR_SET_VALUE(authStatus_, authStatus) };


    // openStatus Field Functions 
    bool hasOpenStatus() const { return this->openStatus_ != nullptr;};
    void deleteOpenStatus() { this->openStatus_ = nullptr;};
    inline string getOpenStatus() const { DARABONBA_PTR_GET_DEFAULT(openStatus_, "") };
    inline InitAiAppScanResponseBody& setOpenStatus(string openStatus) { DARABONBA_PTR_SET_VALUE(openStatus_, openStatus) };


    // readyStatus Field Functions 
    bool hasReadyStatus() const { return this->readyStatus_ != nullptr;};
    void deleteReadyStatus() { this->readyStatus_ = nullptr;};
    inline string getReadyStatus() const { DARABONBA_PTR_GET_DEFAULT(readyStatus_, "") };
    inline InitAiAppScanResponseBody& setReadyStatus(string readyStatus) { DARABONBA_PTR_SET_VALUE(readyStatus_, readyStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitAiAppScanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access entry information.
    shared_ptr<InitAiAppScanResponseBody::AuthInfo> authInfo_ {};
    // The access information.
    shared_ptr<map<string, AuthInfoConfigValue>> authInfoConfig_ {};
    // The authorization status.
    shared_ptr<string> authStatus_ {};
    // The service activation status.
    shared_ptr<string> openStatus_ {};
    // The ready status.
    shared_ptr<string> readyStatus_ {};
    // The ID assigned by the backend to uniquely identify a request. Used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
