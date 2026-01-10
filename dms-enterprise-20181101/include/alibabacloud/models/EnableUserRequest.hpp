// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class EnableUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, EnableUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    EnableUserRequest() = default ;
    EnableUserRequest(const EnableUserRequest &) = default ;
    EnableUserRequest(EnableUserRequest &&) = default ;
    EnableUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableUserRequest() = default ;
    EnableUserRequest& operator=(const EnableUserRequest &) = default ;
    EnableUserRequest& operator=(EnableUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tid_ == nullptr
        && this->uid_ == nullptr; };
    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline EnableUserRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline EnableUserRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The ID of the tenant.
    // 
    // >  To obtain the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Tenant information](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
    // The UID of the Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
