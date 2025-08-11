// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONROLESRESPONSEBODYRESULTAUTHCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONROLESRESPONSEBODYRESULTAUTHCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListOrganizationRolesResponseBodyResultAuthConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationRolesResponseBodyResultAuthConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationRolesResponseBodyResultAuthConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
    };
    ListOrganizationRolesResponseBodyResultAuthConfigList() = default ;
    ListOrganizationRolesResponseBodyResultAuthConfigList(const ListOrganizationRolesResponseBodyResultAuthConfigList &) = default ;
    ListOrganizationRolesResponseBodyResultAuthConfigList(ListOrganizationRolesResponseBodyResultAuthConfigList &&) = default ;
    ListOrganizationRolesResponseBodyResultAuthConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationRolesResponseBodyResultAuthConfigList() = default ;
    ListOrganizationRolesResponseBodyResultAuthConfigList& operator=(const ListOrganizationRolesResponseBodyResultAuthConfigList &) = default ;
    ListOrganizationRolesResponseBodyResultAuthConfigList& operator=(ListOrganizationRolesResponseBodyResultAuthConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authKey_ != nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline ListOrganizationRolesResponseBodyResultAuthConfigList& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


  protected:
    // Permission type:
    // - quick_monitor: Metric monitoring
    // - subscription: Subscription management
    // - offline_download: Self-service data retrieval
    // - resource_package: Resource package management
    // - organization_ask: Organization identification code (AK/SK)
    // - developer_openapi: OpenAPI
    // - data_service: Data service
    // - admin_authorize3rd: Embedded analysis
    // - component_manage: Custom component
    // - template_open: Custom template
    // - custom_driver: Custom driver (supported only in standalone deployment)
    // - open_platform_custom_plugin: Custom plugin (supported only in standalone deployment)
    // - enterprise_safety: Enterprise security
    std::shared_ptr<string> authKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
