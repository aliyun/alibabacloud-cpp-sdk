// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCESSKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCESSKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class DeleteAccessKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccessKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccessKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserAccessKeyId, userAccessKeyId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DeleteAccessKeyRequest() = default ;
    DeleteAccessKeyRequest(const DeleteAccessKeyRequest &) = default ;
    DeleteAccessKeyRequest(DeleteAccessKeyRequest &&) = default ;
    DeleteAccessKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccessKeyRequest() = default ;
    DeleteAccessKeyRequest& operator=(const DeleteAccessKeyRequest &) = default ;
    DeleteAccessKeyRequest& operator=(DeleteAccessKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userAccessKeyId_ == nullptr
        && this->userName_ == nullptr; };
    // userAccessKeyId Field Functions 
    bool hasUserAccessKeyId() const { return this->userAccessKeyId_ != nullptr;};
    void deleteUserAccessKeyId() { this->userAccessKeyId_ = nullptr;};
    inline string getUserAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(userAccessKeyId_, "") };
    inline DeleteAccessKeyRequest& setUserAccessKeyId(string userAccessKeyId) { DARABONBA_PTR_SET_VALUE(userAccessKeyId_, userAccessKeyId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DeleteAccessKeyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The AccessKey ID in the AccessKey pair that you want to delete.``
    shared_ptr<string> userAccessKeyId_ {};
    // The name of the RAM user.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
