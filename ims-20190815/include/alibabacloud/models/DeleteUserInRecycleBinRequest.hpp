// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERINRECYCLEBINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERINRECYCLEBINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class DeleteUserInRecycleBinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserInRecycleBinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserInRecycleBinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteUserInRecycleBinRequest() = default ;
    DeleteUserInRecycleBinRequest(const DeleteUserInRecycleBinRequest &) = default ;
    DeleteUserInRecycleBinRequest(DeleteUserInRecycleBinRequest &&) = default ;
    DeleteUserInRecycleBinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserInRecycleBinRequest() = default ;
    DeleteUserInRecycleBinRequest& operator=(const DeleteUserInRecycleBinRequest &) = default ;
    DeleteUserInRecycleBinRequest& operator=(DeleteUserInRecycleBinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteUserInRecycleBinRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the RAM user.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
