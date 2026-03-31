// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCESSKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCESSKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class UpdateAccessKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccessKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccessKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    UpdateAccessKeyRequest() = default ;
    UpdateAccessKeyRequest(const UpdateAccessKeyRequest &) = default ;
    UpdateAccessKeyRequest(UpdateAccessKeyRequest &&) = default ;
    UpdateAccessKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccessKeyRequest() = default ;
    UpdateAccessKeyRequest& operator=(const UpdateAccessKeyRequest &) = default ;
    UpdateAccessKeyRequest& operator=(UpdateAccessKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && this->userAccessKeyId_ == nullptr && this->userName_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAccessKeyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string getUserAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline UpdateAccessKeyRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateAccessKeyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The status of the AccessKey pair. Valid values: `Active` and `Inactive`.
    shared_ptr<string> status_ {};
    // The AccessKey ID in the AccessKey pair whose status you want to change.``
    shared_ptr<string> userAccessKeyId_ {};
    // The name of the RAM user.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
