// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class DeletePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIdList, policyIdList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIdList, policyIdList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeletePolicyRequest() = default ;
    DeletePolicyRequest(const DeletePolicyRequest &) = default ;
    DeletePolicyRequest(DeletePolicyRequest &&) = default ;
    DeletePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyRequest() = default ;
    DeletePolicyRequest& operator=(const DeletePolicyRequest &) = default ;
    DeletePolicyRequest& operator=(DeletePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyIdList_ == nullptr
        && return this->regionId_ == nullptr; };
    // policyIdList Field Functions 
    bool hasPolicyIdList() const { return this->policyIdList_ != nullptr;};
    void deletePolicyIdList() { this->policyIdList_ = nullptr;};
    inline const vector<int64_t> & policyIdList() const { DARABONBA_PTR_GET_CONST(policyIdList_, vector<int64_t>) };
    inline vector<int64_t> policyIdList() { DARABONBA_PTR_GET(policyIdList_, vector<int64_t>) };
    inline DeletePolicyRequest& setPolicyIdList(const vector<int64_t> & policyIdList) { DARABONBA_PTR_SET_VALUE(policyIdList_, policyIdList) };
    inline DeletePolicyRequest& setPolicyIdList(vector<int64_t> && policyIdList) { DARABONBA_PTR_SET_RVALUE(policyIdList_, policyIdList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeletePolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // List of detection policy IDs
    std::shared_ptr<vector<int64_t>> policyIdList_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
