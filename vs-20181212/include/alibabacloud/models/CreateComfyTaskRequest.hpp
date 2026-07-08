// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMFYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMFYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class CreateComfyTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComfyTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HiveId, hiveId_);
      DARABONBA_PTR_TO_JSON(UserParameters, userParameters_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComfyTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HiveId, hiveId_);
      DARABONBA_PTR_FROM_JSON(UserParameters, userParameters_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    CreateComfyTaskRequest() = default ;
    CreateComfyTaskRequest(const CreateComfyTaskRequest &) = default ;
    CreateComfyTaskRequest(CreateComfyTaskRequest &&) = default ;
    CreateComfyTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComfyTaskRequest() = default ;
    CreateComfyTaskRequest& operator=(const CreateComfyTaskRequest &) = default ;
    CreateComfyTaskRequest& operator=(CreateComfyTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hiveId_ == nullptr
        && this->userParameters_ == nullptr && this->workflowId_ == nullptr; };
    // hiveId Field Functions 
    bool hasHiveId() const { return this->hiveId_ != nullptr;};
    void deleteHiveId() { this->hiveId_ = nullptr;};
    inline string getHiveId() const { DARABONBA_PTR_GET_DEFAULT(hiveId_, "") };
    inline CreateComfyTaskRequest& setHiveId(string hiveId) { DARABONBA_PTR_SET_VALUE(hiveId_, hiveId) };


    // userParameters Field Functions 
    bool hasUserParameters() const { return this->userParameters_ != nullptr;};
    void deleteUserParameters() { this->userParameters_ = nullptr;};
    inline string getUserParameters() const { DARABONBA_PTR_GET_DEFAULT(userParameters_, "") };
    inline CreateComfyTaskRequest& setUserParameters(string userParameters) { DARABONBA_PTR_SET_VALUE(userParameters_, userParameters) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline CreateComfyTaskRequest& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The ID of the resource pool.
    // 
    // This parameter is required.
    shared_ptr<string> hiveId_ {};
    // The parameters to replace in the workflow.
    // 
    // This parameter is required.
    shared_ptr<string> userParameters_ {};
    // The ID of the Comfy workflow to start.
    // 
    // This parameter is required.
    shared_ptr<string> workflowId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
