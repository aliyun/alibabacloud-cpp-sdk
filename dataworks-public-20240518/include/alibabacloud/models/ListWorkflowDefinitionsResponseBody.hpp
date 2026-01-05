// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowDefinitionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowDefinitionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowDefinitionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListWorkflowDefinitionsResponseBody() = default ;
    ListWorkflowDefinitionsResponseBody(const ListWorkflowDefinitionsResponseBody &) = default ;
    ListWorkflowDefinitionsResponseBody(ListWorkflowDefinitionsResponseBody &&) = default ;
    ListWorkflowDefinitionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowDefinitionsResponseBody() = default ;
    ListWorkflowDefinitionsResponseBody& operator=(const ListWorkflowDefinitionsResponseBody &) = default ;
    ListWorkflowDefinitionsResponseBody& operator=(ListWorkflowDefinitionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(WorkflowDefinitions, workflowDefinitions_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(WorkflowDefinitions, workflowDefinitions_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WorkflowDefinitions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkflowDefinitions& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Script, script_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, WorkflowDefinitions& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Script, script_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        WorkflowDefinitions() = default ;
        WorkflowDefinitions(const WorkflowDefinitions &) = default ;
        WorkflowDefinitions(WorkflowDefinitions &&) = default ;
        WorkflowDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkflowDefinitions() = default ;
        WorkflowDefinitions& operator=(const WorkflowDefinitions &) = default ;
        WorkflowDefinitions& operator=(WorkflowDefinitions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Script : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Script& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Runtime, runtime_);
          };
          friend void from_json(const Darabonba::Json& j, Script& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
          };
          Script() = default ;
          Script(const Script &) = default ;
          Script(Script &&) = default ;
          Script(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Script() = default ;
          Script& operator=(const Script &) = default ;
          Script& operator=(Script &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Runtime : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Runtime& obj) { 
              DARABONBA_PTR_TO_JSON(Command, command_);
            };
            friend void from_json(const Darabonba::Json& j, Runtime& obj) { 
              DARABONBA_PTR_FROM_JSON(Command, command_);
            };
            Runtime() = default ;
            Runtime(const Runtime &) = default ;
            Runtime(Runtime &&) = default ;
            Runtime(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Runtime() = default ;
            Runtime& operator=(const Runtime &) = default ;
            Runtime& operator=(Runtime &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->command_ == nullptr; };
            // command Field Functions 
            bool hasCommand() const { return this->command_ != nullptr;};
            void deleteCommand() { this->command_ = nullptr;};
            inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
            inline Runtime& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


          protected:
            // Command
            shared_ptr<string> command_ {};
          };

          virtual bool empty() const override { return this->id_ == nullptr
        && this->path_ == nullptr && this->runtime_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Script& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline Script& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // runtime Field Functions 
          bool hasRuntime() const { return this->runtime_ != nullptr;};
          void deleteRuntime() { this->runtime_ = nullptr;};
          inline const Script::Runtime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, Script::Runtime) };
          inline Script::Runtime getRuntime() { DARABONBA_PTR_GET(runtime_, Script::Runtime) };
          inline Script& setRuntime(const Script::Runtime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
          inline Script& setRuntime(Script::Runtime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


        protected:
          // The ID of the script.
          // 
          // >  This field is of type Long in SDK versions prior to 8.0.0, and of type String in SDK version 8.0.0 and later. This change does not affect the normal use of the SDK; parameters are still returned according to the type defined in the SDK. Compilation failures due to the type change may occur only when upgrading the SDK across version 8.0.0, in which case users need to manually correct the data type.
          shared_ptr<string> id_ {};
          // The script path.
          shared_ptr<string> path_ {};
          // Runtime
          shared_ptr<Script::Runtime> runtime_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->script_ == nullptr && this->type_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline WorkflowDefinitions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline WorkflowDefinitions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline WorkflowDefinitions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline WorkflowDefinitions& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline WorkflowDefinitions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline WorkflowDefinitions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline WorkflowDefinitions& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline const WorkflowDefinitions::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, WorkflowDefinitions::Script) };
        inline WorkflowDefinitions::Script getScript() { DARABONBA_PTR_GET(script_, WorkflowDefinitions::Script) };
        inline WorkflowDefinitions& setScript(const WorkflowDefinitions::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
        inline WorkflowDefinitions& setScript(WorkflowDefinitions::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline WorkflowDefinitions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The timestamp when the workflow was created.
        shared_ptr<int64_t> createTime_ {};
        // Description
        shared_ptr<string> description_ {};
        // The unique identifier of the workflow.
        // 
        // >  This field is of type Long in SDK versions prior to 8.0.0, and of type String in SDK version 8.0.0 and later. This change does not affect the normal use of the SDK; parameters are still returned according to the type defined in the SDK. Compilation failures due to the type change may occur only when upgrading the SDK across version 8.0.0, in which case users need to manually correct the data type.
        shared_ptr<string> id_ {};
        // The timestamp when the workflow was last modified.
        shared_ptr<int64_t> modifyTime_ {};
        // The name of the workflow.
        shared_ptr<string> name_ {};
        // Owner
        shared_ptr<string> owner_ {};
        // The ID of the DataWorks workspace to which the workflow belongs.
        // 
        // This parameter is required.
        shared_ptr<int64_t> projectId_ {};
        // The script information.
        shared_ptr<WorkflowDefinitions::Script> script_ {};
        // The type of the workflow.
        // 
        // Valid values:
        // 
        // *   CycleWorkflow
        // *   ManualWorkflow
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->workflowDefinitions_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // workflowDefinitions Field Functions 
      bool hasWorkflowDefinitions() const { return this->workflowDefinitions_ != nullptr;};
      void deleteWorkflowDefinitions() { this->workflowDefinitions_ = nullptr;};
      inline const vector<PagingInfo::WorkflowDefinitions> & getWorkflowDefinitions() const { DARABONBA_PTR_GET_CONST(workflowDefinitions_, vector<PagingInfo::WorkflowDefinitions>) };
      inline vector<PagingInfo::WorkflowDefinitions> getWorkflowDefinitions() { DARABONBA_PTR_GET(workflowDefinitions_, vector<PagingInfo::WorkflowDefinitions>) };
      inline PagingInfo& setWorkflowDefinitions(const vector<PagingInfo::WorkflowDefinitions> & workflowDefinitions) { DARABONBA_PTR_SET_VALUE(workflowDefinitions_, workflowDefinitions) };
      inline PagingInfo& setWorkflowDefinitions(vector<PagingInfo::WorkflowDefinitions> && workflowDefinitions) { DARABONBA_PTR_SET_RVALUE(workflowDefinitions_, workflowDefinitions) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
      // The workflows.
      shared_ptr<vector<PagingInfo::WorkflowDefinitions>> workflowDefinitions_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListWorkflowDefinitionsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListWorkflowDefinitionsResponseBody::PagingInfo) };
    inline ListWorkflowDefinitionsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListWorkflowDefinitionsResponseBody::PagingInfo) };
    inline ListWorkflowDefinitionsResponseBody& setPagingInfo(const ListWorkflowDefinitionsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListWorkflowDefinitionsResponseBody& setPagingInfo(ListWorkflowDefinitionsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkflowDefinitionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListWorkflowDefinitionsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
