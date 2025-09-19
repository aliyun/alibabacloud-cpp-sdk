// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODYCOORDINATEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODYCOORDINATEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChartDataResponseBodyCoordinateDataYAxisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartDataResponseBodyCoordinateData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartDataResponseBodyCoordinateData& obj) { 
      DARABONBA_PTR_TO_JSON(XAxis, XAxis_);
      DARABONBA_PTR_TO_JSON(YAxisList, YAxisList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartDataResponseBodyCoordinateData& obj) { 
      DARABONBA_PTR_FROM_JSON(XAxis, XAxis_);
      DARABONBA_PTR_FROM_JSON(YAxisList, YAxisList_);
    };
    DescribeChartDataResponseBodyCoordinateData() = default ;
    DescribeChartDataResponseBodyCoordinateData(const DescribeChartDataResponseBodyCoordinateData &) = default ;
    DescribeChartDataResponseBodyCoordinateData(DescribeChartDataResponseBodyCoordinateData &&) = default ;
    DescribeChartDataResponseBodyCoordinateData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartDataResponseBodyCoordinateData() = default ;
    DescribeChartDataResponseBodyCoordinateData& operator=(const DescribeChartDataResponseBodyCoordinateData &) = default ;
    DescribeChartDataResponseBodyCoordinateData& operator=(DescribeChartDataResponseBodyCoordinateData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->XAxis_ != nullptr
        && this->YAxisList_ != nullptr; };
    // XAxis Field Functions 
    bool hasXAxis() const { return this->XAxis_ != nullptr;};
    void deleteXAxis() { this->XAxis_ = nullptr;};
    inline const vector<string> & XAxis() const { DARABONBA_PTR_GET_CONST(XAxis_, vector<string>) };
    inline vector<string> XAxis() { DARABONBA_PTR_GET(XAxis_, vector<string>) };
    inline DescribeChartDataResponseBodyCoordinateData& setXAxis(const vector<string> & XAxis) { DARABONBA_PTR_SET_VALUE(XAxis_, XAxis) };
    inline DescribeChartDataResponseBodyCoordinateData& setXAxis(vector<string> && XAxis) { DARABONBA_PTR_SET_RVALUE(XAxis_, XAxis) };


    // YAxisList Field Functions 
    bool hasYAxisList() const { return this->YAxisList_ != nullptr;};
    void deleteYAxisList() { this->YAxisList_ = nullptr;};
    inline const vector<Models::DescribeChartDataResponseBodyCoordinateDataYAxisList> & YAxisList() const { DARABONBA_PTR_GET_CONST(YAxisList_, vector<Models::DescribeChartDataResponseBodyCoordinateDataYAxisList>) };
    inline vector<Models::DescribeChartDataResponseBodyCoordinateDataYAxisList> YAxisList() { DARABONBA_PTR_GET(YAxisList_, vector<Models::DescribeChartDataResponseBodyCoordinateDataYAxisList>) };
    inline DescribeChartDataResponseBodyCoordinateData& setYAxisList(const vector<Models::DescribeChartDataResponseBodyCoordinateDataYAxisList> & YAxisList) { DARABONBA_PTR_SET_VALUE(YAxisList_, YAxisList) };
    inline DescribeChartDataResponseBodyCoordinateData& setYAxisList(vector<Models::DescribeChartDataResponseBodyCoordinateDataYAxisList> && YAxisList) { DARABONBA_PTR_SET_RVALUE(YAxisList_, YAxisList) };


  protected:
    // The x-axis values.
    std::shared_ptr<vector<string>> XAxis_ = nullptr;
    // The y-axis values.
    std::shared_ptr<vector<Models::DescribeChartDataResponseBodyCoordinateDataYAxisList>> YAxisList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
