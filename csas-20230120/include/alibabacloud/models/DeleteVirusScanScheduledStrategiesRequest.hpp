// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVIRUSSCANSCHEDULEDSTRATEGIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVIRUSSCANSCHEDULEDSTRATEGIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeleteVirusScanScheduledStrategiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVirusScanScheduledStrategiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyIds, strategyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVirusScanScheduledStrategiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyIds, strategyIds_);
    };
    DeleteVirusScanScheduledStrategiesRequest() = default ;
    DeleteVirusScanScheduledStrategiesRequest(const DeleteVirusScanScheduledStrategiesRequest &) = default ;
    DeleteVirusScanScheduledStrategiesRequest(DeleteVirusScanScheduledStrategiesRequest &&) = default ;
    DeleteVirusScanScheduledStrategiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVirusScanScheduledStrategiesRequest() = default ;
    DeleteVirusScanScheduledStrategiesRequest& operator=(const DeleteVirusScanScheduledStrategiesRequest &) = default ;
    DeleteVirusScanScheduledStrategiesRequest& operator=(DeleteVirusScanScheduledStrategiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyIds_ == nullptr; };
    // strategyIds Field Functions 
    bool hasStrategyIds() const { return this->strategyIds_ != nullptr;};
    void deleteStrategyIds() { this->strategyIds_ = nullptr;};
    inline const vector<string> & getStrategyIds() const { DARABONBA_PTR_GET_CONST(strategyIds_, vector<string>) };
    inline vector<string> getStrategyIds() { DARABONBA_PTR_GET(strategyIds_, vector<string>) };
    inline DeleteVirusScanScheduledStrategiesRequest& setStrategyIds(const vector<string> & strategyIds) { DARABONBA_PTR_SET_VALUE(strategyIds_, strategyIds) };
    inline DeleteVirusScanScheduledStrategiesRequest& setStrategyIds(vector<string> && strategyIds) { DARABONBA_PTR_SET_RVALUE(strategyIds_, strategyIds) };


  protected:
    // The IDs of the virus scheduled scan policies to delete. The collection must contain at least 1 and at most 100 IDs. Duplicate IDs are not allowed.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> strategyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
