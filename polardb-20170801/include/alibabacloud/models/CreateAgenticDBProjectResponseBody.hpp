// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICDBPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICDBPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAgenticDBProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticDBProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BranchComputeClusterId, branchComputeClusterId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultBranchId, defaultBranchId_);
      DARABONBA_PTR_TO_JSON(DefaultBranchName, defaultBranchName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticDBProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchComputeClusterId, branchComputeClusterId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultBranchId, defaultBranchId_);
      DARABONBA_PTR_FROM_JSON(DefaultBranchName, defaultBranchName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    CreateAgenticDBProjectResponseBody() = default ;
    CreateAgenticDBProjectResponseBody(const CreateAgenticDBProjectResponseBody &) = default ;
    CreateAgenticDBProjectResponseBody(CreateAgenticDBProjectResponseBody &&) = default ;
    CreateAgenticDBProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticDBProjectResponseBody() = default ;
    CreateAgenticDBProjectResponseBody& operator=(const CreateAgenticDBProjectResponseBody &) = default ;
    CreateAgenticDBProjectResponseBody& operator=(CreateAgenticDBProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchComputeClusterId_ == nullptr
        && this->createTime_ == nullptr && this->defaultBranchId_ == nullptr && this->defaultBranchName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->requestId_ == nullptr && this->tenantId_ == nullptr; };
    // branchComputeClusterId Field Functions 
    bool hasBranchComputeClusterId() const { return this->branchComputeClusterId_ != nullptr;};
    void deleteBranchComputeClusterId() { this->branchComputeClusterId_ = nullptr;};
    inline string getBranchComputeClusterId() const { DARABONBA_PTR_GET_DEFAULT(branchComputeClusterId_, "") };
    inline CreateAgenticDBProjectResponseBody& setBranchComputeClusterId(string branchComputeClusterId) { DARABONBA_PTR_SET_VALUE(branchComputeClusterId_, branchComputeClusterId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateAgenticDBProjectResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultBranchId Field Functions 
    bool hasDefaultBranchId() const { return this->defaultBranchId_ != nullptr;};
    void deleteDefaultBranchId() { this->defaultBranchId_ = nullptr;};
    inline string getDefaultBranchId() const { DARABONBA_PTR_GET_DEFAULT(defaultBranchId_, "") };
    inline CreateAgenticDBProjectResponseBody& setDefaultBranchId(string defaultBranchId) { DARABONBA_PTR_SET_VALUE(defaultBranchId_, defaultBranchId) };


    // defaultBranchName Field Functions 
    bool hasDefaultBranchName() const { return this->defaultBranchName_ != nullptr;};
    void deleteDefaultBranchName() { this->defaultBranchName_ = nullptr;};
    inline string getDefaultBranchName() const { DARABONBA_PTR_GET_DEFAULT(defaultBranchName_, "") };
    inline CreateAgenticDBProjectResponseBody& setDefaultBranchName(string defaultBranchName) { DARABONBA_PTR_SET_VALUE(defaultBranchName_, defaultBranchName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateAgenticDBProjectResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateAgenticDBProjectResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgenticDBProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateAgenticDBProjectResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the compute instance associated with the default branch.
    shared_ptr<string> branchComputeClusterId_ {};
    // The time when the project was created.
    shared_ptr<string> createTime_ {};
    // The default branch ID.
    shared_ptr<string> defaultBranchId_ {};
    // The default branch name.
    shared_ptr<string> defaultBranchName_ {};
    // The ID of the new project.
    shared_ptr<string> projectId_ {};
    // The project name.
    shared_ptr<string> projectName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
