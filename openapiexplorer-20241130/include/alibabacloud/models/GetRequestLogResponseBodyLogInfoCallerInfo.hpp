// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOCALLERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOCALLERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBodyLogInfoCallerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBodyLogInfoCallerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(callerAccountId, callerAccountId_);
      DARABONBA_PTR_TO_JSON(callerIp, callerIp_);
      DARABONBA_PTR_TO_JSON(callerType, callerType_);
      DARABONBA_PTR_TO_JSON(masterAccountId, masterAccountId_);
      DARABONBA_PTR_TO_JSON(userAgent, userAgent_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBodyLogInfoCallerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(callerAccountId, callerAccountId_);
      DARABONBA_PTR_FROM_JSON(callerIp, callerIp_);
      DARABONBA_PTR_FROM_JSON(callerType, callerType_);
      DARABONBA_PTR_FROM_JSON(masterAccountId, masterAccountId_);
      DARABONBA_PTR_FROM_JSON(userAgent, userAgent_);
    };
    GetRequestLogResponseBodyLogInfoCallerInfo() = default ;
    GetRequestLogResponseBodyLogInfoCallerInfo(const GetRequestLogResponseBodyLogInfoCallerInfo &) = default ;
    GetRequestLogResponseBodyLogInfoCallerInfo(GetRequestLogResponseBodyLogInfoCallerInfo &&) = default ;
    GetRequestLogResponseBodyLogInfoCallerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBodyLogInfoCallerInfo() = default ;
    GetRequestLogResponseBodyLogInfoCallerInfo& operator=(const GetRequestLogResponseBodyLogInfoCallerInfo &) = default ;
    GetRequestLogResponseBodyLogInfoCallerInfo& operator=(GetRequestLogResponseBodyLogInfoCallerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerAccountId_ == nullptr
        && return this->callerIp_ == nullptr && return this->callerType_ == nullptr && return this->masterAccountId_ == nullptr && return this->userAgent_ == nullptr; };
    // callerAccountId Field Functions 
    bool hasCallerAccountId() const { return this->callerAccountId_ != nullptr;};
    void deleteCallerAccountId() { this->callerAccountId_ = nullptr;};
    inline string callerAccountId() const { DARABONBA_PTR_GET_DEFAULT(callerAccountId_, "") };
    inline GetRequestLogResponseBodyLogInfoCallerInfo& setCallerAccountId(string callerAccountId) { DARABONBA_PTR_SET_VALUE(callerAccountId_, callerAccountId) };


    // callerIp Field Functions 
    bool hasCallerIp() const { return this->callerIp_ != nullptr;};
    void deleteCallerIp() { this->callerIp_ = nullptr;};
    inline string callerIp() const { DARABONBA_PTR_GET_DEFAULT(callerIp_, "") };
    inline GetRequestLogResponseBodyLogInfoCallerInfo& setCallerIp(string callerIp) { DARABONBA_PTR_SET_VALUE(callerIp_, callerIp) };


    // callerType Field Functions 
    bool hasCallerType() const { return this->callerType_ != nullptr;};
    void deleteCallerType() { this->callerType_ = nullptr;};
    inline string callerType() const { DARABONBA_PTR_GET_DEFAULT(callerType_, "") };
    inline GetRequestLogResponseBodyLogInfoCallerInfo& setCallerType(string callerType) { DARABONBA_PTR_SET_VALUE(callerType_, callerType) };


    // masterAccountId Field Functions 
    bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
    void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
    inline string masterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
    inline GetRequestLogResponseBodyLogInfoCallerInfo& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


    // userAgent Field Functions 
    bool hasUserAgent() const { return this->userAgent_ != nullptr;};
    void deleteUserAgent() { this->userAgent_ = nullptr;};
    inline string userAgent() const { DARABONBA_PTR_GET_DEFAULT(userAgent_, "") };
    inline GetRequestLogResponseBodyLogInfoCallerInfo& setUserAgent(string userAgent) { DARABONBA_PTR_SET_VALUE(userAgent_, userAgent) };


  protected:
    // The account ID of the caller.
    std::shared_ptr<string> callerAccountId_ = nullptr;
    // The IP address of the caller.
    std::shared_ptr<string> callerIp_ = nullptr;
    // The type of the caller. Valid values:
    // 
    // 1.  customer: an Alibaba Cloud account
    // 2.  sub: a RAM user
    // 3.  AssumedRoleUser: a user that uses a temporary Security Token Service (STS) token
    std::shared_ptr<string> callerType_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> masterAccountId_ = nullptr;
    // The information about the user agent.
    std::shared_ptr<string> userAgent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
