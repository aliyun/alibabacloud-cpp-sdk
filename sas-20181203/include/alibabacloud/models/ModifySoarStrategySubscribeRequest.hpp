// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSOARSTRATEGYSUBSCRIBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSOARSTRATEGYSUBSCRIBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifySoarStrategySubscribeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySoarStrategySubscribeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(SubscribeStatus, subscribeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySoarStrategySubscribeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(SubscribeStatus, subscribeStatus_);
    };
    ModifySoarStrategySubscribeRequest() = default ;
    ModifySoarStrategySubscribeRequest(const ModifySoarStrategySubscribeRequest &) = default ;
    ModifySoarStrategySubscribeRequest(ModifySoarStrategySubscribeRequest &&) = default ;
    ModifySoarStrategySubscribeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySoarStrategySubscribeRequest() = default ;
    ModifySoarStrategySubscribeRequest& operator=(const ModifySoarStrategySubscribeRequest &) = default ;
    ModifySoarStrategySubscribeRequest& operator=(ModifySoarStrategySubscribeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->strategyId_ != nullptr
        && this->subscribeStatus_ != nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline ModifySoarStrategySubscribeRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // subscribeStatus Field Functions 
    bool hasSubscribeStatus() const { return this->subscribeStatus_ != nullptr;};
    void deleteSubscribeStatus() { this->subscribeStatus_ = nullptr;};
    inline bool subscribeStatus() const { DARABONBA_PTR_GET_DEFAULT(subscribeStatus_, false) };
    inline ModifySoarStrategySubscribeRequest& setSubscribeStatus(bool subscribeStatus) { DARABONBA_PTR_SET_VALUE(subscribeStatus_, subscribeStatus) };


  protected:
    // The ID of the policy.
    // 
    // >  You can call the [DescribeSoarStrategies](~~DescribeSoarStrategies~~) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // Specifies whether to create the policy template. Valid values:
    // 
    // *   true: creates the policy template
    // *   false: deletes the policy template
    // 
    // This parameter is required.
    std::shared_ptr<bool> subscribeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
