// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHLIMITATIONRESPONSEBODYBANDWIDTHS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHLIMITATIONRESPONSEBODYBANDWIDTHS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeBandwidthLimitationResponseBodyBandwidths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthLimitationResponseBodyBandwidths& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthLimitationResponseBodyBandwidths& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
    };
    DescribeBandwidthLimitationResponseBodyBandwidths() = default ;
    DescribeBandwidthLimitationResponseBodyBandwidths(const DescribeBandwidthLimitationResponseBodyBandwidths &) = default ;
    DescribeBandwidthLimitationResponseBodyBandwidths(DescribeBandwidthLimitationResponseBodyBandwidths &&) = default ;
    DescribeBandwidthLimitationResponseBodyBandwidths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthLimitationResponseBodyBandwidths() = default ;
    DescribeBandwidthLimitationResponseBodyBandwidths& operator=(const DescribeBandwidthLimitationResponseBodyBandwidths &) = default ;
    DescribeBandwidthLimitationResponseBodyBandwidths& operator=(DescribeBandwidthLimitationResponseBodyBandwidths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline const vector<Models::DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth> & bandwidth() const { DARABONBA_PTR_GET_CONST(bandwidth_, vector<Models::DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth>) };
    inline vector<Models::DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth> bandwidth() { DARABONBA_PTR_GET(bandwidth_, vector<Models::DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth>) };
    inline DescribeBandwidthLimitationResponseBodyBandwidths& setBandwidth(const vector<Models::DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth> & bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };
    inline DescribeBandwidthLimitationResponseBodyBandwidths& setBandwidth(vector<Models::DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth> && bandwidth) { DARABONBA_PTR_SET_RVALUE(bandwidth_, bandwidth) };


  protected:
    std::shared_ptr<vector<Models::DescribeBandwidthLimitationResponseBodyBandwidthsBandwidth>> bandwidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
