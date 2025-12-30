// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYGROUPSREQUEST_HPP_
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
  class DeletePolicyGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeletePolicyGroupsRequest() = default ;
    DeletePolicyGroupsRequest(const DeletePolicyGroupsRequest &) = default ;
    DeletePolicyGroupsRequest(DeletePolicyGroupsRequest &&) = default ;
    DeletePolicyGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyGroupsRequest() = default ;
    DeletePolicyGroupsRequest& operator=(const DeletePolicyGroupsRequest &) = default ;
    DeletePolicyGroupsRequest& operator=(DeletePolicyGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyGroupId_ == nullptr
        && this->regionId_ == nullptr; };
    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline const vector<string> & getPolicyGroupId() const { DARABONBA_PTR_GET_CONST(policyGroupId_, vector<string>) };
    inline vector<string> getPolicyGroupId() { DARABONBA_PTR_GET(policyGroupId_, vector<string>) };
    inline DeletePolicyGroupsRequest& setPolicyGroupId(const vector<string> & policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };
    inline DeletePolicyGroupsRequest& setPolicyGroupId(vector<string> && policyGroupId) { DARABONBA_PTR_SET_RVALUE(policyGroupId_, policyGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeletePolicyGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cloud computer policy IDs. You can specify 1 to 100 policies.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> policyGroupId_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by EDS.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
