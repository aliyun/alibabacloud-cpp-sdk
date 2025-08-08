// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSIONPERMDETAILSPERMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSIONPERMDETAILSPERMDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(OriginFrom, originFrom_);
      DARABONBA_PTR_TO_JSON(PermType, permType_);
      DARABONBA_PTR_TO_JSON(UserAccessId, userAccessId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(OriginFrom, originFrom_);
      DARABONBA_PTR_FROM_JSON(PermType, permType_);
      DARABONBA_PTR_FROM_JSON(UserAccessId, userAccessId_);
    };
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail() = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail(const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail &) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail(ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail &&) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail() = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& operator=(const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail &) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& operator=(ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createDate_ != nullptr
        && this->expireDate_ != nullptr && this->extraData_ != nullptr && this->originFrom_ != nullptr && this->permType_ != nullptr && this->userAccessId_ != nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string extraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // originFrom Field Functions 
    bool hasOriginFrom() const { return this->originFrom_ != nullptr;};
    void deleteOriginFrom() { this->originFrom_ = nullptr;};
    inline string originFrom() const { DARABONBA_PTR_GET_DEFAULT(originFrom_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& setOriginFrom(string originFrom) { DARABONBA_PTR_SET_VALUE(originFrom_, originFrom) };


    // permType Field Functions 
    bool hasPermType() const { return this->permType_ != nullptr;};
    void deletePermType() { this->permType_ = nullptr;};
    inline string permType() const { DARABONBA_PTR_GET_DEFAULT(permType_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& setPermType(string permType) { DARABONBA_PTR_SET_VALUE(permType_, permType) };


    // userAccessId Field Functions 
    bool hasUserAccessId() const { return this->userAccessId_ != nullptr;};
    void deleteUserAccessId() { this->userAccessId_ = nullptr;};
    inline string userAccessId() const { DARABONBA_PTR_GET_DEFAULT(userAccessId_, "") };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail& setUserAccessId(string userAccessId) { DARABONBA_PTR_SET_VALUE(userAccessId_, userAccessId) };


  protected:
    // The time when the permissions were granted.
    std::shared_ptr<string> createDate_ = nullptr;
    // The time when the permissions expire.
    std::shared_ptr<string> expireDate_ = nullptr;
    // This parameter is reserved.
    std::shared_ptr<string> extraData_ = nullptr;
    // The user who grants the permissions.
    std::shared_ptr<string> originFrom_ = nullptr;
    // The type of the permissions. Valid values:
    // 
    // *   LOGIN: the logon permissions
    // *   PERF: the query permissions on the instance
    std::shared_ptr<string> permType_ = nullptr;
    // The ID of the authorization record.
    std::shared_ptr<string> userAccessId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
