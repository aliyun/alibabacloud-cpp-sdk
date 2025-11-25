// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKREGIONBLOCKRESPONSEBODYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKREGIONBLOCKRESPONSEBODYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRegionBlockResponseBodyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRegionBlockResponseBodyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Countries, countries_);
      DARABONBA_PTR_TO_JSON(Provinces, provinces_);
      DARABONBA_PTR_TO_JSON(RegionBlockSwitch, regionBlockSwitch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRegionBlockResponseBodyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Countries, countries_);
      DARABONBA_PTR_FROM_JSON(Provinces, provinces_);
      DARABONBA_PTR_FROM_JSON(RegionBlockSwitch, regionBlockSwitch_);
    };
    DescribeNetworkRegionBlockResponseBodyConfig() = default ;
    DescribeNetworkRegionBlockResponseBodyConfig(const DescribeNetworkRegionBlockResponseBodyConfig &) = default ;
    DescribeNetworkRegionBlockResponseBodyConfig(DescribeNetworkRegionBlockResponseBodyConfig &&) = default ;
    DescribeNetworkRegionBlockResponseBodyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRegionBlockResponseBodyConfig() = default ;
    DescribeNetworkRegionBlockResponseBodyConfig& operator=(const DescribeNetworkRegionBlockResponseBodyConfig &) = default ;
    DescribeNetworkRegionBlockResponseBodyConfig& operator=(DescribeNetworkRegionBlockResponseBodyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->countries_ == nullptr
        && return this->provinces_ == nullptr && return this->regionBlockSwitch_ == nullptr; };
    // countries Field Functions 
    bool hasCountries() const { return this->countries_ != nullptr;};
    void deleteCountries() { this->countries_ = nullptr;};
    inline const vector<int64_t> & countries() const { DARABONBA_PTR_GET_CONST(countries_, vector<int64_t>) };
    inline vector<int64_t> countries() { DARABONBA_PTR_GET(countries_, vector<int64_t>) };
    inline DescribeNetworkRegionBlockResponseBodyConfig& setCountries(const vector<int64_t> & countries) { DARABONBA_PTR_SET_VALUE(countries_, countries) };
    inline DescribeNetworkRegionBlockResponseBodyConfig& setCountries(vector<int64_t> && countries) { DARABONBA_PTR_SET_RVALUE(countries_, countries) };


    // provinces Field Functions 
    bool hasProvinces() const { return this->provinces_ != nullptr;};
    void deleteProvinces() { this->provinces_ = nullptr;};
    inline const vector<int64_t> & provinces() const { DARABONBA_PTR_GET_CONST(provinces_, vector<int64_t>) };
    inline vector<int64_t> provinces() { DARABONBA_PTR_GET(provinces_, vector<int64_t>) };
    inline DescribeNetworkRegionBlockResponseBodyConfig& setProvinces(const vector<int64_t> & provinces) { DARABONBA_PTR_SET_VALUE(provinces_, provinces) };
    inline DescribeNetworkRegionBlockResponseBodyConfig& setProvinces(vector<int64_t> && provinces) { DARABONBA_PTR_SET_RVALUE(provinces_, provinces) };


    // regionBlockSwitch Field Functions 
    bool hasRegionBlockSwitch() const { return this->regionBlockSwitch_ != nullptr;};
    void deleteRegionBlockSwitch() { this->regionBlockSwitch_ = nullptr;};
    inline string regionBlockSwitch() const { DARABONBA_PTR_GET_DEFAULT(regionBlockSwitch_, "") };
    inline DescribeNetworkRegionBlockResponseBodyConfig& setRegionBlockSwitch(string regionBlockSwitch) { DARABONBA_PTR_SET_VALUE(regionBlockSwitch_, regionBlockSwitch) };


  protected:
    // The codes of the countries or areas from which the requests are blocked.
    std::shared_ptr<vector<int64_t>> countries_ = nullptr;
    // The codes of the administrative regions in China from which the requests are blocked.
    std::shared_ptr<vector<int64_t>> provinces_ = nullptr;
    // The status of the Location Blacklist policy. Valid values:
    // 
    // *   **on**: enabled
    // *   **off**: disabled
    std::shared_ptr<string> regionBlockSwitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
