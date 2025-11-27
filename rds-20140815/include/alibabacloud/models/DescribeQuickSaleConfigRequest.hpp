// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUICKSALECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUICKSALECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeQuickSaleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQuickSaleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Commodity, commodity_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQuickSaleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Commodity, commodity_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeQuickSaleConfigRequest() = default ;
    DescribeQuickSaleConfigRequest(const DescribeQuickSaleConfigRequest &) = default ;
    DescribeQuickSaleConfigRequest(DescribeQuickSaleConfigRequest &&) = default ;
    DescribeQuickSaleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQuickSaleConfigRequest() = default ;
    DescribeQuickSaleConfigRequest& operator=(const DescribeQuickSaleConfigRequest &) = default ;
    DescribeQuickSaleConfigRequest& operator=(DescribeQuickSaleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodity_ == nullptr
        && return this->engine_ == nullptr && return this->regionId_ == nullptr; };
    // commodity Field Functions 
    bool hasCommodity() const { return this->commodity_ != nullptr;};
    void deleteCommodity() { this->commodity_ = nullptr;};
    inline string commodity() const { DARABONBA_PTR_GET_DEFAULT(commodity_, "") };
    inline DescribeQuickSaleConfigRequest& setCommodity(string commodity) { DARABONBA_PTR_SET_VALUE(commodity_, commodity) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeQuickSaleConfigRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeQuickSaleConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The product code. Valid values:
    // 
    // *   rds: The instance is a subscription instance.
    // *   bards: The instance is a pay-as-you-go instance.
    std::shared_ptr<string> commodity_ = nullptr;
    // The database engine of the instance. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **PostgreSQL**
    // *   **MariaDB**
    std::shared_ptr<string> engine_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
