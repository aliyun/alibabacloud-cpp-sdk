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
        && this->maxResultCount_ == nullptr && this->mobile_ == nullptr && this->roleNames_ == nullptr && this->tid_ == nullptr && this->uid_ == nullptr
        && this->uidString_ == nullptr && this->userNick_ == nullptr; };
    // maxExecuteCount Field Functions 
    bool hasMaxExecuteCount() const { return this->maxExecuteCount_ != nullptr;};
    void deleteMaxExecuteCount() { this->maxExecuteCount_ = nullptr;};
    inline int64_t getMaxExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(maxExecuteCount_, 0L) };
    inline UpdateUserRequest& setMaxExecuteCount(int64_t maxExecuteCount) { DARABONBA_PTR_SET_VALUE(maxExecuteCount_, maxExecuteCount) };


    // maxResultCount Field Functions 
    bool hasMaxResultCount() const { return this->maxResultCount_ != nullptr;};
    void deleteMaxResultCount() { this->maxResultCount_ = nullptr;};
    inline int64_t getMaxResultCount() const { DARABONBA_PTR_GET_DEFAULT(maxResultCount_, 0L) };
    inline UpdateUserRequest& setMaxResultCount(int64_t maxResultCount) { DARABONBA_PTR_SET_VALUE(maxResultCount_, maxResultCount) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline UpdateUserRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // roleNames Field Functions 
    bool hasRoleNames() const { return this->roleNames_ != nullptr;};
    void deleteRoleNames() { this->roleNames_ = nullptr;};
    inline string getRoleNames() const { DARABONBA_PTR_GET_DEFAULT(roleNames_, "") };
    inline UpdateUserRequest& setRoleNames(string roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateUserRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline UpdateUserRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // uidString Field Functions 
    bool hasUidString() const { return this->uidString_ != nullptr;};
    void deleteUidString() { this->uidString_ = nullptr;};
    inline string getUidString() const { DARABONBA_PTR_GET_DEFAULT(uidString_, "") };
    inline UpdateUserRequest& setUidString(string uidString) { DARABONBA_PTR_SET_VALUE(uidString_, uidString) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline UpdateUserRequest& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // The maximum number of queries that can be performed each day.
    shared_ptr<int64_t> maxExecuteCount_ {};
    // The maximum number of rows that can be queried each day.
    shared_ptr<int64_t> maxResultCount_ {};
    // The DingTalk ID or mobile number of the user.
    shared_ptr<string> mobile_ {};
    // The roles that the user assumes. For more information about the valid values, see the Request parameters section in the [UpdateUser](https://help.aliyun.com/document_detail/465812.html) topic.
    shared_ptr<string> roleNames_ {};
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, log on to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
    // The Alibaba Cloud unique ID (UID) of the user to update.
    // 
    // This parameter is required.
    shared_ptr<int64_t> uid_ {};
    // The UID of the String type. If you specify this parameter, the UID of the Long type is replaced.
    shared_ptr<string> uidString_ {};
    // The nickname of the user.
    shared_ptr<string> userNick_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
