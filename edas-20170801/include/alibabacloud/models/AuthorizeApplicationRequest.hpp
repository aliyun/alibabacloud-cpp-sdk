// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AuthorizeApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    AuthorizeApplicationRequest() = default ;
    AuthorizeApplicationRequest(const AuthorizeApplicationRequest &) = default ;
    AuthorizeApplicationRequest(AuthorizeApplicationRequest &&) = default ;
    AuthorizeApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeApplicationRequest() = default ;
    AuthorizeApplicationRequest& operator=(const AuthorizeApplicationRequest &) = default ;
    AuthorizeApplicationRequest& operator=(AuthorizeApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && return this->targetUserId_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string appIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline AuthorizeApplicationRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline AuthorizeApplicationRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // The ID of the application. You can specify multiple IDs. Separate multiple IDs with semicolons (;). If you leave this parameter empty, the permissions on the application are revoked.
    // 
    // This parameter is required.
    std::shared_ptr<string> appIds_ = nullptr;
    // The ID of the RAM user to be authorized. The value of the parameter is in the `sub-account name@primary account UID` format.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
