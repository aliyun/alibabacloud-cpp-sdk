// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDATTACHPOLICYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDATTACHPOLICYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Attachment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateAndAttachPolicyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndAttachPolicyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(attachment, attachment_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndAttachPolicyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(attachment, attachment_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
    };
    CreateAndAttachPolicyResponseBodyData() = default ;
    CreateAndAttachPolicyResponseBodyData(const CreateAndAttachPolicyResponseBodyData &) = default ;
    CreateAndAttachPolicyResponseBodyData(CreateAndAttachPolicyResponseBodyData &&) = default ;
    CreateAndAttachPolicyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndAttachPolicyResponseBodyData() = default ;
    CreateAndAttachPolicyResponseBodyData& operator=(const CreateAndAttachPolicyResponseBodyData &) = default ;
    CreateAndAttachPolicyResponseBodyData& operator=(CreateAndAttachPolicyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachment_ == nullptr
        && return this->policyId_ == nullptr; };
    // attachment Field Functions 
    bool hasAttachment() const { return this->attachment_ != nullptr;};
    void deleteAttachment() { this->attachment_ = nullptr;};
    inline const Models::Attachment & attachment() const { DARABONBA_PTR_GET_CONST(attachment_, Models::Attachment) };
    inline Models::Attachment attachment() { DARABONBA_PTR_GET(attachment_, Models::Attachment) };
    inline CreateAndAttachPolicyResponseBodyData& setAttachment(const Models::Attachment & attachment) { DARABONBA_PTR_SET_VALUE(attachment_, attachment) };
    inline CreateAndAttachPolicyResponseBodyData& setAttachment(Models::Attachment && attachment) { DARABONBA_PTR_SET_RVALUE(attachment_, attachment) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreateAndAttachPolicyResponseBodyData& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The association information of the policy.
    std::shared_ptr<Models::Attachment> attachment_ = nullptr;
    // The policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
