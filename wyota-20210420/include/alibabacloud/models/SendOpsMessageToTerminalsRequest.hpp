// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDOPSMESSAGETOTERMINALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDOPSMESSAGETOTERMINALSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class SendOpsMessageToTerminalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendOpsMessageToTerminalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(OpsAction, opsAction_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      DARABONBA_PTR_TO_JSON(WaitForAck, waitForAck_);
    };
    friend void from_json(const Darabonba::Json& j, SendOpsMessageToTerminalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(OpsAction, opsAction_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      DARABONBA_PTR_FROM_JSON(WaitForAck, waitForAck_);
    };
    SendOpsMessageToTerminalsRequest() = default ;
    SendOpsMessageToTerminalsRequest(const SendOpsMessageToTerminalsRequest &) = default ;
    SendOpsMessageToTerminalsRequest(SendOpsMessageToTerminalsRequest &&) = default ;
    SendOpsMessageToTerminalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendOpsMessageToTerminalsRequest() = default ;
    SendOpsMessageToTerminalsRequest& operator=(const SendOpsMessageToTerminalsRequest &) = default ;
    SendOpsMessageToTerminalsRequest& operator=(SendOpsMessageToTerminalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->delay_ == nullptr
        && this->msg_ == nullptr && this->opsAction_ == nullptr && this->uuids_ == nullptr && this->waitForAck_ == nullptr; };
    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline bool getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, false) };
    inline SendOpsMessageToTerminalsRequest& setDelay(bool delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline SendOpsMessageToTerminalsRequest& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // opsAction Field Functions 
    bool hasOpsAction() const { return this->opsAction_ != nullptr;};
    void deleteOpsAction() { this->opsAction_ = nullptr;};
    inline string getOpsAction() const { DARABONBA_PTR_GET_DEFAULT(opsAction_, "") };
    inline SendOpsMessageToTerminalsRequest& setOpsAction(string opsAction) { DARABONBA_PTR_SET_VALUE(opsAction_, opsAction) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & getUuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> getUuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline SendOpsMessageToTerminalsRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline SendOpsMessageToTerminalsRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


    // waitForAck Field Functions 
    bool hasWaitForAck() const { return this->waitForAck_ != nullptr;};
    void deleteWaitForAck() { this->waitForAck_ = nullptr;};
    inline bool getWaitForAck() const { DARABONBA_PTR_GET_DEFAULT(waitForAck_, false) };
    inline SendOpsMessageToTerminalsRequest& setWaitForAck(bool waitForAck) { DARABONBA_PTR_SET_VALUE(waitForAck_, waitForAck) };


  protected:
    shared_ptr<bool> delay_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> opsAction_ {};
    shared_ptr<vector<string>> uuids_ {};
    shared_ptr<bool> waitForAck_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
