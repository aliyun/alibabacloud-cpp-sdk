// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSRESPONSEBODYSTORAGECAPACITYUNITS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSRESPONSEBODYSTORAGECAPACITYUNITS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits& obj) { 
      DARABONBA_PTR_TO_JSON(StorageCapacityUnit, storageCapacityUnit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageCapacityUnit, storageCapacityUnit_);
    };
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits() = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits(const DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits &) = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits(DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits &&) = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits() = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits& operator=(const DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits &) = default ;
    DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits& operator=(DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->storageCapacityUnit_ == nullptr; };
    // storageCapacityUnit Field Functions 
    bool hasStorageCapacityUnit() const { return this->storageCapacityUnit_ != nullptr;};
    void deleteStorageCapacityUnit() { this->storageCapacityUnit_ = nullptr;};
    inline const vector<Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit> & storageCapacityUnit() const { DARABONBA_PTR_GET_CONST(storageCapacityUnit_, vector<Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit>) };
    inline vector<Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit> storageCapacityUnit() { DARABONBA_PTR_GET(storageCapacityUnit_, vector<Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit>) };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits& setStorageCapacityUnit(const vector<Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit> & storageCapacityUnit) { DARABONBA_PTR_SET_VALUE(storageCapacityUnit_, storageCapacityUnit) };
    inline DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnits& setStorageCapacityUnit(vector<Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit> && storageCapacityUnit) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnit_, storageCapacityUnit) };


  protected:
    std::shared_ptr<vector<Models::DescribeStorageCapacityUnitsResponseBodyStorageCapacityUnitsStorageCapacityUnit>> storageCapacityUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
