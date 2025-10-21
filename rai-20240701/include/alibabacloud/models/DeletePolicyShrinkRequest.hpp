// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class DeletePolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIdList, policyIdListShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIdList, policyIdListShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeletePolicyShrinkRequest() = default ;
    DeletePolicyShrinkRequest(const DeletePolicyShrinkRequest &) = default ;
    DeletePolicyShrinkRequest(DeletePolicyShrinkRequest &&) = default ;
    DeletePolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyShrinkRequest() = default ;
    DeletePolicyShrinkRequest& operator=(const DeletePolicyShrinkRequest &) = default ;
    DeletePolicyShrinkRequest& operator=(DeletePolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyIdListShrink_ == nullptr
        && return this->regionId_ == nullptr; };
    // policyIdListShrink Field Functions 
    bool hasPolicyIdListShrink() const { return this->policyIdListShrink_ != nullptr;};
    void deletePolicyIdListShrink() { this->policyIdListShrink_ = nullptr;};
    inline string policyIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(policyIdListShrink_, "") };
    inline DeletePolicyShrinkRequest& setPolicyIdListShrink(string policyIdListShrink) { DARABONBA_PTR_SET_VALUE(policyIdListShrink_, policyIdListShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeletePolicyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // List of detection policy IDs
    std::shared_ptr<string> policyIdListShrink_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
