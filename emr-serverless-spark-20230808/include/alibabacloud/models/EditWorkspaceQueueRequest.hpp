// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITWORKSPACEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITWORKSPACEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EditWorkspaceQueueRequestResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class EditWorkspaceQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditWorkspaceQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceQueueName, workspaceQueueName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EditWorkspaceQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(resourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceQueueName, workspaceQueueName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    EditWorkspaceQueueRequest() = default ;
    EditWorkspaceQueueRequest(const EditWorkspaceQueueRequest &) = default ;
    EditWorkspaceQueueRequest(EditWorkspaceQueueRequest &&) = default ;
    EditWorkspaceQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditWorkspaceQueueRequest() = default ;
    EditWorkspaceQueueRequest& operator=(const EditWorkspaceQueueRequest &) = default ;
    EditWorkspaceQueueRequest& operator=(EditWorkspaceQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environments_ != nullptr
        && this->resourceSpec_ != nullptr && this->workspaceId_ != nullptr && this->workspaceQueueName_ != nullptr && this->regionId_ != nullptr; };
    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<string> & environments() const { DARABONBA_PTR_GET_CONST(environments_, vector<string>) };
    inline vector<string> environments() { DARABONBA_PTR_GET(environments_, vector<string>) };
    inline EditWorkspaceQueueRequest& setEnvironments(const vector<string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline EditWorkspaceQueueRequest& setEnvironments(vector<string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const EditWorkspaceQueueRequestResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, EditWorkspaceQueueRequestResourceSpec) };
    inline EditWorkspaceQueueRequestResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, EditWorkspaceQueueRequestResourceSpec) };
    inline EditWorkspaceQueueRequest& setResourceSpec(const EditWorkspaceQueueRequestResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline EditWorkspaceQueueRequest& setResourceSpec(EditWorkspaceQueueRequestResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline EditWorkspaceQueueRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceQueueName Field Functions 
    bool hasWorkspaceQueueName() const { return this->workspaceQueueName_ != nullptr;};
    void deleteWorkspaceQueueName() { this->workspaceQueueName_ = nullptr;};
    inline string workspaceQueueName() const { DARABONBA_PTR_GET_DEFAULT(workspaceQueueName_, "") };
    inline EditWorkspaceQueueRequest& setWorkspaceQueueName(string workspaceQueueName) { DARABONBA_PTR_SET_VALUE(workspaceQueueName_, workspaceQueueName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EditWorkspaceQueueRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<vector<string>> environments_ = nullptr;
    std::shared_ptr<EditWorkspaceQueueRequestResourceSpec> resourceSpec_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceQueueName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
