// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parameterSetIds, parameterSetIds_);
      DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(workingDirectory, workingDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parameterSetIds, parameterSetIds_);
      DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(workingDirectory, workingDirectory_);
    };
    CreateStackRequest() = default ;
    CreateStackRequest(const CreateStackRequest &) = default ;
    CreateStackRequest(CreateStackRequest &&) = default ;
    CreateStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackRequest() = default ;
    CreateStackRequest& operator=(const CreateStackRequest &) = default ;
    CreateStackRequest& operator=(CreateStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->parameterSetIds_ == nullptr && this->ramRole_ == nullptr && this->source_ == nullptr
        && this->sourcePath_ == nullptr && this->workingDirectory_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateStackRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateStackRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateStackRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameterSetIds Field Functions 
    bool hasParameterSetIds() const { return this->parameterSetIds_ != nullptr;};
    void deleteParameterSetIds() { this->parameterSetIds_ = nullptr;};
    inline const vector<string> & getParameterSetIds() const { DARABONBA_PTR_GET_CONST(parameterSetIds_, vector<string>) };
    inline vector<string> getParameterSetIds() { DARABONBA_PTR_GET(parameterSetIds_, vector<string>) };
    inline CreateStackRequest& setParameterSetIds(const vector<string> & parameterSetIds) { DARABONBA_PTR_SET_VALUE(parameterSetIds_, parameterSetIds) };
    inline CreateStackRequest& setParameterSetIds(vector<string> && parameterSetIds) { DARABONBA_PTR_SET_RVALUE(parameterSetIds_, parameterSetIds) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline CreateStackRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateStackRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline CreateStackRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // workingDirectory Field Functions 
    bool hasWorkingDirectory() const { return this->workingDirectory_ != nullptr;};
    void deleteWorkingDirectory() { this->workingDirectory_ = nullptr;};
    inline string getWorkingDirectory() const { DARABONBA_PTR_GET_DEFAULT(workingDirectory_, "") };
    inline CreateStackRequest& setWorkingDirectory(string workingDirectory) { DARABONBA_PTR_SET_VALUE(workingDirectory_, workingDirectory) };


  protected:
    // The idempotency token. Format: [0-9a-zA-Z-]{1,64}. We recommend that you use a UUID.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The description of the resource stack. The value cannot exceed 256 characters.
    shared_ptr<string> description_ {};
    // The resource stack name. The name must be 2 to 128 characters in length and can contain letters, digits, Chinese characters, hyphens (-), underscores (_), and periods (.). The name cannot start or end with a hyphen, underscore, or period.
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> parameterSetIds_ {};
    // The RAM role to be assigned to the task. This role is used to automatically continue the execution of scheduled tasks during automatic triggers or offline scenarios.
    shared_ptr<string> ramRole_ {};
    // The creation source. Valid values:
    // 
    // - OSS: a template from OSS.
    // - IAC_SERVICE_MODULE: a template created in the automation service console.
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // The path of the configuration source. The value cannot exceed 1000 characters.
    // 
    // - If the source is OSS, the value is in the format oss::<file link> and must be a zip file. Example: oss::https://terraform-pipeline.oss-eu-central-1.aliyuncs.com/code.zip
    // - If the source is IAC_SERVICE_MODULE, the value is a template ID. Example: mod-xxxxx
    shared_ptr<string> sourcePath_ {};
    // The working directory where the configuration file is located. Enter / if it is in the root directory. Example: config/ or /
    shared_ptr<string> workingDirectory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
