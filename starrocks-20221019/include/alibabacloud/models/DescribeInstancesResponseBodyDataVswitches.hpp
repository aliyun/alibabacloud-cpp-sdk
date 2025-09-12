// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYDATAVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYDATAVSWITCHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeInstancesResponseBodyDataVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyDataVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(Primary, primary_);
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyDataVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeInstancesResponseBodyDataVSwitches() = default ;
    DescribeInstancesResponseBodyDataVSwitches(const DescribeInstancesResponseBodyDataVSwitches &) = default ;
    DescribeInstancesResponseBodyDataVSwitches(DescribeInstancesResponseBodyDataVSwitches &&) = default ;
    DescribeInstancesResponseBodyDataVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyDataVSwitches() = default ;
    DescribeInstancesResponseBodyDataVSwitches& operator=(const DescribeInstancesResponseBodyDataVSwitches &) = default ;
    DescribeInstancesResponseBodyDataVSwitches& operator=(DescribeInstancesResponseBodyDataVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->primary_ != nullptr
        && this->vswId_ != nullptr && this->zoneId_ != nullptr; };
    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool primary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline DescribeInstancesResponseBodyDataVSwitches& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string vswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline DescribeInstancesResponseBodyDataVSwitches& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeInstancesResponseBodyDataVSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> primary_ = nullptr;
    std::shared_ptr<string> vswId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
