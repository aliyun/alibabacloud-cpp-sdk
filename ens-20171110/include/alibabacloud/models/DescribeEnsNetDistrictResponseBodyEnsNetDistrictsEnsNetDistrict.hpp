// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTRESPONSEBODYENSNETDISTRICTSENSNETDISTRICT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTRESPONSEBODYENSNETDISTRICTSENSNETDISTRICT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionIdCount, ensRegionIdCount_);
      DARABONBA_PTR_TO_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_TO_JSON(NetDistrictEnName, netDistrictEnName_);
      DARABONBA_PTR_TO_JSON(NetDistrictFatherCode, netDistrictFatherCode_);
      DARABONBA_PTR_TO_JSON(NetDistrictLevel, netDistrictLevel_);
      DARABONBA_PTR_TO_JSON(NetDistrictName, netDistrictName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionIdCount, ensRegionIdCount_);
      DARABONBA_PTR_FROM_JSON(NetDistrictCode, netDistrictCode_);
      DARABONBA_PTR_FROM_JSON(NetDistrictEnName, netDistrictEnName_);
      DARABONBA_PTR_FROM_JSON(NetDistrictFatherCode, netDistrictFatherCode_);
      DARABONBA_PTR_FROM_JSON(NetDistrictLevel, netDistrictLevel_);
      DARABONBA_PTR_FROM_JSON(NetDistrictName, netDistrictName_);
    };
    DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict() = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict(const DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict &) = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict(DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict &&) = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict() = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& operator=(const DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict &) = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& operator=(DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionIdCount_ != nullptr
        && this->netDistrictCode_ != nullptr && this->netDistrictEnName_ != nullptr && this->netDistrictFatherCode_ != nullptr && this->netDistrictLevel_ != nullptr && this->netDistrictName_ != nullptr; };
    // ensRegionIdCount Field Functions 
    bool hasEnsRegionIdCount() const { return this->ensRegionIdCount_ != nullptr;};
    void deleteEnsRegionIdCount() { this->ensRegionIdCount_ = nullptr;};
    inline string ensRegionIdCount() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIdCount_, "") };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setEnsRegionIdCount(string ensRegionIdCount) { DARABONBA_PTR_SET_VALUE(ensRegionIdCount_, ensRegionIdCount) };


    // netDistrictCode Field Functions 
    bool hasNetDistrictCode() const { return this->netDistrictCode_ != nullptr;};
    void deleteNetDistrictCode() { this->netDistrictCode_ = nullptr;};
    inline string netDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictCode_, "") };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictCode(string netDistrictCode) { DARABONBA_PTR_SET_VALUE(netDistrictCode_, netDistrictCode) };


    // netDistrictEnName Field Functions 
    bool hasNetDistrictEnName() const { return this->netDistrictEnName_ != nullptr;};
    void deleteNetDistrictEnName() { this->netDistrictEnName_ = nullptr;};
    inline string netDistrictEnName() const { DARABONBA_PTR_GET_DEFAULT(netDistrictEnName_, "") };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictEnName(string netDistrictEnName) { DARABONBA_PTR_SET_VALUE(netDistrictEnName_, netDistrictEnName) };


    // netDistrictFatherCode Field Functions 
    bool hasNetDistrictFatherCode() const { return this->netDistrictFatherCode_ != nullptr;};
    void deleteNetDistrictFatherCode() { this->netDistrictFatherCode_ = nullptr;};
    inline string netDistrictFatherCode() const { DARABONBA_PTR_GET_DEFAULT(netDistrictFatherCode_, "") };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictFatherCode(string netDistrictFatherCode) { DARABONBA_PTR_SET_VALUE(netDistrictFatherCode_, netDistrictFatherCode) };


    // netDistrictLevel Field Functions 
    bool hasNetDistrictLevel() const { return this->netDistrictLevel_ != nullptr;};
    void deleteNetDistrictLevel() { this->netDistrictLevel_ = nullptr;};
    inline string netDistrictLevel() const { DARABONBA_PTR_GET_DEFAULT(netDistrictLevel_, "") };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictLevel(string netDistrictLevel) { DARABONBA_PTR_SET_VALUE(netDistrictLevel_, netDistrictLevel) };


    // netDistrictName Field Functions 
    bool hasNetDistrictName() const { return this->netDistrictName_ != nullptr;};
    void deleteNetDistrictName() { this->netDistrictName_ = nullptr;};
    inline string netDistrictName() const { DARABONBA_PTR_GET_DEFAULT(netDistrictName_, "") };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict& setNetDistrictName(string netDistrictName) { DARABONBA_PTR_SET_VALUE(netDistrictName_, netDistrictName) };


  protected:
    // The number of nodes in the region.
    std::shared_ptr<string> ensRegionIdCount_ = nullptr;
    // The code of the region.
    std::shared_ptr<string> netDistrictCode_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> netDistrictEnName_ = nullptr;
    // The parent code of the region.
    std::shared_ptr<string> netDistrictFatherCode_ = nullptr;
    // The level of the region.
    // 
    // *   **Big**: area
    // *   **Middle**: province
    // *   **Small**: city
    std::shared_ptr<string> netDistrictLevel_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> netDistrictName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
