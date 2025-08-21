// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVERIFICATIONINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVERIFICATIONINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetVerificationInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVerificationInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, GetVerificationInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    GetVerificationInfoRequest() = default ;
    GetVerificationInfoRequest(const GetVerificationInfoRequest &) = default ;
    GetVerificationInfoRequest(GetVerificationInfoRequest &&) = default ;
    GetVerificationInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVerificationInfoRequest() = default ;
    GetVerificationInfoRequest& operator=(const GetVerificationInfoRequest &) = default ;
    GetVerificationInfoRequest& operator=(GetVerificationInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userPrincipalName_ != nullptr; };
    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline GetVerificationInfoRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
