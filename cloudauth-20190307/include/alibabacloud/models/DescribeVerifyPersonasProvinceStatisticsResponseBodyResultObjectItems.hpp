// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASPROVINCESTATISTICSRESPONSEBODYRESULTOBJECTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASPROVINCESTATISTICSRESPONSEBODYRESULTOBJECTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_TO_JSON(ProvinceCnt, provinceCnt_);
      DARABONBA_PTR_TO_JSON(ProvinceName, provinceName_);
      DARABONBA_PTR_TO_JSON(ProvinceRate, provinceRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ProvinceCnt, provinceCnt_);
      DARABONBA_PTR_FROM_JSON(ProvinceName, provinceName_);
      DARABONBA_PTR_FROM_JSON(ProvinceRate, provinceRate_);
    };
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems() = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems(const DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems &) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems(DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems &&) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems() = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems& operator=(const DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems &) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems& operator=(DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->provinceCnt_ == nullptr
        && return this->provinceName_ == nullptr && return this->provinceRate_ == nullptr; };
    // provinceCnt Field Functions 
    bool hasProvinceCnt() const { return this->provinceCnt_ != nullptr;};
    void deleteProvinceCnt() { this->provinceCnt_ = nullptr;};
    inline int64_t provinceCnt() const { DARABONBA_PTR_GET_DEFAULT(provinceCnt_, 0L) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems& setProvinceCnt(int64_t provinceCnt) { DARABONBA_PTR_SET_VALUE(provinceCnt_, provinceCnt) };


    // provinceName Field Functions 
    bool hasProvinceName() const { return this->provinceName_ != nullptr;};
    void deleteProvinceName() { this->provinceName_ = nullptr;};
    inline string provinceName() const { DARABONBA_PTR_GET_DEFAULT(provinceName_, "") };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems& setProvinceName(string provinceName) { DARABONBA_PTR_SET_VALUE(provinceName_, provinceName) };


    // provinceRate Field Functions 
    bool hasProvinceRate() const { return this->provinceRate_ != nullptr;};
    void deleteProvinceRate() { this->provinceRate_ = nullptr;};
    inline string provinceRate() const { DARABONBA_PTR_GET_DEFAULT(provinceRate_, "") };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems& setProvinceRate(string provinceRate) { DARABONBA_PTR_SET_VALUE(provinceRate_, provinceRate) };


  protected:
    // Total number of devices in the province.
    std::shared_ptr<int64_t> provinceCnt_ = nullptr;
    // Province name.
    std::shared_ptr<string> provinceName_ = nullptr;
    // Percentage of the total for this province.
    std::shared_ptr<string> provinceRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
