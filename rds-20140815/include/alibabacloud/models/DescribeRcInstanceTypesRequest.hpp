// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeRCInstanceTypesRequest() = default ;
    DescribeRCInstanceTypesRequest(const DescribeRCInstanceTypesRequest &) = default ;
    DescribeRCInstanceTypesRequest(DescribeRCInstanceTypesRequest &&) = default ;
    DescribeRCInstanceTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypesRequest() = default ;
    DescribeRCInstanceTypesRequest& operator=(const DescribeRCInstanceTypesRequest &) = default ;
    DescribeRCInstanceTypesRequest& operator=(DescribeRCInstanceTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->engine_ == nullptr && return this->instanceType_ == nullptr && return this->instanceTypeFamily_ == nullptr && return this->regionId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeRCInstanceTypesRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeRCInstanceTypesRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline const vector<string> & instanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<string>) };
    inline vector<string> instanceType() { DARABONBA_PTR_GET(instanceType_, vector<string>) };
    inline DescribeRCInstanceTypesRequest& setInstanceType(const vector<string> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
    inline DescribeRCInstanceTypesRequest& setInstanceType(vector<string> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeRCInstanceTypesRequest& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCInstanceTypesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The commodity code of the instance.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The database engine. Set the value to MySQL.
    std::shared_ptr<string> engine_ = nullptr;
    // The instance types.
    std::shared_ptr<vector<string>> instanceType_ = nullptr;
    // The instance family. You can call the **DescribeRCInstanceTypeFamilies** operation to query the instance families of instances.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
