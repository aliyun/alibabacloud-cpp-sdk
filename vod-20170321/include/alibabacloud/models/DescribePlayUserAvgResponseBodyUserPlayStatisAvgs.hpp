// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERAVGRESPONSEBODYUSERPLAYSTATISAVGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERAVGRESPONSEBODYUSERPLAYSTATISAVGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserAvgResponseBodyUserPlayStatisAvgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserAvgResponseBodyUserPlayStatisAvgs& obj) { 
      DARABONBA_PTR_TO_JSON(UserPlayStatisAvg, userPlayStatisAvg_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserAvgResponseBodyUserPlayStatisAvgs& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPlayStatisAvg, userPlayStatisAvg_);
    };
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgs() = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgs(const DescribePlayUserAvgResponseBodyUserPlayStatisAvgs &) = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgs(DescribePlayUserAvgResponseBodyUserPlayStatisAvgs &&) = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserAvgResponseBodyUserPlayStatisAvgs() = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgs& operator=(const DescribePlayUserAvgResponseBodyUserPlayStatisAvgs &) = default ;
    DescribePlayUserAvgResponseBodyUserPlayStatisAvgs& operator=(DescribePlayUserAvgResponseBodyUserPlayStatisAvgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPlayStatisAvg_ == nullptr; };
    // userPlayStatisAvg Field Functions 
    bool hasUserPlayStatisAvg() const { return this->userPlayStatisAvg_ != nullptr;};
    void deleteUserPlayStatisAvg() { this->userPlayStatisAvg_ = nullptr;};
    inline const vector<Models::DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg> & userPlayStatisAvg() const { DARABONBA_PTR_GET_CONST(userPlayStatisAvg_, vector<Models::DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg>) };
    inline vector<Models::DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg> userPlayStatisAvg() { DARABONBA_PTR_GET(userPlayStatisAvg_, vector<Models::DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg>) };
    inline DescribePlayUserAvgResponseBodyUserPlayStatisAvgs& setUserPlayStatisAvg(const vector<Models::DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg> & userPlayStatisAvg) { DARABONBA_PTR_SET_VALUE(userPlayStatisAvg_, userPlayStatisAvg) };
    inline DescribePlayUserAvgResponseBodyUserPlayStatisAvgs& setUserPlayStatisAvg(vector<Models::DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg> && userPlayStatisAvg) { DARABONBA_PTR_SET_RVALUE(userPlayStatisAvg_, userPlayStatisAvg) };


  protected:
    std::shared_ptr<vector<Models::DescribePlayUserAvgResponseBodyUserPlayStatisAvgsUserPlayStatisAvg>> userPlayStatisAvg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
