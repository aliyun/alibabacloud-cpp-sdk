// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUDFFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUDFFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateUdfFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUdfFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(CmdDescription, cmdDescription_);
      DARABONBA_PTR_TO_JSON(Example, example_);
      DARABONBA_PTR_TO_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(ReturnValue, returnValue_);
      DARABONBA_PTR_TO_JSON(UdfDescription, udfDescription_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUdfFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(CmdDescription, cmdDescription_);
      DARABONBA_PTR_FROM_JSON(Example, example_);
      DARABONBA_PTR_FROM_JSON(FileFolderPath, fileFolderPath_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(ReturnValue, returnValue_);
      DARABONBA_PTR_FROM_JSON(UdfDescription, udfDescription_);
    };
    UpdateUdfFileRequest() = default ;
    UpdateUdfFileRequest(const UpdateUdfFileRequest &) = default ;
    UpdateUdfFileRequest(UpdateUdfFileRequest &&) = default ;
    UpdateUdfFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUdfFileRequest() = default ;
    UpdateUdfFileRequest& operator=(const UpdateUdfFileRequest &) = default ;
    UpdateUdfFileRequest& operator=(UpdateUdfFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->className_ == nullptr
        && this->cmdDescription_ == nullptr && this->example_ == nullptr && this->fileFolderPath_ == nullptr && this->fileId_ == nullptr && this->functionType_ == nullptr
        && this->parameterDescription_ == nullptr && this->projectId_ == nullptr && this->projectIdentifier_ == nullptr && this->resources_ == nullptr && this->returnValue_ == nullptr
        && this->udfDescription_ == nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string getClassName() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline UpdateUdfFileRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // cmdDescription Field Functions 
    bool hasCmdDescription() const { return this->cmdDescription_ != nullptr;};
    void deleteCmdDescription() { this->cmdDescription_ = nullptr;};
    inline string getCmdDescription() const { DARABONBA_PTR_GET_DEFAULT(cmdDescription_, "") };
    inline UpdateUdfFileRequest& setCmdDescription(string cmdDescription) { DARABONBA_PTR_SET_VALUE(cmdDescription_, cmdDescription) };


    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline string getExample() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
    inline UpdateUdfFileRequest& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string getFileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline UpdateUdfFileRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline UpdateUdfFileRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline UpdateUdfFileRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string getParameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline UpdateUdfFileRequest& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateUdfFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string getProjectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline UpdateUdfFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string getResources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline UpdateUdfFileRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // returnValue Field Functions 
    bool hasReturnValue() const { return this->returnValue_ != nullptr;};
    void deleteReturnValue() { this->returnValue_ = nullptr;};
    inline string getReturnValue() const { DARABONBA_PTR_GET_DEFAULT(returnValue_, "") };
    inline UpdateUdfFileRequest& setReturnValue(string returnValue) { DARABONBA_PTR_SET_VALUE(returnValue_, returnValue) };


    // udfDescription Field Functions 
    bool hasUdfDescription() const { return this->udfDescription_ != nullptr;};
    void deleteUdfDescription() { this->udfDescription_ = nullptr;};
    inline string getUdfDescription() const { DARABONBA_PTR_GET_DEFAULT(udfDescription_, "") };
    inline UpdateUdfFileRequest& setUdfDescription(string udfDescription) { DARABONBA_PTR_SET_VALUE(udfDescription_, udfDescription) };


  protected:
    // The name of the class where the function is defined, which corresponds to the Class Name field in the Create Function form.
    // 
    // This parameter is required.
    shared_ptr<string> className_ {};
    // The command format for calling the function, which corresponds to the Command Format field in the Create Function form.
    shared_ptr<string> cmdDescription_ {};
    // The example of calling the function, which corresponds to the Example field in the Create Function form.
    shared_ptr<string> example_ {};
    // The path of the folder where the function file is stored.
    shared_ptr<string> fileFolderPath_ {};
    // The ID of the file.
    // 
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    // The categorization of the function, which corresponds to the udf type field in the Create Function form. Valid values:
    // 
    // - MATH: mathematical operation function.
    // - AGGREGATE: aggregate functions.
    // - STRING: character string processing function.
    // - DATE: date processing function.
    // - ANALYTIC: window function.
    // - OTHER: other function.
    // 
    // This parameter is required.
    shared_ptr<string> functionType_ {};
    // The description of the function input parameters, which corresponds to the metric description field in the Create Function form.
    shared_ptr<string> parameterDescription_ {};
    // The ID of the DataWorks workspace. You can click the small wrench icon in the upper-right corner of the page to go to the storage management page and view the ID.
    shared_ptr<int64_t> projectId_ {};
    // The unique identifier of the DataWorks workspace, which is the English identifier displayed in the workspace switcher at the top of the DataStudio page.
    // 
    // You must specify either this parameter or the ProjectId parameter to determine the DataWorks workspace for this API call.
    shared_ptr<string> projectIdentifier_ {};
    // The list of resource names referenced by the function, separated by commas (,). This corresponds to the resources field in the Create Function form.
    // 
    // This parameter is required.
    shared_ptr<string> resources_ {};
    // The description of the function return value, which corresponds to the Return Value field in the Create Function form.
    shared_ptr<string> returnValue_ {};
    // The description of the function purpose, which corresponds to the Description field in the Create Function form.
    shared_ptr<string> udfDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
