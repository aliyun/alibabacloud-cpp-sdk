// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
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
  class ListComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListComponentsResponseBody() = default ;
    ListComponentsResponseBody(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody(ListComponentsResponseBody &&) = default ;
    ListComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBody() = default ;
    ListComponentsResponseBody& operator=(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody& operator=(ListComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Components, components_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Components, components_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Components : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Components& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Inputs, inputs_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Outputs, outputs_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Script, script_);
        };
        friend void from_json(const Darabonba::Json& j, Components& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Script, script_);
        };
        Components() = default ;
        Components(const Components &) = default ;
        Components(Components &&) = default ;
        Components(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Components() = default ;
        Components& operator=(const Components &) = default ;
        Components& operator=(Components &&) = default ;
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
            // The command.
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
          // ID
          shared_ptr<string> id_ {};
          // The script path.
          shared_ptr<string> path_ {};
          // The runtime.
          shared_ptr<Script::Runtime> runtime_ {};
        };

        class Outputs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Outputs() = default ;
          Outputs(const Outputs &) = default ;
          Outputs(Outputs &&) = default ;
          Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Outputs() = default ;
          Outputs& operator=(const Outputs &) = default ;
          Outputs& operator=(Outputs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline Outputs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Outputs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Outputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Outputs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The default value.
          shared_ptr<string> defaultValue_ {};
          // The parameter description.
          shared_ptr<string> description_ {};
          // The parameter name.
          shared_ptr<string> name_ {};
          // The parameter type.
          shared_ptr<string> type_ {};
        };

        class Inputs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Inputs() = default ;
          Inputs(const Inputs &) = default ;
          Inputs(Inputs &&) = default ;
          Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Inputs() = default ;
          Inputs& operator=(const Inputs &) = default ;
          Inputs& operator=(Inputs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline Inputs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Inputs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Inputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Inputs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The default value of the variable.
          shared_ptr<string> defaultValue_ {};
          // The parameter description.
          shared_ptr<string> description_ {};
          // The parameter name.
          shared_ptr<string> name_ {};
          // The parameter type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->componentId_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->inputs_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr
        && this->outputs_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr && this->script_ == nullptr; };
        // componentId Field Functions 
        bool hasComponentId() const { return this->componentId_ != nullptr;};
        void deleteComponentId() { this->componentId_ = nullptr;};
        inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
        inline Components& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Components& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Components& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // inputs Field Functions 
        bool hasInputs() const { return this->inputs_ != nullptr;};
        void deleteInputs() { this->inputs_ = nullptr;};
        inline const vector<Components::Inputs> & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<Components::Inputs>) };
        inline vector<Components::Inputs> getInputs() { DARABONBA_PTR_GET(inputs_, vector<Components::Inputs>) };
        inline Components& setInputs(const vector<Components::Inputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
        inline Components& setInputs(vector<Components::Inputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline Components& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Components& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outputs Field Functions 
        bool hasOutputs() const { return this->outputs_ != nullptr;};
        void deleteOutputs() { this->outputs_ = nullptr;};
        inline const vector<Components::Outputs> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Components::Outputs>) };
        inline vector<Components::Outputs> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<Components::Outputs>) };
        inline Components& setOutputs(const vector<Components::Outputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
        inline Components& setOutputs(vector<Components::Outputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Components& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Components& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline const Components::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, Components::Script) };
        inline Components::Script getScript() { DARABONBA_PTR_GET(script_, Components::Script) };
        inline Components& setScript(const Components::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
        inline Components& setScript(Components::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


      protected:
        // The component ID. This parameter can be used in requests to query, modify, or delete director components.
        shared_ptr<string> componentId_ {};
        // The creation time.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
        shared_ptr<string> createTime_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The input parameters.
        shared_ptr<vector<Components::Inputs>> inputs_ {};
        // The timestamp when the publishing process was modified.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
        shared_ptr<string> modifyTime_ {};
        // The resource name.
        shared_ptr<string> name_ {};
        // The output parameters.
        shared_ptr<vector<Components::Outputs>> outputs_ {};
        // The owner.
        shared_ptr<string> owner_ {};
        // The DataWorks workspace ID. To obtain the workspace ID, log on to the DataWorks console and navigate to the workspace configuration page. You must specify either this parameter or ProjectIdentifier to identify the target DataWorks workspace for this API call.
        shared_ptr<int64_t> projectId_ {};
        // The script information.
        shared_ptr<Components::Script> script_ {};
      };

      virtual bool empty() const override { return this->components_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // components Field Functions 
      bool hasComponents() const { return this->components_ != nullptr;};
      void deleteComponents() { this->components_ = nullptr;};
      inline const vector<PagingInfo::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<PagingInfo::Components>) };
      inline vector<PagingInfo::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<PagingInfo::Components>) };
      inline PagingInfo& setComponents(const vector<PagingInfo::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
      inline PagingInfo& setComponents(vector<PagingInfo::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


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


    protected:
      // The UID of the user who created the dataset acceleration component. In Alibaba Cloud, this is the RAM user ID (or the Alibaba Cloud account ID if created by the account itself).
      shared_ptr<vector<PagingInfo::Components>> components_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListComponentsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListComponentsResponseBody::PagingInfo) };
    inline ListComponentsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListComponentsResponseBody::PagingInfo) };
    inline ListComponentsResponseBody& setPagingInfo(const ListComponentsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListComponentsResponseBody& setPagingInfo(ListComponentsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListComponentsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. Use this ID for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
