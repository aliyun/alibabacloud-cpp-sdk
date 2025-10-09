// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUDFFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUDFFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
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
    virtual bool empty() const override { this->className_ != nullptr
        && this->cmdDescription_ != nullptr && this->example_ != nullptr && this->fileFolderPath_ != nullptr && this->fileId_ != nullptr && this->functionType_ != nullptr
        && this->parameterDescription_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr && this->resources_ != nullptr && this->returnValue_ != nullptr
        && this->udfDescription_ != nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline UpdateUdfFileRequest& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // cmdDescription Field Functions 
    bool hasCmdDescription() const { return this->cmdDescription_ != nullptr;};
    void deleteCmdDescription() { this->cmdDescription_ = nullptr;};
    inline string cmdDescription() const { DARABONBA_PTR_GET_DEFAULT(cmdDescription_, "") };
    inline UpdateUdfFileRequest& setCmdDescription(string cmdDescription) { DARABONBA_PTR_SET_VALUE(cmdDescription_, cmdDescription) };


    // example Field Functions 
    bool hasExample() const { return this->example_ != nullptr;};
    void deleteExample() { this->example_ = nullptr;};
    inline string example() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
    inline UpdateUdfFileRequest& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


    // fileFolderPath Field Functions 
    bool hasFileFolderPath() const { return this->fileFolderPath_ != nullptr;};
    void deleteFileFolderPath() { this->fileFolderPath_ = nullptr;};
    inline string fileFolderPath() const { DARABONBA_PTR_GET_DEFAULT(fileFolderPath_, "") };
    inline UpdateUdfFileRequest& setFileFolderPath(string fileFolderPath) { DARABONBA_PTR_SET_VALUE(fileFolderPath_, fileFolderPath) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline UpdateUdfFileRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string functionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline UpdateUdfFileRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline UpdateUdfFileRequest& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateUdfFileRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline UpdateUdfFileRequest& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline string resources() const { DARABONBA_PTR_GET_DEFAULT(resources_, "") };
    inline UpdateUdfFileRequest& setResources(string resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };


    // returnValue Field Functions 
    bool hasReturnValue() const { return this->returnValue_ != nullptr;};
    void deleteReturnValue() { this->returnValue_ = nullptr;};
    inline string returnValue() const { DARABONBA_PTR_GET_DEFAULT(returnValue_, "") };
    inline UpdateUdfFileRequest& setReturnValue(string returnValue) { DARABONBA_PTR_SET_VALUE(returnValue_, returnValue) };


    // udfDescription Field Functions 
    bool hasUdfDescription() const { return this->udfDescription_ != nullptr;};
    void deleteUdfDescription() { this->udfDescription_ = nullptr;};
    inline string udfDescription() const { DARABONBA_PTR_GET_DEFAULT(udfDescription_, "") };
    inline UpdateUdfFileRequest& setUdfDescription(string udfDescription) { DARABONBA_PTR_SET_VALUE(udfDescription_, udfDescription) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<string> cmdDescription_ = nullptr;
    std::shared_ptr<string> example_ = nullptr;
    std::shared_ptr<string> fileFolderPath_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> functionType_ = nullptr;
    std::shared_ptr<string> parameterDescription_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resources_ = nullptr;
    std::shared_ptr<string> returnValue_ = nullptr;
    std::shared_ptr<string> udfDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
