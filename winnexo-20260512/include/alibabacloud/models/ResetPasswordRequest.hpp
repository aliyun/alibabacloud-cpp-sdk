// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ResetPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(passwordEncrypted, passwordEncrypted_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(passwordEncrypted, passwordEncrypted_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    ResetPasswordRequest() = default ;
    ResetPasswordRequest(const ResetPasswordRequest &) = default ;
    ResetPasswordRequest(ResetPasswordRequest &&) = default ;
    ResetPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetPasswordRequest() = default ;
    ResetPasswordRequest& operator=(const ResetPasswordRequest &) = default ;
    ResetPasswordRequest& operator=(ResetPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordEncrypted_ == nullptr
        && this->tenantId_ == nullptr && this->wnUserId_ == nullptr; };
    // passwordEncrypted Field Functions 
    bool hasPasswordEncrypted() const { return this->passwordEncrypted_ != nullptr;};
    void deletePasswordEncrypted() { this->passwordEncrypted_ = nullptr;};
    inline string getPasswordEncrypted() const { DARABONBA_PTR_GET_DEFAULT(passwordEncrypted_, "") };
    inline ResetPasswordRequest& setPasswordEncrypted(string passwordEncrypted) { DARABONBA_PTR_SET_VALUE(passwordEncrypted_, passwordEncrypted) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ResetPasswordRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline ResetPasswordRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The base64-encoded password ciphertext encrypted with RSA-OAEP-SHA256. This parameter is required and cannot be empty.
    // 
    // This parameter is required.
    shared_ptr<string> passwordEncrypted_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
    // The ID of the target user (WINNEXO platform user ID).
    // 
    // This parameter is required.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
