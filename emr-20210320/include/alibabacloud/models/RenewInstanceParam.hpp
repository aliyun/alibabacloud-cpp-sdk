// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWINSTANCEPARAM_HPP_
#define ALIBABACLOUD_MODELS_RENEWINSTANCEPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class RenewInstanceParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewInstanceParam& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RenewDuration, renewDuration_);
      DARABONBA_PTR_TO_JSON(RenewDurationUnit, renewDurationUnit_);
    };
    friend void from_json(const Darabonba::Json& j, RenewInstanceParam& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RenewDuration, renewDuration_);
      DARABONBA_PTR_FROM_JSON(RenewDurationUnit, renewDurationUnit_);
    };
    RenewInstanceParam() = default ;
    RenewInstanceParam(const RenewInstanceParam &) = default ;
    RenewInstanceParam(RenewInstanceParam &&) = default ;
    RenewInstanceParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewInstanceParam() = default ;
    RenewInstanceParam& operator=(const RenewInstanceParam &) = default ;
    RenewInstanceParam& operator=(RenewInstanceParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->renewDuration_ == nullptr && return this->renewDurationUnit_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewInstanceParam& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // renewDuration Field Functions 
    bool hasRenewDuration() const { return this->renewDuration_ != nullptr;};
    void deleteRenewDuration() { this->renewDuration_ = nullptr;};
    inline int64_t renewDuration() const { DARABONBA_PTR_GET_DEFAULT(renewDuration_, 0L) };
    inline RenewInstanceParam& setRenewDuration(int64_t renewDuration) { DARABONBA_PTR_SET_VALUE(renewDuration_, renewDuration) };


    // renewDurationUnit Field Functions 
    bool hasRenewDurationUnit() const { return this->renewDurationUnit_ != nullptr;};
    void deleteRenewDurationUnit() { this->renewDurationUnit_ = nullptr;};
    inline string renewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(renewDurationUnit_, "") };
    inline RenewInstanceParam& setRenewDurationUnit(string renewDurationUnit) { DARABONBA_PTR_SET_VALUE(renewDurationUnit_, renewDurationUnit) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> renewDuration_ = nullptr;
    std::shared_ptr<string> renewDurationUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
