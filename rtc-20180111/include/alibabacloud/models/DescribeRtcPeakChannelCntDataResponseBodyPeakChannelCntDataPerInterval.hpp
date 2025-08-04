// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATARESPONSEBODYPEAKCHANNELCNTDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATARESPONSEBODYPEAKCHANNELCNTDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(PeakChannelCntModule, peakChannelCntModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(PeakChannelCntModule, peakChannelCntModule_);
    };
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval() = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval(const DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval &) = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval(DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval &&) = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval() = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval& operator=(const DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval &) = default ;
    DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval& operator=(DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->peakChannelCntModule_ != nullptr; };
    // peakChannelCntModule Field Functions 
    bool hasPeakChannelCntModule() const { return this->peakChannelCntModule_ != nullptr;};
    void deletePeakChannelCntModule() { this->peakChannelCntModule_ = nullptr;};
    inline const vector<Models::DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule> & peakChannelCntModule() const { DARABONBA_PTR_GET_CONST(peakChannelCntModule_, vector<Models::DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule>) };
    inline vector<Models::DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule> peakChannelCntModule() { DARABONBA_PTR_GET(peakChannelCntModule_, vector<Models::DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule>) };
    inline DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval& setPeakChannelCntModule(const vector<Models::DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule> & peakChannelCntModule) { DARABONBA_PTR_SET_VALUE(peakChannelCntModule_, peakChannelCntModule) };
    inline DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerInterval& setPeakChannelCntModule(vector<Models::DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule> && peakChannelCntModule) { DARABONBA_PTR_SET_RVALUE(peakChannelCntModule_, peakChannelCntModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeRtcPeakChannelCntDataResponseBodyPeakChannelCntDataPerIntervalPeakChannelCntModule>> peakChannelCntModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
