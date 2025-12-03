// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYCOORDINATIONWITHCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYCOORDINATIONWITHCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20220307
{
namespace Models
{
  class ApplyCoordinationWithCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyCoordinationWithCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoordinationCode, coordinationCode_);
      DARABONBA_PTR_TO_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyCoordinationWithCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoordinationCode, coordinationCode_);
      DARABONBA_PTR_FROM_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ApplyCoordinationWithCodeRequest() = default ;
    ApplyCoordinationWithCodeRequest(const ApplyCoordinationWithCodeRequest &) = default ;
    ApplyCoordinationWithCodeRequest(ApplyCoordinationWithCodeRequest &&) = default ;
    ApplyCoordinationWithCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyCoordinationWithCodeRequest() = default ;
    ApplyCoordinationWithCodeRequest& operator=(const ApplyCoordinationWithCodeRequest &) = default ;
    ApplyCoordinationWithCodeRequest& operator=(ApplyCoordinationWithCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coordinationCode_ == nullptr
        && return this->loginRegionId_ == nullptr && return this->loginToken_ == nullptr && return this->sessionId_ == nullptr && return this->uuid_ == nullptr; };
    // coordinationCode Field Functions 
    bool hasCoordinationCode() const { return this->coordinationCode_ != nullptr;};
    void deleteCoordinationCode() { this->coordinationCode_ = nullptr;};
    inline string coordinationCode() const { DARABONBA_PTR_GET_DEFAULT(coordinationCode_, "") };
    inline ApplyCoordinationWithCodeRequest& setCoordinationCode(string coordinationCode) { DARABONBA_PTR_SET_VALUE(coordinationCode_, coordinationCode) };


    // loginRegionId Field Functions 
    bool hasLoginRegionId() const { return this->loginRegionId_ != nullptr;};
    void deleteLoginRegionId() { this->loginRegionId_ = nullptr;};
    inline string loginRegionId() const { DARABONBA_PTR_GET_DEFAULT(loginRegionId_, "") };
    inline ApplyCoordinationWithCodeRequest& setLoginRegionId(string loginRegionId) { DARABONBA_PTR_SET_VALUE(loginRegionId_, loginRegionId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline ApplyCoordinationWithCodeRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ApplyCoordinationWithCodeRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ApplyCoordinationWithCodeRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> coordinationCode_ = nullptr;
    std::shared_ptr<string> loginRegionId_ = nullptr;
    std::shared_ptr<string> loginToken_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20220307
#endif
