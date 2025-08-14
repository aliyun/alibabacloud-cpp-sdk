// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENDER3DAVATARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENDER3DAVATARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class Render3dAvatarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Render3dAvatarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, Render3dAvatarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    Render3dAvatarRequest() = default ;
    Render3dAvatarRequest(const Render3dAvatarRequest &) = default ;
    Render3dAvatarRequest(Render3dAvatarRequest &&) = default ;
    Render3dAvatarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Render3dAvatarRequest() = default ;
    Render3dAvatarRequest& operator=(const Render3dAvatarRequest &) = default ;
    Render3dAvatarRequest& operator=(Render3dAvatarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->code_ != nullptr && this->tenantId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline Render3dAvatarRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline Render3dAvatarRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline Render3dAvatarRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
