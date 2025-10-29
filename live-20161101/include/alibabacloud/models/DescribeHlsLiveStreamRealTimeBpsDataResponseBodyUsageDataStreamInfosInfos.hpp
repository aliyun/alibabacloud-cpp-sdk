// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODYUSAGEDATASTREAMINFOSINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODYUSAGEDATASTREAMINFOSINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DownFlow, downFlow_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DownFlow, downFlow_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
    };
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos(const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos(DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos &&) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos& operator=(const DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos& operator=(DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downFlow_ == nullptr
        && return this->online_ == nullptr && return this->rate_ == nullptr; };
    // downFlow Field Functions 
    bool hasDownFlow() const { return this->downFlow_ != nullptr;};
    void deleteDownFlow() { this->downFlow_ = nullptr;};
    inline float downFlow() const { DARABONBA_PTR_GET_DEFAULT(downFlow_, 0.0) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos& setDownFlow(float downFlow) { DARABONBA_PTR_SET_VALUE(downFlow_, downFlow) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline float online() const { DARABONBA_PTR_GET_DEFAULT(online_, 0.0) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos& setOnline(float online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline string rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageDataStreamInfosInfos& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


  protected:
    // The bandwidth. Unit: bit/s.
    std::shared_ptr<float> downFlow_ = nullptr;
    // The number of online users.
    std::shared_ptr<float> online_ = nullptr;
    // The bitrate.
    std::shared_ptr<string> rate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
