// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATARESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNBANDWIDTHDATARESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnBandWidthDataResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnBandWidthDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(BandWidthMonitorData, bandWidthMonitorData_);
      DARABONBA_PTR_TO_JSON(MaxDownBandWidth, maxDownBandWidth_);
      DARABONBA_PTR_TO_JSON(MaxUpBandWidth, maxUpBandWidth_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnBandWidthDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWidthMonitorData, bandWidthMonitorData_);
      DARABONBA_PTR_FROM_JSON(MaxDownBandWidth, maxDownBandWidth_);
      DARABONBA_PTR_FROM_JSON(MaxUpBandWidth, maxUpBandWidth_);
    };
    DescribeEpnBandWidthDataResponseBodyMonitorData() = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorData(const DescribeEpnBandWidthDataResponseBodyMonitorData &) = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorData(DescribeEpnBandWidthDataResponseBodyMonitorData &&) = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnBandWidthDataResponseBodyMonitorData() = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorData& operator=(const DescribeEpnBandWidthDataResponseBodyMonitorData &) = default ;
    DescribeEpnBandWidthDataResponseBodyMonitorData& operator=(DescribeEpnBandWidthDataResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandWidthMonitorData_ == nullptr
        && return this->maxDownBandWidth_ == nullptr && return this->maxUpBandWidth_ == nullptr; };
    // bandWidthMonitorData Field Functions 
    bool hasBandWidthMonitorData() const { return this->bandWidthMonitorData_ != nullptr;};
    void deleteBandWidthMonitorData() { this->bandWidthMonitorData_ = nullptr;};
    inline const vector<Models::DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData> & bandWidthMonitorData() const { DARABONBA_PTR_GET_CONST(bandWidthMonitorData_, vector<Models::DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData>) };
    inline vector<Models::DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData> bandWidthMonitorData() { DARABONBA_PTR_GET(bandWidthMonitorData_, vector<Models::DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData>) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorData& setBandWidthMonitorData(const vector<Models::DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData> & bandWidthMonitorData) { DARABONBA_PTR_SET_VALUE(bandWidthMonitorData_, bandWidthMonitorData) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorData& setBandWidthMonitorData(vector<Models::DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData> && bandWidthMonitorData) { DARABONBA_PTR_SET_RVALUE(bandWidthMonitorData_, bandWidthMonitorData) };


    // maxDownBandWidth Field Functions 
    bool hasMaxDownBandWidth() const { return this->maxDownBandWidth_ != nullptr;};
    void deleteMaxDownBandWidth() { this->maxDownBandWidth_ = nullptr;};
    inline int64_t maxDownBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxDownBandWidth_, 0L) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorData& setMaxDownBandWidth(int64_t maxDownBandWidth) { DARABONBA_PTR_SET_VALUE(maxDownBandWidth_, maxDownBandWidth) };


    // maxUpBandWidth Field Functions 
    bool hasMaxUpBandWidth() const { return this->maxUpBandWidth_ != nullptr;};
    void deleteMaxUpBandWidth() { this->maxUpBandWidth_ = nullptr;};
    inline int64_t maxUpBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxUpBandWidth_, 0L) };
    inline DescribeEpnBandWidthDataResponseBodyMonitorData& setMaxUpBandWidth(int64_t maxUpBandWidth) { DARABONBA_PTR_SET_VALUE(maxUpBandWidth_, maxUpBandWidth) };


  protected:
    // The bandwidth data.
    std::shared_ptr<vector<Models::DescribeEpnBandWidthDataResponseBodyMonitorDataBandWidthMonitorData>> bandWidthMonitorData_ = nullptr;
    // The maximum outbound bandwidth within the queried time range. Unit: bit/s.
    std::shared_ptr<int64_t> maxDownBandWidth_ = nullptr;
    // The maximum inbound bandwidth within the queried time range. Unit: bit/s.
    std::shared_ptr<int64_t> maxUpBandWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
