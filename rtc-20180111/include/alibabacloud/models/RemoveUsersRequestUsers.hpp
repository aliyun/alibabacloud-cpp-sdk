// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSREQUESTUSERS_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSREQUESTUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RemoveUsersRequestUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersRequestUsers& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersRequestUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RemoveUsersRequestUsers() = default ;
    RemoveUsersRequestUsers(const RemoveUsersRequestUsers &) = default ;
    RemoveUsersRequestUsers(RemoveUsersRequestUsers &&) = default ;
    RemoveUsersRequestUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersRequestUsers() = default ;
    RemoveUsersRequestUsers& operator=(const RemoveUsersRequestUsers &) = default ;
    RemoveUsersRequestUsers& operator=(RemoveUsersRequestUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RemoveUsersRequestUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
