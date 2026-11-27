// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUALITYOVERALLDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUALITYOVERALLDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQualityOverallDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQualityOverallDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQualityOverallDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    DescribeQualityOverallDataRequest() = default ;
    DescribeQualityOverallDataRequest(const DescribeQualityOverallDataRequest &) = default ;
    DescribeQualityOverallDataRequest(DescribeQualityOverallDataRequest &&) = default ;
    DescribeQualityOverallDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQualityOverallDataRequest() = default ;
    DescribeQualityOverallDataRequest& operator=(const DescribeQualityOverallDataRequest &) = default ;
    DescribeQualityOverallDataRequest& operator=(DescribeQualityOverallDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->endDate_ == nullptr && this->startDate_ == nullptr && this->types_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeQualityOverallDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeQualityOverallDataRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeQualityOverallDataRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline string getTypes() const { DARABONBA_PTR_GET_DEFAULT(types_, "") };
    inline DescribeQualityOverallDataRequest& setTypes(string types) { DARABONBA_PTR_SET_VALUE(types_, types) };


  protected:
    // APP ID
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The End Time of the query, represented as a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endDate_ {};
    // The Start Time of the query, represented as a UNIX timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startDate_ {};
    // The Metric Types to query, separated by commas (,). Valid values:
    // - **JOIN_CHANNEL_SUC_RATE**: Channel Join Success Rate.
    // - **JOIN_CHANNEL_SUC_FIVE_SEC_RATE**: Five-second Channel Join Success Rate.
    // - **VIDEO_FIRST_PIC_DUR**: Time to First Video Frame.
    // - **AUDIO_STUCK_RATE**: Audio Lag Rate.
    // - **VIDEO_STUCK_RATE**: Video Lag Rate.
    // - **AUDIO_DELAY**: Audio Delay.
    // - **VIDEO_DELAY**: Video Delay.
    // - **AUDIO_HIGH_QUALITY_TRANSMISSION_RATE**: Audio High-quality Transmission Rate.
    // - **VIDEO_HIGH_QUALITY_TRANSMISSION_RATE**: Video High-quality Transmission Rate.
    // 
    // This parameter is required.
    shared_ptr<string> types_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
