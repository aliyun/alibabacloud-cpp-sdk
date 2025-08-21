// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBANDWIDTHDATARESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBANDWIDTHDATARESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserBandWidthDataResponseBodyMonitorDataBandWidthMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeUserBandWidthDataResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBandWidthDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(BandWidthMonitorData, bandWidthMonitorData_);
      DARABONBA_PTR_TO_JSON(MaxDownBandWidth, maxDownBandWidth_);
      DARABONBA_PTR_TO_JSON(MaxUpBandWidth, maxUpBandWidth_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBandWidthDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWidthMonitorData, bandWidthMonitorData_);
      DARABONBA_PTR_FROM_JSON(MaxDownBandWidth, maxDownBandWidth_);
      DARABONBA_PTR_FROM_JSON(MaxUpBandWidth, maxUpBandWidth_);
    };
    DescribeUserBandWidthDataResponseBodyMonitorData() = default ;
    DescribeUserBandWidthDataResponseBodyMonitorData(const DescribeUserBandWidthDataResponseBodyMonitorData &) = default ;
    DescribeUserBandWidthDataResponseBodyMonitorData(DescribeUserBandWidthDataResponseBodyMonitorData &&) = default ;
    DescribeUserBandWidthDataResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBandWidthDataResponseBodyMonitorData() = default ;
    DescribeUserBandWidthDataResponseBodyMonitorData& operator=(const DescribeUserBandWidthDataResponseBodyMonitorData &) = default ;
    DescribeUserBandWidthDataResponseBodyMonitorData& operator=(DescribeUserBandWidthDataResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandWidthMonitorData_ != nullptr
        && this->maxDownBandWidth_ != nullptr && this->maxUpBandWidth_ != nullptr; };
    // bandWidthMonitorData Field Functions 
    bool hasBandWidthMonitorData() const { return this->bandWidthMonitorData_ != nullptr;};
    void deleteBandWidthMonitorData() { this->bandWidthMonitorData_ = nullptr;};
    inline const vector<Models::DescribeUserBandWidthDataResponseBodyMonitorDataBandWidthMonitorData> & bandWidthMonitorData() const { DARABONBA_PTR_GET_CONST(bandWidthMonitorData_, vector<Models::DescribeUserBandWidthDataResponseBodyMonitorDataBandWidthMonitorData>) };
    inline vector<Models::DescribeUserBandWidthDataResponseBodyMonitorDataBandWidthMonitorData> bandWidthMonitorData() { DARABONBA_PTR_GET(bandWidthMonitorData_, vector<Models::DescribeUserBandWidthDataResponseBodyMonitorDataBandWidthMonitorData>) };
    inline DescribeUserBandWidthDataResponseBodyMonitorData& setBandWidthMonitorData(const vector<Models::DescribeUserBandWidthDataResponseBodyMonitorDataBandWidthMonitorData> & bandWidthMonitorData) { DARABONBA_PTR_SET_VALUE(bandWidthMonitorData_, bandWidthMonitorData) };
    inline DescribeUserBandWidthDataResponseBodyMonitorData& setBandWidthMonitorData(vector<Models::DescribeUserBandWidthDataResponseBodyMonitorDataBandWidthMonitorData> && bandWidthMonitorData) { DARABONBA_PTR_SET_RVALUE(bandWidthMonitorData_, bandWidthMonitorData) };


    // maxDownBandWidth Field Functions 
    bool hasMaxDownBandWidth() const { return this->maxDownBandWidth_ != nullptr;};
    void deleteMaxDownBandWidth() { this->maxDownBandWidth_ = nullptr;};
    inline string maxDownBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxDownBandWidth_, "") };
    inline DescribeUserBandWidthDataResponseBodyMonitorData& setMaxDownBandWidth(string maxDownBandWidth) { DARABONBA_PTR_SET_VALUE(maxDownBandWidth_, maxDownBandWidth) };


    // maxUpBandWidth Field Functions 
    bool hasMaxUpBandWidth() const { return this->maxUpBandWidth_ != nullptr;};
    void deleteMaxUpBandWidth() { this->maxUpBandWidth_ = nullptr;};
    inline string maxUpBandWidth() const { DARABONBA_PTR_GET_DEFAULT(maxUpBandWidth_, "") };
    inline DescribeUserBandWidthDataResponseBodyMonitorData& setMaxUpBandWidth(string maxUpBandWidth) { DARABONBA_PTR_SET_VALUE(maxUpBandWidth_, maxUpBandWidth) };


  protected:
    // The bandwidth data.
    std::shared_ptr<vector<Models::DescribeUserBandWidthDataResponseBodyMonitorDataBandWidthMonitorData>> bandWidthMonitorData_ = nullptr;
    // The maximum outbound bandwidth within the queried time range. Unit: bit/s.
    std::shared_ptr<string> maxDownBandWidth_ = nullptr;
    // The maximum inbound bandwidth within the queried time range. Unit: bit/s.
    std::shared_ptr<string> maxUpBandWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
