// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSCHECKSTATRESPONSEBODYBARCHART_HPP_
#define ALIBABACLOUD_MODELS_GETOSSCHECKSTATRESPONSEBODYBARCHART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOssCheckStatResponseBodyBarChartY.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetOssCheckStatResponseBodyBarChart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssCheckStatResponseBodyBarChart& obj) { 
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssCheckStatResponseBodyBarChart& obj) { 
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    GetOssCheckStatResponseBodyBarChart() = default ;
    GetOssCheckStatResponseBodyBarChart(const GetOssCheckStatResponseBodyBarChart &) = default ;
    GetOssCheckStatResponseBodyBarChart(GetOssCheckStatResponseBodyBarChart &&) = default ;
    GetOssCheckStatResponseBodyBarChart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssCheckStatResponseBodyBarChart() = default ;
    GetOssCheckStatResponseBodyBarChart& operator=(const GetOssCheckStatResponseBodyBarChart &) = default ;
    GetOssCheckStatResponseBodyBarChart& operator=(GetOssCheckStatResponseBodyBarChart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->x_ == nullptr
        && return this->y_ == nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline const vector<string> & x() const { DARABONBA_PTR_GET_CONST(x_, vector<string>) };
    inline vector<string> x() { DARABONBA_PTR_GET(x_, vector<string>) };
    inline GetOssCheckStatResponseBodyBarChart& setX(const vector<string> & x) { DARABONBA_PTR_SET_VALUE(x_, x) };
    inline GetOssCheckStatResponseBodyBarChart& setX(vector<string> && x) { DARABONBA_PTR_SET_RVALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline const vector<Models::GetOssCheckStatResponseBodyBarChartY> & y() const { DARABONBA_PTR_GET_CONST(y_, vector<Models::GetOssCheckStatResponseBodyBarChartY>) };
    inline vector<Models::GetOssCheckStatResponseBodyBarChartY> y() { DARABONBA_PTR_GET(y_, vector<Models::GetOssCheckStatResponseBodyBarChartY>) };
    inline GetOssCheckStatResponseBodyBarChart& setY(const vector<Models::GetOssCheckStatResponseBodyBarChartY> & y) { DARABONBA_PTR_SET_VALUE(y_, y) };
    inline GetOssCheckStatResponseBodyBarChart& setY(vector<Models::GetOssCheckStatResponseBodyBarChartY> && y) { DARABONBA_PTR_SET_RVALUE(y_, y) };


  protected:
    // X values of the coordinates.
    std::shared_ptr<vector<string>> x_ = nullptr;
    // Y values of the coordinates.
    std::shared_ptr<vector<Models::GetOssCheckStatResponseBodyBarChartY>> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
