// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETATTACHMENTSFORCONTROLPOLICYRESPONSEBODYTARGETATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETATTACHMENTSFORCONTROLPOLICYRESPONSEBODYTARGETATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(TargetAttachment, targetAttachment_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetAttachment, targetAttachment_);
    };
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments() = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments(const ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments &) = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments(ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments &&) = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments() = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments& operator=(const ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments &) = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments& operator=(ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetAttachment_ == nullptr; };
    // targetAttachment Field Functions 
    bool hasTargetAttachment() const { return this->targetAttachment_ != nullptr;};
    void deleteTargetAttachment() { this->targetAttachment_ = nullptr;};
    inline const vector<Models::ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment> & targetAttachment() const { DARABONBA_PTR_GET_CONST(targetAttachment_, vector<Models::ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment>) };
    inline vector<Models::ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment> targetAttachment() { DARABONBA_PTR_GET(targetAttachment_, vector<Models::ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment>) };
    inline ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments& setTargetAttachment(const vector<Models::ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment> & targetAttachment) { DARABONBA_PTR_SET_VALUE(targetAttachment_, targetAttachment) };
    inline ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachments& setTargetAttachment(vector<Models::ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment> && targetAttachment) { DARABONBA_PTR_SET_RVALUE(targetAttachment_, targetAttachment) };


  protected:
    std::shared_ptr<vector<Models::ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment>> targetAttachment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
