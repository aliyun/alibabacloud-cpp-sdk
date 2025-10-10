// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSDEFAULTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERSDEFAULTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenersResponseBodyListenersDefaultActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBodyListenersDefaultActions& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBodyListenersDefaultActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListListenersResponseBodyListenersDefaultActions() = default ;
    ListListenersResponseBodyListenersDefaultActions(const ListListenersResponseBodyListenersDefaultActions &) = default ;
    ListListenersResponseBodyListenersDefaultActions(ListListenersResponseBodyListenersDefaultActions &&) = default ;
    ListListenersResponseBodyListenersDefaultActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBodyListenersDefaultActions() = default ;
    ListListenersResponseBodyListenersDefaultActions& operator=(const ListListenersResponseBodyListenersDefaultActions &) = default ;
    ListListenersResponseBodyListenersDefaultActions& operator=(ListListenersResponseBodyListenersDefaultActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardGroupConfig_ != nullptr
        && this->type_ != nullptr; };
    // forwardGroupConfig Field Functions 
    bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
    void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
    inline const Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig & forwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig) };
    inline Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig forwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig) };
    inline ListListenersResponseBodyListenersDefaultActions& setForwardGroupConfig(const Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
    inline ListListenersResponseBodyListenersDefaultActions& setForwardGroupConfig(Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListListenersResponseBodyListenersDefaultActions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configuration of the forwarding rule action. This parameter takes effect only when the action is **ForwardGroup**.
    std::shared_ptr<Models::ListListenersResponseBodyListenersDefaultActionsForwardGroupConfig> forwardGroupConfig_ = nullptr;
    // The action. **ForwardGroup**: forwards requests to multiple server groups.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
