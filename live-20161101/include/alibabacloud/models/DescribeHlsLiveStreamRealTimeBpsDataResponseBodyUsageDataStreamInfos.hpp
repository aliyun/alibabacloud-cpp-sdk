// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODYUSAGEDATASTREAMINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODYUSAGEDATASTREAMINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Infos, infos_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Infos, infos_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos(const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos(DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos &&) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos& operator=(const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos& operator=(DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->infos_ == nullptr
        && return this->streamName_ == nullptr; };
    // infos Field Functions 
    bool hasInfos() const { return this->infos_ != nullptr;};
    void deleteInfos() { this->infos_ = nullptr;};
    inline const vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos> & infos() const { DARABONBA_PTR_GET_CONST(infos_, vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos>) };
    inline vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos> infos() { DARABONBA_PTR_GET(infos_, vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos>) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos& setInfos(const vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos> & infos) { DARABONBA_PTR_SET_VALUE(infos_, infos) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos& setInfos(vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos> && infos) { DARABONBA_PTR_SET_RVALUE(infos_, infos) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfos& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The statistics on the HLS stream.
    std::shared_ptr<vector<Models::DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos>> infos_ = nullptr;
    // The name of the stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
