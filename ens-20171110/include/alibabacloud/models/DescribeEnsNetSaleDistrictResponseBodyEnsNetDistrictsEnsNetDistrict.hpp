// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETSALEDISTRICTRESPONSEBODYENSNETDISTRICTSENSNETDISTRICT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETSALEDISTRICTRESPONSEBODYENSNETDISTRICTSENSNETDISTRICT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionIdCount, ensRegionIdCount_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_TO_JSON(NetDistrictEnName, netDistrictEnName_);
      DARABONBA_PTR_TO_JSON(NetDistrictFatherCode, netDistrictFatherCode_);
      DARABONBA_PTR_TO_JSON(NetDistrictLevel, netDistrictLevel_);
      DARABONBA_PTR_TO_JSON(NetDistrictName, netDistrictName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionIdCount, ensRegionIdCount_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_FROM_JSON(NetDistrictEnName, netDistrictEnName_);
      DARABONBA_PTR_FROM_JSON(NetDistrictFatherCode, netDistrictFatherCode_);
      DARABONBA_PTR_FROM_JSON(NetDistrictLevel, netDistrictLevel_);
      DARABONBA_PTR_FROM_JSON(NetDistrictName, netDistrictName_);
    };
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict() = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict(const DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict &) = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict(DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict &&) = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict() = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& operator=(const DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict &) = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& operator=(DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionIdCount_ != nullptr
        && this->instanceCount_ != nullptr && this->netDistrictCode_ != nullptr && this->netDistrictEnName_ != nullptr && this->netDistrictFatherCode_ != nullptr && this->netDistrictLevel_ != nullptr
        && this->netDistrictName_ != nullptr; };
    // ensRegionIdCount Field Functions 
    bool hasEnsRegionIdCount() const { return this->ensRegionIdCount_ != nullptr;};
    void deleteEnsRegionIdCount() { this->ensRegionIdCount_ = nullptr;};
    inline string ensRegionIdCount() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIdCount_, "") };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setEnsRegionIdCount(string ensRegionIdCount) { DARABONBA_PTR_SET_VALUE(ensRegionIdCount_, ensRegionIdCount) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline string instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, "") };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setInstanceCount(string instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // netDistrictCode Field Functions 
    bool hasNetDistrictCode() const { return this->netDistrictCode_ != nullptr;};
    void deleteNetDistrictCode() { this->netDistrictCode_ = nullptr;};
    inline string netDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictCode_, "") };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictCode(string netDistrictCode) { DARABONBA_PTR_SET_VALUE(netDistrictCode_, netDistrictCode) };


    // netDistrictEnName Field Functions 
    bool hasNetDistrictEnName() const { return this->netDistrictEnName_ != nullptr;};
    void deleteNetDistrictEnName() { this->netDistrictEnName_ = nullptr;};
    inline string netDistrictEnName() const { DARABONBA_PTR_GET_DEFAULT(netDistrictEnName_, "") };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictEnName(string netDistrictEnName) { DARABONBA_PTR_SET_VALUE(netDistrictEnName_, netDistrictEnName) };


    // netDistrictFatherCode Field Functions 
    bool hasNetDistrictFatherCode() const { return this->netDistrictFatherCode_ != nullptr;};
    void deleteNetDistrictFatherCode() { this->netDistrictFatherCode_ = nullptr;};
    inline string netDistrictFatherCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictFatherCode_, "") };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictFatherCode(string netDistrictFatherCode) { DARABONBA_PTR_SET_VALUE(netDistrictFatherCode_, netDistrictFatherCode) };


    // netDistrictLevel Field Functions 
    bool hasNetDistrictLevel() const { return this->netDistrictLevel_ != nullptr;};
    void deleteNetDistrictLevel() { this->netDistrictLevel_ = nullptr;};
    inline string netDistrictLevel() const { DARABONBA_PTR_GET_DEFAULT(netDistrictLevel_, "") };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictLevel(string netDistrictLevel) { DARABONBA_PTR_SET_VALUE(netDistrictLevel_, netDistrictLevel) };


    // netDistrictName Field Functions 
    bool hasNetDistrictName() const { return this->netDistrictName_ != nullptr;};
    void deleteNetDistrictName() { this->netDistrictName_ = nullptr;};
    inline string netDistrictName() const { DARABONBA_PTR_GET_DEFAULT(netDistrictName_, "") };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictName(string netDistrictName) { DARABONBA_PTR_SET_VALUE(netDistrictName_, netDistrictName) };


  protected:
    // The information about the ISP.
    std::shared_ptr<string> ensRegionIdCount_ = nullptr;
    // The information about the instance.
    std::shared_ptr<string> instanceCount_ = nullptr;
    // The region code.
    std::shared_ptr<string> netDistrictCode_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> netDistrictEnName_ = nullptr;
    // The parent code of the region.
    std::shared_ptr<string> netDistrictFatherCode_ = nullptr;
    // The region level. Valid values:
    // 
    // *   **Big**: area
    // *   **Middle**: province
    // *   **Small**: city
    std::shared_ptr<string> netDistrictLevel_ = nullptr;
    // The Chinese name of the region.
    std::shared_ptr<string> netDistrictName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
