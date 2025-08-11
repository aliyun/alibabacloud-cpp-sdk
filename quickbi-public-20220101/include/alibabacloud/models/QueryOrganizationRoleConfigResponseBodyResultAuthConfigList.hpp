// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGANIZATIONROLECONFIGRESPONSEBODYRESULTAUTHCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGANIZATIONROLECONFIGRESPONSEBODYRESULTAUTHCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryOrganizationRoleConfigResponseBodyResultAuthConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrganizationRoleConfigResponseBodyResultAuthConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrganizationRoleConfigResponseBodyResultAuthConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
    };
    QueryOrganizationRoleConfigResponseBodyResultAuthConfigList() = default ;
    QueryOrganizationRoleConfigResponseBodyResultAuthConfigList(const QueryOrganizationRoleConfigResponseBodyResultAuthConfigList &) = default ;
    QueryOrganizationRoleConfigResponseBodyResultAuthConfigList(QueryOrganizationRoleConfigResponseBodyResultAuthConfigList &&) = default ;
    QueryOrganizationRoleConfigResponseBodyResultAuthConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrganizationRoleConfigResponseBodyResultAuthConfigList() = default ;
    QueryOrganizationRoleConfigResponseBodyResultAuthConfigList& operator=(const QueryOrganizationRoleConfigResponseBodyResultAuthConfigList &) = default ;
    QueryOrganizationRoleConfigResponseBodyResultAuthConfigList& operator=(QueryOrganizationRoleConfigResponseBodyResultAuthConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authKey_ != nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline QueryOrganizationRoleConfigResponseBodyResultAuthConfigList& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


  protected:
    // Permission type:
    // - quick_monitor: Metric Monitoring
    // - subscription: Subscription Management
    // - offline_download: Self-service Data Retrieval
    // - resource_package: Resource Package Management
    // - organization_ask: Organization Access Key/Secret (AK/SK)
    // - developer_openapi: OpenAPI
    // - data_service: Data Service
    // - admin_authorize3rd: Embedded Analysis
    // - component_manage: Custom Component
    // - template_open: Custom Template
    // - custom_driver: Custom Driver (supported only in standalone deployment)
    // - open_platform_custom_plugin: Custom Plugin (supported only in standalone deployment)
    // - enterprise_safety: Enterprise Security
    std::shared_ptr<string> authKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
