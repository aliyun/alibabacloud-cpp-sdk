// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAlertStrategyRequestStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CreateAlertStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(k8sLabel, k8sLabel_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(k8sLabel, k8sLabel_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(strategy, strategy_);
    };
    CreateAlertStrategyRequest() = default ;
    CreateAlertStrategyRequest(const CreateAlertStrategyRequest &) = default ;
    CreateAlertStrategyRequest(CreateAlertStrategyRequest &&) = default ;
    CreateAlertStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertStrategyRequest() = default ;
    CreateAlertStrategyRequest& operator=(const CreateAlertStrategyRequest &) = default ;
    CreateAlertStrategyRequest& operator=(CreateAlertStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->k8sLabel_ == nullptr && return this->name_ == nullptr && return this->strategy_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateAlertStrategyRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // k8sLabel Field Functions 
    bool hasK8sLabel() const { return this->k8sLabel_ != nullptr;};
    void deleteK8sLabel() { this->k8sLabel_ = nullptr;};
    inline bool k8sLabel() const { DARABONBA_PTR_GET_DEFAULT(k8sLabel_, false) };
    inline CreateAlertStrategyRequest& setK8sLabel(bool k8sLabel) { DARABONBA_PTR_SET_VALUE(k8sLabel_, k8sLabel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlertStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const CreateAlertStrategyRequestStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, CreateAlertStrategyRequestStrategy) };
    inline CreateAlertStrategyRequestStrategy strategy() { DARABONBA_PTR_GET(strategy_, CreateAlertStrategyRequestStrategy) };
    inline CreateAlertStrategyRequest& setStrategy(const CreateAlertStrategyRequestStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline CreateAlertStrategyRequest& setStrategy(CreateAlertStrategyRequestStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<bool> k8sLabel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateAlertStrategyRequestStrategy> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
