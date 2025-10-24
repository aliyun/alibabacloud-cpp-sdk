// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTPROPERTIESSTREAMSVIDEOSTREAMLISTVIDEOSTREAMNETWORKCOST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTPROPERTIESSTREAMSVIDEOSTREAMLISTVIDEOSTREAMNETWORKCOST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost& obj) { 
      DARABONBA_PTR_TO_JSON(AvgBitrate, avgBitrate_);
      DARABONBA_PTR_TO_JSON(CostBandwidth, costBandwidth_);
      DARABONBA_PTR_TO_JSON(PreloadTime, preloadTime_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgBitrate, avgBitrate_);
      DARABONBA_PTR_FROM_JSON(CostBandwidth, costBandwidth_);
      DARABONBA_PTR_FROM_JSON(PreloadTime, preloadTime_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost(const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost(SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgBitrate_ == nullptr
        && return this->costBandwidth_ == nullptr && return this->preloadTime_ == nullptr; };
    // avgBitrate Field Functions 
    bool hasAvgBitrate() const { return this->avgBitrate_ != nullptr;};
    void deleteAvgBitrate() { this->avgBitrate_ = nullptr;};
    inline string avgBitrate() const { DARABONBA_PTR_GET_DEFAULT(avgBitrate_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost& setAvgBitrate(string avgBitrate) { DARABONBA_PTR_SET_VALUE(avgBitrate_, avgBitrate) };


    // costBandwidth Field Functions 
    bool hasCostBandwidth() const { return this->costBandwidth_ != nullptr;};
    void deleteCostBandwidth() { this->costBandwidth_ = nullptr;};
    inline string costBandwidth() const { DARABONBA_PTR_GET_DEFAULT(costBandwidth_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost& setCostBandwidth(string costBandwidth) { DARABONBA_PTR_SET_VALUE(costBandwidth_, costBandwidth) };


    // preloadTime Field Functions 
    bool hasPreloadTime() const { return this->preloadTime_ != nullptr;};
    void deletePreloadTime() { this->preloadTime_ = nullptr;};
    inline string preloadTime() const { DARABONBA_PTR_GET_DEFAULT(preloadTime_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreamsVideoStreamListVideoStreamNetworkCost& setPreloadTime(string preloadTime) { DARABONBA_PTR_SET_VALUE(preloadTime_, preloadTime) };


  protected:
    // The average bitrate of the video stream.
    std::shared_ptr<string> avgBitrate_ = nullptr;
    // The maximum bandwidth that was consumed.
    std::shared_ptr<string> costBandwidth_ = nullptr;
    // The amount of time consumed to preload the video stream.
    std::shared_ptr<string> preloadTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
