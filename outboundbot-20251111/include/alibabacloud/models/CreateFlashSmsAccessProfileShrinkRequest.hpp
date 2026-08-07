// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLASHSMSACCESSPROFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLASHSMSACCESSPROFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class CreateFlashSmsAccessProfileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlashSmsAccessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessProfile, accessProfileShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlashSmsAccessProfileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessProfile, accessProfileShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
    };
    CreateFlashSmsAccessProfileShrinkRequest() = default ;
    CreateFlashSmsAccessProfileShrinkRequest(const CreateFlashSmsAccessProfileShrinkRequest &) = default ;
    CreateFlashSmsAccessProfileShrinkRequest(CreateFlashSmsAccessProfileShrinkRequest &&) = default ;
    CreateFlashSmsAccessProfileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlashSmsAccessProfileShrinkRequest() = default ;
    CreateFlashSmsAccessProfileShrinkRequest& operator=(const CreateFlashSmsAccessProfileShrinkRequest &) = default ;
    CreateFlashSmsAccessProfileShrinkRequest& operator=(CreateFlashSmsAccessProfileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessProfileShrink_ == nullptr
        && this->instanceId_ == nullptr && this->providerId_ == nullptr; };
    // accessProfileShrink Field Functions 
    bool hasAccessProfileShrink() const { return this->accessProfileShrink_ != nullptr;};
    void deleteAccessProfileShrink() { this->accessProfileShrink_ = nullptr;};
    inline string getAccessProfileShrink() const { DARABONBA_PTR_GET_DEFAULT(accessProfileShrink_, "") };
    inline CreateFlashSmsAccessProfileShrinkRequest& setAccessProfileShrink(string accessProfileShrink) { DARABONBA_PTR_SET_VALUE(accessProfileShrink_, accessProfileShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFlashSmsAccessProfileShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline CreateFlashSmsAccessProfileShrinkRequest& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


  protected:
    // The access configuration.
    shared_ptr<string> accessProfileShrink_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The provider ID. Valid values:
    // - Uincall: Beijing Youyin Communication Co., Ltd.
    // - ChuangLan: Beijing Chuanglan Yunzhi Information Co., Ltd.
    // - ChinaMobile: China Mobile.
    // - ShangHaiTianNan: Shanghai Tiannan.
    // - HeDao: Galexes.
    // - DySms: Alibaba Communication.
    shared_ptr<string> providerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
