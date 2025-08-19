// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITEACCOUNTTORESOURCEDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVITEACCOUNTTORESOURCEDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InviteAccountToResourceDirectoryRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class InviteAccountToResourceDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteAccountToResourceDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetEntity, targetEntity_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, InviteAccountToResourceDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ParentFolderId, parentFolderId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetEntity, targetEntity_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    InviteAccountToResourceDirectoryRequest() = default ;
    InviteAccountToResourceDirectoryRequest(const InviteAccountToResourceDirectoryRequest &) = default ;
    InviteAccountToResourceDirectoryRequest(InviteAccountToResourceDirectoryRequest &&) = default ;
    InviteAccountToResourceDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteAccountToResourceDirectoryRequest() = default ;
    InviteAccountToResourceDirectoryRequest& operator=(const InviteAccountToResourceDirectoryRequest &) = default ;
    InviteAccountToResourceDirectoryRequest& operator=(InviteAccountToResourceDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->note_ != nullptr
        && this->parentFolderId_ != nullptr && this->tag_ != nullptr && this->targetEntity_ != nullptr && this->targetType_ != nullptr; };
    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline InviteAccountToResourceDirectoryRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // parentFolderId Field Functions 
    bool hasParentFolderId() const { return this->parentFolderId_ != nullptr;};
    void deleteParentFolderId() { this->parentFolderId_ = nullptr;};
    inline string parentFolderId() const { DARABONBA_PTR_GET_DEFAULT(parentFolderId_, "") };
    inline InviteAccountToResourceDirectoryRequest& setParentFolderId(string parentFolderId) { DARABONBA_PTR_SET_VALUE(parentFolderId_, parentFolderId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<InviteAccountToResourceDirectoryRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<InviteAccountToResourceDirectoryRequestTag>) };
    inline vector<InviteAccountToResourceDirectoryRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<InviteAccountToResourceDirectoryRequestTag>) };
    inline InviteAccountToResourceDirectoryRequest& setTag(const vector<InviteAccountToResourceDirectoryRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline InviteAccountToResourceDirectoryRequest& setTag(vector<InviteAccountToResourceDirectoryRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetEntity Field Functions 
    bool hasTargetEntity() const { return this->targetEntity_ != nullptr;};
    void deleteTargetEntity() { this->targetEntity_ = nullptr;};
    inline string targetEntity() const { DARABONBA_PTR_GET_DEFAULT(targetEntity_, "") };
    inline InviteAccountToResourceDirectoryRequest& setTargetEntity(string targetEntity) { DARABONBA_PTR_SET_VALUE(targetEntity_, targetEntity) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline InviteAccountToResourceDirectoryRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The description of the invitation.
    // 
    // The description can be up to 1,024 characters in length.
    std::shared_ptr<string> note_ = nullptr;
    // The ID of the parent folder.
    std::shared_ptr<string> parentFolderId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<InviteAccountToResourceDirectoryRequestTag>> tag_ = nullptr;
    // The ID or logon email address of the account that you want to invite.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetEntity_ = nullptr;
    // The type of the invited account. Valid values:
    // 
    // *   Account: indicates the ID of the account.
    // *   Email: indicates the logon email address of the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
