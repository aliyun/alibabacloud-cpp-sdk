// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STRATEGYITEM_HPP_
#define ALIBABACLOUD_MODELS_STRATEGYITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class StrategyItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StrategyItem& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, StrategyItem& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
    };
    StrategyItem() = default ;
    StrategyItem(const StrategyItem &) = default ;
    StrategyItem(StrategyItem &&) = default ;
    StrategyItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StrategyItem() = default ;
    StrategyItem& operator=(const StrategyItem &) = default ;
    StrategyItem& operator=(StrategyItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->resource_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline StrategyItem& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline StrategyItem& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    shared_ptr<string> action_ {};
    shared_ptr<string> resource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
