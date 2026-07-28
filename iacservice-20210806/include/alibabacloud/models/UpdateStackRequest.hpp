// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ramRole, ramRole_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(workingDirectory, workingDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ramRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(workingDirectory, workingDirectory_);
    };
    UpdateStackRequest() = default ;
    UpdateStackRequest(const UpdateStackRequest &) = default ;
    UpdateStackRequest(UpdateStackRequest &&) = default ;
    UpdateStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackRequest() = default ;
    UpdateStackRequest& operator=(const UpdateStackRequest &) = default ;
    UpdateStackRequest& operator=(UpdateStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->ramRole_ == nullptr && this->sourcePath_ == nullptr && this->workingDirectory_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateStackRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateStackRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateStackRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline UpdateStackRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline UpdateStackRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // workingDirectory Field Functions 
    bool hasWorkingDirectory() const { return this->workingDirectory_ != nullptr;};
    void deleteWorkingDirectory() { this->workingDirectory_ = nullptr;};
    inline string getWorkingDirectory() const { DARABONBA_PTR_GET_DEFAULT(workingDirectory_, "") };
    inline UpdateStackRequest& setWorkingDirectory(string workingDirectory) { DARABONBA_PTR_SET_VALUE(workingDirectory_, workingDirectory) };


  protected:
    // The idempotency token. Format: [0-9a-zA-Z-]{1,64}. We recommend that you use a UUID.
    shared_ptr<string> clientToken_ {};
    // The description of the stack.
    shared_ptr<string> description_ {};
    // The name of the stack. The name must be 2 to 128 characters in length and can contain letters, digits, Chinese characters, hyphens (-), underscores (_), and periods (.). The name cannot start or end with a hyphen, underscore, or period.
    shared_ptr<string> name_ {};
    // The RAM role granted to the task. This role is used to automatically continue the execution of scheduled tasks during automatic triggering or offline scenarios.
    shared_ptr<string> ramRole_ {};
    // The path of the configuration source. The value can be up to 1,000 characters in length.
    // - If the source is OSS, set this parameter to oss::<file URL>. The file must be a ZIP file. Example: oss::https://terraform-pipeline.oss-eu-central-1.aliyuncs.com/code.zip.
    // - If the source is IAC_SERVICE_MODULE, set this parameter to a template ID. Example: mod-xxxxx.
    shared_ptr<string> sourcePath_ {};
    // The working directory where the configuration files are located. Enter / if the files are in the root directory. Example: config/ or /.
    shared_ptr<string> workingDirectory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
