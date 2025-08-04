// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEAREADISTRIBUTIONSTATDATARESPONSEBODYUSAGEAREASTATLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEAREADISTRIBUTIONSTATDATARESPONSEBODYUSAGEAREASTATLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioCallDuration, audioCallDuration_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TotalCallDuration, totalCallDuration_);
      DARABONBA_PTR_TO_JSON(VideoCallDuration, videoCallDuration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioCallDuration, audioCallDuration_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TotalCallDuration, totalCallDuration_);
      DARABONBA_PTR_FROM_JSON(VideoCallDuration, videoCallDuration_);
    };
    DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList() = default ;
    DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList(const DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList &) = default ;
    DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList(DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList &&) = default ;
    DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList() = default ;
    DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList& operator=(const DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList &) = default ;
    DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList& operator=(DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioCallDuration_ != nullptr
        && this->name_ != nullptr && this->totalCallDuration_ != nullptr && this->videoCallDuration_ != nullptr; };
    // audioCallDuration Field Functions 
    bool hasAudioCallDuration() const { return this->audioCallDuration_ != nullptr;};
    void deleteAudioCallDuration() { this->audioCallDuration_ = nullptr;};
    inline int32_t audioCallDuration() const { DARABONBA_PTR_GET_DEFAULT(audioCallDuration_, 0) };
    inline DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList& setAudioCallDuration(int32_t audioCallDuration) { DARABONBA_PTR_SET_VALUE(audioCallDuration_, audioCallDuration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // totalCallDuration Field Functions 
    bool hasTotalCallDuration() const { return this->totalCallDuration_ != nullptr;};
    void deleteTotalCallDuration() { this->totalCallDuration_ = nullptr;};
    inline int32_t totalCallDuration() const { DARABONBA_PTR_GET_DEFAULT(totalCallDuration_, 0) };
    inline DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList& setTotalCallDuration(int32_t totalCallDuration) { DARABONBA_PTR_SET_VALUE(totalCallDuration_, totalCallDuration) };


    // videoCallDuration Field Functions 
    bool hasVideoCallDuration() const { return this->videoCallDuration_ != nullptr;};
    void deleteVideoCallDuration() { this->videoCallDuration_ = nullptr;};
    inline int32_t videoCallDuration() const { DARABONBA_PTR_GET_DEFAULT(videoCallDuration_, 0) };
    inline DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList& setVideoCallDuration(int32_t videoCallDuration) { DARABONBA_PTR_SET_VALUE(videoCallDuration_, videoCallDuration) };


  protected:
    std::shared_ptr<int32_t> audioCallDuration_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> totalCallDuration_ = nullptr;
    std::shared_ptr<int32_t> videoCallDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
