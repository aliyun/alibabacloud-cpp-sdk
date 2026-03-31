// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLICYVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLICYVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class DeletePolicyVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolicyVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolicyVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    DeletePolicyVersionRequest() = default ;
    DeletePolicyVersionRequest(const DeletePolicyVersionRequest &) = default ;
    DeletePolicyVersionRequest(DeletePolicyVersionRequest &&) = default ;
    DeletePolicyVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolicyVersionRequest() = default ;
    DeletePolicyVersionRequest& operator=(const DeletePolicyVersionRequest &) = default ;
    DeletePolicyVersionRequest& operator=(DeletePolicyVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyName_ == nullptr
        && this->versionId_ == nullptr; };
    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DeletePolicyVersionRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline DeletePolicyVersionRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The name of the policy.
    shared_ptr<string> policyName_ {};
    // The ID of the policy version that you want to delete.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
