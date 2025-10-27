// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGYTASKPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSoarStrategyTaskParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategyTaskParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyTaskId, strategyTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategyTaskParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyTaskId, strategyTaskId_);
    };
    DescribeSoarStrategyTaskParamsRequest() = default ;
    DescribeSoarStrategyTaskParamsRequest(const DescribeSoarStrategyTaskParamsRequest &) = default ;
    DescribeSoarStrategyTaskParamsRequest(DescribeSoarStrategyTaskParamsRequest &&) = default ;
    DescribeSoarStrategyTaskParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategyTaskParamsRequest() = default ;
    DescribeSoarStrategyTaskParamsRequest& operator=(const DescribeSoarStrategyTaskParamsRequest &) = default ;
    DescribeSoarStrategyTaskParamsRequest& operator=(DescribeSoarStrategyTaskParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyTaskId_ == nullptr; };
    // strategyTaskId Field Functions 
    bool hasStrategyTaskId() const { return this->strategyTaskId_ != nullptr;};
    void deleteStrategyTaskId() { this->strategyTaskId_ = nullptr;};
    inline int64_t strategyTaskId() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskId_, 0L) };
    inline DescribeSoarStrategyTaskParamsRequest& setStrategyTaskId(int64_t strategyTaskId) { DARABONBA_PTR_SET_VALUE(strategyTaskId_, strategyTaskId) };


  protected:
    // Strategy task ID.
    // > You can obtain this parameter by calling the [DescribeSoarStrategyTasks](~~DescribeSoarStrategyTasks~~) interface.
    std::shared_ptr<int64_t> strategyTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
