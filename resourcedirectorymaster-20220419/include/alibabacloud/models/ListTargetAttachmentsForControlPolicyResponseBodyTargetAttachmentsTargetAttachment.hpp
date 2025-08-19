// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETATTACHMENTSFORCONTROLPOLICYRESPONSEBODYTARGETATTACHMENTSTARGETATTACHMENT_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETATTACHMENTSFORCONTROLPOLICYRESPONSEBODYTARGETATTACHMENTSTARGETATTACHMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment& obj) { 
      DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment() = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment(const ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment &) = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment(ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment &&) = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment() = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment& operator=(const ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment &) = default ;
    ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment& operator=(ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachDate_ != nullptr
        && this->targetId_ != nullptr && this->targetName_ != nullptr && this->targetType_ != nullptr; };
    // attachDate Field Functions 
    bool hasAttachDate() const { return this->attachDate_ != nullptr;};
    void deleteAttachDate() { this->attachDate_ = nullptr;};
    inline string attachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
    inline ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListTargetAttachmentsForControlPolicyResponseBodyTargetAttachmentsTargetAttachment& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The time when the access control policy was attached to the object.
    std::shared_ptr<string> attachDate_ = nullptr;
    // The ID of the object.
    std::shared_ptr<string> targetId_ = nullptr;
    // The name of the object.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   Root: Root folder
    // *   Folder: subfolder of the Root folder
    // *   Account: member
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
