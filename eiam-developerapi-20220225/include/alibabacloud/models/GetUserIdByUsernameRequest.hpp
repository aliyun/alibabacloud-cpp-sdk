// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYUSERNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYUSERNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserIdByUsernameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByUsernameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByUsernameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    GetUserIdByUsernameRequest() = default ;
    GetUserIdByUsernameRequest(const GetUserIdByUsernameRequest &) = default ;
    GetUserIdByUsernameRequest(GetUserIdByUsernameRequest &&) = default ;
    GetUserIdByUsernameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByUsernameRequest() = default ;
    GetUserIdByUsernameRequest& operator=(const GetUserIdByUsernameRequest &) = default ;
    GetUserIdByUsernameRequest& operator=(GetUserIdByUsernameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->username_ == nullptr; };
    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetUserIdByUsernameRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The username of the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
