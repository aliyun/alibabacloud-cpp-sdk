// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESOARSTRATEGYTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESOARSTRATEGYTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteSoarStrategyTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSoarStrategyTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyTaskId, strategyTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSoarStrategyTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyTaskId, strategyTaskId_);
    };
    DeleteSoarStrategyTaskRequest() = default ;
    DeleteSoarStrategyTaskRequest(const DeleteSoarStrategyTaskRequest &) = default ;
    DeleteSoarStrategyTaskRequest(DeleteSoarStrategyTaskRequest &&) = default ;
    DeleteSoarStrategyTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSoarStrategyTaskRequest() = default ;
    DeleteSoarStrategyTaskRequest& operator=(const DeleteSoarStrategyTaskRequest &) = default ;
    DeleteSoarStrategyTaskRequest& operator=(DeleteSoarStrategyTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyTaskId_ == nullptr; };
    // strategyTaskId Field Functions 
    bool hasStrategyTaskId() const { return this->strategyTaskId_ != nullptr;};
    void deleteStrategyTaskId() { this->strategyTaskId_ = nullptr;};
    inline int64_t getStrategyTaskId() const { DARABONBA_PTR_GET_DEFAULT(strategyTaskId_, 0L) };
    inline DeleteSoarStrategyTaskRequest& setStrategyTaskId(int64_t strategyTaskId) { DARABONBA_PTR_SET_VALUE(strategyTaskId_, strategyTaskId) };


  protected:
    // The ID of the policy task that is in the waiting state.
    // 
    // >  You can call the [DescribeSoarStrategyTasks](~~DescribeSoarStrategyTasks~~) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> strategyTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
