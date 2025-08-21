// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERMFAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERMFAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserMFAInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserMFAInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserMFAInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    GetUserMFAInfoRequest() = default ;
    GetUserMFAInfoRequest(const GetUserMFAInfoRequest &) = default ;
    GetUserMFAInfoRequest(GetUserMFAInfoRequest &&) = default ;
    GetUserMFAInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserMFAInfoRequest() = default ;
    GetUserMFAInfoRequest& operator=(const GetUserMFAInfoRequest &) = default ;
    GetUserMFAInfoRequest& operator=(GetUserMFAInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userPrincipalName_ != nullptr; };
    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline GetUserMFAInfoRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The logon name of the RAM user. This parameter is differently set in the following scenarios:
    // 
    // *   If you use a RAM user to call this operation, this parameter can be left empty. If you do not specify this parameter, information about the MFA device that is bound to the RAM user is queried.
    // *   If you use an Alibaba Cloud account to call this operation, you must set this parameter to the logon name of the RAM user that you want to query.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
