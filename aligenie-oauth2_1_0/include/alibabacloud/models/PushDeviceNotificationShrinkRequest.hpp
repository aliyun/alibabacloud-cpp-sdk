// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDEVICENOTIFICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHDEVICENOTIFICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class PushDeviceNotificationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDeviceNotificationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantInfo, tenantInfoShrink_);
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PushDeviceNotificationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantInfo, tenantInfoShrink_);
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    PushDeviceNotificationShrinkRequest() = default ;
    PushDeviceNotificationShrinkRequest(const PushDeviceNotificationShrinkRequest &) = default ;
    PushDeviceNotificationShrinkRequest(PushDeviceNotificationShrinkRequest &&) = default ;
    PushDeviceNotificationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDeviceNotificationShrinkRequest() = default ;
    PushDeviceNotificationShrinkRequest& operator=(const PushDeviceNotificationShrinkRequest &) = default ;
    PushDeviceNotificationShrinkRequest& operator=(PushDeviceNotificationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantInfoShrink_ != nullptr
        && this->bodyShrink_ != nullptr; };
    // tenantInfoShrink Field Functions 
    bool hasTenantInfoShrink() const { return this->tenantInfoShrink_ != nullptr;};
    void deleteTenantInfoShrink() { this->tenantInfoShrink_ = nullptr;};
    inline string tenantInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantInfoShrink_, "") };
    inline PushDeviceNotificationShrinkRequest& setTenantInfoShrink(string tenantInfoShrink) { DARABONBA_PTR_SET_VALUE(tenantInfoShrink_, tenantInfoShrink) };


    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string bodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline PushDeviceNotificationShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    std::shared_ptr<string> tenantInfoShrink_ = nullptr;
    std::shared_ptr<string> bodyShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
