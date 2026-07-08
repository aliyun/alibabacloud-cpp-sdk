// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPSUPABASEAUTHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPSUPABASEAUTHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppSupabaseAuthConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppSupabaseAuthConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppSupabaseAuthConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
    };
    GetAppSupabaseAuthConfigRequest() = default ;
    GetAppSupabaseAuthConfigRequest(const GetAppSupabaseAuthConfigRequest &) = default ;
    GetAppSupabaseAuthConfigRequest(GetAppSupabaseAuthConfigRequest &&) = default ;
    GetAppSupabaseAuthConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppSupabaseAuthConfigRequest() = default ;
    GetAppSupabaseAuthConfigRequest& operator=(const GetAppSupabaseAuthConfigRequest &) = default ;
    GetAppSupabaseAuthConfigRequest& operator=(GetAppSupabaseAuthConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && this->bizId_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline GetAppSupabaseAuthConfigRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppSupabaseAuthConfigRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


  protected:
    // The authentication type.
    shared_ptr<string> authType_ {};
    // The business ID.
    shared_ptr<string> bizId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
