// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTSTRATEGYRELATION_HPP_
#define ALIBABACLOUD_MODELS_ALERTSTRATEGYRELATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class AlertStrategyRelation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertStrategyRelation& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(StrategyUuid, strategyUuid_);
    };
    friend void from_json(const Darabonba::Json& j, AlertStrategyRelation& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(StrategyUuid, strategyUuid_);
    };
    AlertStrategyRelation() = default ;
    AlertStrategyRelation(const AlertStrategyRelation &) = default ;
    AlertStrategyRelation(AlertStrategyRelation &&) = default ;
    AlertStrategyRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertStrategyRelation() = default ;
    AlertStrategyRelation& operator=(const AlertStrategyRelation &) = default ;
    AlertStrategyRelation& operator=(AlertStrategyRelation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertName_ != nullptr
        && this->strategyUuid_ != nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline AlertStrategyRelation& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // strategyUuid Field Functions 
    bool hasStrategyUuid() const { return this->strategyUuid_ != nullptr;};
    void deleteStrategyUuid() { this->strategyUuid_ = nullptr;};
    inline string strategyUuid() const { DARABONBA_PTR_GET_DEFAULT(strategyUuid_, "") };
    inline AlertStrategyRelation& setStrategyUuid(string strategyUuid) { DARABONBA_PTR_SET_VALUE(strategyUuid_, strategyUuid) };


  protected:
    std::shared_ptr<string> alertName_ = nullptr;
    std::shared_ptr<string> strategyUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
