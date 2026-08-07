// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLASHSMSACCESSPROFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLASHSMSACCESSPROFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateFlashSmsAccessProfileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlashSmsAccessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfile, accessProfileShrink_);
      DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlashSmsAccessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfile, accessProfileShrink_);
      DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
    };
    UpdateFlashSmsAccessProfileShrinkRequest() = default ;
    UpdateFlashSmsAccessProfileShrinkRequest(const UpdateFlashSmsAccessProfileShrinkRequest &) = default ;
    UpdateFlashSmsAccessProfileShrinkRequest(UpdateFlashSmsAccessProfileShrinkRequest &&) = default ;
    UpdateFlashSmsAccessProfileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlashSmsAccessProfileShrinkRequest() = default ;
    UpdateFlashSmsAccessProfileShrinkRequest& operator=(const UpdateFlashSmsAccessProfileShrinkRequest &) = default ;
    UpdateFlashSmsAccessProfileShrinkRequest& operator=(UpdateFlashSmsAccessProfileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessProfileShrink_ == nullptr
        && this->accessProfileId_ == nullptr && this->instanceId_ == nullptr && this->providerId_ == nullptr; };
    // accessProfileShrink Field Functions 
    bool hasAccessProfileShrink() const { return this->accessProfileShrink_ != nullptr;};
    void deleteAccessProfileShrink() { this->accessProfileShrink_ = nullptr;};
    inline string getAccessProfileShrink() const { DARABONBA_PTR_GET_DEFAULT(accessProfileShrink_, "") };
    inline UpdateFlashSmsAccessProfileShrinkRequest& setAccessProfileShrink(string accessProfileShrink) { DARABONBA_PTR_SET_VALUE(accessProfileShrink_, accessProfileShrink) };


    // accessProfileId Field Functions 
    bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
    void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
    inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
    inline UpdateFlashSmsAccessProfileShrinkRequest& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFlashSmsAccessProfileShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline UpdateFlashSmsAccessProfileShrinkRequest& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


  protected:
    // 接入配置
    shared_ptr<string> accessProfileShrink_ {};
    // 接入配置ID
    shared_ptr<string> accessProfileId_ {};
    // 实例ID
    shared_ptr<string> instanceId_ {};
    // 供应商ID
    shared_ptr<string> providerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
