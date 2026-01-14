// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAGENTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAGENTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class QueryAgentInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAgentInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAgentInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    QueryAgentInfoResponseBody() = default ;
    QueryAgentInfoResponseBody(const QueryAgentInfoResponseBody &) = default ;
    QueryAgentInfoResponseBody(QueryAgentInfoResponseBody &&) = default ;
    QueryAgentInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAgentInfoResponseBody() = default ;
    QueryAgentInfoResponseBody& operator=(const QueryAgentInfoResponseBody &) = default ;
    QueryAgentInfoResponseBody& operator=(QueryAgentInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(AgentExtension, agentExtension_);
        DARABONBA_PTR_TO_JSON(AgentGroupIds, agentGroupIds_);
        DARABONBA_PTR_TO_JSON(AgentGroupList, agentGroupList_);
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(AgentTag, agentTag_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExtensionPwd, extensionPwd_);
        DARABONBA_PTR_TO_JSON(ExtensionServer, extensionServer_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(WsProtocol, wsProtocol_);
        DARABONBA_PTR_TO_JSON(WsRegisterAddress, wsRegisterAddress_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(AgentExtension, agentExtension_);
        DARABONBA_PTR_FROM_JSON(AgentGroupIds, agentGroupIds_);
        DARABONBA_PTR_FROM_JSON(AgentGroupList, agentGroupList_);
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(AgentTag, agentTag_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExtensionPwd, extensionPwd_);
        DARABONBA_PTR_FROM_JSON(ExtensionServer, extensionServer_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(WsProtocol, wsProtocol_);
        DARABONBA_PTR_FROM_JSON(WsRegisterAddress, wsRegisterAddress_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AgentGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, AgentGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        AgentGroupList() = default ;
        AgentGroupList(const AgentGroupList &) = default ;
        AgentGroupList(AgentGroupList &&) = default ;
        AgentGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentGroupList() = default ;
        AgentGroupList& operator=(const AgentGroupList &) = default ;
        AgentGroupList& operator=(AgentGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
        inline AgentGroupList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline AgentGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        // 坐席组ID
        shared_ptr<int64_t> groupId_ {};
        // 坐席组名称
        shared_ptr<string> groupName_ {};
      };

      virtual bool empty() const override { return this->account_ == nullptr
        && this->active_ == nullptr && this->agentExtension_ == nullptr && this->agentGroupIds_ == nullptr && this->agentGroupList_ == nullptr && this->agentId_ == nullptr
        && this->agentStatus_ == nullptr && this->agentTag_ == nullptr && this->createTime_ == nullptr && this->extensionPwd_ == nullptr && this->extensionServer_ == nullptr
        && this->name_ == nullptr && this->wsProtocol_ == nullptr && this->wsRegisterAddress_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
      inline Model& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
      inline Model& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // agentExtension Field Functions 
      bool hasAgentExtension() const { return this->agentExtension_ != nullptr;};
      void deleteAgentExtension() { this->agentExtension_ = nullptr;};
      inline int64_t getAgentExtension() const { DARABONBA_PTR_GET_DEFAULT(agentExtension_, 0L) };
      inline Model& setAgentExtension(int64_t agentExtension) { DARABONBA_PTR_SET_VALUE(agentExtension_, agentExtension) };


      // agentGroupIds Field Functions 
      bool hasAgentGroupIds() const { return this->agentGroupIds_ != nullptr;};
      void deleteAgentGroupIds() { this->agentGroupIds_ = nullptr;};
      inline const vector<int64_t> & getAgentGroupIds() const { DARABONBA_PTR_GET_CONST(agentGroupIds_, vector<int64_t>) };
      inline vector<int64_t> getAgentGroupIds() { DARABONBA_PTR_GET(agentGroupIds_, vector<int64_t>) };
      inline Model& setAgentGroupIds(const vector<int64_t> & agentGroupIds) { DARABONBA_PTR_SET_VALUE(agentGroupIds_, agentGroupIds) };
      inline Model& setAgentGroupIds(vector<int64_t> && agentGroupIds) { DARABONBA_PTR_SET_RVALUE(agentGroupIds_, agentGroupIds) };


      // agentGroupList Field Functions 
      bool hasAgentGroupList() const { return this->agentGroupList_ != nullptr;};
      void deleteAgentGroupList() { this->agentGroupList_ = nullptr;};
      inline const vector<Model::AgentGroupList> & getAgentGroupList() const { DARABONBA_PTR_GET_CONST(agentGroupList_, vector<Model::AgentGroupList>) };
      inline vector<Model::AgentGroupList> getAgentGroupList() { DARABONBA_PTR_GET(agentGroupList_, vector<Model::AgentGroupList>) };
      inline Model& setAgentGroupList(const vector<Model::AgentGroupList> & agentGroupList) { DARABONBA_PTR_SET_VALUE(agentGroupList_, agentGroupList) };
      inline Model& setAgentGroupList(vector<Model::AgentGroupList> && agentGroupList) { DARABONBA_PTR_SET_RVALUE(agentGroupList_, agentGroupList) };


      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
      inline Model& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline int64_t getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, 0L) };
      inline Model& setAgentStatus(int64_t agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // agentTag Field Functions 
      bool hasAgentTag() const { return this->agentTag_ != nullptr;};
      void deleteAgentTag() { this->agentTag_ = nullptr;};
      inline string getAgentTag() const { DARABONBA_PTR_GET_DEFAULT(agentTag_, "") };
      inline Model& setAgentTag(string agentTag) { DARABONBA_PTR_SET_VALUE(agentTag_, agentTag) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Model& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extensionPwd Field Functions 
      bool hasExtensionPwd() const { return this->extensionPwd_ != nullptr;};
      void deleteExtensionPwd() { this->extensionPwd_ = nullptr;};
      inline string getExtensionPwd() const { DARABONBA_PTR_GET_DEFAULT(extensionPwd_, "") };
      inline Model& setExtensionPwd(string extensionPwd) { DARABONBA_PTR_SET_VALUE(extensionPwd_, extensionPwd) };


      // extensionServer Field Functions 
      bool hasExtensionServer() const { return this->extensionServer_ != nullptr;};
      void deleteExtensionServer() { this->extensionServer_ = nullptr;};
      inline string getExtensionServer() const { DARABONBA_PTR_GET_DEFAULT(extensionServer_, "") };
      inline Model& setExtensionServer(string extensionServer) { DARABONBA_PTR_SET_VALUE(extensionServer_, extensionServer) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Model& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // wsProtocol Field Functions 
      bool hasWsProtocol() const { return this->wsProtocol_ != nullptr;};
      void deleteWsProtocol() { this->wsProtocol_ = nullptr;};
      inline string getWsProtocol() const { DARABONBA_PTR_GET_DEFAULT(wsProtocol_, "") };
      inline Model& setWsProtocol(string wsProtocol) { DARABONBA_PTR_SET_VALUE(wsProtocol_, wsProtocol) };


      // wsRegisterAddress Field Functions 
      bool hasWsRegisterAddress() const { return this->wsRegisterAddress_ != nullptr;};
      void deleteWsRegisterAddress() { this->wsRegisterAddress_ = nullptr;};
      inline string getWsRegisterAddress() const { DARABONBA_PTR_GET_DEFAULT(wsRegisterAddress_, "") };
      inline Model& setWsRegisterAddress(string wsRegisterAddress) { DARABONBA_PTR_SET_VALUE(wsRegisterAddress_, wsRegisterAddress) };


    protected:
      // 坐席账号
      shared_ptr<string> account_ {};
      // 账号启用状态，0-停用，1-启用，默认1
      shared_ptr<int64_t> active_ {};
      // 坐席分机号
      shared_ptr<int64_t> agentExtension_ {};
      // 坐席组ID列表
      shared_ptr<vector<int64_t>> agentGroupIds_ {};
      // 坐席组列表
      shared_ptr<vector<Model::AgentGroupList>> agentGroupList_ {};
      // 坐席ID
      shared_ptr<int64_t> agentId_ {};
      // 坐席状态，1:在线；2:忙碌；3:小休；4:离线
      shared_ptr<int64_t> agentStatus_ {};
      // 坐席标签
      shared_ptr<string> agentTag_ {};
      // 创建时间
      shared_ptr<string> createTime_ {};
      // 分机密码
      shared_ptr<string> extensionPwd_ {};
      // 分机注册地址
      shared_ptr<string> extensionServer_ {};
      // 坐席名称
      shared_ptr<string> name_ {};
      // WebSocket分机注册协议
      shared_ptr<string> wsProtocol_ {};
      // WebSocket分机注册地址
      shared_ptr<string> wsRegisterAddress_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->timestamp_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryAgentInfoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline QueryAgentInfoResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAgentInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const QueryAgentInfoResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, QueryAgentInfoResponseBody::Model) };
    inline QueryAgentInfoResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, QueryAgentInfoResponseBody::Model) };
    inline QueryAgentInfoResponseBody& setModel(const QueryAgentInfoResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline QueryAgentInfoResponseBody& setModel(QueryAgentInfoResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAgentInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAgentInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline QueryAgentInfoResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryAgentInfoResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
