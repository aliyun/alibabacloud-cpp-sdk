// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAGENTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDAGENTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class AddAgentGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAgentGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, AddAgentGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    AddAgentGroupResponseBody() = default ;
    AddAgentGroupResponseBody(const AddAgentGroupResponseBody &) = default ;
    AddAgentGroupResponseBody(AddAgentGroupResponseBody &&) = default ;
    AddAgentGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAgentGroupResponseBody() = default ;
    AddAgentGroupResponseBody& operator=(const AddAgentGroupResponseBody &) = default ;
    AddAgentGroupResponseBody& operator=(AddAgentGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(AgentGroupId, agentGroupId_);
        DARABONBA_PTR_TO_JSON(AgentGroupName, agentGroupName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentGroupId, agentGroupId_);
        DARABONBA_PTR_FROM_JSON(AgentGroupName, agentGroupName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
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
      virtual bool empty() const override { return this->agentGroupId_ == nullptr
        && this->agentGroupName_ == nullptr && this->createTime_ == nullptr; };
      // agentGroupId Field Functions 
      bool hasAgentGroupId() const { return this->agentGroupId_ != nullptr;};
      void deleteAgentGroupId() { this->agentGroupId_ = nullptr;};
      inline int64_t getAgentGroupId() const { DARABONBA_PTR_GET_DEFAULT(agentGroupId_, 0L) };
      inline Model& setAgentGroupId(int64_t agentGroupId) { DARABONBA_PTR_SET_VALUE(agentGroupId_, agentGroupId) };


      // agentGroupName Field Functions 
      bool hasAgentGroupName() const { return this->agentGroupName_ != nullptr;};
      void deleteAgentGroupName() { this->agentGroupName_ = nullptr;};
      inline string getAgentGroupName() const { DARABONBA_PTR_GET_DEFAULT(agentGroupName_, "") };
      inline Model& setAgentGroupName(string agentGroupName) { DARABONBA_PTR_SET_VALUE(agentGroupName_, agentGroupName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Model& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    protected:
      // 坐席组ID
      shared_ptr<int64_t> agentGroupId_ {};
      // 坐席组名称
      shared_ptr<string> agentGroupName_ {};
      // 创建坐席组的时间
      shared_ptr<string> createTime_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->timestamp_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline AddAgentGroupResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddAgentGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddAgentGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const AddAgentGroupResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, AddAgentGroupResponseBody::Model) };
    inline AddAgentGroupResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, AddAgentGroupResponseBody::Model) };
    inline AddAgentGroupResponseBody& setModel(const AddAgentGroupResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline AddAgentGroupResponseBody& setModel(AddAgentGroupResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddAgentGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddAgentGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline AddAgentGroupResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<AddAgentGroupResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
