// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKVvDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKVvDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKVvDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainNameList, domainNameList_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRTSNativeSDKVvDataRequest() = default ;
    DescribeRTSNativeSDKVvDataRequest(const DescribeRTSNativeSDKVvDataRequest &) = default ;
    DescribeRTSNativeSDKVvDataRequest(DescribeRTSNativeSDKVvDataRequest &&) = default ;
    DescribeRTSNativeSDKVvDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKVvDataRequest() = default ;
    DescribeRTSNativeSDKVvDataRequest& operator=(const DescribeRTSNativeSDKVvDataRequest &) = default ;
    DescribeRTSNativeSDKVvDataRequest& operator=(DescribeRTSNativeSDKVvDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->domainNameList_ == nullptr && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKVvDataRequest& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainNameList Field Functions 
    bool hasDomainNameList() const { return this->domainNameList_ != nullptr;};
    void deleteDomainNameList() { this->domainNameList_ = nullptr;};
    inline const vector<string> & domainNameList() const { DARABONBA_PTR_GET_CONST(domainNameList_, vector<string>) };
    inline vector<string> domainNameList() { DARABONBA_PTR_GET(domainNameList_, vector<string>) };
    inline DescribeRTSNativeSDKVvDataRequest& setDomainNameList(const vector<string> & domainNameList) { DARABONBA_PTR_SET_VALUE(domainNameList_, domainNameList) };
    inline DescribeRTSNativeSDKVvDataRequest& setDomainNameList(vector<string> && domainNameList) { DARABONBA_PTR_SET_RVALUE(domainNameList_, domainNameList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKVvDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKVvDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity. Valid values: 300, 3600, 14400, 28800, and 86400. Unit: seconds. The default value is 300. If you specify an invalid value or do not specify this parameter, the default value is used.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The array of domain names.
    std::shared_ptr<vector<string>> domainNameList_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
