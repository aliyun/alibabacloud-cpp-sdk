// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUDFFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUDFFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
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
    virtual bool empty() const override { return this->className_ == nullptr
        && this->cmdDescription_ == nullptr && this->createFolderIfNotExists_ == nullptr && this->example_ == nullptr && this->fileFolderPath_ == nullptr && this->fileName_ == nullptr
        && this->functionType_ == nullptr && this->parameterDescription_ == nullptr && this->projectId_ == nullptr && this->projectIdentifier_ == nullptr && this->resources_ == nullptr
        && this->returnValue_ == nullptr && this->udfDescription_ == nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline CreateUdfFileRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // cmdDescription Field Functions 
    bool hasCmdDescription() const { return this->cmdDescription_ != nullptr;};
    void deleteCmdDescription() { this->cmdDescription_ = nullptr;};
    inline string getCmdDescription() const { DARABONBA_PTR_GET_DEFAULT(cmdDescription_, "") };
    inline CreateUdfFileRequest& setCmdDescription(string cmdDescription) { DARABONBA_PTR_SET_VALUE(cmdDescription_, cmdDescription) };


    // createFolderIfNotExists Field Functions 
    bool hasCreateFolderIfNotExists() const { return this->createFolderIfNotExists_ != nullptr;};
    void deleteCreateFolderIfNotExists() { this->createFolderIfNotExists_ = nullptr;};
    inline bool getCreateFolderIfNotExists() const { DARABONBA_PTR_GET_DEFAULT(createFolderIfNotExists_, false) };
    inline CreateUdfFileRequest& setCreateFolderIfNotExists(bool createFolderIfNotExists) { DARABONBA_PTR_SET_VALUE(createFolderIfNotExists_, createFolderIfNotExists) };


    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline string getExample() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
    inline CreateUdfFileRequest& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string getFileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline CreateUdfFileRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateUdfFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline CreateUdfFileRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline CreateUdfFileRequest& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateUdfFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline CreateUdfFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline CreateUdfFileRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // returnValue Field Functions 
    bool hasReturnValue() const { return this->returnValue_ != nullptr;};
    void deleteReturnValue() { this->returnValue_ = nullptr;};
    inline string getReturnValue() const { DARABONBA_PTR_GET_DEFAULT(returnValue_, "") };
    inline CreateUdfFileRequest& setReturnValue(string returnValue) { DARABONBA_PTR_SET_VALUE(returnValue_, returnValue) };


    // udfDescription Field Functions 
    bool hasUdfDescription() const { return this->udfDescription_ != nullptr;};
    void deleteUdfDescription() { this->udfDescription_ = nullptr;};
    inline string getUdfDescription() const { DARABONBA_PTR_GET_DEFAULT(udfDescription_, "") };
    inline CreateUdfFileRequest& setUdfDescription(string udfDescription) { DARABONBA_PTR_SET_VALUE(udfDescription_, udfDescription) };


  protected:
    // The class name where the function is defined, corresponding to the class name field in the Create Function form.
    // 
    // This parameter is required.
    shared_ptr<string> className_ {};
    // The command format for invoking the function, corresponding to the command format field in the Create Function form.
    shared_ptr<string> cmdDescription_ {};
    // Specifies whether to automatically create the directory if the specified path (FileFolderPath) does not exist. Valid values:
    // 
    // *   true: Automatically creates the directory if it does not exist.
    // *   false: The call fails if the directory does not exist.
    shared_ptr<bool> createFolderIfNotExists_ {};
    // An example demonstrating how to call the function, corresponding to the example field in the Create Function form.
    shared_ptr<string> example_ {};
    // The path to the folder containing the function file.
    // 
    // This parameter is required.
    shared_ptr<string> fileFolderPath_ {};
    // The function name.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The function category, corresponding to the function type field in the Create Function form. Valid values: MATH (mathematical functions), AGGREGATE (aggregate functions), STRING (string processing functions), DATE (date processing functions), ANALYTIC (window functions), and OTHER (other functions).
    // 
    // This parameter is required.
    shared_ptr<string> functionType_ {};
    // The function parameter description, corresponding to the parameter description field in the Create Function form.
    shared_ptr<string> parameterDescription_ {};
    // The DataWorks workspace ID. To find this, click the wrench icon in the upper-right corner and navigate to the workspace management page.
    shared_ptr<int64_t> projectId_ {};
    // The unique identifier of the DataWorks workspace, which is the identifier at the top of the Data Studio page where you switch workspaces.
    shared_ptr<string> projectIdentifier_ {};
    // A comma-separated list of resource names referenced by the function, corresponding to the resource list field in the Create Function form.
    // 
    // This parameter is required.
    shared_ptr<string> resources_ {};
    // The return value description, corresponding to the return value field in the Create Function form.
    shared_ptr<string> returnValue_ {};
    // The function purpose description, corresponding to the description field in the Create Function form.
    shared_ptr<string> udfDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
