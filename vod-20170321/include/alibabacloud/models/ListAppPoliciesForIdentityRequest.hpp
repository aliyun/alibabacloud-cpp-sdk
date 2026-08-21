// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPOLICIESFORIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPOLICIESFORIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAppPoliciesForIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppPoliciesForIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(IdentityName, identityName_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppPoliciesForIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(IdentityName, identityName_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
    };
    ListAppPoliciesForIdentityRequest() = default ;
    ListAppPoliciesForIdentityRequest(const ListAppPoliciesForIdentityRequest &) = default ;
    ListAppPoliciesForIdentityRequest(ListAppPoliciesForIdentityRequest &&) = default ;
    ListAppPoliciesForIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppPoliciesForIdentityRequest() = default ;
    ListAppPoliciesForIdentityRequest& operator=(const ListAppPoliciesForIdentityRequest &) = default ;
    ListAppPoliciesForIdentityRequest& operator=(ListAppPoliciesForIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->identityName_ == nullptr && this->identityType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAppPoliciesForIdentityRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // identityName Field Functions 
    bool hasIdentityName() const { return this->identityName_ != nullptr;};
    void deleteIdentityName() { this->identityName_ = nullptr;};
    inline string getIdentityName() const { DARABONBA_PTR_GET_DEFAULT(identityName_, "") };
    inline ListAppPoliciesForIdentityRequest& setIdentityName(string identityName) { DARABONBA_PTR_SET_VALUE(identityName_, identityName) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline ListAppPoliciesForIdentityRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


  protected:
    // The application ID. Default value: **app-1000000**. For more information, see [Multiple applications](https://help.aliyun.com/document_detail/113600.html).
    shared_ptr<string> appId_ {};
    // The identity name.
    // 
    // - If IdentityType is set to RamUser, specify the Resource Access Management (RAM) user ID.
    // - If IdentityType is set to RamRole, specify the role name.
    shared_ptr<string> identityName_ {};
    // The identity type. Valid values:
    // - **RamUser**: Resource Access Management (RAM) user.
    // - **RamRole**: RAM role.
    shared_ptr<string> identityType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
