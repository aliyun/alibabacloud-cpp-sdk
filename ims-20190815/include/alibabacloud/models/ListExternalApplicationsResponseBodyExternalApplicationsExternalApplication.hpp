// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODYEXTERNALAPPLICATIONSEXTERNALAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALAPPLICATIONSRESPONSEBODYEXTERNALAPPLICATIONSEXTERNALAPPLICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AppPrincipalName, appPrincipalName_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DelegatedScope, delegatedScope_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ForeignAppId, foreignAppId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPrincipalName, appPrincipalName_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DelegatedScope, delegatedScope_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ForeignAppId, foreignAppId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication() = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication(const ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication &) = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication(ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication &&) = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication() = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& operator=(const ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication &) = default ;
    ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& operator=(ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appPrincipalName_ != nullptr
        && this->createDate_ != nullptr && this->delegatedScope_ != nullptr && this->displayName_ != nullptr && this->foreignAppId_ != nullptr && this->tenantId_ != nullptr
        && this->updateDate_ != nullptr; };
    // appPrincipalName Field Functions 
    bool hasAppPrincipalName() const { return this->appPrincipalName_ != nullptr;};
    void deleteAppPrincipalName() { this->appPrincipalName_ = nullptr;};
    inline string appPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(appPrincipalName_, "") };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& setAppPrincipalName(string appPrincipalName) { DARABONBA_PTR_SET_VALUE(appPrincipalName_, appPrincipalName) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // delegatedScope Field Functions 
    bool hasDelegatedScope() const { return this->delegatedScope_ != nullptr;};
    void deleteDelegatedScope() { this->delegatedScope_ = nullptr;};
    inline const Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope & delegatedScope() const { DARABONBA_PTR_GET_CONST(delegatedScope_, Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope) };
    inline Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope delegatedScope() { DARABONBA_PTR_GET(delegatedScope_, Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope) };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& setDelegatedScope(const Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope & delegatedScope) { DARABONBA_PTR_SET_VALUE(delegatedScope_, delegatedScope) };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& setDelegatedScope(Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope && delegatedScope) { DARABONBA_PTR_SET_RVALUE(delegatedScope_, delegatedScope) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // foreignAppId Field Functions 
    bool hasForeignAppId() const { return this->foreignAppId_ != nullptr;};
    void deleteForeignAppId() { this->foreignAppId_ = nullptr;};
    inline string foreignAppId() const { DARABONBA_PTR_GET_DEFAULT(foreignAppId_, "") };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& setForeignAppId(string foreignAppId) { DARABONBA_PTR_SET_VALUE(foreignAppId_, foreignAppId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline ListExternalApplicationsResponseBodyExternalApplicationsExternalApplication& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    // The name of the external application principal. The value is in the `<app_name>@app.<account_id>.onaliyun.com` format.
    std::shared_ptr<string> appPrincipalName_ = nullptr;
    // The time when the external application was installed. The value is a timestamp.
    std::shared_ptr<string> createDate_ = nullptr;
    // The information about the permissions that are granted to the external application.
    std::shared_ptr<Models::ListExternalApplicationsResponseBodyExternalApplicationsExternalApplicationDelegatedScope> delegatedScope_ = nullptr;
    // The display name of the external application.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the external application.
    std::shared_ptr<string> foreignAppId_ = nullptr;
    // The ID of the Alibaba Cloud account for which the external application was installed.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The update time of the external application. The value is a timestamp.
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
