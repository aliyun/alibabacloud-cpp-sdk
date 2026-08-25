// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERSTACKEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERSTACKEXECUTIONREQUEST_HPP_
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
  class TriggerStackExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerStackExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(changedFolders, changedFolders_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(codePackagePath, codePackagePath_);
      DARABONBA_PTR_TO_JSON(codeVersionId, codeVersionId_);
      DARABONBA_PTR_TO_JSON(sourceTriggerId, sourceTriggerId_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerStackExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(changedFolders, changedFolders_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(codePackagePath, codePackagePath_);
      DARABONBA_PTR_FROM_JSON(codeVersionId, codeVersionId_);
      DARABONBA_PTR_FROM_JSON(sourceTriggerId, sourceTriggerId_);
    };
    TriggerStackExecutionRequest() = default ;
    TriggerStackExecutionRequest(const TriggerStackExecutionRequest &) = default ;
    TriggerStackExecutionRequest(TriggerStackExecutionRequest &&) = default ;
    TriggerStackExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerStackExecutionRequest() = default ;
    TriggerStackExecutionRequest& operator=(const TriggerStackExecutionRequest &) = default ;
    TriggerStackExecutionRequest& operator=(TriggerStackExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->changedFolders_ == nullptr && this->clientToken_ == nullptr && this->codePackagePath_ == nullptr && this->codeVersionId_ == nullptr && this->sourceTriggerId_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline TriggerStackExecutionRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // changedFolders Field Functions 
    bool hasChangedFolders() const { return this->changedFolders_ != nullptr;};
    void deleteChangedFolders() { this->changedFolders_ = nullptr;};
    inline const vector<string> & getChangedFolders() const { DARABONBA_PTR_GET_CONST(changedFolders_, vector<string>) };
    inline vector<string> getChangedFolders() { DARABONBA_PTR_GET(changedFolders_, vector<string>) };
    inline TriggerStackExecutionRequest& setChangedFolders(const vector<string> & changedFolders) { DARABONBA_PTR_SET_VALUE(changedFolders_, changedFolders) };
    inline TriggerStackExecutionRequest& setChangedFolders(vector<string> && changedFolders) { DARABONBA_PTR_SET_RVALUE(changedFolders_, changedFolders) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline TriggerStackExecutionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // codePackagePath Field Functions 
    bool hasCodePackagePath() const { return this->codePackagePath_ != nullptr;};
    void deleteCodePackagePath() { this->codePackagePath_ = nullptr;};
    inline string getCodePackagePath() const { DARABONBA_PTR_GET_DEFAULT(codePackagePath_, "") };
    inline TriggerStackExecutionRequest& setCodePackagePath(string codePackagePath) { DARABONBA_PTR_SET_VALUE(codePackagePath_, codePackagePath) };


    // codeVersionId Field Functions 
    bool hasCodeVersionId() const { return this->codeVersionId_ != nullptr;};
    void deleteCodeVersionId() { this->codeVersionId_ = nullptr;};
    inline string getCodeVersionId() const { DARABONBA_PTR_GET_DEFAULT(codeVersionId_, "") };
    inline TriggerStackExecutionRequest& setCodeVersionId(string codeVersionId) { DARABONBA_PTR_SET_VALUE(codeVersionId_, codeVersionId) };


    // sourceTriggerId Field Functions 
    bool hasSourceTriggerId() const { return this->sourceTriggerId_ != nullptr;};
    void deleteSourceTriggerId() { this->sourceTriggerId_ = nullptr;};
    inline string getSourceTriggerId() const { DARABONBA_PTR_GET_DEFAULT(sourceTriggerId_, "") };
    inline TriggerStackExecutionRequest& setSourceTriggerId(string sourceTriggerId) { DARABONBA_PTR_SET_VALUE(sourceTriggerId_, sourceTriggerId) };


  protected:
    // The execution action. Valid values:
    // - terraform plan
    // - terraform apply
    // - state detect
    // [_single.params.body.props.action.enum.terraform plan]Terraform preview.
    // [_single.params.body.props.action.enum.terraform apply]Terraform execution.
    // [_single.params.body.props.action.enum.state detect]State detection.
    // 
    // This parameter is required.
    shared_ptr<string> action_ {};
    // The collection of changed files. You can specify only the directory of the changed files.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> changedFolders_ {};
    // The idempotency token. Format: [0-9a-zA-Z-]{1,64}. Use a UUID.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The stack code path. Currently, only stacks created by using infrastructure as code (IaC) templates are supported. Parameter format: iacservice::{moduleId}
    // 
    // This parameter is required.
    shared_ptr<string> codePackagePath_ {};
    // The code version that triggers the stack.
    shared_ptr<string> codeVersionId_ {};
    // The trigger ID of the source plan. This parameter can be specified only for terraform apply. This parameter is required when confirming a plan generated by terraform destroy.
    shared_ptr<string> sourceTriggerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
