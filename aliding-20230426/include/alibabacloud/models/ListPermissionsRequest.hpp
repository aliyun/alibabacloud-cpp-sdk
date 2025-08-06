// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPermissionsRequestOption.hpp>
#include <alibabacloud/models/ListPermissionsRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ListPermissionsRequest() = default ;
    ListPermissionsRequest(const ListPermissionsRequest &) = default ;
    ListPermissionsRequest(ListPermissionsRequest &&) = default ;
    ListPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsRequest() = default ;
    ListPermissionsRequest& operator=(const ListPermissionsRequest &) = default ;
    ListPermissionsRequest& operator=(ListPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryUuid_ != nullptr
        && this->option_ != nullptr && this->tenantContext_ != nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline ListPermissionsRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const ListPermissionsRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, ListPermissionsRequestOption) };
    inline ListPermissionsRequestOption option() { DARABONBA_PTR_GET(option_, ListPermissionsRequestOption) };
    inline ListPermissionsRequest& setOption(const ListPermissionsRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline ListPermissionsRequest& setOption(ListPermissionsRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ListPermissionsRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ListPermissionsRequestTenantContext) };
    inline ListPermissionsRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, ListPermissionsRequestTenantContext) };
    inline ListPermissionsRequest& setTenantContext(const ListPermissionsRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ListPermissionsRequest& setTenantContext(ListPermissionsRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<ListPermissionsRequestOption> option_ = nullptr;
    std::shared_ptr<ListPermissionsRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
