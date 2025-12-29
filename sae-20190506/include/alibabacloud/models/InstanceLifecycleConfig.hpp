// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCELIFECYCLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_INSTANCELIFECYCLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LifecycleHook.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class InstanceLifecycleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceLifecycleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(preFreeze, preFreeze_);
      DARABONBA_PTR_TO_JSON(preStop, preStop_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceLifecycleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(preFreeze, preFreeze_);
      DARABONBA_PTR_FROM_JSON(preStop, preStop_);
    };
    InstanceLifecycleConfig() = default ;
    InstanceLifecycleConfig(const InstanceLifecycleConfig &) = default ;
    InstanceLifecycleConfig(InstanceLifecycleConfig &&) = default ;
    InstanceLifecycleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceLifecycleConfig() = default ;
    InstanceLifecycleConfig& operator=(const InstanceLifecycleConfig &) = default ;
    InstanceLifecycleConfig& operator=(InstanceLifecycleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preFreeze_ == nullptr
        && this->preStop_ == nullptr; };
    // preFreeze Field Functions 
    bool hasPreFreeze() const { return this->preFreeze_ != nullptr;};
    void deletePreFreeze() { this->preFreeze_ = nullptr;};
    inline const LifecycleHook & getPreFreeze() const { DARABONBA_PTR_GET_CONST(preFreeze_, LifecycleHook) };
    inline LifecycleHook getPreFreeze() { DARABONBA_PTR_GET(preFreeze_, LifecycleHook) };
    inline InstanceLifecycleConfig& setPreFreeze(const LifecycleHook & preFreeze) { DARABONBA_PTR_SET_VALUE(preFreeze_, preFreeze) };
    inline InstanceLifecycleConfig& setPreFreeze(LifecycleHook && preFreeze) { DARABONBA_PTR_SET_RVALUE(preFreeze_, preFreeze) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline const LifecycleHook & getPreStop() const { DARABONBA_PTR_GET_CONST(preStop_, LifecycleHook) };
    inline LifecycleHook getPreStop() { DARABONBA_PTR_GET(preStop_, LifecycleHook) };
    inline InstanceLifecycleConfig& setPreStop(const LifecycleHook & preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };
    inline InstanceLifecycleConfig& setPreStop(LifecycleHook && preStop) { DARABONBA_PTR_SET_RVALUE(preStop_, preStop) };


  protected:
    shared_ptr<LifecycleHook> preFreeze_ {};
    shared_ptr<LifecycleHook> preStop_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
