// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetLoginProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    GetLoginProfileRequest() = default ;
    GetLoginProfileRequest(const GetLoginProfileRequest &) = default ;
    GetLoginProfileRequest(GetLoginProfileRequest &&) = default ;
    GetLoginProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginProfileRequest() = default ;
    GetLoginProfileRequest& operator=(const GetLoginProfileRequest &) = default ;
    GetLoginProfileRequest& operator=(GetLoginProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userPrincipalName_ != nullptr; };
    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline GetLoginProfileRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The logon name of the RAM user.
    // 
    // This parameter is required.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
