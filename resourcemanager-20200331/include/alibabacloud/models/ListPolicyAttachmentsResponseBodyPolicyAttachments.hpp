// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSRESPONSEBODYPOLICYATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYATTACHMENTSRESPONSEBODYPOLICYATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPolicyAttachmentsResponseBodyPolicyAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyAttachmentsResponseBodyPolicyAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyAttachment, policyAttachment_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyAttachmentsResponseBodyPolicyAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyAttachment, policyAttachment_);
    };
    ListPolicyAttachmentsResponseBodyPolicyAttachments() = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachments(const ListPolicyAttachmentsResponseBodyPolicyAttachments &) = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachments(ListPolicyAttachmentsResponseBodyPolicyAttachments &&) = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyAttachmentsResponseBodyPolicyAttachments() = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachments& operator=(const ListPolicyAttachmentsResponseBodyPolicyAttachments &) = default ;
    ListPolicyAttachmentsResponseBodyPolicyAttachments& operator=(ListPolicyAttachmentsResponseBodyPolicyAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyAttachment_ == nullptr; };
    // policyAttachment Field Functions 
    bool hasPolicyAttachment() const { return this->policyAttachment_ != nullptr;};
    void deletePolicyAttachment() { this->policyAttachment_ = nullptr;};
    inline const vector<Models::ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment> & policyAttachment() const { DARABONBA_PTR_GET_CONST(policyAttachment_, vector<Models::ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment>) };
    inline vector<Models::ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment> policyAttachment() { DARABONBA_PTR_GET(policyAttachment_, vector<Models::ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment>) };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachments& setPolicyAttachment(const vector<Models::ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment> & policyAttachment) { DARABONBA_PTR_SET_VALUE(policyAttachment_, policyAttachment) };
    inline ListPolicyAttachmentsResponseBodyPolicyAttachments& setPolicyAttachment(vector<Models::ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment> && policyAttachment) { DARABONBA_PTR_SET_RVALUE(policyAttachment_, policyAttachment) };


  protected:
    std::shared_ptr<vector<Models::ListPolicyAttachmentsResponseBodyPolicyAttachmentsPolicyAttachment>> policyAttachment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
