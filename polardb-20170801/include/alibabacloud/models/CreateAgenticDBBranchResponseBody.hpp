// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICDBBRANCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICDBBRANCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAgenticDBBranchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticDBBranchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BranchComputeClusterId, branchComputeClusterId_);
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(BranchName, branchName_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_TO_JSON(ParentBranchName, parentBranchName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticDBBranchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchComputeClusterId, branchComputeClusterId_);
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
      DARABONBA_PTR_FROM_JSON(ParentBranchName, parentBranchName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateAgenticDBBranchResponseBody() = default ;
    CreateAgenticDBBranchResponseBody(const CreateAgenticDBBranchResponseBody &) = default ;
    CreateAgenticDBBranchResponseBody(CreateAgenticDBBranchResponseBody &&) = default ;
    CreateAgenticDBBranchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticDBBranchResponseBody() = default ;
    CreateAgenticDBBranchResponseBody& operator=(const CreateAgenticDBBranchResponseBody &) = default ;
    CreateAgenticDBBranchResponseBody& operator=(CreateAgenticDBBranchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchComputeClusterId_ == nullptr
        && this->branchId_ == nullptr && this->branchName_ == nullptr && this->DBClusterId_ == nullptr && this->parentBranchId_ == nullptr && this->parentBranchName_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // branchComputeClusterId Field Functions 
    bool hasBranchComputeClusterId() const { return this->branchComputeClusterId_ != nullptr;};
    void deleteBranchComputeClusterId() { this->branchComputeClusterId_ = nullptr;};
    inline string getBranchComputeClusterId() const { DARABONBA_PTR_GET_DEFAULT(branchComputeClusterId_, "") };
    inline CreateAgenticDBBranchResponseBody& setBranchComputeClusterId(string branchComputeClusterId) { DARABONBA_PTR_SET_VALUE(branchComputeClusterId_, branchComputeClusterId) };


    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline CreateAgenticDBBranchResponseBody& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // branchName Field Functions 
    bool hasBranchName() const { return this->branchName_ != nullptr;};
    void deleteBranchName() { this->branchName_ = nullptr;};
    inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
    inline CreateAgenticDBBranchResponseBody& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAgenticDBBranchResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // parentBranchId Field Functions 
    bool hasParentBranchId() const { return this->parentBranchId_ != nullptr;};
    void deleteParentBranchId() { this->parentBranchId_ = nullptr;};
    inline string getParentBranchId() const { DARABONBA_PTR_GET_DEFAULT(parentBranchId_, "") };
    inline CreateAgenticDBBranchResponseBody& setParentBranchId(string parentBranchId) { DARABONBA_PTR_SET_VALUE(parentBranchId_, parentBranchId) };


    // parentBranchName Field Functions 
    bool hasParentBranchName() const { return this->parentBranchName_ != nullptr;};
    void deleteParentBranchName() { this->parentBranchName_ = nullptr;};
    inline string getParentBranchName() const { DARABONBA_PTR_GET_DEFAULT(parentBranchName_, "") };
    inline CreateAgenticDBBranchResponseBody& setParentBranchName(string parentBranchName) { DARABONBA_PTR_SET_VALUE(parentBranchName_, parentBranchName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateAgenticDBBranchResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateAgenticDBBranchResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgenticDBBranchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateAgenticDBBranchResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the compute cluster associated with the branch.
    shared_ptr<string> branchComputeClusterId_ {};
    // The branch ID.
    shared_ptr<string> branchId_ {};
    // The name of the branch.
    shared_ptr<string> branchName_ {};
    // The AgenticDB cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the parent branch.
    shared_ptr<string> parentBranchId_ {};
    // The name of the parent branch.
    shared_ptr<string> parentBranchName_ {};
    // The ID of the project to which the branch belongs.
    shared_ptr<string> projectId_ {};
    // The name of the project to which the branch belongs.
    shared_ptr<string> projectName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the branch.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
