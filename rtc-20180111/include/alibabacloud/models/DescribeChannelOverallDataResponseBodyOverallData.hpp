// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODYOVERALLDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODYOVERALLDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelOverallDataResponseBodyOverallData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelOverallDataResponseBodyOverallData& obj) { 
      DARABONBA_PTR_TO_JSON(ConnAvgTime, connAvgTime_);
      DARABONBA_PTR_TO_JSON(FiveSecJoinRate, fiveSecJoinRate_);
      DARABONBA_PTR_TO_JSON(TotalAudioStuckRate, totalAudioStuckRate_);
      DARABONBA_PTR_TO_JSON(TotalVideoStuckRate, totalVideoStuckRate_);
      DARABONBA_PTR_TO_JSON(TotalVideoVagueRate, totalVideoVagueRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelOverallDataResponseBodyOverallData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnAvgTime, connAvgTime_);
      DARABONBA_PTR_FROM_JSON(FiveSecJoinRate, fiveSecJoinRate_);
      DARABONBA_PTR_FROM_JSON(TotalAudioStuckRate, totalAudioStuckRate_);
      DARABONBA_PTR_FROM_JSON(TotalVideoStuckRate, totalVideoStuckRate_);
      DARABONBA_PTR_FROM_JSON(TotalVideoVagueRate, totalVideoVagueRate_);
    };
    DescribeChannelOverallDataResponseBodyOverallData() = default ;
    DescribeChannelOverallDataResponseBodyOverallData(const DescribeChannelOverallDataResponseBodyOverallData &) = default ;
    DescribeChannelOverallDataResponseBodyOverallData(DescribeChannelOverallDataResponseBodyOverallData &&) = default ;
    DescribeChannelOverallDataResponseBodyOverallData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelOverallDataResponseBodyOverallData() = default ;
    DescribeChannelOverallDataResponseBodyOverallData& operator=(const DescribeChannelOverallDataResponseBodyOverallData &) = default ;
    DescribeChannelOverallDataResponseBodyOverallData& operator=(DescribeChannelOverallDataResponseBodyOverallData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connAvgTime_ != nullptr
        && this->fiveSecJoinRate_ != nullptr && this->totalAudioStuckRate_ != nullptr && this->totalVideoStuckRate_ != nullptr && this->totalVideoVagueRate_ != nullptr; };
    // connAvgTime Field Functions 
    bool hasConnAvgTime() const { return this->connAvgTime_ != nullptr;};
    void deleteConnAvgTime() { this->connAvgTime_ = nullptr;};
    inline float connAvgTime() const { DARABONBA_PTR_GET_DEFAULT(connAvgTime_, 0.0) };
    inline DescribeChannelOverallDataResponseBodyOverallData& setConnAvgTime(float connAvgTime) { DARABONBA_PTR_SET_VALUE(connAvgTime_, connAvgTime) };


    // fiveSecJoinRate Field Functions 
    bool hasFiveSecJoinRate() const { return this->fiveSecJoinRate_ != nullptr;};
    void deleteFiveSecJoinRate() { this->fiveSecJoinRate_ = nullptr;};
    inline float fiveSecJoinRate() const { DARABONBA_PTR_GET_DEFAULT(fiveSecJoinRate_, 0.0) };
    inline DescribeChannelOverallDataResponseBodyOverallData& setFiveSecJoinRate(float fiveSecJoinRate) { DARABONBA_PTR_SET_VALUE(fiveSecJoinRate_, fiveSecJoinRate) };


    // totalAudioStuckRate Field Functions 
    bool hasTotalAudioStuckRate() const { return this->totalAudioStuckRate_ != nullptr;};
    void deleteTotalAudioStuckRate() { this->totalAudioStuckRate_ = nullptr;};
    inline float totalAudioStuckRate() const { DARABONBA_PTR_GET_DEFAULT(totalAudioStuckRate_, 0.0) };
    inline DescribeChannelOverallDataResponseBodyOverallData& setTotalAudioStuckRate(float totalAudioStuckRate) { DARABONBA_PTR_SET_VALUE(totalAudioStuckRate_, totalAudioStuckRate) };


    // totalVideoStuckRate Field Functions 
    bool hasTotalVideoStuckRate() const { return this->totalVideoStuckRate_ != nullptr;};
    void deleteTotalVideoStuckRate() { this->totalVideoStuckRate_ = nullptr;};
    inline float totalVideoStuckRate() const { DARABONBA_PTR_GET_DEFAULT(totalVideoStuckRate_, 0.0) };
    inline DescribeChannelOverallDataResponseBodyOverallData& setTotalVideoStuckRate(float totalVideoStuckRate) { DARABONBA_PTR_SET_VALUE(totalVideoStuckRate_, totalVideoStuckRate) };


    // totalVideoVagueRate Field Functions 
    bool hasTotalVideoVagueRate() const { return this->totalVideoVagueRate_ != nullptr;};
    void deleteTotalVideoVagueRate() { this->totalVideoVagueRate_ = nullptr;};
    inline float totalVideoVagueRate() const { DARABONBA_PTR_GET_DEFAULT(totalVideoVagueRate_, 0.0) };
    inline DescribeChannelOverallDataResponseBodyOverallData& setTotalVideoVagueRate(float totalVideoVagueRate) { DARABONBA_PTR_SET_VALUE(totalVideoVagueRate_, totalVideoVagueRate) };


  protected:
    std::shared_ptr<float> connAvgTime_ = nullptr;
    std::shared_ptr<float> fiveSecJoinRate_ = nullptr;
    std::shared_ptr<float> totalAudioStuckRate_ = nullptr;
    std::shared_ptr<float> totalVideoStuckRate_ = nullptr;
    std::shared_ptr<float> totalVideoVagueRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
