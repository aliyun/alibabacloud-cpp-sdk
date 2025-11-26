// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_RENEWINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class RenewInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewInstance& obj) { 
      DARABONBA_PTR_TO_JSON(EmrRenewDuration, emrRenewDuration_);
      DARABONBA_PTR_TO_JSON(EmrRenewDurationUnit, emrRenewDurationUnit_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RenewDuration, renewDuration_);
      DARABONBA_PTR_TO_JSON(RenewDurationUnit, renewDurationUnit_);
    };
    friend void from_json(const Darabonba::Json& j, RenewInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(EmrRenewDuration, emrRenewDuration_);
      DARABONBA_PTR_FROM_JSON(EmrRenewDurationUnit, emrRenewDurationUnit_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RenewDuration, renewDuration_);
      DARABONBA_PTR_FROM_JSON(RenewDurationUnit, renewDurationUnit_);
    };
    RenewInstance() = default ;
    RenewInstance(const RenewInstance &) = default ;
    RenewInstance(RenewInstance &&) = default ;
    RenewInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewInstance() = default ;
    RenewInstance& operator=(const RenewInstance &) = default ;
    RenewInstance& operator=(RenewInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emrRenewDuration_ == nullptr
        && return this->emrRenewDurationUnit_ == nullptr && return this->instanceId_ == nullptr && return this->renewDuration_ == nullptr && return this->renewDurationUnit_ == nullptr; };
    // emrRenewDuration Field Functions 
    bool hasEmrRenewDuration() const { return this->emrRenewDuration_ != nullptr;};
    void deleteEmrRenewDuration() { this->emrRenewDuration_ = nullptr;};
    inline int32_t emrRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(emrRenewDuration_, 0) };
    inline RenewInstance& setEmrRenewDuration(int32_t emrRenewDuration) { DARABONBA_PTR_SET_VALUE(emrRenewDuration_, emrRenewDuration) };


    // emrRenewDurationUnit Field Functions 
    bool hasEmrRenewDurationUnit() const { return this->emrRenewDurationUnit_ != nullptr;};
    void deleteEmrRenewDurationUnit() { this->emrRenewDurationUnit_ = nullptr;};
    inline string emrRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(emrRenewDurationUnit_, "") };
    inline RenewInstance& setEmrRenewDurationUnit(string emrRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(emrRenewDurationUnit_, emrRenewDurationUnit) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // renewDuration Field Functions 
    bool hasRenewDuration() const { return this->renewDuration_ != nullptr;};
    void deleteRenewDuration() { this->renewDuration_ = nullptr;};
    inline int32_t renewDuration() const { DARABONBA_PTR_GET_DEFAULT(renewDuration_, 0) };
    inline RenewInstance& setRenewDuration(int32_t renewDuration) { DARABONBA_PTR_SET_VALUE(renewDuration_, renewDuration) };


    // renewDurationUnit Field Functions 
    bool hasRenewDurationUnit() const { return this->renewDurationUnit_ != nullptr;};
    void deleteRenewDurationUnit() { this->renewDurationUnit_ = nullptr;};
    inline string renewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(renewDurationUnit_, "") };
    inline RenewInstance& setRenewDurationUnit(string renewDurationUnit) { DARABONBA_PTR_SET_VALUE(renewDurationUnit_, renewDurationUnit) };


  protected:
    // emr实例续费时长。
    std::shared_ptr<int32_t> emrRenewDuration_ = nullptr;
    // emr实例续费时长单位。
    std::shared_ptr<string> emrRenewDurationUnit_ = nullptr;
    // 节点ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 续费时长。
    std::shared_ptr<int32_t> renewDuration_ = nullptr;
    // 付费时长单位。
    std::shared_ptr<string> renewDurationUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
