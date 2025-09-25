// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTEGRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTEGRATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateIntegrationPolicyRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateIntegrationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(feePackage, feePackage_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(feePackage, feePackage_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    UpdateIntegrationPolicyRequest() = default ;
    UpdateIntegrationPolicyRequest(const UpdateIntegrationPolicyRequest &) = default ;
    UpdateIntegrationPolicyRequest(UpdateIntegrationPolicyRequest &&) = default ;
    UpdateIntegrationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntegrationPolicyRequest() = default ;
    UpdateIntegrationPolicyRequest& operator=(const UpdateIntegrationPolicyRequest &) = default ;
    UpdateIntegrationPolicyRequest& operator=(UpdateIntegrationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feePackage_ != nullptr
        && this->policyName_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // feePackage Field Functions 
    bool hasFeePackage() const { return this->feePackage_ != nullptr;};
    void deleteFeePackage() { this->feePackage_ = nullptr;};
    inline string feePackage() const { DARABONBA_PTR_GET_DEFAULT(feePackage_, "") };
    inline UpdateIntegrationPolicyRequest& setFeePackage(string feePackage) { DARABONBA_PTR_SET_VALUE(feePackage_, feePackage) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdateIntegrationPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateIntegrationPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateIntegrationPolicyRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateIntegrationPolicyRequestTags>) };
    inline vector<UpdateIntegrationPolicyRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UpdateIntegrationPolicyRequestTags>) };
    inline UpdateIntegrationPolicyRequest& setTags(const vector<UpdateIntegrationPolicyRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateIntegrationPolicyRequest& setTags(vector<UpdateIntegrationPolicyRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> feePackage_ = nullptr;
    std::shared_ptr<string> policyName_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<UpdateIntegrationPolicyRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
