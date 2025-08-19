// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCELIFECYCLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_INSTANCELIFECYCLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LifecycleHook.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class InstanceLifecycleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceLifecycleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(initializer, initializer_);
      DARABONBA_PTR_TO_JSON(preStop, preStop_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceLifecycleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(initializer, initializer_);
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
    virtual bool empty() const override { this->initializer_ != nullptr
        && this->preStop_ != nullptr; };
    // initializer Field Functions 
    bool hasInitializer() const { return this->initializer_ != nullptr;};
    void deleteInitializer() { this->initializer_ = nullptr;};
    inline const LifecycleHook & initializer() const { DARABONBA_PTR_GET_CONST(initializer_, LifecycleHook) };
    inline LifecycleHook initializer() { DARABONBA_PTR_GET(initializer_, LifecycleHook) };
    inline InstanceLifecycleConfig& setInitializer(const LifecycleHook & initializer) { DARABONBA_PTR_SET_VALUE(initializer_, initializer) };
    inline InstanceLifecycleConfig& setInitializer(LifecycleHook && initializer) { DARABONBA_PTR_SET_RVALUE(initializer_, initializer) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline const LifecycleHook & preStop() const { DARABONBA_PTR_GET_CONST(preStop_, LifecycleHook) };
    inline LifecycleHook preStop() { DARABONBA_PTR_GET(preStop_, LifecycleHook) };
    inline InstanceLifecycleConfig& setPreStop(const LifecycleHook & preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };
    inline InstanceLifecycleConfig& setPreStop(LifecycleHook && preStop) { DARABONBA_PTR_SET_RVALUE(preStop_, preStop) };


  protected:
    std::shared_ptr<LifecycleHook> initializer_ = nullptr;
    std::shared_ptr<LifecycleHook> preStop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
