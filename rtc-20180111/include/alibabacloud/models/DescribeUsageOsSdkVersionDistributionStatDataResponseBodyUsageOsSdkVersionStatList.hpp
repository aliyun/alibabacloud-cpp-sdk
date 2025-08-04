// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODYUSAGEOSSDKVERSIONSTATLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODYUSAGEOSSDKVERSIONSTATLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioCallDuration, audioCallDuration_);
      DARABONBA_PTR_TO_JSON(CallDurationRatio, callDurationRatio_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(TotalCallDuration, totalCallDuration_);
      DARABONBA_PTR_TO_JSON(VideoCallDuration, videoCallDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioCallDuration, audioCallDuration_);
      DARABONBA_PTR_FROM_JSON(CallDurationRatio, callDurationRatio_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(TotalCallDuration, totalCallDuration_);
      DARABONBA_PTR_FROM_JSON(VideoCallDuration, videoCallDuration_);
    };
    DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList(const DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList(DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList &&) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& operator=(const DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& operator=(DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioCallDuration_ != nullptr
        && this->callDurationRatio_ != nullptr && this->name_ != nullptr && this->os_ != nullptr && this->totalCallDuration_ != nullptr && this->videoCallDuration_ != nullptr; };
    // audioCallDuration Field Functions 
    bool hasAudioCallDuration() const { return this->audioCallDuration_ != nullptr;};
    void deleteAudioCallDuration() { this->audioCallDuration_ = nullptr;};
    inline int64_t audioCallDuration() const { DARABONBA_PTR_GET_DEFAULT(audioCallDuration_, 0L) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& setAudioCallDuration(int64_t audioCallDuration) { DARABONBA_PTR_SET_VALUE(audioCallDuration_, audioCallDuration) };


    // callDurationRatio Field Functions 
    bool hasCallDurationRatio() const { return this->callDurationRatio_ != nullptr;};
    void deleteCallDurationRatio() { this->callDurationRatio_ = nullptr;};
    inline string callDurationRatio() const { DARABONBA_PTR_GET_DEFAULT(callDurationRatio_, "") };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& setCallDurationRatio(string callDurationRatio) { DARABONBA_PTR_SET_VALUE(callDurationRatio_, callDurationRatio) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // totalCallDuration Field Functions 
    bool hasTotalCallDuration() const { return this->totalCallDuration_ != nullptr;};
    void deleteTotalCallDuration() { this->totalCallDuration_ = nullptr;};
    inline int64_t totalCallDuration() const { DARABONBA_PTR_GET_DEFAULT(totalCallDuration_, 0L) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& setTotalCallDuration(int64_t totalCallDuration) { DARABONBA_PTR_SET_VALUE(totalCallDuration_, totalCallDuration) };


    // videoCallDuration Field Functions 
    bool hasVideoCallDuration() const { return this->videoCallDuration_ != nullptr;};
    void deleteVideoCallDuration() { this->videoCallDuration_ = nullptr;};
    inline int64_t videoCallDuration() const { DARABONBA_PTR_GET_DEFAULT(videoCallDuration_, 0L) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList& setVideoCallDuration(int64_t videoCallDuration) { DARABONBA_PTR_SET_VALUE(videoCallDuration_, videoCallDuration) };


  protected:
    std::shared_ptr<int64_t> audioCallDuration_ = nullptr;
    std::shared_ptr<string> callDurationRatio_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<int64_t> totalCallDuration_ = nullptr;
    std::shared_ptr<int64_t> videoCallDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
