// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUESTDEFAULTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUESTDEFAULTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateListenerAttributeRequestDefaultActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeRequestDefaultActions& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeRequestDefaultActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateListenerAttributeRequestDefaultActions() = default ;
    UpdateListenerAttributeRequestDefaultActions(const UpdateListenerAttributeRequestDefaultActions &) = default ;
    UpdateListenerAttributeRequestDefaultActions(UpdateListenerAttributeRequestDefaultActions &&) = default ;
    UpdateListenerAttributeRequestDefaultActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeRequestDefaultActions() = default ;
    UpdateListenerAttributeRequestDefaultActions& operator=(const UpdateListenerAttributeRequestDefaultActions &) = default ;
    UpdateListenerAttributeRequestDefaultActions& operator=(UpdateListenerAttributeRequestDefaultActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardGroupConfig_ != nullptr
        && this->type_ != nullptr; };
    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig) };
    inline Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig) };
    inline UpdateListenerAttributeRequestDefaultActions& setForwardGroupConfig(const Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline UpdateListenerAttributeRequestDefaultActions& setForwardGroupConfig(Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateListenerAttributeRequestDefaultActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The forwarding action. This parameter takes effect only when you set **Type** to **ForwardGroup**. You can specify at most 20 actions.
    std::shared_ptr<Models::UpdateListenerAttributeRequestDefaultActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    // The action type. You can specify only one type.
    // 
    // Set the value to **ForwardGroup**, which specifies that requests are forwarded to multiple server groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
