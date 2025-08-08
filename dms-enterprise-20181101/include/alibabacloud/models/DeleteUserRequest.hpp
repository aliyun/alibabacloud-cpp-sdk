// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    DeleteUserRequest() = default ;
    DeleteUserRequest(const DeleteUserRequest &) = default ;
    DeleteUserRequest(DeleteUserRequest &&) = default ;
    DeleteUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserRequest() = default ;
    DeleteUserRequest& operator=(const DeleteUserRequest &) = default ;
    DeleteUserRequest& operator=(DeleteUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tid_ != nullptr
        && this->uid_ != nullptr; };
    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteUserRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DeleteUserRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The ID of the tenant. 
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://www.alibabacloud.com/help/en/data-management-service/latest/manage-dms-tenants) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The unique ID (UID) of Alibaba Cloud account to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
