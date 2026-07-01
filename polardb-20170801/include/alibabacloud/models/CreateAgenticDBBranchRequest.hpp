// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICDBBRANCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICDBBRANCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAgenticDBBranchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticDBBranchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticDBBranchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    CreateAgenticDBBranchRequest() = default ;
    CreateAgenticDBBranchRequest(const CreateAgenticDBBranchRequest &) = default ;
    CreateAgenticDBBranchRequest(CreateAgenticDBBranchRequest &&) = default ;
    CreateAgenticDBBranchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticDBBranchRequest() = default ;
    CreateAgenticDBBranchRequest& operator=(const CreateAgenticDBBranchRequest &) = default ;
    CreateAgenticDBBranchRequest& operator=(CreateAgenticDBBranchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchName_ == nullptr
        && this->DBClusterId_ == nullptr && this->description_ == nullptr && this->parentBranchId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr
        && this->tenantId_ == nullptr; };
    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline CreateAgenticDBBranchRequest& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAgenticDBBranchRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgenticDBBranchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parentBranchId Field Functions 
    bool hasParentBranchId() const { return this->parentBranchId_ != nullptr;};
    void deleteParentBranchId() { this->parentBranchId_ = nullptr;};
    inline string getParentBranchId() const { DARABONBA_PTR_GET_DEFAULT(parentBranchId_, "") };
    inline CreateAgenticDBBranchRequest& setParentBranchId(string parentBranchId) { DARABONBA_PTR_SET_VALUE(parentBranchId_, parentBranchId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateAgenticDBBranchRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAgenticDBBranchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateAgenticDBBranchRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The name of the branch.
    // 
    // This parameter is required.
    shared_ptr<string> branchName_ {};
    // The AgenticDB cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The description of the branch.
    shared_ptr<string> description_ {};
    // The ID of the parent branch. If this parameter is not specified, the branch is derived from the main branch by default.
    shared_ptr<string> parentBranchId_ {};
    // The ID of the project to which the branch belongs.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the tenant to which the branch belongs.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
