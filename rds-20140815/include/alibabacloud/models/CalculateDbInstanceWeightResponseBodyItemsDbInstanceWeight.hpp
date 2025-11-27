// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALCULATEDBINSTANCEWEIGHTRESPONSEBODYITEMSDBINSTANCEWEIGHT_HPP_
#define ALIBABACLOUD_MODELS_CALCULATEDBINSTANCEWEIGHTRESPONSEBODYITEMSDBINSTANCEWEIGHT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(ReadonlyInstanceSQLDelayedTime, readonlyInstanceSQLDelayedTime_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(ReadonlyInstanceSQLDelayedTime, readonlyInstanceSQLDelayedTime_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight() = default ;
    CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight(const CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight &) = default ;
    CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight(CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight &&) = default ;
    CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight() = default ;
    CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight& operator=(const CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight &) = default ;
    CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight& operator=(CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->DBInstanceType_ == nullptr && return this->readonlyInstanceSQLDelayedTime_ == nullptr && return this->weight_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // readonlyInstanceSQLDelayedTime Field Functions 
    bool hasReadonlyInstanceSQLDelayedTime() const { return this->readonlyInstanceSQLDelayedTime_ != nullptr;};
    void deleteReadonlyInstanceSQLDelayedTime() { this->readonlyInstanceSQLDelayedTime_ = nullptr;};
    inline string readonlyInstanceSQLDelayedTime() const { DARABONBA_PTR_GET_DEFAULT(readonlyInstanceSQLDelayedTime_, "") };
    inline CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight& setReadonlyInstanceSQLDelayedTime(string readonlyInstanceSQLDelayedTime) { DARABONBA_PTR_SET_VALUE(readonlyInstanceSQLDelayedTime_, readonlyInstanceSQLDelayedTime) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The instance ID
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The type of the instance. Valid values:
    // 
    // *   **Master**: primary instance
    // *   **Readonly**: read-only instance
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    // The latency at which the read-only instances replicate data. The read-only instances replicate data from the primary instance at the latency that is specified by the **ReadonlyInstanceSQLDelayedTime** parameter. Unit: seconds.
    std::shared_ptr<string> readonlyInstanceSQLDelayedTime_ = nullptr;
    // The read weight that the system calculates in real time for the instance.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
