// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBRANCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBRANCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteBranchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBranchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BranchId, branchId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBranchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteBranchRequest() = default ;
    DeleteBranchRequest(const DeleteBranchRequest &) = default ;
    DeleteBranchRequest(DeleteBranchRequest &&) = default ;
    DeleteBranchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBranchRequest() = default ;
    DeleteBranchRequest& operator=(const DeleteBranchRequest &) = default ;
    DeleteBranchRequest& operator=(DeleteBranchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchId_ == nullptr
        && this->regionId_ == nullptr; };
    // branchId Field Functions 
    bool hasBranchId() const { return this->branchId_ != nullptr;};
    void deleteBranchId() { this->branchId_ = nullptr;};
    inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
    inline DeleteBranchRequest& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteBranchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The branch ID that uniquely identifies a Supabase branch.
    // 
    // This parameter is required.
    shared_ptr<string> branchId_ {};
    // The region ID. This parameter is required when you create a primary branch. When you create a child branch, the region is inherited from the primary branch by default.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
