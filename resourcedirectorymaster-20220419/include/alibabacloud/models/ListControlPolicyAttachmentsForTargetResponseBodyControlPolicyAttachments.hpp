// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETRESPONSEBODYCONTROLPOLICYATTACHMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETRESPONSEBODYCONTROLPOLICYATTACHMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicyAttachment, controlPolicyAttachment_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicyAttachment, controlPolicyAttachment_);
    };
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments() = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments(const ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments &) = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments(ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments &&) = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments() = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments& operator=(const ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments &) = default ;
    ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments& operator=(ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->controlPolicyAttachment_ != nullptr; };
    // controlPolicyAttachment Field Functions 
    bool hasControlPolicyAttachment() const { return this->controlPolicyAttachment_ != nullptr;};
    void deleteControlPolicyAttachment() { this->controlPolicyAttachment_ = nullptr;};
    inline const vector<Models::ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment> & controlPolicyAttachment() const { DARABONBA_PTR_GET_CONST(controlPolicyAttachment_, vector<Models::ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment>) };
    inline vector<Models::ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment> controlPolicyAttachment() { DARABONBA_PTR_GET(controlPolicyAttachment_, vector<Models::ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment>) };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments& setControlPolicyAttachment(const vector<Models::ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment> & controlPolicyAttachment) { DARABONBA_PTR_SET_VALUE(controlPolicyAttachment_, controlPolicyAttachment) };
    inline ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachments& setControlPolicyAttachment(vector<Models::ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment> && controlPolicyAttachment) { DARABONBA_PTR_SET_RVALUE(controlPolicyAttachment_, controlPolicyAttachment) };


  protected:
    std::shared_ptr<vector<Models::ListControlPolicyAttachmentsForTargetResponseBodyControlPolicyAttachmentsControlPolicyAttachment>> controlPolicyAttachment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
