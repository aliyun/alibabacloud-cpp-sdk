// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ResetTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    ResetTokenRequest() = default ;
    ResetTokenRequest(const ResetTokenRequest &) = default ;
    ResetTokenRequest(ResetTokenRequest &&) = default ;
    ResetTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetTokenRequest() = default ;
    ResetTokenRequest& operator=(const ResetTokenRequest &) = default ;
    ResetTokenRequest& operator=(ResetTokenRequest &&) = default ;
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
    inline ResetTokenRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline ResetTokenRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The tenant ID. This is a common parameter. If this parameter is not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The ID of the target user on the WINNEXO platform. If this parameter is left empty, the operation is performed on the caller. Administrators can specify the ID of another user to perform the operation on behalf of that user.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
