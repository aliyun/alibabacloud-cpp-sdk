// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKAGENTSTATUSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKAGENTSTATUSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkAgentStatusDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkAgentStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkAgentStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkAgentStatusDetailResponseBody() = default ;
    ClinkAgentStatusDetailResponseBody(const ClinkAgentStatusDetailResponseBody &) = default ;
    ClinkAgentStatusDetailResponseBody(ClinkAgentStatusDetailResponseBody &&) = default ;
    ClinkAgentStatusDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkAgentStatusDetailResponseBody() = default ;
    ClinkAgentStatusDetailResponseBody& operator=(const ClinkAgentStatusDetailResponseBody &) = default ;
    ClinkAgentStatusDetailResponseBody& operator=(ClinkAgentStatusDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentStatusDetail, agentStatusDetail_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentStatusDetail, agentStatusDetail_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
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
      class AgentStatusDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentStatusDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
          DARABONBA_PTR_TO_JSON(BindType, bindType_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(LoginType, loginType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusDetails, statusDetails_);
        };
        friend void from_json(const Darabonba::Json& j, AgentStatusDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
          DARABONBA_PTR_FROM_JSON(BindType, bindType_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(LoginType, loginType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusDetails, statusDetails_);
        };
        AgentStatusDetail() = default ;
        AgentStatusDetail(const AgentStatusDetail &) = default ;
        AgentStatusDetail(AgentStatusDetail &&) = default ;
        AgentStatusDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentStatusDetail() = default ;
        AgentStatusDetail& operator=(const AgentStatusDetail &) = default ;
        AgentStatusDetail& operator=(AgentStatusDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindTel_ == nullptr
        && this->bindType_ == nullptr && this->cno_ == nullptr && this->enterpriseId_ == nullptr && this->loginType_ == nullptr && this->name_ == nullptr
        && this->status_ == nullptr && this->statusDetails_ == nullptr; };
        // bindTel Field Functions 
        bool hasBindTel() const { return this->bindTel_ != nullptr;};
        void deleteBindTel() { this->bindTel_ = nullptr;};
        inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
        inline AgentStatusDetail& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


        // bindType Field Functions 
        bool hasBindType() const { return this->bindType_ != nullptr;};
        void deleteBindType() { this->bindType_ = nullptr;};
        inline int64_t getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, 0L) };
        inline AgentStatusDetail& setBindType(int64_t bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline AgentStatusDetail& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
        inline AgentStatusDetail& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // loginType Field Functions 
        bool hasLoginType() const { return this->loginType_ != nullptr;};
        void deleteLoginType() { this->loginType_ = nullptr;};
        inline int64_t getLoginType() const { DARABONBA_PTR_GET_DEFAULT(loginType_, 0L) };
        inline AgentStatusDetail& setLoginType(int64_t loginType) { DARABONBA_PTR_SET_VALUE(loginType_, loginType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AgentStatusDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AgentStatusDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDetails Field Functions 
        bool hasStatusDetails() const { return this->statusDetails_ != nullptr;};
        void deleteStatusDetails() { this->statusDetails_ = nullptr;};
        inline string getStatusDetails() const { DARABONBA_PTR_GET_DEFAULT(statusDetails_, "") };
        inline AgentStatusDetail& setStatusDetails(string statusDetails) { DARABONBA_PTR_SET_VALUE(statusDetails_, statusDetails) };


      protected:
        // 绑定号码
        shared_ptr<string> bindTel_ {};
        // 电话类型，1:电话；2:IP话机；3:软电话
        shared_ptr<int64_t> bindType_ {};
        // 座席号
        shared_ptr<string> cno_ {};
        // 企业id
        shared_ptr<int64_t> enterpriseId_ {};
        // 登录终端，1:工具条；2:座席；3:管理员；4:接口；6:APP；9:移动SDK
        shared_ptr<int64_t> loginType_ {};
        // 座席名称
        shared_ptr<string> name_ {};
        // 座席状态， IDLE：空闲； PAUSE：置忙； WRAPUP：整理； CALLING： 呼叫中； RINGING：响铃； BUSY：通话
        shared_ptr<string> status_ {};
        // 座席状态详情，空闲，忙碌，整理，呼叫中，响铃，呼入振铃，外呼振铃，通话，呼入通话，外呼通话，自定义置忙状态
        shared_ptr<string> statusDetails_ {};
      };

      virtual bool empty() const override { return this->agentStatusDetail_ == nullptr
        && this->clinkRequestId_ == nullptr; };
      // agentStatusDetail Field Functions 
      bool hasAgentStatusDetail() const { return this->agentStatusDetail_ != nullptr;};
      void deleteAgentStatusDetail() { this->agentStatusDetail_ = nullptr;};
      inline const Data::AgentStatusDetail & getAgentStatusDetail() const { DARABONBA_PTR_GET_CONST(agentStatusDetail_, Data::AgentStatusDetail) };
      inline Data::AgentStatusDetail getAgentStatusDetail() { DARABONBA_PTR_GET(agentStatusDetail_, Data::AgentStatusDetail) };
      inline Data& setAgentStatusDetail(const Data::AgentStatusDetail & agentStatusDetail) { DARABONBA_PTR_SET_VALUE(agentStatusDetail_, agentStatusDetail) };
      inline Data& setAgentStatusDetail(Data::AgentStatusDetail && agentStatusDetail) { DARABONBA_PTR_SET_RVALUE(agentStatusDetail_, agentStatusDetail) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


    protected:
      // 座席状态详情
      shared_ptr<Data::AgentStatusDetail> agentStatusDetail_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkAgentStatusDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkAgentStatusDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkAgentStatusDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkAgentStatusDetailResponseBody::Data) };
    inline ClinkAgentStatusDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkAgentStatusDetailResponseBody::Data) };
    inline ClinkAgentStatusDetailResponseBody& setData(const ClinkAgentStatusDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkAgentStatusDetailResponseBody& setData(ClinkAgentStatusDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkAgentStatusDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkAgentStatusDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkAgentStatusDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
