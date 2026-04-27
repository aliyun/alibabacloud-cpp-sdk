// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTONLINEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTONLINEAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListOnlineAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListOnlineAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListOnlineAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudListOnlineAgentResponseBody() = default ;
    CloudListOnlineAgentResponseBody(const CloudListOnlineAgentResponseBody &) = default ;
    CloudListOnlineAgentResponseBody(CloudListOnlineAgentResponseBody &&) = default ;
    CloudListOnlineAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListOnlineAgentResponseBody() = default ;
    CloudListOnlineAgentResponseBody& operator=(const CloudListOnlineAgentResponseBody &) = default ;
    CloudListOnlineAgentResponseBody& operator=(CloudListOnlineAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentStatuses, agentStatuses_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentStatuses, agentStatuses_);
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
      class AgentStatuses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentStatuses& obj) { 
          DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
          DARABONBA_PTR_TO_JSON(DeviceStatusDuration, deviceStatusDuration_);
          DARABONBA_PTR_TO_JSON(LoginStatus, loginStatus_);
          DARABONBA_PTR_TO_JSON(LoginStatusDuration, loginStatusDuration_);
          DARABONBA_PTR_TO_JSON(LoginTime, loginTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, AgentStatuses& obj) { 
          DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
          DARABONBA_PTR_FROM_JSON(DeviceStatusDuration, deviceStatusDuration_);
          DARABONBA_PTR_FROM_JSON(LoginStatus, loginStatus_);
          DARABONBA_PTR_FROM_JSON(LoginStatusDuration, loginStatusDuration_);
          DARABONBA_PTR_FROM_JSON(LoginTime, loginTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        AgentStatuses() = default ;
        AgentStatuses(const AgentStatuses &) = default ;
        AgentStatuses(AgentStatuses &&) = default ;
        AgentStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentStatuses() = default ;
        AgentStatuses& operator=(const AgentStatuses &) = default ;
        AgentStatuses& operator=(AgentStatuses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindTel_ == nullptr
        && this->cno_ == nullptr && this->deviceStatus_ == nullptr && this->deviceStatusDuration_ == nullptr && this->loginStatus_ == nullptr && this->loginStatusDuration_ == nullptr
        && this->loginTime_ == nullptr && this->name_ == nullptr && this->state_ == nullptr; };
        // bindTel Field Functions 
        bool hasBindTel() const { return this->bindTel_ != nullptr;};
        void deleteBindTel() { this->bindTel_ = nullptr;};
        inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
        inline AgentStatuses& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline AgentStatuses& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // deviceStatus Field Functions 
        bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
        void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
        inline int64_t getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, 0L) };
        inline AgentStatuses& setDeviceStatus(int64_t deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


        // deviceStatusDuration Field Functions 
        bool hasDeviceStatusDuration() const { return this->deviceStatusDuration_ != nullptr;};
        void deleteDeviceStatusDuration() { this->deviceStatusDuration_ = nullptr;};
        inline int64_t getDeviceStatusDuration() const { DARABONBA_PTR_GET_DEFAULT(deviceStatusDuration_, 0L) };
        inline AgentStatuses& setDeviceStatusDuration(int64_t deviceStatusDuration) { DARABONBA_PTR_SET_VALUE(deviceStatusDuration_, deviceStatusDuration) };


        // loginStatus Field Functions 
        bool hasLoginStatus() const { return this->loginStatus_ != nullptr;};
        void deleteLoginStatus() { this->loginStatus_ = nullptr;};
        inline int64_t getLoginStatus() const { DARABONBA_PTR_GET_DEFAULT(loginStatus_, 0L) };
        inline AgentStatuses& setLoginStatus(int64_t loginStatus) { DARABONBA_PTR_SET_VALUE(loginStatus_, loginStatus) };


        // loginStatusDuration Field Functions 
        bool hasLoginStatusDuration() const { return this->loginStatusDuration_ != nullptr;};
        void deleteLoginStatusDuration() { this->loginStatusDuration_ = nullptr;};
        inline int64_t getLoginStatusDuration() const { DARABONBA_PTR_GET_DEFAULT(loginStatusDuration_, 0L) };
        inline AgentStatuses& setLoginStatusDuration(int64_t loginStatusDuration) { DARABONBA_PTR_SET_VALUE(loginStatusDuration_, loginStatusDuration) };


        // loginTime Field Functions 
        bool hasLoginTime() const { return this->loginTime_ != nullptr;};
        void deleteLoginTime() { this->loginTime_ = nullptr;};
        inline string getLoginTime() const { DARABONBA_PTR_GET_DEFAULT(loginTime_, "") };
        inline AgentStatuses& setLoginTime(string loginTime) { DARABONBA_PTR_SET_VALUE(loginTime_, loginTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AgentStatuses& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline AgentStatuses& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        // 绑定电话
        shared_ptr<string> bindTel_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 设备状态，-1 失效，0 空闲，1 已锁定，2 呼叫中，3 响铃，4 通话中
        shared_ptr<int64_t> deviceStatus_ {};
        // 设备状态时长
        shared_ptr<int64_t> deviceStatusDuration_ {};
        // 登录状态，0离线，1在线，2置忙，3整理
        shared_ptr<int64_t> loginStatus_ {};
        // 登录状态时长
        shared_ptr<int64_t> loginStatusDuration_ {};
        // 登录时间
        shared_ptr<string> loginTime_ {};
        // 座席名称
        shared_ptr<string> name_ {};
        // 座席状态（结合了登录状态和设备状态），失效，空闲，置忙，整理，呼叫中，响铃，通话
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->agentStatuses_ == nullptr; };
      // agentStatuses Field Functions 
      bool hasAgentStatuses() const { return this->agentStatuses_ != nullptr;};
      void deleteAgentStatuses() { this->agentStatuses_ = nullptr;};
      inline const vector<Data::AgentStatuses> & getAgentStatuses() const { DARABONBA_PTR_GET_CONST(agentStatuses_, vector<Data::AgentStatuses>) };
      inline vector<Data::AgentStatuses> getAgentStatuses() { DARABONBA_PTR_GET(agentStatuses_, vector<Data::AgentStatuses>) };
      inline Data& setAgentStatuses(const vector<Data::AgentStatuses> & agentStatuses) { DARABONBA_PTR_SET_VALUE(agentStatuses_, agentStatuses) };
      inline Data& setAgentStatuses(vector<Data::AgentStatuses> && agentStatuses) { DARABONBA_PTR_SET_RVALUE(agentStatuses_, agentStatuses) };


    protected:
      // 座席状态数组
      shared_ptr<vector<Data::AgentStatuses>> agentStatuses_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudListOnlineAgentResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudListOnlineAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudListOnlineAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudListOnlineAgentResponseBody::Data) };
    inline CloudListOnlineAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudListOnlineAgentResponseBody::Data) };
    inline CloudListOnlineAgentResponseBody& setData(const CloudListOnlineAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudListOnlineAgentResponseBody& setData(CloudListOnlineAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudListOnlineAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudListOnlineAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudListOnlineAgentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
