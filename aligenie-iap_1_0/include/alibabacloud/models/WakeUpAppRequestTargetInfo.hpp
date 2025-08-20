// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAKEUPAPPREQUESTTARGETINFO_HPP_
#define ALIBABACLOUD_MODELS_WAKEUPAPPREQUESTTARGETINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class WakeUpAppRequestTargetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WakeUpAppRequestTargetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(TargetIdentity, targetIdentity_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, WakeUpAppRequestTargetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(TargetIdentity, targetIdentity_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    WakeUpAppRequestTargetInfo() = default ;
    WakeUpAppRequestTargetInfo(const WakeUpAppRequestTargetInfo &) = default ;
    WakeUpAppRequestTargetInfo(WakeUpAppRequestTargetInfo &&) = default ;
    WakeUpAppRequestTargetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WakeUpAppRequestTargetInfo() = default ;
    WakeUpAppRequestTargetInfo& operator=(const WakeUpAppRequestTargetInfo &) = default ;
    WakeUpAppRequestTargetInfo& operator=(WakeUpAppRequestTargetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encodeKey_ != nullptr
        && this->encodeType_ != nullptr && this->organizationId_ != nullptr && this->targetIdentity_ != nullptr && this->targetType_ != nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline WakeUpAppRequestTargetInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline WakeUpAppRequestTargetInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline WakeUpAppRequestTargetInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // targetIdentity Field Functions 
    bool hasTargetIdentity() const { return this->targetIdentity_ != nullptr;};
    void deleteTargetIdentity() { this->targetIdentity_ = nullptr;};
    inline string targetIdentity() const { DARABONBA_PTR_GET_DEFAULT(targetIdentity_, "") };
    inline WakeUpAppRequestTargetInfo& setTargetIdentity(string targetIdentity) { DARABONBA_PTR_SET_VALUE(targetIdentity_, targetIdentity) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline WakeUpAppRequestTargetInfo& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encodeKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeType_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetIdentity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
