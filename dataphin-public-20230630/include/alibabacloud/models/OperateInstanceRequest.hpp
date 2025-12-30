// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OperateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OperateCommand, operateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, OperateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OperateCommand, operateCommand_);
    };
    OperateInstanceRequest() = default ;
    OperateInstanceRequest(const OperateInstanceRequest &) = default ;
    OperateInstanceRequest(OperateInstanceRequest &&) = default ;
    OperateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateInstanceRequest() = default ;
    OperateInstanceRequest& operator=(const OperateInstanceRequest &) = default ;
    OperateInstanceRequest& operator=(OperateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, OperateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      OperateCommand() = default ;
      OperateCommand(const OperateCommand &) = default ;
      OperateCommand(OperateCommand &&) = default ;
      OperateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperateCommand() = default ;
      OperateCommand& operator=(const OperateCommand &) = default ;
      OperateCommand& operator=(OperateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceIdList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        InstanceIdList() = default ;
        InstanceIdList(const InstanceIdList &) = default ;
        InstanceIdList(InstanceIdList &&) = default ;
        InstanceIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceIdList() = default ;
        InstanceIdList& operator=(const InstanceIdList &) = default ;
        InstanceIdList& operator=(InstanceIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldInstanceIdList_ == nullptr
        && this->id_ == nullptr; };
        // fieldInstanceIdList Field Functions 
        bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
        void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
        inline const vector<string> & getFieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
        inline vector<string> getFieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
        inline InstanceIdList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
        inline InstanceIdList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline InstanceIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<vector<string>> fieldInstanceIdList_ {};
        // This parameter is required.
        shared_ptr<string> id_ {};
      };

      virtual bool empty() const override { return this->instanceIdList_ == nullptr
        && this->operation_ == nullptr && this->projectId_ == nullptr; };
      // instanceIdList Field Functions 
      bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
      void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
      inline const vector<OperateCommand::InstanceIdList> & getInstanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<OperateCommand::InstanceIdList>) };
      inline vector<OperateCommand::InstanceIdList> getInstanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<OperateCommand::InstanceIdList>) };
      inline OperateCommand& setInstanceIdList(const vector<OperateCommand::InstanceIdList> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
      inline OperateCommand& setInstanceIdList(vector<OperateCommand::InstanceIdList> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline OperateCommand& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline OperateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<vector<OperateCommand::InstanceIdList>> instanceIdList_ {};
      // This parameter is required.
      shared_ptr<string> operation_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->env_ == nullptr
        && this->opTenantId_ == nullptr && this->operateCommand_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline OperateInstanceRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OperateInstanceRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // operateCommand Field Functions 
    bool hasOperateCommand() const { return this->operateCommand_ != nullptr;};
    void deleteOperateCommand() { this->operateCommand_ = nullptr;};
    inline const OperateInstanceRequest::OperateCommand & getOperateCommand() const { DARABONBA_PTR_GET_CONST(operateCommand_, OperateInstanceRequest::OperateCommand) };
    inline OperateInstanceRequest::OperateCommand getOperateCommand() { DARABONBA_PTR_GET(operateCommand_, OperateInstanceRequest::OperateCommand) };
    inline OperateInstanceRequest& setOperateCommand(const OperateInstanceRequest::OperateCommand & operateCommand) { DARABONBA_PTR_SET_VALUE(operateCommand_, operateCommand) };
    inline OperateInstanceRequest& setOperateCommand(OperateInstanceRequest::OperateCommand && operateCommand) { DARABONBA_PTR_SET_RVALUE(operateCommand_, operateCommand) };


  protected:
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<OperateInstanceRequest::OperateCommand> operateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
