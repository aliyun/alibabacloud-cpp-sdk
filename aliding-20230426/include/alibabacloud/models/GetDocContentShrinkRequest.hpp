// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCCONTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCCONTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDocContentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocContentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(userToken, userToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocContentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(TargetFormat, targetFormat_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(userToken, userToken_);
    };
    GetDocContentShrinkRequest() = default ;
    GetDocContentShrinkRequest(const GetDocContentShrinkRequest &) = default ;
    GetDocContentShrinkRequest(GetDocContentShrinkRequest &&) = default ;
    GetDocContentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocContentShrinkRequest() = default ;
    GetDocContentShrinkRequest& operator=(const GetDocContentShrinkRequest &) = default ;
    GetDocContentShrinkRequest& operator=(GetDocContentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryUuid_ != nullptr
        && this->targetFormat_ != nullptr && this->tenantContextShrink_ != nullptr && this->userToken_ != nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetDocContentShrinkRequest& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // targetFormat Field Functions 
    bool hasTargetFormat() const { return this->targetFormat_ != nullptr;};
    void deleteTargetFormat() { this->targetFormat_ = nullptr;};
    inline string targetFormat() const { DARABONBA_PTR_GET_DEFAULT(targetFormat_, "") };
    inline GetDocContentShrinkRequest& setTargetFormat(string targetFormat) { DARABONBA_PTR_SET_VALUE(targetFormat_, targetFormat) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetDocContentShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // userToken Field Functions 
    bool hasUserToken() const { return this->userToken_ != nullptr;};
    void deleteUserToken() { this->userToken_ = nullptr;};
    inline string userToken() const { DARABONBA_PTR_GET_DEFAULT(userToken_, "") };
    inline GetDocContentShrinkRequest& setUserToken(string userToken) { DARABONBA_PTR_SET_VALUE(userToken_, userToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<string> targetFormat_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
