// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYATIAGENTREGISTERINFOACMECHALLENGERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYATIAGENTREGISTERINFOACMECHALLENGERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentRegisterInfoId, agentRegisterInfoId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest() = default ;
    VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest(const VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest &) = default ;
    VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest(VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest &&) = default ;
    VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest() = default ;
    VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest& operator=(const VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest &) = default ;
    VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest& operator=(VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRegisterInfoId_ == nullptr
        && this->clientToken_ == nullptr; };
    // agentRegisterInfoId Field Functions 
    bool hasAgentRegisterInfoId() const { return this->agentRegisterInfoId_ != nullptr;};
    void deleteAgentRegisterInfoId() { this->agentRegisterInfoId_ = nullptr;};
    inline string getAgentRegisterInfoId() const { DARABONBA_PTR_GET_DEFAULT(agentRegisterInfoId_, "") };
    inline VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest& setAgentRegisterInfoId(string agentRegisterInfoId) { DARABONBA_PTR_SET_VALUE(agentRegisterInfoId_, agentRegisterInfoId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentRegisterInfoId_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
