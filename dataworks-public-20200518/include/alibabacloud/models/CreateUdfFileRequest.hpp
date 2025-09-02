// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUDFFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUDFFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateUdfFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUdfFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(CmdDescription, cmdDescription_);
      DARABONBA_PTR_TO_JSON(CreateFolderIfNotExists, createFolderIfNotExists_);
      DARABONBA_PTR_TO_JSON(Example, example_);
      DARABONBA_PTR_TO_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(ReturnValue, returnValue_);
      DARABONBA_PTR_TO_JSON(UdfDescription, udfDescription_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUdfFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(CmdDescription, cmdDescription_);
      DARABONBA_PTR_FROM_JSON(CreateFolderIfNotExists, createFolderIfNotExists_);
      DARABONBA_PTR_FROM_JSON(Example, example_);
      DARABONBA_PTR_FROM_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(ReturnValue, returnValue_);
      DARABONBA_PTR_FROM_JSON(UdfDescription, udfDescription_);
    };
    CreateUdfFileRequest() = default ;
    CreateUdfFileRequest(const CreateUdfFileRequest &) = default ;
    CreateUdfFileRequest(CreateUdfFileRequest &&) = default ;
    CreateUdfFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUdfFileRequest() = default ;
    CreateUdfFileRequest& operator=(const CreateUdfFileRequest &) = default ;
    CreateUdfFileRequest& operator=(CreateUdfFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->className_ != nullptr
        && this->cmdDescription_ != nullptr && this->createFolderIfNotExists_ != nullptr && this->example_ != nullptr && this->fileFolderPath_ != nullptr && this->fileName_ != nullptr
        && this->functionType_ != nullptr && this->parameterDescription_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr && this->resources_ != nullptr
        && this->returnValue_ != nullptr && this->udfDescription_ != nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline CreateUdfFileRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // cmdDescription Field Functions 
    bool hasCmdDescription() const { return this->cmdDescription_ != nullptr;};
    void deleteCmdDescription() { this->cmdDescription_ = nullptr;};
    inline string cmdDescription() const { DARABONBA_PTR_GET_DEFAULT(cmdDescription_, "") };
    inline CreateUdfFileRequest& setCmdDescription(string cmdDescription) { DARABONBA_PTR_SET_VALUE(cmdDescription_, cmdDescription) };


    // createFolderIfNotExists Field Functions 
    bool hasCreateFolderIfNotExists() const { return this->createFolderIfNotExists_ != nullptr;};
    void deleteCreateFolderIfNotExists() { this->createFolderIfNotExists_ = nullptr;};
    inline bool createFolderIfNotExists() const { DARABONBA_PTR_GET_DEFAULT(createFolderIfNotExists_, false) };
    inline CreateUdfFileRequest& setCreateFolderIfNotExists(bool createFolderIfNotExists) { DARABONBA_PTR_SET_VALUE(createFolderIfNotExists_, createFolderIfNotExists) };


    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline string example() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
    inline CreateUdfFileRequest& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string fileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline CreateUdfFileRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateUdfFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline CreateUdfFileRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline CreateUdfFileRequest& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateUdfFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline CreateUdfFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline CreateUdfFileRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // returnValue Field Functions 
    bool hasReturnValue() const { return this->returnValue_ != nullptr;};
    void deleteReturnValue() { this->returnValue_ = nullptr;};
    inline string returnValue() const { DARABONBA_PTR_GET_DEFAULT(returnValue_, "") };
    inline CreateUdfFileRequest& setReturnValue(string returnValue) { DARABONBA_PTR_SET_VALUE(returnValue_, returnValue) };


    // udfDescription Field Functions 
    bool hasUdfDescription() const { return this->udfDescription_ != nullptr;};
    void deleteUdfDescription() { this->udfDescription_ = nullptr;};
    inline string udfDescription() const { DARABONBA_PTR_GET_DEFAULT(udfDescription_, "") };
    inline CreateUdfFileRequest& setUdfDescription(string udfDescription) { DARABONBA_PTR_SET_VALUE(udfDescription_, udfDescription) };


  protected:
    // The name of the class in which the function is defined. This parameter corresponds to the Class Name parameter in the Register Function section of the configuration tab of the function in the DataWorks console.
    // 
    // This parameter is required.
    std::shared_ptr<string> className_ = nullptr;
    // The syntax used for calling the function. This parameter corresponds to the Expression Syntax parameter in the Register Function section of the configuration tab of the function in the DataWorks console.
    std::shared_ptr<string> cmdDescription_ = nullptr;
    // Specifies whether to automatically create the directory that is specified by the FileFolderPath parameter if the directory does not exist. Valid values:
    // 
    // *   true: The system automatically creates the directory if the directory does not exist.
    // *   false: The system does not automatically create the directory if the directory does not exist. In this case, the call fails.
    std::shared_ptr<bool> createFolderIfNotExists_ = nullptr;
    // The example for calling the function. This parameter corresponds to the Example parameter in the Register Function section of the configuration tab of the function in the DataWorks console.
    std::shared_ptr<string> example_ = nullptr;
    // The path of the folder in which the file for the function is stored.
    std::shared_ptr<string> fileFolderPath_ = nullptr;
    // The name of the file for the function.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // The type of the function. Valid values: MATH, AGGREGATE, STRING, DATE, ANALYTIC, and OTHER. This parameter corresponds to the Function Type parameter in the Register Function section of the configuration tab of the function on the DataStudio page.
    // 
    // This parameter is required.
    std::shared_ptr<string> functionType_ = nullptr;
    // The description of the input parameters of the function. This parameter corresponds to the Parameter Description parameter in the Register Function section of the configuration tab of the function on the DataStudio page.
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // The ID of the DataWorks workspace. You can click the Workspace Manage icon in the upper-right corner of the DataStudio page to go to the Workspace Management page and view the workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The unique identifier of the DataWorks workspace. You can click the identifier in the upper-left corner of the DataStudio page to switch to another workspace.
    // 
    // You must specify either this parameter or the projectId parameter to determine the DataWorks workspace to which the operation is called.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    // The names of the resources that are referenced by the function. This parameter corresponds to the Resources parameter in the Register Function section of the configuration tab of the function in the DataWorks console. Multiple resource names are separated by commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> resources_ = nullptr;
    // The description of the return value of the function. This parameter corresponds to the Return Value parameter in the Register Function section of the configuration tab of the function on the DataStudio page.
    std::shared_ptr<string> returnValue_ = nullptr;
    // The description of the function. This parameter corresponds to the Description parameter in the Register Function section of the configuration tab of the function on the DataStudio page.
    std::shared_ptr<string> udfDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
