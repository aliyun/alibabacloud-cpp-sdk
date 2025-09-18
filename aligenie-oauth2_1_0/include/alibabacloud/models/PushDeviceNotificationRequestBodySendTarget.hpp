// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDEVICENOTIFICATIONREQUESTBODYSENDTARGET_HPP_
#define ALIBABACLOUD_MODELS_PUSHDEVICENOTIFICATIONREQUESTBODYSENDTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class PushDeviceNotificationRequestBodySendTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDeviceNotificationRequestBodySendTarget& obj) { 
      DARABONBA_PTR_TO_JSON(TargetIdentity, targetIdentity_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, PushDeviceNotificationRequestBodySendTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetIdentity, targetIdentity_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    PushDeviceNotificationRequestBodySendTarget() = default ;
    PushDeviceNotificationRequestBodySendTarget(const PushDeviceNotificationRequestBodySendTarget &) = default ;
    PushDeviceNotificationRequestBodySendTarget(PushDeviceNotificationRequestBodySendTarget &&) = default ;
    PushDeviceNotificationRequestBodySendTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDeviceNotificationRequestBodySendTarget() = default ;
    PushDeviceNotificationRequestBodySendTarget& operator=(const PushDeviceNotificationRequestBodySendTarget &) = default ;
    PushDeviceNotificationRequestBodySendTarget& operator=(PushDeviceNotificationRequestBodySendTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetIdentity_ != nullptr
        && this->targetType_ != nullptr; };
    // targetIdentity Field Functions 
    bool hasTargetIdentity() const { return this->targetIdentity_ != nullptr;};
    void deleteTargetIdentity() { this->targetIdentity_ = nullptr;};
    inline string targetIdentity() const { DARABONBA_PTR_GET_DEFAULT(targetIdentity_, "") };
    inline PushDeviceNotificationRequestBodySendTarget& setTargetIdentity(string targetIdentity) { DARABONBA_PTR_SET_VALUE(targetIdentity_, targetIdentity) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline PushDeviceNotificationRequestBodySendTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<string> targetIdentity_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
