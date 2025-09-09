// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTDETAILCHARTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTDETAILCHARTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventDetailResponseBodyEventDetailChartData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailResponseBodyEventDetailChartData& obj) { 
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(Z, z_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailResponseBodyEventDetailChartData& obj) { 
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(Z, z_);
    };
    DescribeEventDetailResponseBodyEventDetailChartData() = default ;
    DescribeEventDetailResponseBodyEventDetailChartData(const DescribeEventDetailResponseBodyEventDetailChartData &) = default ;
    DescribeEventDetailResponseBodyEventDetailChartData(DescribeEventDetailResponseBodyEventDetailChartData &&) = default ;
    DescribeEventDetailResponseBodyEventDetailChartData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailResponseBodyEventDetailChartData() = default ;
    DescribeEventDetailResponseBodyEventDetailChartData& operator=(const DescribeEventDetailResponseBodyEventDetailChartData &) = default ;
    DescribeEventDetailResponseBodyEventDetailChartData& operator=(DescribeEventDetailResponseBodyEventDetailChartData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->x_ != nullptr
        && this->y_ != nullptr && this->z_ != nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline const vector<string> & x() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
    inline vector<string> x() { DARABONBA_PTR_GET(x_, vector<string>) };
    inline DescribeEventDetailResponseBodyEventDetailChartData& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
    inline DescribeEventDetailResponseBodyEventDetailChartData& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline const vector<string> & y() const { DARABONBA_PTR_GET_CONST(y_, vector<string>) };
    inline vector<string> y() { DARABONBA_PTR_GET(y_, vector<string>) };
    inline DescribeEventDetailResponseBodyEventDetailChartData& setY(const vector<string> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
    inline DescribeEventDetailResponseBodyEventDetailChartData& setY(vector<string> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


    // z Field Functions 
    bool hasZ() const { return this->z_ != nullptr;};
    void deleteZ() { this->z_ = nullptr;};
    inline const vector<string> & z() const { DARABONBA_PTR_GET_CONST(z_, vector<string>) };
    inline vector<string> z() { DARABONBA_PTR_GET(z_, vector<string>) };
    inline DescribeEventDetailResponseBodyEventDetailChartData& setZ(const vector<string> & z) { DARABONBA_PTR_SET_VALUE(z_, z) };
    inline DescribeEventDetailResponseBodyEventDetailChartData& setZ(vector<string> && z) { DARABONBA_PTR_SET_RVALUE(z_, z) };


  protected:
    // The value of the data item on the X axis.
    std::shared_ptr<vector<string>> x_ = nullptr;
    // The value of the data item on the Y axis.
    std::shared_ptr<vector<string>> y_ = nullptr;
    // The value of the data item for the Z axis.
    std::shared_ptr<vector<string>> z_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
