// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHLINEAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBBRANCHLINEAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBBranchLineageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBBranchLineageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(IncludeDestroying, includeDestroying_);
      DARABONBA_PTR_TO_JSON(MaxViewDepth, maxViewDepth_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBBranchLineageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(IncludeDestroying, includeDestroying_);
      DARABONBA_PTR_FROM_JSON(MaxViewDepth, maxViewDepth_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribeAgenticDBBranchLineageRequest() = default ;
    DescribeAgenticDBBranchLineageRequest(const DescribeAgenticDBBranchLineageRequest &) = default ;
    DescribeAgenticDBBranchLineageRequest(DescribeAgenticDBBranchLineageRequest &&) = default ;
    DescribeAgenticDBBranchLineageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBBranchLineageRequest() = default ;
    DescribeAgenticDBBranchLineageRequest& operator=(const DescribeAgenticDBBranchLineageRequest &) = default ;
    DescribeAgenticDBBranchLineageRequest& operator=(DescribeAgenticDBBranchLineageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchId_ == nullptr
        && this->DBClusterId_ == nullptr && this->includeDestroying_ == nullptr && this->maxViewDepth_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr
        && this->tenantId_ == nullptr; };
    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline DescribeAgenticDBBranchLineageRequest& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAgenticDBBranchLineageRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // includeDestroying Field Functions 
    bool hasIncludeDestroying() const { return this->includeDestroying_ != nullptr;};
    void deleteIncludeDestroying() { this->includeDestroying_ = nullptr;};
    inline bool getIncludeDestroying() const { DARABONBA_PTR_GET_DEFAULT(includeDestroying_, false) };
    inline DescribeAgenticDBBranchLineageRequest& setIncludeDestroying(bool includeDestroying) { DARABONBA_PTR_SET_VALUE(includeDestroying_, includeDestroying) };


    // maxViewDepth Field Functions 
    bool hasMaxViewDepth() const { return this->maxViewDepth_ != nullptr;};
    void deleteMaxViewDepth() { this->maxViewDepth_ = nullptr;};
    inline int32_t getMaxViewDepth() const { DARABONBA_PTR_GET_DEFAULT(maxViewDepth_, 0) };
    inline DescribeAgenticDBBranchLineageRequest& setMaxViewDepth(int32_t maxViewDepth) { DARABONBA_PTR_SET_VALUE(maxViewDepth_, maxViewDepth) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeAgenticDBBranchLineageRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAgenticDBBranchLineageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeAgenticDBBranchLineageRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The anchor branch ID. If this parameter is not specified, the primary branch of the project is used by default.
    shared_ptr<string> branchId_ {};
    // The AgenticDB cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to include branches in the Destroying state. Default value: false.
    shared_ptr<bool> includeDestroying_ {};
    shared_ptr<int32_t> maxViewDepth_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
