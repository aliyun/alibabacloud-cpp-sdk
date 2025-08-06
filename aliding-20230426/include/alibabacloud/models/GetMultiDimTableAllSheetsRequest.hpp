// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLSHEETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLSHEETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMultiDimTableAllSheetsRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableAllSheetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableAllSheetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableAllSheetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetMultiDimTableAllSheetsRequest() = default ;
    GetMultiDimTableAllSheetsRequest(const GetMultiDimTableAllSheetsRequest &) = default ;
    GetMultiDimTableAllSheetsRequest(GetMultiDimTableAllSheetsRequest &&) = default ;
    GetMultiDimTableAllSheetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableAllSheetsRequest() = default ;
    GetMultiDimTableAllSheetsRequest& operator=(const GetMultiDimTableAllSheetsRequest &) = default ;
    GetMultiDimTableAllSheetsRequest& operator=(GetMultiDimTableAllSheetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline GetMultiDimTableAllSheetsRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetMultiDimTableAllSheetsRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetMultiDimTableAllSheetsRequestTenantContext) };
    inline GetMultiDimTableAllSheetsRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetMultiDimTableAllSheetsRequestTenantContext) };
    inline GetMultiDimTableAllSheetsRequest& setTenantContext(const GetMultiDimTableAllSheetsRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetMultiDimTableAllSheetsRequest& setTenantContext(GetMultiDimTableAllSheetsRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> baseId_ = nullptr;
    std::shared_ptr<GetMultiDimTableAllSheetsRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
