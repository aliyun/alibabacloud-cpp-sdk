// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONEXTERNALAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONEXTERNALAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ProvisionExternalApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionExternalApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionExternalApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
    };
    ProvisionExternalApplicationRequest() = default ;
    ProvisionExternalApplicationRequest(const ProvisionExternalApplicationRequest &) = default ;
    ProvisionExternalApplicationRequest(ProvisionExternalApplicationRequest &&) = default ;
    ProvisionExternalApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionExternalApplicationRequest() = default ;
    ProvisionExternalApplicationRequest& operator=(const ProvisionExternalApplicationRequest &) = default ;
    ProvisionExternalApplicationRequest& operator=(ProvisionExternalApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->scopes_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ProvisionExternalApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline string getScopes() const { DARABONBA_PTR_GET_DEFAULT(scopes_, "") };
    inline ProvisionExternalApplicationRequest& setScopes(string scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The permissions that are granted to the application. Separate multiple permissions with a semicolon (;).
    // 
    // >  For more information about the supported permissions, see [Overview](https://help.aliyun.com/document_detail/93693.html).
    shared_ptr<string> scopes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
