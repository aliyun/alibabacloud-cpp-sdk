// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKVvDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKVvDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameListShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKVvDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameListShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRTSNativeSDKVvDataShrinkRequest() = default ;
    DescribeRTSNativeSDKVvDataShrinkRequest(const DescribeRTSNativeSDKVvDataShrinkRequest &) = default ;
    DescribeRTSNativeSDKVvDataShrinkRequest(DescribeRTSNativeSDKVvDataShrinkRequest &&) = default ;
    DescribeRTSNativeSDKVvDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKVvDataShrinkRequest() = default ;
    DescribeRTSNativeSDKVvDataShrinkRequest& operator=(const DescribeRTSNativeSDKVvDataShrinkRequest &) = default ;
    DescribeRTSNativeSDKVvDataShrinkRequest& operator=(DescribeRTSNativeSDKVvDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->domainNameListShrink_ == nullptr && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKVvDataShrinkRequest& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainNameListShrink Field Functions 
    bool hasDomainNameListShrink() const { return this->domainNameListShrink_ != nullptr;};
    void deleteDomainNameListShrink() { this->domainNameListShrink_ = nullptr;};
    inline string domainNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(domainNameListShrink_, "") };
    inline DescribeRTSNativeSDKVvDataShrinkRequest& setDomainNameListShrink(string domainNameListShrink) { DARABONBA_PTR_SET_VALUE(domainNameListShrink_, domainNameListShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKVvDataShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKVvDataShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity. Valid values: 300, 3600, 14400, 28800, and 86400. Unit: seconds. The default value is 300. If you specify an invalid value or do not specify this parameter, the default value is used.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The array of domain names.
    std::shared_ptr<string> domainNameListShrink_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
