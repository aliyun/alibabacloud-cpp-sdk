// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILEPERMISSIONMEMBER_HPP_
#define ALIBABACLOUD_MODELS_FILEPERMISSIONMEMBER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FilePermissionMemberCdsIdentity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class FilePermissionMember : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilePermissionMember& obj) { 
      DARABONBA_PTR_TO_JSON(CdsIdentity, cdsIdentity_);
      DARABONBA_PTR_TO_JSON(DisinheritSubGroup, disinheritSubGroup_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, FilePermissionMember& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsIdentity, cdsIdentity_);
      DARABONBA_PTR_FROM_JSON(DisinheritSubGroup, disinheritSubGroup_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    FilePermissionMember() = default ;
    FilePermissionMember(const FilePermissionMember &) = default ;
    FilePermissionMember(FilePermissionMember &&) = default ;
    FilePermissionMember(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilePermissionMember() = default ;
    FilePermissionMember& operator=(const FilePermissionMember &) = default ;
    FilePermissionMember& operator=(FilePermissionMember &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdsIdentity_ != nullptr
        && this->disinheritSubGroup_ != nullptr && this->expireTime_ != nullptr && this->roleId_ != nullptr; };
    // cdsIdentity Field Functions 
    bool hasCdsIdentity() const { return this->cdsIdentity_ != nullptr;};
    void deleteCdsIdentity() { this->cdsIdentity_ = nullptr;};
    inline const FilePermissionMemberCdsIdentity & cdsIdentity() const { DARABONBA_PTR_GET_CONST(cdsIdentity_, FilePermissionMemberCdsIdentity) };
    inline FilePermissionMemberCdsIdentity cdsIdentity() { DARABONBA_PTR_GET(cdsIdentity_, FilePermissionMemberCdsIdentity) };
    inline FilePermissionMember& setCdsIdentity(const FilePermissionMemberCdsIdentity & cdsIdentity) { DARABONBA_PTR_SET_VALUE(cdsIdentity_, cdsIdentity) };
    inline FilePermissionMember& setCdsIdentity(FilePermissionMemberCdsIdentity && cdsIdentity) { DARABONBA_PTR_SET_RVALUE(cdsIdentity_, cdsIdentity) };


    // disinheritSubGroup Field Functions 
    bool hasDisinheritSubGroup() const { return this->disinheritSubGroup_ != nullptr;};
    void deleteDisinheritSubGroup() { this->disinheritSubGroup_ = nullptr;};
    inline bool disinheritSubGroup() const { DARABONBA_PTR_GET_DEFAULT(disinheritSubGroup_, false) };
    inline FilePermissionMember& setDisinheritSubGroup(bool disinheritSubGroup) { DARABONBA_PTR_SET_VALUE(disinheritSubGroup_, disinheritSubGroup) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline FilePermissionMember& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline FilePermissionMember& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // This parameter is required.
    std::shared_ptr<FilePermissionMemberCdsIdentity> cdsIdentity_ = nullptr;
    std::shared_ptr<bool> disinheritSubGroup_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
