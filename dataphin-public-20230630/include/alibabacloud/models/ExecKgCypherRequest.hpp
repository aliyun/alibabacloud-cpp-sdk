// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECKGCYPHERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECKGCYPHERREQUEST_HPP_
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
  class ExecKgCypherRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecKgCypherRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecCommand, execCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecKgCypherRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecCommand, execCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ExecKgCypherRequest() = default ;
    ExecKgCypherRequest(const ExecKgCypherRequest &) = default ;
    ExecKgCypherRequest(ExecKgCypherRequest &&) = default ;
    ExecKgCypherRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecKgCypherRequest() = default ;
    ExecKgCypherRequest& operator=(const ExecKgCypherRequest &) = default ;
    ExecKgCypherRequest& operator=(ExecKgCypherRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Limit, limit_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(Query, query_);
      };
      friend void from_json(const Darabonba::Json& j, ExecCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Limit, limit_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
      };
      ExecCommand() = default ;
      ExecCommand(const ExecCommand &) = default ;
      ExecCommand(ExecCommand &&) = default ;
      ExecCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecCommand() = default ;
      ExecCommand& operator=(const ExecCommand &) = default ;
      ExecCommand& operator=(ExecCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Params : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Params& obj) { 
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Params& obj) { 
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Params() = default ;
        Params(const Params &) = default ;
        Params(Params &&) = default ;
        Params(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Params() = default ;
        Params& operator=(const Params &) = default ;
        Params& operator=(Params &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataType_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline Params& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Params& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Params& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The data type of paramValue.
        shared_ptr<string> dataType_ {};
        // paramKey
        shared_ptr<string> key_ {};
        // paramValue
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->limit_ == nullptr
        && this->params_ == nullptr && this->query_ == nullptr; };
      // limit Field Functions 
      bool hasLimit() const { return this->limit_ != nullptr;};
      void deleteLimit() { this->limit_ = nullptr;};
      inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
      inline ExecCommand& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline const vector<ExecCommand::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<ExecCommand::Params>) };
      inline vector<ExecCommand::Params> getParams() { DARABONBA_PTR_GET(params_, vector<ExecCommand::Params>) };
      inline ExecCommand& setParams(const vector<ExecCommand::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
      inline ExecCommand& setParams(vector<ExecCommand::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline ExecCommand& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    protected:
      // The maximum number of records to return.
      shared_ptr<int32_t> limit_ {};
      // The input parameters of the query statement.
      shared_ptr<vector<ExecCommand::Params>> params_ {};
      // The custom Cypher query statement.
      shared_ptr<string> query_ {};
    };

    virtual bool empty() const override { return this->execCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->workspaceId_ == nullptr; };
    // execCommand Field Functions 
    bool hasExecCommand() const { return this->execCommand_ != nullptr;};
    void deleteExecCommand() { this->execCommand_ = nullptr;};
    inline const ExecKgCypherRequest::ExecCommand & getExecCommand() const { DARABONBA_PTR_GET_CONST(execCommand_, ExecKgCypherRequest::ExecCommand) };
    inline ExecKgCypherRequest::ExecCommand getExecCommand() { DARABONBA_PTR_GET(execCommand_, ExecKgCypherRequest::ExecCommand) };
    inline ExecKgCypherRequest& setExecCommand(const ExecKgCypherRequest::ExecCommand & execCommand) { DARABONBA_PTR_SET_VALUE(execCommand_, execCommand) };
    inline ExecKgCypherRequest& setExecCommand(ExecKgCypherRequest::ExecCommand && execCommand) { DARABONBA_PTR_SET_RVALUE(execCommand_, execCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecKgCypherRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ExecKgCypherRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ExecKgCypherRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The custom Cypher query instruction.
    // 
    // This parameter is required.
    shared_ptr<ExecKgCypherRequest::ExecCommand> execCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // The model ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
