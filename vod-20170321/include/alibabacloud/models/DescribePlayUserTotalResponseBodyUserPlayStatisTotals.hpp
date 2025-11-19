// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODYUSERPLAYSTATISTOTALS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODYUSERPLAYSTATISTOTALS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserTotalResponseBodyUserPlayStatisTotals : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserTotalResponseBodyUserPlayStatisTotals& obj) { 
      DARABONBA_PTR_TO_JSON(UserPlayStatisTotal, userPlayStatisTotal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserTotalResponseBodyUserPlayStatisTotals& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPlayStatisTotal, userPlayStatisTotal_);
    };
    DescribePlayUserTotalResponseBodyUserPlayStatisTotals() = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotals(const DescribePlayUserTotalResponseBodyUserPlayStatisTotals &) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotals(DescribePlayUserTotalResponseBodyUserPlayStatisTotals &&) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotals(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserTotalResponseBodyUserPlayStatisTotals() = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotals& operator=(const DescribePlayUserTotalResponseBodyUserPlayStatisTotals &) = default ;
    DescribePlayUserTotalResponseBodyUserPlayStatisTotals& operator=(DescribePlayUserTotalResponseBodyUserPlayStatisTotals &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPlayStatisTotal_ == nullptr; };
    // userPlayStatisTotal Field Functions 
    bool hasUserPlayStatisTotal() const { return this->userPlayStatisTotal_ != nullptr;};
    void deleteUserPlayStatisTotal() { this->userPlayStatisTotal_ = nullptr;};
    inline const vector<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal> & userPlayStatisTotal() const { DARABONBA_PTR_GET_CONST(userPlayStatisTotal_, vector<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal>) };
    inline vector<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal> userPlayStatisTotal() { DARABONBA_PTR_GET(userPlayStatisTotal_, vector<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal>) };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotals& setUserPlayStatisTotal(const vector<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal> & userPlayStatisTotal) { DARABONBA_PTR_SET_VALUE(userPlayStatisTotal_, userPlayStatisTotal) };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotals& setUserPlayStatisTotal(vector<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal> && userPlayStatisTotal) { DARABONBA_PTR_SET_RVALUE(userPlayStatisTotal_, userPlayStatisTotal) };


  protected:
    std::shared_ptr<vector<Models::DescribePlayUserTotalResponseBodyUserPlayStatisTotalsUserPlayStatisTotal>> userPlayStatisTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
