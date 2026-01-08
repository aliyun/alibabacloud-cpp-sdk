// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTENANTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTENANTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyTenantConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTenantConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupExpireRemind, appInstanceGroupExpireRemind_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTenantConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupExpireRemind, appInstanceGroupExpireRemind_);
    };
    ModifyTenantConfigRequest() = default ;
    ModifyTenantConfigRequest(const ModifyTenantConfigRequest &) = default ;
    ModifyTenantConfigRequest(ModifyTenantConfigRequest &&) = default ;
    ModifyTenantConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTenantConfigRequest() = default ;
    ModifyTenantConfigRequest& operator=(const ModifyTenantConfigRequest &) = default ;
    ModifyTenantConfigRequest& operator=(ModifyTenantConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupExpireRemind_ == nullptr; };
    // appInstanceGroupExpireRemind Field Functions 
    bool hasAppInstanceGroupExpireRemind() const { return this->appInstanceGroupExpireRemind_ != nullptr;};
    void deleteAppInstanceGroupExpireRemind() { this->appInstanceGroupExpireRemind_ = nullptr;};
    inline bool getAppInstanceGroupExpireRemind() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupExpireRemind_, false) };
    inline ModifyTenantConfigRequest& setAppInstanceGroupExpireRemind(bool appInstanceGroupExpireRemind) { DARABONBA_PTR_SET_VALUE(appInstanceGroupExpireRemind_, appInstanceGroupExpireRemind) };


  protected:
    // Specifies whether to enable the resource expiration reminder feature.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> appInstanceGroupExpireRemind_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
