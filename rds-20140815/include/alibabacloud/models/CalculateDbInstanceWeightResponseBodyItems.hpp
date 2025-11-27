// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALCULATEDBINSTANCEWEIGHTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_CALCULATEDBINSTANCEWEIGHTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CalculateDBInstanceWeightResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CalculateDBInstanceWeightResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceWeight, DBInstanceWeight_);
    };
    friend void from_json(const Darabonba::Json& j, CalculateDBInstanceWeightResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceWeight, DBInstanceWeight_);
    };
    CalculateDBInstanceWeightResponseBodyItems() = default ;
    CalculateDBInstanceWeightResponseBodyItems(const CalculateDBInstanceWeightResponseBodyItems &) = default ;
    CalculateDBInstanceWeightResponseBodyItems(CalculateDBInstanceWeightResponseBodyItems &&) = default ;
    CalculateDBInstanceWeightResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CalculateDBInstanceWeightResponseBodyItems() = default ;
    CalculateDBInstanceWeightResponseBodyItems& operator=(const CalculateDBInstanceWeightResponseBodyItems &) = default ;
    CalculateDBInstanceWeightResponseBodyItems& operator=(CalculateDBInstanceWeightResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceWeight_ == nullptr; };
    // DBInstanceWeight Field Functions 
    bool hasDBInstanceWeight() const { return this->DBInstanceWeight_ != nullptr;};
    void deleteDBInstanceWeight() { this->DBInstanceWeight_ = nullptr;};
    inline const vector<Models::CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight> & DBInstanceWeight() const { DARABONBA_PTR_GET_CONST(DBInstanceWeight_, vector<Models::CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight>) };
    inline vector<Models::CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight> DBInstanceWeight() { DARABONBA_PTR_GET(DBInstanceWeight_, vector<Models::CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight>) };
    inline CalculateDBInstanceWeightResponseBodyItems& setDBInstanceWeight(const vector<Models::CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight> & DBInstanceWeight) { DARABONBA_PTR_SET_VALUE(DBInstanceWeight_, DBInstanceWeight) };
    inline CalculateDBInstanceWeightResponseBodyItems& setDBInstanceWeight(vector<Models::CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight> && DBInstanceWeight) { DARABONBA_PTR_SET_RVALUE(DBInstanceWeight_, DBInstanceWeight) };


  protected:
    std::shared_ptr<vector<Models::CalculateDBInstanceWeightResponseBodyItemsDBInstanceWeight>> DBInstanceWeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
