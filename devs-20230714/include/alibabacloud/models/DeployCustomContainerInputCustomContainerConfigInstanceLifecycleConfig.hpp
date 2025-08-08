// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTCUSTOMCONTAINERCONFIGINSTANCELIFECYCLECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTCUSTOMCONTAINERCONFIGINSTANCELIFECYCLECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer.hpp>
#include <alibabacloud/models/DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(initializer, initializer_);
      DARABONBA_PTR_TO_JSON(preStop, preStop_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(initializer, initializer_);
      DARABONBA_PTR_FROM_JSON(preStop, preStop_);
    };
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig() = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig(const DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig &) = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig(DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig &&) = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig() = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig& operator=(const DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig &) = default ;
    DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig& operator=(DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->initializer_ != nullptr
        && this->preStop_ != nullptr; };
    // initializer Field Functions 
    bool hasInitializer() const { return this->initializer_ != nullptr;};
    void deleteInitializer() { this->initializer_ = nullptr;};
    inline const Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer & initializer() const { DARABONBA_PTR_GET_CONST(initializer_, Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer) };
    inline Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer initializer() { DARABONBA_PTR_GET(initializer_, Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer) };
    inline DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig& setInitializer(const Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer & initializer) { DARABONBA_PTR_SET_VALUE(initializer_, initializer) };
    inline DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig& setInitializer(Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer && initializer) { DARABONBA_PTR_SET_RVALUE(initializer_, initializer) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline const Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop & preStop() const { DARABONBA_PTR_GET_CONST(preStop_, Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop) };
    inline Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop preStop() { DARABONBA_PTR_GET(preStop_, Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop) };
    inline DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig& setPreStop(const Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop & preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };
    inline DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfig& setPreStop(Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop && preStop) { DARABONBA_PTR_SET_RVALUE(preStop_, preStop) };


  protected:
    std::shared_ptr<Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigInitializer> initializer_ = nullptr;
    std::shared_ptr<Models::DeployCustomContainerInputCustomContainerConfigInstanceLifecycleConfigPreStop> preStop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
