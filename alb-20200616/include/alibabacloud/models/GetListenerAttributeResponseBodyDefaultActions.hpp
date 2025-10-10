// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYDEFAULTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYDEFAULTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBodyDefaultActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBodyDefaultActions& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBodyDefaultActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetListenerAttributeResponseBodyDefaultActions() = default ;
    GetListenerAttributeResponseBodyDefaultActions(const GetListenerAttributeResponseBodyDefaultActions &) = default ;
    GetListenerAttributeResponseBodyDefaultActions(GetListenerAttributeResponseBodyDefaultActions &&) = default ;
    GetListenerAttributeResponseBodyDefaultActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBodyDefaultActions() = default ;
    GetListenerAttributeResponseBodyDefaultActions& operator=(const GetListenerAttributeResponseBodyDefaultActions &) = default ;
    GetListenerAttributeResponseBodyDefaultActions& operator=(GetListenerAttributeResponseBodyDefaultActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardGroupConfig_ != nullptr
        && this->type_ != nullptr; };
    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig) };
    inline Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig) };
    inline GetListenerAttributeResponseBodyDefaultActions& setForwardGroupConfig(const Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline GetListenerAttributeResponseBodyDefaultActions& setForwardGroupConfig(Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetListenerAttributeResponseBodyDefaultActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configuration of the ForwardGroup action. This parameter is returned and takes effect when Type is set to **ForwardGroup**.
    std::shared_ptr<Models::GetListenerAttributeResponseBodyDefaultActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    // The type of the action.
    // 
    // If **ForwardGroup** is returned, requests are forwarded to multiple vServer groups.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
