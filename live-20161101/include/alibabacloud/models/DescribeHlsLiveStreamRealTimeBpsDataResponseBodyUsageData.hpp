// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODYUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODYUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
    };
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData(const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData(DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData &&) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData& operator=(const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData& operator=(DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->streamInfos_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // streamInfos Field Functions 
    bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
    void deleteStreamInfos() { this->streamInfos_ = nullptr;};
    inline const vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos> & streamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos>) };
    inline vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos> streamInfos() { DARABONBA_PTR_GET(streamInfos_, vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos>) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData& setStreamInfos(const vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos> & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData& setStreamInfos(vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos> && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


  protected:
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // Details about the statistics on each HLS stream under the domain name.
    std::shared_ptr<vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos>> streamInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
