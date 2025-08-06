// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDRIVESPACESRESPONSEBODYSPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTDRIVESPACESRESPONSEBODYSPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListDriveSpacesResponseBodySpaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDriveSpacesResponseBodySpaces& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(PermissionMode, permissionMode_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(SpaceName, spaceName_);
      DARABONBA_PTR_TO_JSON(SpaceType, spaceType_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
    };
    friend void from_json(const Darabonba::Json& j, ListDriveSpacesResponseBodySpaces& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(PermissionMode, permissionMode_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(SpaceName, spaceName_);
      DARABONBA_PTR_FROM_JSON(SpaceType, spaceType_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
    };
    ListDriveSpacesResponseBodySpaces() = default ;
    ListDriveSpacesResponseBodySpaces(const ListDriveSpacesResponseBodySpaces &) = default ;
    ListDriveSpacesResponseBodySpaces(ListDriveSpacesResponseBodySpaces &&) = default ;
    ListDriveSpacesResponseBodySpaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDriveSpacesResponseBodySpaces() = default ;
    ListDriveSpacesResponseBodySpaces& operator=(const ListDriveSpacesResponseBodySpaces &) = default ;
    ListDriveSpacesResponseBodySpaces& operator=(ListDriveSpacesResponseBodySpaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->modifyTime_ != nullptr && this->permissionMode_ != nullptr && this->quota_ != nullptr && this->spaceId_ != nullptr && this->spaceName_ != nullptr
        && this->spaceType_ != nullptr && this->usedQuota_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDriveSpacesResponseBodySpaces& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListDriveSpacesResponseBodySpaces& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // permissionMode Field Functions 
    bool hasPermissionMode() const { return this->permissionMode_ != nullptr;};
    void deletePermissionMode() { this->permissionMode_ = nullptr;};
    inline string permissionMode() const { DARABONBA_PTR_GET_DEFAULT(permissionMode_, "") };
    inline ListDriveSpacesResponseBodySpaces& setPermissionMode(string permissionMode) { DARABONBA_PTR_SET_VALUE(permissionMode_, permissionMode) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline ListDriveSpacesResponseBodySpaces& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline ListDriveSpacesResponseBodySpaces& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // spaceName Field Functions 
    bool hasSpaceName() const { return this->spaceName_ != nullptr;};
    void deleteSpaceName() { this->spaceName_ = nullptr;};
    inline string spaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
    inline ListDriveSpacesResponseBodySpaces& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline ListDriveSpacesResponseBodySpaces& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline int64_t usedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0L) };
    inline ListDriveSpacesResponseBodySpaces& setUsedQuota(int64_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> permissionMode_ = nullptr;
    std::shared_ptr<int64_t> quota_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<string> spaceName_ = nullptr;
    std::shared_ptr<string> spaceType_ = nullptr;
    std::shared_ptr<int64_t> usedQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
