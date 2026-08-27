// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENENSUREENABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENENSUREENABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetTokenEnsureEnableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenEnsureEnableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenEnsureEnableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    GetTokenEnsureEnableRequest() = default ;
    GetTokenEnsureEnableRequest(const GetTokenEnsureEnableRequest &) = default ;
    GetTokenEnsureEnableRequest(GetTokenEnsureEnableRequest &&) = default ;
    GetTokenEnsureEnableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenEnsureEnableRequest() = default ;
    GetTokenEnsureEnableRequest& operator=(const GetTokenEnsureEnableRequest &) = default ;
    GetTokenEnsureEnableRequest& operator=(GetTokenEnsureEnableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr
        && this->wnUserId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetTokenEnsureEnableRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline GetTokenEnsureEnableRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The ID of the tenant to which the task belongs.
    shared_ptr<string> tenantId_ {};
    // The WinNexo user ID.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
