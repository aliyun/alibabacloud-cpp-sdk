// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODYTENANTALIASINFO_HPP_
#define ALIBABACLOUD_MODELS_FINDIDPLISTBYLOGINIDENTIFIERRESPONSEBODYTENANTALIASINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(TenantAlias, tenantAlias_);
    };
    friend void from_json(const Darabonba::Json& j, FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(TenantAlias, tenantAlias_);
    };
    FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo() = default ;
    FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo(const FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo &) = default ;
    FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo(FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo &&) = default ;
    FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo() = default ;
    FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo& operator=(const FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo &) = default ;
    FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo& operator=(FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->tenantAlias_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // tenantAlias Field Functions 
    bool hasTenantAlias() const { return this->tenantAlias_ != nullptr;};
    void deleteTenantAlias() { this->tenantAlias_ = nullptr;};
    inline string tenantAlias() const { DARABONBA_PTR_GET_DEFAULT(tenantAlias_, "") };
    inline FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo& setTenantAlias(string tenantAlias) { DARABONBA_PTR_SET_VALUE(tenantAlias_, tenantAlias) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<string> tenantAlias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
