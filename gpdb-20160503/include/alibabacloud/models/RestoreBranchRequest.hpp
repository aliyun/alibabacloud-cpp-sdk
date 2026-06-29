// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREBRANCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREBRANCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class RestoreBranchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreBranchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(PreserveUnderName, preserveUnderName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceBranchId, sourceBranchId_);
      DARABONBA_PTR_TO_JSON(SourceBranchLsn, sourceBranchLsn_);
      DARABONBA_PTR_TO_JSON(SourceBranchTimestamp, sourceBranchTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreBranchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(PreserveUnderName, preserveUnderName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceBranchId, sourceBranchId_);
      DARABONBA_PTR_FROM_JSON(SourceBranchLsn, sourceBranchLsn_);
      DARABONBA_PTR_FROM_JSON(SourceBranchTimestamp, sourceBranchTimestamp_);
    };
    RestoreBranchRequest() = default ;
    RestoreBranchRequest(const RestoreBranchRequest &) = default ;
    RestoreBranchRequest(RestoreBranchRequest &&) = default ;
    RestoreBranchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreBranchRequest() = default ;
    RestoreBranchRequest& operator=(const RestoreBranchRequest &) = default ;
    RestoreBranchRequest& operator=(RestoreBranchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchId_ == nullptr
        && this->clientToken_ == nullptr && this->preserveUnderName_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->sourceBranchId_ == nullptr
        && this->sourceBranchLsn_ == nullptr && this->sourceBranchTimestamp_ == nullptr; };
    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline RestoreBranchRequest& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RestoreBranchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // preserveUnderName Field Functions 
    bool hasPreserveUnderName() const { return this->preserveUnderName_ != nullptr;};
    void deletePreserveUnderName() { this->preserveUnderName_ = nullptr;};
    inline string getPreserveUnderName() const { DARABONBA_PTR_GET_DEFAULT(preserveUnderName_, "") };
    inline RestoreBranchRequest& setPreserveUnderName(string preserveUnderName) { DARABONBA_PTR_SET_VALUE(preserveUnderName_, preserveUnderName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline RestoreBranchRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RestoreBranchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceBranchId Field Functions 
    bool hasSourceBranchId() const { return this->sourceBranchId_ != nullptr;};
    void deleteSourceBranchId() { this->sourceBranchId_ = nullptr;};
    inline string getSourceBranchId() const { DARABONBA_PTR_GET_DEFAULT(sourceBranchId_, "") };
    inline RestoreBranchRequest& setSourceBranchId(string sourceBranchId) { DARABONBA_PTR_SET_VALUE(sourceBranchId_, sourceBranchId) };


    // sourceBranchLsn Field Functions 
    bool hasSourceBranchLsn() const { return this->sourceBranchLsn_ != nullptr;};
    void deleteSourceBranchLsn() { this->sourceBranchLsn_ = nullptr;};
    inline string getSourceBranchLsn() const { DARABONBA_PTR_GET_DEFAULT(sourceBranchLsn_, "") };
    inline RestoreBranchRequest& setSourceBranchLsn(string sourceBranchLsn) { DARABONBA_PTR_SET_VALUE(sourceBranchLsn_, sourceBranchLsn) };


    // sourceBranchTimestamp Field Functions 
    bool hasSourceBranchTimestamp() const { return this->sourceBranchTimestamp_ != nullptr;};
    void deleteSourceBranchTimestamp() { this->sourceBranchTimestamp_ = nullptr;};
    inline string getSourceBranchTimestamp() const { DARABONBA_PTR_GET_DEFAULT(sourceBranchTimestamp_, "") };
    inline RestoreBranchRequest& setSourceBranchTimestamp(string sourceBranchTimestamp) { DARABONBA_PTR_SET_VALUE(sourceBranchTimestamp_, sourceBranchTimestamp) };


  protected:
    // The branch ID that uniquely identifies a Supabase branch.
    // 
    // This parameter is required.
    shared_ptr<string> branchId_ {};
    // The client idempotency token that ensures the idempotence of retry requests.
    shared_ptr<string> clientToken_ {};
    // The backup branch name. If specified, automatic creation of a backup branch is performed before recovery.
    shared_ptr<string> preserveUnderName_ {};
    // The Supabase project ID associated with the primary branch.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID. This parameter is required when you create a primary branch. When you create a sub-branch, the region is inherited from the primary branch by default.
    shared_ptr<string> regionId_ {};
    // The ID of the source branch from which to recover.
    // 
    // This parameter is required.
    shared_ptr<string> sourceBranchId_ {};
    // The LSN of the source branch to recover to.
    shared_ptr<string> sourceBranchLsn_ {};
    // The point in time of the source branch to recover to. The value must be within the recoverable time window.
    shared_ptr<string> sourceBranchTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
