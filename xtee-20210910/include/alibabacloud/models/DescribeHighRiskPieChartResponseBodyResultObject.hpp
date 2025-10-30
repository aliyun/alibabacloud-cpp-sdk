// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHRISKPIECHARTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity.hpp>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince.hpp>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity.hpp>
#include <alibabacloud/models/DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHighRiskPieChartResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighRiskPieChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(highRiskIPCity, highRiskIPCity_);
      DARABONBA_PTR_TO_JSON(highRiskIPProvince, highRiskIPProvince_);
      DARABONBA_PTR_TO_JSON(highRiskMobileCity, highRiskMobileCity_);
      DARABONBA_PTR_TO_JSON(highRiskMobileProvince, highRiskMobileProvince_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighRiskPieChartResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(highRiskIPCity, highRiskIPCity_);
      DARABONBA_PTR_FROM_JSON(highRiskIPProvince, highRiskIPProvince_);
      DARABONBA_PTR_FROM_JSON(highRiskMobileCity, highRiskMobileCity_);
      DARABONBA_PTR_FROM_JSON(highRiskMobileProvince, highRiskMobileProvince_);
    };
    DescribeHighRiskPieChartResponseBodyResultObject() = default ;
    DescribeHighRiskPieChartResponseBodyResultObject(const DescribeHighRiskPieChartResponseBodyResultObject &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObject(DescribeHighRiskPieChartResponseBodyResultObject &&) = default ;
    DescribeHighRiskPieChartResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighRiskPieChartResponseBodyResultObject() = default ;
    DescribeHighRiskPieChartResponseBodyResultObject& operator=(const DescribeHighRiskPieChartResponseBodyResultObject &) = default ;
    DescribeHighRiskPieChartResponseBodyResultObject& operator=(DescribeHighRiskPieChartResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highRiskIPCity_ == nullptr
        && return this->highRiskIPProvince_ == nullptr && return this->highRiskMobileCity_ == nullptr && return this->highRiskMobileProvince_ == nullptr; };
    // highRiskIPCity Field Functions 
    bool hasHighRiskIPCity() const { return this->highRiskIPCity_ != nullptr;};
    void deleteHighRiskIPCity() { this->highRiskIPCity_ = nullptr;};
    inline const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity & highRiskIPCity() const { DARABONBA_PTR_GET_CONST(highRiskIPCity_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity) };
    inline Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity highRiskIPCity() { DARABONBA_PTR_GET(highRiskIPCity_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity) };
    inline DescribeHighRiskPieChartResponseBodyResultObject& setHighRiskIPCity(const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity & highRiskIPCity) { DARABONBA_PTR_SET_VALUE(highRiskIPCity_, highRiskIPCity) };
    inline DescribeHighRiskPieChartResponseBodyResultObject& setHighRiskIPCity(Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity && highRiskIPCity) { DARABONBA_PTR_SET_RVALUE(highRiskIPCity_, highRiskIPCity) };


    // highRiskIPProvince Field Functions 
    bool hasHighRiskIPProvince() const { return this->highRiskIPProvince_ != nullptr;};
    void deleteHighRiskIPProvince() { this->highRiskIPProvince_ = nullptr;};
    inline const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince & highRiskIPProvince() const { DARABONBA_PTR_GET_CONST(highRiskIPProvince_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince) };
    inline Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince highRiskIPProvince() { DARABONBA_PTR_GET(highRiskIPProvince_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince) };
    inline DescribeHighRiskPieChartResponseBodyResultObject& setHighRiskIPProvince(const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince & highRiskIPProvince) { DARABONBA_PTR_SET_VALUE(highRiskIPProvince_, highRiskIPProvince) };
    inline DescribeHighRiskPieChartResponseBodyResultObject& setHighRiskIPProvince(Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince && highRiskIPProvince) { DARABONBA_PTR_SET_RVALUE(highRiskIPProvince_, highRiskIPProvince) };


    // highRiskMobileCity Field Functions 
    bool hasHighRiskMobileCity() const { return this->highRiskMobileCity_ != nullptr;};
    void deleteHighRiskMobileCity() { this->highRiskMobileCity_ = nullptr;};
    inline const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity & highRiskMobileCity() const { DARABONBA_PTR_GET_CONST(highRiskMobileCity_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity) };
    inline Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity highRiskMobileCity() { DARABONBA_PTR_GET(highRiskMobileCity_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity) };
    inline DescribeHighRiskPieChartResponseBodyResultObject& setHighRiskMobileCity(const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity & highRiskMobileCity) { DARABONBA_PTR_SET_VALUE(highRiskMobileCity_, highRiskMobileCity) };
    inline DescribeHighRiskPieChartResponseBodyResultObject& setHighRiskMobileCity(Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity && highRiskMobileCity) { DARABONBA_PTR_SET_RVALUE(highRiskMobileCity_, highRiskMobileCity) };


    // highRiskMobileProvince Field Functions 
    bool hasHighRiskMobileProvince() const { return this->highRiskMobileProvince_ != nullptr;};
    void deleteHighRiskMobileProvince() { this->highRiskMobileProvince_ = nullptr;};
    inline const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince & highRiskMobileProvince() const { DARABONBA_PTR_GET_CONST(highRiskMobileProvince_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince) };
    inline Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince highRiskMobileProvince() { DARABONBA_PTR_GET(highRiskMobileProvince_, Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince) };
    inline DescribeHighRiskPieChartResponseBodyResultObject& setHighRiskMobileProvince(const Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince & highRiskMobileProvince) { DARABONBA_PTR_SET_VALUE(highRiskMobileProvince_, highRiskMobileProvince) };
    inline DescribeHighRiskPieChartResponseBodyResultObject& setHighRiskMobileProvince(Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince && highRiskMobileProvince) { DARABONBA_PTR_SET_RVALUE(highRiskMobileProvince_, highRiskMobileProvince) };


  protected:
    // High-risk IP city
    std::shared_ptr<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPCity> highRiskIPCity_ = nullptr;
    // High-risk IP归属province
    std::shared_ptr<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskIPProvince> highRiskIPProvince_ = nullptr;
    // High-risk mobile phone归属city
    std::shared_ptr<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileCity> highRiskMobileCity_ = nullptr;
    // High-risk mobile phone\\"s province of origin
    std::shared_ptr<Models::DescribeHighRiskPieChartResponseBodyResultObjectHighRiskMobileProvince> highRiskMobileProvince_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
