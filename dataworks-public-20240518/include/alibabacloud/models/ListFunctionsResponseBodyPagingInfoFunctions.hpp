// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYPAGINGINFOFUNCTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYPAGINGINFOFUNCTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFunctionsResponseBodyPagingInfoFunctionsDataSource.hpp>
#include <alibabacloud/models/ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource.hpp>
#include <alibabacloud/models/ListFunctionsResponseBodyPagingInfoFunctionsScript.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFunctionsResponseBodyPagingInfoFunctions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsResponseBodyPagingInfoFunctions& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListFunctionsResponseBodyPagingInfoFunctions& obj) { 
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
    ListFunctionsResponseBodyPagingInfoFunctions() = default ;
    ListFunctionsResponseBodyPagingInfoFunctions(const ListFunctionsResponseBodyPagingInfoFunctions &) = default ;
    ListFunctionsResponseBodyPagingInfoFunctions(ListFunctionsResponseBodyPagingInfoFunctions &&) = default ;
    ListFunctionsResponseBodyPagingInfoFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsResponseBodyPagingInfoFunctions() = default ;
    ListFunctionsResponseBodyPagingInfoFunctions& operator=(const ListFunctionsResponseBodyPagingInfoFunctions &) = default ;
    ListFunctionsResponseBodyPagingInfoFunctions& operator=(ListFunctionsResponseBodyPagingInfoFunctions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->armResource_ == nullptr
        && return this->className_ == nullptr && return this->commandDescription_ == nullptr && return this->createTime_ == nullptr && return this->dataSource_ == nullptr && return this->databaseName_ == nullptr
        && return this->description_ == nullptr && return this->embeddedCode_ == nullptr && return this->embeddedCodeType_ == nullptr && return this->embeddedResourceType_ == nullptr && return this->exampleDescription_ == nullptr
        && return this->fileResource_ == nullptr && return this->id_ == nullptr && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr
        && return this->parameterDescription_ == nullptr && return this->projectId_ == nullptr && return this->returnValueDescription_ == nullptr && return this->runtimeResource_ == nullptr && return this->script_ == nullptr
        && return this->type_ == nullptr; };
    // armResource Field Functions 
    bool hasArmResource() const { return this->armResource_ != nullptr;};
    void deleteArmResource() { this->armResource_ = nullptr;};
    inline string armResource() const { DARABONBA_PTR_GET_DEFAULT(armResource_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setArmResource(string armResource) { DARABONBA_PTR_SET_VALUE(armResource_, armResource) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // commandDescription Field Functions 
    bool hasCommandDescription() const { return this->commandDescription_ != nullptr;};
    void deleteCommandDescription() { this->commandDescription_ = nullptr;};
    inline string commandDescription() const { DARABONBA_PTR_GET_DEFAULT(commandDescription_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setCommandDescription(string commandDescription) { DARABONBA_PTR_SET_VALUE(commandDescription_, commandDescription) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::ListFunctionsResponseBodyPagingInfoFunctionsDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::ListFunctionsResponseBodyPagingInfoFunctionsDataSource) };
    inline Models::ListFunctionsResponseBodyPagingInfoFunctionsDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::ListFunctionsResponseBodyPagingInfoFunctionsDataSource) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setDataSource(const Models::ListFunctionsResponseBodyPagingInfoFunctionsDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setDataSource(Models::ListFunctionsResponseBodyPagingInfoFunctionsDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embeddedCode Field Functions 
    bool hasEmbeddedCode() const { return this->embeddedCode_ != nullptr;};
    void deleteEmbeddedCode() { this->embeddedCode_ = nullptr;};
    inline string embeddedCode() const { DARABONBA_PTR_GET_DEFAULT(embeddedCode_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setEmbeddedCode(string embeddedCode) { DARABONBA_PTR_SET_VALUE(embeddedCode_, embeddedCode) };


    // embeddedCodeType Field Functions 
    bool hasEmbeddedCodeType() const { return this->embeddedCodeType_ != nullptr;};
    void deleteEmbeddedCodeType() { this->embeddedCodeType_ = nullptr;};
    inline string embeddedCodeType() const { DARABONBA_PTR_GET_DEFAULT(embeddedCodeType_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setEmbeddedCodeType(string embeddedCodeType) { DARABONBA_PTR_SET_VALUE(embeddedCodeType_, embeddedCodeType) };


    // embeddedResourceType Field Functions 
    bool hasEmbeddedResourceType() const { return this->embeddedResourceType_ != nullptr;};
    void deleteEmbeddedResourceType() { this->embeddedResourceType_ = nullptr;};
    inline string embeddedResourceType() const { DARABONBA_PTR_GET_DEFAULT(embeddedResourceType_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setEmbeddedResourceType(string embeddedResourceType) { DARABONBA_PTR_SET_VALUE(embeddedResourceType_, embeddedResourceType) };


    // exampleDescription Field Functions 
    bool hasExampleDescription() const { return this->exampleDescription_ != nullptr;};
    void deleteExampleDescription() { this->exampleDescription_ = nullptr;};
    inline string exampleDescription() const { DARABONBA_PTR_GET_DEFAULT(exampleDescription_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setExampleDescription(string exampleDescription) { DARABONBA_PTR_SET_VALUE(exampleDescription_, exampleDescription) };


    // fileResource Field Functions 
    bool hasFileResource() const { return this->fileResource_ != nullptr;};
    void deleteFileResource() { this->fileResource_ = nullptr;};
    inline string fileResource() const { DARABONBA_PTR_GET_DEFAULT(fileResource_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setFileResource(string fileResource) { DARABONBA_PTR_SET_VALUE(fileResource_, fileResource) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // returnValueDescription Field Functions 
    bool hasReturnValueDescription() const { return this->returnValueDescription_ != nullptr;};
    void deleteReturnValueDescription() { this->returnValueDescription_ = nullptr;};
    inline string returnValueDescription() const { DARABONBA_PTR_GET_DEFAULT(returnValueDescription_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setReturnValueDescription(string returnValueDescription) { DARABONBA_PTR_SET_VALUE(returnValueDescription_, returnValueDescription) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource) };
    inline Models::ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setRuntimeResource(const Models::ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setRuntimeResource(Models::ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::ListFunctionsResponseBodyPagingInfoFunctionsScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::ListFunctionsResponseBodyPagingInfoFunctionsScript) };
    inline Models::ListFunctionsResponseBodyPagingInfoFunctionsScript script() { DARABONBA_PTR_GET(script_, Models::ListFunctionsResponseBodyPagingInfoFunctionsScript) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setScript(const Models::ListFunctionsResponseBodyPagingInfoFunctionsScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setScript(Models::ListFunctionsResponseBodyPagingInfoFunctionsScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListFunctionsResponseBodyPagingInfoFunctions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The file resources in an Advanced RISC Machines (ARM) cluster.
    std::shared_ptr<string> armResource_ = nullptr;
    // The fully qualified class name of the UDF.
    std::shared_ptr<string> className_ = nullptr;
    // The description of the command.
    std::shared_ptr<string> commandDescription_ = nullptr;
    // The time when the UDF was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The data source information about the UDF.
    std::shared_ptr<Models::ListFunctionsResponseBodyPagingInfoFunctionsDataSource> dataSource_ = nullptr;
    // The name of the database. This parameter is returned for E-MapReduce (EMR) functions.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The overall description of the UDF.
    std::shared_ptr<string> description_ = nullptr;
    // The code of the embedded UDF.
    std::shared_ptr<string> embeddedCode_ = nullptr;
    // The type of the nested code.
    // 
    // Valid values:
    // 
    // *   Python2
    // *   Python3
    // *   Java8
    // *   Java11
    // *   Java17
    std::shared_ptr<string> embeddedCodeType_ = nullptr;
    // The type of the nested resource.
    // 
    // Valid values:
    // 
    // *   File: general resources
    // *   Embedded: embedded resources
    std::shared_ptr<string> embeddedResourceType_ = nullptr;
    // The description of the example.
    std::shared_ptr<string> exampleDescription_ = nullptr;
    // The files resources.
    std::shared_ptr<string> fileResource_ = nullptr;
    // The ID of the UDF.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The time when the UDF was last modified. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the UDF.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the UDF.
    std::shared_ptr<string> owner_ = nullptr;
    // The description of the parameter.
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // The ID of the workspace to which the UDF belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The description of the return value.
    std::shared_ptr<string> returnValueDescription_ = nullptr;
    // The information about the resource group used when you run the UDF.
    std::shared_ptr<Models::ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource> runtimeResource_ = nullptr;
    // The script information about the UDF.
    std::shared_ptr<Models::ListFunctionsResponseBodyPagingInfoFunctionsScript> script_ = nullptr;
    // The UDF type.
    // 
    // Valid values:
    // 
    // *   Math: mathematical operation function
    // *   Aggregate: aggregate function
    // *   String: string processing function
    // *   Date: date function
    // *   Analytic: window function
    // *   Other: other functions
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
