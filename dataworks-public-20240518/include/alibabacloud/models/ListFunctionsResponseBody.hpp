// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODY_HPP_
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
  class ListFunctionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFunctionsResponseBody() = default ;
    ListFunctionsResponseBody(const ListFunctionsResponseBody &) = default ;
    ListFunctionsResponseBody(ListFunctionsResponseBody &&) = default ;
    ListFunctionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsResponseBody() = default ;
    ListFunctionsResponseBody& operator=(const ListFunctionsResponseBody &) = default ;
    ListFunctionsResponseBody& operator=(ListFunctionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Functions, functions_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Functions, functions_);
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
      class Functions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Functions& obj) { 
          DARABONBA_PTR_TO_JSON(ArmResource, armResource_);
          DARABONBA_PTR_TO_JSON(ClassName, className_);
          DARABONBA_PTR_TO_JSON(CommandDescription, commandDescription_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EmbeddedCode, embeddedCode_);
          DARABONBA_PTR_TO_JSON(EmbeddedCodeType, embeddedCodeType_);
          DARABONBA_PTR_TO_JSON(EmbeddedResourceType, embeddedResourceType_);
          DARABONBA_PTR_TO_JSON(ExampleDescription, exampleDescription_);
          DARABONBA_PTR_TO_JSON(FileResource, fileResource_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ReturnValueDescription, returnValueDescription_);
          DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_TO_JSON(Script, script_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Functions& obj) { 
          DARABONBA_PTR_FROM_JSON(ArmResource, armResource_);
          DARABONBA_PTR_FROM_JSON(ClassName, className_);
          DARABONBA_PTR_FROM_JSON(CommandDescription, commandDescription_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EmbeddedCode, embeddedCode_);
          DARABONBA_PTR_FROM_JSON(EmbeddedCodeType, embeddedCodeType_);
          DARABONBA_PTR_FROM_JSON(EmbeddedResourceType, embeddedResourceType_);
          DARABONBA_PTR_FROM_JSON(ExampleDescription, exampleDescription_);
          DARABONBA_PTR_FROM_JSON(FileResource, fileResource_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ReturnValueDescription, returnValueDescription_);
          DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
          DARABONBA_PTR_FROM_JSON(Script, script_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Functions() = default ;
        Functions(const Functions &) = default ;
        Functions(Functions &&) = default ;
        Functions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Functions() = default ;
        Functions& operator=(const Functions &) = default ;
        Functions& operator=(Functions &&) = default ;
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
          // The script ID.
          // 
          // >  Prior to SDK version 8.0.0, this field is of type Long. In SDK version 8.0.0 and later, it is of type String. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
          shared_ptr<string> id_ {};
          // The script path.
          shared_ptr<string> path_ {};
          // Runtime
          shared_ptr<Script::Runtime> runtime_ {};
        };

        class RuntimeResource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
            DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          };
          RuntimeResource() = default ;
          RuntimeResource(const RuntimeResource &) = default ;
          RuntimeResource(RuntimeResource &&) = default ;
          RuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RuntimeResource() = default ;
          RuntimeResource& operator=(const RuntimeResource &) = default ;
          RuntimeResource& operator=(RuntimeResource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->resourceGroupId_ == nullptr; };
          // resourceGroupId Field Functions 
          bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
          void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
          inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
          inline RuntimeResource& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        protected:
          // The runtime resource group ID.
          shared_ptr<string> resourceGroupId_ {};
        };

        class DataSource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          DataSource() = default ;
          DataSource(const DataSource &) = default ;
          DataSource(DataSource &&) = default ;
          DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSource() = default ;
          DataSource& operator=(const DataSource &) = default ;
          DataSource& operator=(DataSource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline DataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The name of the data source.
          shared_ptr<string> name_ {};
          // The type of the data source.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->armResource_ == nullptr
        && this->className_ == nullptr && this->commandDescription_ == nullptr && this->createTime_ == nullptr && this->dataSource_ == nullptr && this->databaseName_ == nullptr
        && this->description_ == nullptr && this->embeddedCode_ == nullptr && this->embeddedCodeType_ == nullptr && this->embeddedResourceType_ == nullptr && this->exampleDescription_ == nullptr
        && this->fileResource_ == nullptr && this->id_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->parameterDescription_ == nullptr && this->projectId_ == nullptr && this->returnValueDescription_ == nullptr && this->runtimeResource_ == nullptr && this->script_ == nullptr
        && this->type_ == nullptr; };
        // armResource Field Functions 
        bool hasArmResource() const { return this->armResource_ != nullptr;};
        void deleteArmResource() { this->armResource_ = nullptr;};
        inline string getArmResource() const { DARABONBA_PTR_GET_DEFAULT(armResource_, "") };
        inline Functions& setArmResource(string armResource) { DARABONBA_PTR_SET_VALUE(armResource_, armResource) };


        // className Field Functions 
        bool hasClassName() const { return this->className_ != nullptr;};
        void deleteClassName() { this->className_ = nullptr;};
        inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
        inline Functions& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


        // commandDescription Field Functions 
        bool hasCommandDescription() const { return this->commandDescription_ != nullptr;};
        void deleteCommandDescription() { this->commandDescription_ = nullptr;};
        inline string getCommandDescription() const { DARABONBA_PTR_GET_DEFAULT(commandDescription_, "") };
        inline Functions& setCommandDescription(string commandDescription) { DARABONBA_PTR_SET_VALUE(commandDescription_, commandDescription) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Functions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataSource Field Functions 
        bool hasDataSource() const { return this->dataSource_ != nullptr;};
        void deleteDataSource() { this->dataSource_ = nullptr;};
        inline const Functions::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Functions::DataSource) };
        inline Functions::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, Functions::DataSource) };
        inline Functions& setDataSource(const Functions::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
        inline Functions& setDataSource(Functions::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline Functions& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Functions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // embeddedCode Field Functions 
        bool hasEmbeddedCode() const { return this->embeddedCode_ != nullptr;};
        void deleteEmbeddedCode() { this->embeddedCode_ = nullptr;};
        inline string getEmbeddedCode() const { DARABONBA_PTR_GET_DEFAULT(embeddedCode_, "") };
        inline Functions& setEmbeddedCode(string embeddedCode) { DARABONBA_PTR_SET_VALUE(embeddedCode_, embeddedCode) };


        // embeddedCodeType Field Functions 
        bool hasEmbeddedCodeType() const { return this->embeddedCodeType_ != nullptr;};
        void deleteEmbeddedCodeType() { this->embeddedCodeType_ = nullptr;};
        inline string getEmbeddedCodeType() const { DARABONBA_PTR_GET_DEFAULT(embeddedCodeType_, "") };
        inline Functions& setEmbeddedCodeType(string embeddedCodeType) { DARABONBA_PTR_SET_VALUE(embeddedCodeType_, embeddedCodeType) };


        // embeddedResourceType Field Functions 
        bool hasEmbeddedResourceType() const { return this->embeddedResourceType_ != nullptr;};
        void deleteEmbeddedResourceType() { this->embeddedResourceType_ = nullptr;};
        inline string getEmbeddedResourceType() const { DARABONBA_PTR_GET_DEFAULT(embeddedResourceType_, "") };
        inline Functions& setEmbeddedResourceType(string embeddedResourceType) { DARABONBA_PTR_SET_VALUE(embeddedResourceType_, embeddedResourceType) };


        // exampleDescription Field Functions 
        bool hasExampleDescription() const { return this->exampleDescription_ != nullptr;};
        void deleteExampleDescription() { this->exampleDescription_ = nullptr;};
        inline string getExampleDescription() const { DARABONBA_PTR_GET_DEFAULT(exampleDescription_, "") };
        inline Functions& setExampleDescription(string exampleDescription) { DARABONBA_PTR_SET_VALUE(exampleDescription_, exampleDescription) };


        // fileResource Field Functions 
        bool hasFileResource() const { return this->fileResource_ != nullptr;};
        void deleteFileResource() { this->fileResource_ = nullptr;};
        inline string getFileResource() const { DARABONBA_PTR_GET_DEFAULT(fileResource_, "") };
        inline Functions& setFileResource(string fileResource) { DARABONBA_PTR_SET_VALUE(fileResource_, fileResource) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Functions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Functions& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Functions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Functions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // parameterDescription Field Functions 
        bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
        void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
        inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
        inline Functions& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Functions& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // returnValueDescription Field Functions 
        bool hasReturnValueDescription() const { return this->returnValueDescription_ != nullptr;};
        void deleteReturnValueDescription() { this->returnValueDescription_ = nullptr;};
        inline string getReturnValueDescription() const { DARABONBA_PTR_GET_DEFAULT(returnValueDescription_, "") };
        inline Functions& setReturnValueDescription(string returnValueDescription) { DARABONBA_PTR_SET_VALUE(returnValueDescription_, returnValueDescription) };


        // runtimeResource Field Functions 
        bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
        void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
        inline const Functions::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Functions::RuntimeResource) };
        inline Functions::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, Functions::RuntimeResource) };
        inline Functions& setRuntimeResource(const Functions::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
        inline Functions& setRuntimeResource(Functions::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


        // script Field Functions 
        bool hasScript() const { return this->script_ != nullptr;};
        void deleteScript() { this->script_ = nullptr;};
        inline const Functions::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, Functions::Script) };
        inline Functions::Script getScript() { DARABONBA_PTR_GET(script_, Functions::Script) };
        inline Functions& setScript(const Functions::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
        inline Functions& setScript(Functions::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Functions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The list of resource files for the ARM cluster.
        shared_ptr<string> armResource_ {};
        // The fully qualified class name of the UDF.
        shared_ptr<string> className_ {};
        // The command description.
        shared_ptr<string> commandDescription_ {};
        // The timestamp when the UDF was created.
        shared_ptr<int64_t> createTime_ {};
        // Data source information of the UDF.
        shared_ptr<Functions::DataSource> dataSource_ {};
        // The database name. This parameter is used only when the function type is EMR Function.
        shared_ptr<string> databaseName_ {};
        // The general description of the function.
        shared_ptr<string> description_ {};
        // Content of the nested function code
        shared_ptr<string> embeddedCode_ {};
        // The nested code type.
        // 
        // Valid values:
        // 
        // *   Python2
        // *   Python3
        // *   Java8
        // *   Java11
        // *   Java17
        shared_ptr<string> embeddedCodeType_ {};
        // The nested resource type.
        // 
        // Valid values:
        // 
        // *   File: General resource file
        // *   Embedded: Embedded resource
        shared_ptr<string> embeddedResourceType_ {};
        // The example description.
        shared_ptr<string> exampleDescription_ {};
        // The implementation code of the function and the list of resource files.
        shared_ptr<string> fileResource_ {};
        // The unique identifier of the UDF.
        // 
        // >  Prior to SDK version 8.0.0, this field is of type Long. In SDK version 8.0.0 and later, it is of type String. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
        shared_ptr<string> id_ {};
        // The modification time.
        shared_ptr<int64_t> modifyTime_ {};
        // The UDF name.
        shared_ptr<string> name_ {};
        // The owner of the UDF.
        shared_ptr<string> owner_ {};
        // The parameter description.
        shared_ptr<string> parameterDescription_ {};
        // The ID of the project to which the UDF belongs.
        shared_ptr<int64_t> projectId_ {};
        // The return value description.
        shared_ptr<string> returnValueDescription_ {};
        // The runtime resource group information.
        shared_ptr<Functions::RuntimeResource> runtimeResource_ {};
        // Script information of the UDF.
        shared_ptr<Functions::Script> script_ {};
        // The UDF type.
        // 
        // Valid values:
        // 
        // *   Math: Mathematical operation functions
        // *   Aggregate: Aggregation functions
        // *   String: String processing functions
        // *   Date: Date functions
        // *   Analytic: Window functions
        // *   Other: Other functions
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->functions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // functions Field Functions 
      bool hasFunctions() const { return this->functions_ != nullptr;};
      void deleteFunctions() { this->functions_ = nullptr;};
      inline const vector<PagingInfo::Functions> & getFunctions() const { DARABONBA_PTR_GET_CONST(functions_, vector<PagingInfo::Functions>) };
      inline vector<PagingInfo::Functions> getFunctions() { DARABONBA_PTR_GET(functions_, vector<PagingInfo::Functions>) };
      inline PagingInfo& setFunctions(const vector<PagingInfo::Functions> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
      inline PagingInfo& setFunctions(vector<PagingInfo::Functions> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


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
      // The function list.
      shared_ptr<vector<PagingInfo::Functions>> functions_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListFunctionsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListFunctionsResponseBody::PagingInfo) };
    inline ListFunctionsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListFunctionsResponseBody::PagingInfo) };
    inline ListFunctionsResponseBody& setPagingInfo(const ListFunctionsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListFunctionsResponseBody& setPagingInfo(ListFunctionsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFunctionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListFunctionsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
