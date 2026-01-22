// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREACCESSKEYFROMRECYCLEBINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREACCESSKEYFROMRECYCLEBINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class RestoreAccessKeyFromRecycleBinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreAccessKeyFromRecycleBinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreAccessKeyFromRecycleBinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RestoreAccessKeyFromRecycleBinRequest() = default ;
    RestoreAccessKeyFromRecycleBinRequest(const RestoreAccessKeyFromRecycleBinRequest &) = default ;
    RestoreAccessKeyFromRecycleBinRequest(RestoreAccessKeyFromRecycleBinRequest &&) = default ;
    RestoreAccessKeyFromRecycleBinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreAccessKeyFromRecycleBinRequest() = default ;
    RestoreAccessKeyFromRecycleBinRequest& operator=(const RestoreAccessKeyFromRecycleBinRequest &) = default ;
    RestoreAccessKeyFromRecycleBinRequest& operator=(RestoreAccessKeyFromRecycleBinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userAccessKeyId_ == nullptr
        && this->userId_ == nullptr; };
    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string getUserAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline RestoreAccessKeyFromRecycleBinRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RestoreAccessKeyFromRecycleBinRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The AccessKey ID of the RAM user.
    shared_ptr<string> userAccessKeyId_ {};
    // The ID of the Resource Access Management (RAM) user.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
