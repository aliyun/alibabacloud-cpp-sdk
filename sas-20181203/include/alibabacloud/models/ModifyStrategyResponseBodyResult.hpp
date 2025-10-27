// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTRATEGYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTRATEGYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyStrategyResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStrategyResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStrategyResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    ModifyStrategyResponseBodyResult() = default ;
    ModifyStrategyResponseBodyResult(const ModifyStrategyResponseBodyResult &) = default ;
    ModifyStrategyResponseBodyResult(ModifyStrategyResponseBodyResult &&) = default ;
    ModifyStrategyResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStrategyResponseBodyResult() = default ;
    ModifyStrategyResponseBodyResult& operator=(const ModifyStrategyResponseBodyResult &) = default ;
    ModifyStrategyResponseBodyResult& operator=(ModifyStrategyResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyId_ == nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int32_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0) };
    inline ModifyStrategyResponseBodyResult& setStrategyId(int32_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The ID of the baseline check policy.
    std::shared_ptr<int32_t> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
