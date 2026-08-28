// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHANDDELETEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHANDDELETEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DetachAndDeletePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachAndDeletePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(policyAttachmentId, policyAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachAndDeletePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(policyAttachmentId, policyAttachmentId_);
    };
    DetachAndDeletePolicyRequest() = default ;
    DetachAndDeletePolicyRequest(const DetachAndDeletePolicyRequest &) = default ;
    DetachAndDeletePolicyRequest(DetachAndDeletePolicyRequest &&) = default ;
    DetachAndDeletePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachAndDeletePolicyRequest() = default ;
    DetachAndDeletePolicyRequest& operator=(const DetachAndDeletePolicyRequest &) = default ;
    DetachAndDeletePolicyRequest& operator=(DetachAndDeletePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyAttachmentId_ == nullptr; };
    // policyAttachmentId Field Functions 
    bool hasPolicyAttachmentId() const { return this->policyAttachmentId_ != nullptr;};
    void deletePolicyAttachmentId() { this->policyAttachmentId_ = nullptr;};
    inline string getPolicyAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(policyAttachmentId_, "") };
    inline DetachAndDeletePolicyRequest& setPolicyAttachmentId(string policyAttachmentId) { DARABONBA_PTR_SET_VALUE(policyAttachmentId_, policyAttachmentId) };


  protected:
    // The policy association ID.
    shared_ptr<string> policyAttachmentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
