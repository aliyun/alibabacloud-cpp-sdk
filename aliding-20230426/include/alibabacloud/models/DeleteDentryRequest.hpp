// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteDentryRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteDentryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDentryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(ToRecycleBin, toRecycleBin_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDentryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(ToRecycleBin, toRecycleBin_);
    };
    DeleteDentryRequest() = default ;
    DeleteDentryRequest(const DeleteDentryRequest &) = default ;
    DeleteDentryRequest(DeleteDentryRequest &&) = default ;
    DeleteDentryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDentryRequest() = default ;
    DeleteDentryRequest& operator=(const DeleteDentryRequest &) = default ;
    DeleteDentryRequest& operator=(DeleteDentryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryId_ != nullptr
        && this->spaceId_ != nullptr && this->tenantContext_ != nullptr && this->toRecycleBin_ != nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline DeleteDentryRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline DeleteDentryRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteDentryRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteDentryRequestTenantContext) };
    inline DeleteDentryRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteDentryRequestTenantContext) };
    inline DeleteDentryRequest& setTenantContext(const DeleteDentryRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteDentryRequest& setTenantContext(DeleteDentryRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // toRecycleBin Field Functions 
    bool hasToRecycleBin() const { return this->toRecycleBin_ != nullptr;};
    void deleteToRecycleBin() { this->toRecycleBin_ = nullptr;};
    inline bool toRecycleBin() const { DARABONBA_PTR_GET_DEFAULT(toRecycleBin_, false) };
    inline DeleteDentryRequest& setToRecycleBin(bool toRecycleBin) { DARABONBA_PTR_SET_VALUE(toRecycleBin_, toRecycleBin) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<DeleteDentryRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<bool> toRecycleBin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
