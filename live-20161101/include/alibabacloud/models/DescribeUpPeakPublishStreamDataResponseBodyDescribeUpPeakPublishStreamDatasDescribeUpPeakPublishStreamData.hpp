// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATARESPONSEBODYDESCRIBEUPPEAKPUBLISHSTREAMDATASDESCRIBEUPPEAKPUBLISHSTREAMDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATARESPONSEBODYDESCRIBEUPPEAKPUBLISHSTREAMDATASDESCRIBEUPPEAKPUBLISHSTREAMDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& obj) { 
      DARABONBA_PTR_TO_JSON(BandWidth, bandWidth_);
      DARABONBA_PTR_TO_JSON(PeakTime, peakTime_);
      DARABONBA_PTR_TO_JSON(PublishStreamNum, publishStreamNum_);
      DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_TO_JSON(StatName, statName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& obj) { 
      DARABONBA_PTR_FROM_JSON(BandWidth, bandWidth_);
      DARABONBA_PTR_FROM_JSON(PeakTime, peakTime_);
      DARABONBA_PTR_FROM_JSON(PublishStreamNum, publishStreamNum_);
      DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_FROM_JSON(StatName, statName_);
    };
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData() = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData(const DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData &) = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData(DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData &&) = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData() = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& operator=(const DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData &) = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& operator=(DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandWidth_ != nullptr
        && this->peakTime_ != nullptr && this->publishStreamNum_ != nullptr && this->queryTime_ != nullptr && this->statName_ != nullptr; };
    // bandWidth Field Functions 
    bool hasBandWidth() const { return this->bandWidth_ != nullptr;};
    void deleteBandWidth() { this->bandWidth_ = nullptr;};
    inline string bandWidth() const { DARABONBA_PTR_GET_DEFAULT(bandWidth_, "") };
    inline DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& setBandWidth(string bandWidth) { DARABONBA_PTR_SET_VALUE(bandWidth_, bandWidth) };


    // peakTime Field Functions 
    bool hasPeakTime() const { return this->peakTime_ != nullptr;};
    void deletePeakTime() { this->peakTime_ = nullptr;};
    inline string peakTime() const { DARABONBA_PTR_GET_DEFAULT(peakTime_, "") };
    inline DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& setPeakTime(string peakTime) { DARABONBA_PTR_SET_VALUE(peakTime_, peakTime) };


    // publishStreamNum Field Functions 
    bool hasPublishStreamNum() const { return this->publishStreamNum_ != nullptr;};
    void deletePublishStreamNum() { this->publishStreamNum_ = nullptr;};
    inline int32_t publishStreamNum() const { DARABONBA_PTR_GET_DEFAULT(publishStreamNum_, 0) };
    inline DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& setPublishStreamNum(int32_t publishStreamNum) { DARABONBA_PTR_SET_VALUE(publishStreamNum_, publishStreamNum) };


    // queryTime Field Functions 
    bool hasQueryTime() const { return this->queryTime_ != nullptr;};
    void deleteQueryTime() { this->queryTime_ = nullptr;};
    inline string queryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
    inline DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


    // statName Field Functions 
    bool hasStatName() const { return this->statName_ != nullptr;};
    void deleteStatName() { this->statName_ = nullptr;};
    inline string statName() const { DARABONBA_PTR_GET_DEFAULT(statName_, "") };
    inline DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData& setStatName(string statName) { DARABONBA_PTR_SET_VALUE(statName_, statName) };


  protected:
    // The daily peak inbound bandwidth.
    std::shared_ptr<string> bandWidth_ = nullptr;
    // The time when the daily peak number of concurrently ingested streams is reached.
    std::shared_ptr<string> peakTime_ = nullptr;
    // The daily peak number of concurrently ingested streams.
    std::shared_ptr<int32_t> publishStreamNum_ = nullptr;
    // The time queried on the day.
    std::shared_ptr<string> queryTime_ = nullptr;
    // The category of the statistical data. If the DomainSwitch parameter is set to on, the value of this parameter is the domain name. If the DomainSwitch parameter is set to off or not specified, the value of this parameter is the user ID.
    std::shared_ptr<string> statName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
