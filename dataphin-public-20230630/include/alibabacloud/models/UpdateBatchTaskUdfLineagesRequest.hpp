// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTASKUDFLINEAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTASKUDFLINEAGESREQUEST_HPP_
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
  class UpdateBatchTaskUdfLineagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTaskUdfLineagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTaskUdfLineagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateBatchTaskUdfLineagesRequest() = default ;
    UpdateBatchTaskUdfLineagesRequest(const UpdateBatchTaskUdfLineagesRequest &) = default ;
    UpdateBatchTaskUdfLineagesRequest(UpdateBatchTaskUdfLineagesRequest &&) = default ;
    UpdateBatchTaskUdfLineagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTaskUdfLineagesRequest() = default ;
    UpdateBatchTaskUdfLineagesRequest& operator=(const UpdateBatchTaskUdfLineagesRequest &) = default ;
    UpdateBatchTaskUdfLineagesRequest& operator=(UpdateBatchTaskUdfLineagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(LineageGroupList, lineageGroupList_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(LineageGroupList, lineageGroupList_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LineageGroupList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LineageGroupList& obj) { 
          DARABONBA_PTR_TO_JSON(InputLineageList, inputLineageList_);
          DARABONBA_PTR_TO_JSON(OutputLineageList, outputLineageList_);
        };
        friend void from_json(const Darabonba::Json& j, LineageGroupList& obj) { 
          DARABONBA_PTR_FROM_JSON(InputLineageList, inputLineageList_);
          DARABONBA_PTR_FROM_JSON(OutputLineageList, outputLineageList_);
        };
        LineageGroupList() = default ;
        LineageGroupList(const LineageGroupList &) = default ;
        LineageGroupList(LineageGroupList &&) = default ;
        LineageGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LineageGroupList() = default ;
        LineageGroupList& operator=(const LineageGroupList &) = default ;
        LineageGroupList& operator=(LineageGroupList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OutputLineageList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputLineageList& obj) { 
            DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_PTR_TO_JSON(FullTable, fullTable_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, OutputLineageList& obj) { 
            DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_PTR_FROM_JSON(FullTable, fullTable_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          OutputLineageList() = default ;
          OutputLineageList(const OutputLineageList &) = default ;
          OutputLineageList(OutputLineageList &&) = default ;
          OutputLineageList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputLineageList() = default ;
          OutputLineageList& operator=(const OutputLineageList &) = default ;
          OutputLineageList& operator=(OutputLineageList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columnList_ == nullptr
        && this->env_ == nullptr && this->fullTable_ == nullptr && this->name_ == nullptr; };
          // columnList Field Functions 
          bool hasColumnList() const { return this->columnList_ != nullptr;};
          void deleteColumnList() { this->columnList_ = nullptr;};
          inline const vector<string> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<string>) };
          inline vector<string> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<string>) };
          inline OutputLineageList& setColumnList(const vector<string> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
          inline OutputLineageList& setColumnList(vector<string> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline OutputLineageList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // fullTable Field Functions 
          bool hasFullTable() const { return this->fullTable_ != nullptr;};
          void deleteFullTable() { this->fullTable_ = nullptr;};
          inline bool getFullTable() const { DARABONBA_PTR_GET_DEFAULT(fullTable_, false) };
          inline OutputLineageList& setFullTable(bool fullTable) { DARABONBA_PTR_SET_VALUE(fullTable_, fullTable) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline OutputLineageList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // This parameter is required.
          shared_ptr<vector<string>> columnList_ {};
          // This parameter is required.
          shared_ptr<string> env_ {};
          // This parameter is required.
          shared_ptr<bool> fullTable_ {};
          // This parameter is required.
          shared_ptr<string> name_ {};
        };

        class InputLineageList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputLineageList& obj) { 
            DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
            DARABONBA_PTR_TO_JSON(Env, env_);
            DARABONBA_PTR_TO_JSON(FullTable, fullTable_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, InputLineageList& obj) { 
            DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
            DARABONBA_PTR_FROM_JSON(Env, env_);
            DARABONBA_PTR_FROM_JSON(FullTable, fullTable_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          InputLineageList() = default ;
          InputLineageList(const InputLineageList &) = default ;
          InputLineageList(InputLineageList &&) = default ;
          InputLineageList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputLineageList() = default ;
          InputLineageList& operator=(const InputLineageList &) = default ;
          InputLineageList& operator=(InputLineageList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->columnList_ == nullptr
        && this->env_ == nullptr && this->fullTable_ == nullptr && this->name_ == nullptr; };
          // columnList Field Functions 
          bool hasColumnList() const { return this->columnList_ != nullptr;};
          void deleteColumnList() { this->columnList_ = nullptr;};
          inline const vector<string> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<string>) };
          inline vector<string> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<string>) };
          inline InputLineageList& setColumnList(const vector<string> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
          inline InputLineageList& setColumnList(vector<string> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


          // env Field Functions 
          bool hasEnv() const { return this->env_ != nullptr;};
          void deleteEnv() { this->env_ = nullptr;};
          inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
          inline InputLineageList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


          // fullTable Field Functions 
          bool hasFullTable() const { return this->fullTable_ != nullptr;};
          void deleteFullTable() { this->fullTable_ = nullptr;};
          inline bool getFullTable() const { DARABONBA_PTR_GET_DEFAULT(fullTable_, false) };
          inline InputLineageList& setFullTable(bool fullTable) { DARABONBA_PTR_SET_VALUE(fullTable_, fullTable) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline InputLineageList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // This parameter is required.
          shared_ptr<vector<string>> columnList_ {};
          // This parameter is required.
          shared_ptr<string> env_ {};
          // This parameter is required.
          shared_ptr<bool> fullTable_ {};
          // This parameter is required.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->inputLineageList_ == nullptr
        && this->outputLineageList_ == nullptr; };
        // inputLineageList Field Functions 
        bool hasInputLineageList() const { return this->inputLineageList_ != nullptr;};
        void deleteInputLineageList() { this->inputLineageList_ = nullptr;};
        inline const vector<LineageGroupList::InputLineageList> & getInputLineageList() const { DARABONBA_PTR_GET_CONST(inputLineageList_, vector<LineageGroupList::InputLineageList>) };
        inline vector<LineageGroupList::InputLineageList> getInputLineageList() { DARABONBA_PTR_GET(inputLineageList_, vector<LineageGroupList::InputLineageList>) };
        inline LineageGroupList& setInputLineageList(const vector<LineageGroupList::InputLineageList> & inputLineageList) { DARABONBA_PTR_SET_VALUE(inputLineageList_, inputLineageList) };
        inline LineageGroupList& setInputLineageList(vector<LineageGroupList::InputLineageList> && inputLineageList) { DARABONBA_PTR_SET_RVALUE(inputLineageList_, inputLineageList) };


        // outputLineageList Field Functions 
        bool hasOutputLineageList() const { return this->outputLineageList_ != nullptr;};
        void deleteOutputLineageList() { this->outputLineageList_ = nullptr;};
        inline const vector<LineageGroupList::OutputLineageList> & getOutputLineageList() const { DARABONBA_PTR_GET_CONST(outputLineageList_, vector<LineageGroupList::OutputLineageList>) };
        inline vector<LineageGroupList::OutputLineageList> getOutputLineageList() { DARABONBA_PTR_GET(outputLineageList_, vector<LineageGroupList::OutputLineageList>) };
        inline LineageGroupList& setOutputLineageList(const vector<LineageGroupList::OutputLineageList> & outputLineageList) { DARABONBA_PTR_SET_VALUE(outputLineageList_, outputLineageList) };
        inline LineageGroupList& setOutputLineageList(vector<LineageGroupList::OutputLineageList> && outputLineageList) { DARABONBA_PTR_SET_RVALUE(outputLineageList_, outputLineageList) };


      protected:
        // This parameter is required.
        shared_ptr<vector<LineageGroupList::InputLineageList>> inputLineageList_ {};
        // This parameter is required.
        shared_ptr<vector<LineageGroupList::OutputLineageList>> outputLineageList_ {};
      };

      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->lineageGroupList_ == nullptr && this->projectId_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline UpdateCommand& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // lineageGroupList Field Functions 
      bool hasLineageGroupList() const { return this->lineageGroupList_ != nullptr;};
      void deleteLineageGroupList() { this->lineageGroupList_ = nullptr;};
      inline const vector<UpdateCommand::LineageGroupList> & getLineageGroupList() const { DARABONBA_PTR_GET_CONST(lineageGroupList_, vector<UpdateCommand::LineageGroupList>) };
      inline vector<UpdateCommand::LineageGroupList> getLineageGroupList() { DARABONBA_PTR_GET(lineageGroupList_, vector<UpdateCommand::LineageGroupList>) };
      inline UpdateCommand& setLineageGroupList(const vector<UpdateCommand::LineageGroupList> & lineageGroupList) { DARABONBA_PTR_SET_VALUE(lineageGroupList_, lineageGroupList) };
      inline UpdateCommand& setLineageGroupList(vector<UpdateCommand::LineageGroupList> && lineageGroupList) { DARABONBA_PTR_SET_RVALUE(lineageGroupList_, lineageGroupList) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline UpdateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> fileId_ {};
      // This parameter is required.
      shared_ptr<vector<UpdateCommand::LineageGroupList>> lineageGroupList_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateBatchTaskUdfLineagesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateBatchTaskUdfLineagesRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateBatchTaskUdfLineagesRequest::UpdateCommand) };
    inline UpdateBatchTaskUdfLineagesRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateBatchTaskUdfLineagesRequest::UpdateCommand) };
    inline UpdateBatchTaskUdfLineagesRequest& setUpdateCommand(const UpdateBatchTaskUdfLineagesRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateBatchTaskUdfLineagesRequest& setUpdateCommand(UpdateBatchTaskUdfLineagesRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateBatchTaskUdfLineagesRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
