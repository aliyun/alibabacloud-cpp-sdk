// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSRESPONSEBODYPOLICYATTACHMENTSPOLICYATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSRESPONSEBODYPOLICYATTACHMENTSPOLICYATTACHMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& obj) { 
      DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment() = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment(const ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment &) = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment(ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment &&) = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment() = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& operator=(const ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment &) = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& operator=(ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachDate_ == nullptr
        && return this->description_ == nullptr && return this->policyName_ == nullptr && return this->policyType_ == nullptr && return this->principalName_ == nullptr && return this->principalType_ == nullptr
        && return this->resourceGroupId_ == nullptr; };
    // attachDate Field Functions 
    bool hasAttachDate() const { return this->attachDate_ != nullptr;};
    void deleteAttachDate() { this->attachDate_ = nullptr;};
    inline string attachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // principalName Field Functions 
    bool hasPrincipalName() const { return this->principalName_ != nullptr;};
    void deletePrincipalName() { this->principalName_ = nullptr;};
    inline string principalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string principalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The time when the permission policy is attached.
    std::shared_ptr<string> attachDate_ = nullptr;
    // The description of the permission policy.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the permission policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the permission policy. Valid values:
    // 
    // *   Custom
    // *   System
    std::shared_ptr<string> policyType_ = nullptr;
    // The name of the object to which the permission policy is attached.
    std::shared_ptr<string> principalName_ = nullptr;
    // The type of the object to which the permission policy is attached. Valid values:
    // 
    // *   IMSUser: RAM user
    // *   IMSGroup: RAM user group
    // *   ServiceRole: RAM role
    std::shared_ptr<string> principalType_ = nullptr;
    // The ID of the resource group or the ID of the Alibaba Cloud account to which the resource group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
