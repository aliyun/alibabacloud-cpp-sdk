// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMECOSTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMECOSTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKFirstFrameCostShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKFirstFrameCostShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameListShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKFirstFrameCostShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameListShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRTSNativeSDKFirstFrameCostShrinkRequest() = default ;
    DescribeRTSNativeSDKFirstFrameCostShrinkRequest(const DescribeRTSNativeSDKFirstFrameCostShrinkRequest &) = default ;
    DescribeRTSNativeSDKFirstFrameCostShrinkRequest(DescribeRTSNativeSDKFirstFrameCostShrinkRequest &&) = default ;
    DescribeRTSNativeSDKFirstFrameCostShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKFirstFrameCostShrinkRequest() = default ;
    DescribeRTSNativeSDKFirstFrameCostShrinkRequest& operator=(const DescribeRTSNativeSDKFirstFrameCostShrinkRequest &) = default ;
    DescribeRTSNativeSDKFirstFrameCostShrinkRequest& operator=(DescribeRTSNativeSDKFirstFrameCostShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainNameListShrink_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostShrinkRequest& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainNameListShrink Field Functions 
    bool hasDomainNameListShrink() const { return this->domainNameListShrink_ != nullptr;};
    void deleteDomainNameListShrink() { this->domainNameListShrink_ = nullptr;};
    inline string getDomainNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(domainNameListShrink_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostShrinkRequest& setDomainNameListShrink(string domainNameListShrink) { DARABONBA_PTR_SET_VALUE(domainNameListShrink_, domainNameListShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity. Valid values: 300, 3600, 14400, 28800, and 86400. Unit: seconds. The default value is 300. If you specify an invalid value or do not specify this parameter, the default value is used.
    shared_ptr<string> dataInterval_ {};
    // From V2.1.0, all domain names are queried by default. You can also specify specific domain names that you want to query. In this case, separate the domain names with commas (,). You can specify up to 500 domain names in each call.
    shared_ptr<string> domainNameListShrink_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
