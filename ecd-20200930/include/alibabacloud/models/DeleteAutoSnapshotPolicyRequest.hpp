// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAutoSnapshotPolicyRequest() = default ;
    DeleteAutoSnapshotPolicyRequest(const DeleteAutoSnapshotPolicyRequest &) = default ;
    DeleteAutoSnapshotPolicyRequest(DeleteAutoSnapshotPolicyRequest &&) = default ;
    DeleteAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAutoSnapshotPolicyRequest() = default ;
    DeleteAutoSnapshotPolicyRequest& operator=(const DeleteAutoSnapshotPolicyRequest &) = default ;
    DeleteAutoSnapshotPolicyRequest& operator=(DeleteAutoSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr
        && this->regionId_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline const vector<string> & policyId() const { DARABONBA_PTR_GET_CONST(policyId_, vector<string>) };
    inline vector<string> policyId() { DARABONBA_PTR_GET(policyId_, vector<string>) };
    inline DeleteAutoSnapshotPolicyRequest& setPolicyId(const vector<string> & policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };
    inline DeleteAutoSnapshotPolicyRequest& setPolicyId(vector<string> && policyId) { DARABONBA_PTR_SET_RVALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAutoSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the automatic snapshot policies that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> policyId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
