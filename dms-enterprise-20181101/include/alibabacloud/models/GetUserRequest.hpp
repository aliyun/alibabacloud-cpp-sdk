// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetUserRequest() = default ;
    GetUserRequest(const GetUserRequest &) = default ;
    GetUserRequest(GetUserRequest &&) = default ;
    GetUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserRequest() = default ;
    GetUserRequest& operator=(const GetUserRequest &) = default ;
    GetUserRequest& operator=(GetUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tid_ != nullptr
        && this->uid_ != nullptr && this->userId_ != nullptr; };
    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetUserRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetUserRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The UID of the Alibaba Cloud account. You can view your UID by moving the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console.
    std::shared_ptr<string> uid_ = nullptr;
    // The ID of the user. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) operation to query the ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
