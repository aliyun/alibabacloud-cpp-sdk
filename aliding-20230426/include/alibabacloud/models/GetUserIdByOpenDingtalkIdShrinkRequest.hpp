// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYOPENDINGTALKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYOPENDINGTALKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserIdByOpenDingtalkIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByOpenDingtalkIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(openDingtalkId, openDingtalkId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByOpenDingtalkIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(openDingtalkId, openDingtalkId_);
    };
    GetUserIdByOpenDingtalkIdShrinkRequest() = default ;
    GetUserIdByOpenDingtalkIdShrinkRequest(const GetUserIdByOpenDingtalkIdShrinkRequest &) = default ;
    GetUserIdByOpenDingtalkIdShrinkRequest(GetUserIdByOpenDingtalkIdShrinkRequest &&) = default ;
    GetUserIdByOpenDingtalkIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByOpenDingtalkIdShrinkRequest() = default ;
    GetUserIdByOpenDingtalkIdShrinkRequest& operator=(const GetUserIdByOpenDingtalkIdShrinkRequest &) = default ;
    GetUserIdByOpenDingtalkIdShrinkRequest& operator=(GetUserIdByOpenDingtalkIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->openDingtalkId_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetUserIdByOpenDingtalkIdShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // openDingtalkId Field Functions 
    bool hasOpenDingtalkId() const { return this->openDingtalkId_ != nullptr;};
    void deleteOpenDingtalkId() { this->openDingtalkId_ = nullptr;};
    inline string getOpenDingtalkId() const { DARABONBA_PTR_GET_DEFAULT(openDingtalkId_, "") };
    inline GetUserIdByOpenDingtalkIdShrinkRequest& setOpenDingtalkId(string openDingtalkId) { DARABONBA_PTR_SET_VALUE(openDingtalkId_, openDingtalkId) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> openDingtalkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
