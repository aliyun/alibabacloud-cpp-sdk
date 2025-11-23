// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxExecuteCount, maxExecuteCount_);
      DARABONBA_PTR_TO_JSON(MaxResultCount, maxResultCount_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(RoleNames, roleNames_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UidString, uidString_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxExecuteCount, maxExecuteCount_);
      DARABONBA_PTR_FROM_JSON(MaxResultCount, maxResultCount_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(RoleNames, roleNames_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UidString, uidString_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    UpdateUserRequest() = default ;
    UpdateUserRequest(const UpdateUserRequest &) = default ;
    UpdateUserRequest(UpdateUserRequest &&) = default ;
    UpdateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserRequest() = default ;
    UpdateUserRequest& operator=(const UpdateUserRequest &) = default ;
    UpdateUserRequest& operator=(UpdateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxExecuteCount_ == nullptr
        && return this->maxResultCount_ == nullptr && return this->mobile_ == nullptr && return this->roleNames_ == nullptr && return this->tid_ == nullptr && return this->uid_ == nullptr
        && return this->uidString_ == nullptr && return this->userNick_ == nullptr; };
    // maxExecuteCount Field Functions 
    bool hasMaxExecuteCount() const { return this->maxExecuteCount_ != nullptr;};
    void deleteMaxExecuteCount() { this->maxExecuteCount_ = nullptr;};
    inline int64_t maxExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(maxExecuteCount_, 0L) };
    inline UpdateUserRequest& setMaxExecuteCount(int64_t maxExecuteCount) { DARABONBA_PTR_SET_VALUE(maxExecuteCount_, maxExecuteCount) };


    // maxResultCount Field Functions 
    bool hasMaxResultCount() const { return this->maxResultCount_ != nullptr;};
    void deleteMaxResultCount() { this->maxResultCount_ = nullptr;};
    inline int64_t maxResultCount() const { DARABONBA_PTR_GET_DEFAULT(maxResultCount_, 0L) };
    inline UpdateUserRequest& setMaxResultCount(int64_t maxResultCount) { DARABONBA_PTR_SET_VALUE(maxResultCount_, maxResultCount) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline UpdateUserRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // roleNames Field Functions 
    bool hasRoleNames() const { return this->roleNames_ != nullptr;};
    void deleteRoleNames() { this->roleNames_ = nullptr;};
    inline string roleNames() const { DARABONBA_PTR_GET_DEFAULT(roleNames_, "") };
    inline UpdateUserRequest& setRoleNames(string roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateUserRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline UpdateUserRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // uidString Field Functions 
    bool hasUidString() const { return this->uidString_ != nullptr;};
    void deleteUidString() { this->uidString_ = nullptr;};
    inline string uidString() const { DARABONBA_PTR_GET_DEFAULT(uidString_, "") };
    inline UpdateUserRequest& setUidString(string uidString) { DARABONBA_PTR_SET_VALUE(uidString_, uidString) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline UpdateUserRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // The maximum number of queries that can be performed each day.
    std::shared_ptr<int64_t> maxExecuteCount_ = nullptr;
    // The maximum number of rows that can be queried each day.
    std::shared_ptr<int64_t> maxResultCount_ = nullptr;
    // The DingTalk ID or mobile number of the user.
    std::shared_ptr<string> mobile_ = nullptr;
    // The roles that the user assumes. For more information about the valid values, see the Request parameters section in the [UpdateUser](https://help.aliyun.com/document_detail/465812.html) topic.
    std::shared_ptr<string> roleNames_ = nullptr;
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, log on to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The Alibaba Cloud unique ID (UID) of the user to update.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> uid_ = nullptr;
    // The UID of the String type. If you specify this parameter, the UID of the Long type is replaced.
    std::shared_ptr<string> uidString_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
