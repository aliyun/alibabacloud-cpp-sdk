// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUESTDEFAULTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUESTDEFAULTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateListenerRequestDefaultActionsForwardGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateListenerRequestDefaultActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequestDefaultActions& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequestDefaultActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateListenerRequestDefaultActions() = default ;
    CreateListenerRequestDefaultActions(const CreateListenerRequestDefaultActions &) = default ;
    CreateListenerRequestDefaultActions(CreateListenerRequestDefaultActions &&) = default ;
    CreateListenerRequestDefaultActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequestDefaultActions() = default ;
    CreateListenerRequestDefaultActions& operator=(const CreateListenerRequestDefaultActions &) = default ;
    CreateListenerRequestDefaultActions& operator=(CreateListenerRequestDefaultActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardGroupConfig_ != nullptr
        && this->type_ != nullptr; };
    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::CreateListenerRequestDefaultActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::CreateListenerRequestDefaultActionsForwardGroupConfig) };
    inline Models::CreateListenerRequestDefaultActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::CreateListenerRequestDefaultActionsForwardGroupConfig) };
    inline CreateListenerRequestDefaultActions& setForwardGroupConfig(const Models::CreateListenerRequestDefaultActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline CreateListenerRequestDefaultActions& setForwardGroupConfig(Models::CreateListenerRequestDefaultActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateListenerRequestDefaultActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configuration of the forwarding action. You can specify at most 20 actions.
    // 
    // This parameter is required.
    std::shared_ptr<Models::CreateListenerRequestDefaultActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    // The action type. You can specify only one action type. Valid value:
    // 
    // **ForwardGroup**: forwards requests to multiple Server groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
