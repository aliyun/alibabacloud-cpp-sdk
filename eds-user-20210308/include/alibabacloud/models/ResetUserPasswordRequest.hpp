// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ResetUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ResetUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ResetUserPasswordRequest() = default ;
    ResetUserPasswordRequest(const ResetUserPasswordRequest &) = default ;
    ResetUserPasswordRequest(ResetUserPasswordRequest &&) = default ;
    ResetUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetUserPasswordRequest() = default ;
    ResetUserPasswordRequest& operator=(const ResetUserPasswordRequest &) = default ;
    ResetUserPasswordRequest& operator=(ResetUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->notifyType_ == nullptr
        && return this->users_ == nullptr; };
    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline int32_t notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, 0) };
    inline ResetUserPasswordRequest& setNotifyType(int32_t notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline ResetUserPasswordRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ResetUserPasswordRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The method to notify the user after the password is reset.
    // 
    // > Alibaba Cloud accounts of the international site do not support sending notification through text messages.
    std::shared_ptr<int32_t> notifyType_ = nullptr;
    // The names of the convenience users whose passwords you want to reset.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
