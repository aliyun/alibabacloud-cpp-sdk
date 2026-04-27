// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDBATCHGETAGENTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDBATCHGETAGENTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudBatchGetAgentStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudBatchGetAgentStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudBatchGetAgentStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudBatchGetAgentStatusResponseBody() = default ;
    CloudBatchGetAgentStatusResponseBody(const CloudBatchGetAgentStatusResponseBody &) = default ;
    CloudBatchGetAgentStatusResponseBody(CloudBatchGetAgentStatusResponseBody &&) = default ;
    CloudBatchGetAgentStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudBatchGetAgentStatusResponseBody() = default ;
    CloudBatchGetAgentStatusResponseBody& operator=(const CloudBatchGetAgentStatusResponseBody &) = default ;
    CloudBatchGetAgentStatusResponseBody& operator=(CloudBatchGetAgentStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
        DARABONBA_PTR_TO_JSON(LoginStatus, loginStatus_);
        DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(StateAction, stateAction_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
        DARABONBA_PTR_FROM_JSON(LoginStatus, loginStatus_);
        DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(StateAction, stateAction_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceStatus_ == nullptr
        && this->loginStatus_ == nullptr && this->mainUniqueId_ == nullptr && this->state_ == nullptr && this->stateAction_ == nullptr; };
      // deviceStatus Field Functions 
      bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
      void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
      inline string getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
      inline Data& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


      // loginStatus Field Functions 
      bool hasLoginStatus() const { return this->loginStatus_ != nullptr;};
      void deleteLoginStatus() { this->loginStatus_ = nullptr;};
      inline string getLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(loginStatus_, "") };
      inline Data& setLoginStatus(string loginStatus) { DARABONBA_PTR_SET_VALUE(loginStatus_, loginStatus) };


      // mainUniqueId Field Functions 
      bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
      void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
      inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
      inline Data& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // stateAction Field Functions 
      bool hasStateAction() const { return this->stateAction_ != nullptr;};
      void deleteStateAction() { this->stateAction_ = nullptr;};
      inline string getStateAction() const { DARABONBA_PTR_GET_DEFAULT(stateAction_, "") };
      inline Data& setStateAction(string stateAction) { DARABONBA_PTR_SET_VALUE(stateAction_, stateAction) };


    protected:
      // 座席设备状态，座席登录状态不是离线时返回  -1：错误的状态  0：空闲状态  1：锁定状态   2：邀请中状态  3：响铃状态  4：使用中状态
      shared_ptr<string> deviceStatus_ {};
      // 座席登录状态   0：离线状态  1：在线状态  2：置忙状态  3：整理状态
      shared_ptr<string> loginStatus_ {};
      // 座席当前参与的通话唯一标识，座席设备状态为1/2/3/4时返回
      shared_ptr<string> mainUniqueId_ {};
      // 座席状态描述（结合了登录状态和设备状态），离线，空闲，置忙，整理，呼叫中，响铃，保持，通话
      shared_ptr<string> state_ {};
      // 状态对应的动作，座席登录状态不是离线时返回。详见[座席状态动作说明](../../工具条/座席状态动作.md)
      shared_ptr<string> stateAction_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudBatchGetAgentStatusResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudBatchGetAgentStatusResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudBatchGetAgentStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudBatchGetAgentStatusResponseBody::Data) };
    inline CloudBatchGetAgentStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudBatchGetAgentStatusResponseBody::Data) };
    inline CloudBatchGetAgentStatusResponseBody& setData(const CloudBatchGetAgentStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudBatchGetAgentStatusResponseBody& setData(CloudBatchGetAgentStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudBatchGetAgentStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudBatchGetAgentStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudBatchGetAgentStatusResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
