// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODYDATACONNECTIONSTATISTICSCHANNELSTATISTICSLISTCHANNELSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODYDATACONNECTIONSTATISTICSCHANNELSTATISTICSLISTCHANNELSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(AckQps, ackQps_);
      DARABONBA_PTR_TO_JSON(ConfirmQps, confirmQps_);
      DARABONBA_PTR_TO_JSON(DeliverQps, deliverQps_);
      DARABONBA_PTR_TO_JSON(GetQps, getQps_);
      DARABONBA_PTR_TO_JSON(Prefetch, prefetch_);
      DARABONBA_PTR_TO_JSON(PublishQps, publishQps_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Unacked, unacked_);
      DARABONBA_PTR_TO_JSON(Unconfirmed, unconfirmed_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(AckQps, ackQps_);
      DARABONBA_PTR_FROM_JSON(ConfirmQps, confirmQps_);
      DARABONBA_PTR_FROM_JSON(DeliverQps, deliverQps_);
      DARABONBA_PTR_FROM_JSON(GetQps, getQps_);
      DARABONBA_PTR_FROM_JSON(Prefetch, prefetch_);
      DARABONBA_PTR_FROM_JSON(PublishQps, publishQps_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Unacked, unacked_);
      DARABONBA_PTR_FROM_JSON(Unconfirmed, unconfirmed_);
    };
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics() = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics(const GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics &) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics(GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics &&) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics() = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& operator=(const GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics &) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& operator=(GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackQps_ == nullptr
        && return this->confirmQps_ == nullptr && return this->deliverQps_ == nullptr && return this->getQps_ == nullptr && return this->prefetch_ == nullptr && return this->publishQps_ == nullptr
        && return this->state_ == nullptr && return this->unacked_ == nullptr && return this->unconfirmed_ == nullptr; };
    // ackQps Field Functions 
    bool hasAckQps() const { return this->ackQps_ != nullptr;};
    void deleteAckQps() { this->ackQps_ = nullptr;};
    inline float ackQps() const { DARABONBA_PTR_GET_DEFAULT(ackQps_, 0.0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setAckQps(float ackQps) { DARABONBA_PTR_SET_VALUE(ackQps_, ackQps) };


    // confirmQps Field Functions 
    bool hasConfirmQps() const { return this->confirmQps_ != nullptr;};
    void deleteConfirmQps() { this->confirmQps_ = nullptr;};
    inline float confirmQps() const { DARABONBA_PTR_GET_DEFAULT(confirmQps_, 0.0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setConfirmQps(float confirmQps) { DARABONBA_PTR_SET_VALUE(confirmQps_, confirmQps) };


    // deliverQps Field Functions 
    bool hasDeliverQps() const { return this->deliverQps_ != nullptr;};
    void deleteDeliverQps() { this->deliverQps_ = nullptr;};
    inline float deliverQps() const { DARABONBA_PTR_GET_DEFAULT(deliverQps_, 0.0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setDeliverQps(float deliverQps) { DARABONBA_PTR_SET_VALUE(deliverQps_, deliverQps) };


    // getQps Field Functions 
    bool hasGetQps() const { return this->getQps_ != nullptr;};
    void deleteGetQps() { this->getQps_ = nullptr;};
    inline float getQps() const { DARABONBA_PTR_GET_DEFAULT(getQps_, 0.0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setGetQps(float getQps) { DARABONBA_PTR_SET_VALUE(getQps_, getQps) };


    // prefetch Field Functions 
    bool hasPrefetch() const { return this->prefetch_ != nullptr;};
    void deletePrefetch() { this->prefetch_ = nullptr;};
    inline int32_t prefetch() const { DARABONBA_PTR_GET_DEFAULT(prefetch_, 0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setPrefetch(int32_t prefetch) { DARABONBA_PTR_SET_VALUE(prefetch_, prefetch) };


    // publishQps Field Functions 
    bool hasPublishQps() const { return this->publishQps_ != nullptr;};
    void deletePublishQps() { this->publishQps_ = nullptr;};
    inline float publishQps() const { DARABONBA_PTR_GET_DEFAULT(publishQps_, 0.0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setPublishQps(float publishQps) { DARABONBA_PTR_SET_VALUE(publishQps_, publishQps) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // unacked Field Functions 
    bool hasUnacked() const { return this->unacked_ != nullptr;};
    void deleteUnacked() { this->unacked_ = nullptr;};
    inline int32_t unacked() const { DARABONBA_PTR_GET_DEFAULT(unacked_, 0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setUnacked(int32_t unacked) { DARABONBA_PTR_SET_VALUE(unacked_, unacked) };


    // unconfirmed Field Functions 
    bool hasUnconfirmed() const { return this->unconfirmed_ != nullptr;};
    void deleteUnconfirmed() { this->unconfirmed_ = nullptr;};
    inline int32_t unconfirmed() const { DARABONBA_PTR_GET_DEFAULT(unconfirmed_, 0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics& setUnconfirmed(int32_t unconfirmed) { DARABONBA_PTR_SET_VALUE(unconfirmed_, unconfirmed) };


  protected:
    std::shared_ptr<float> ackQps_ = nullptr;
    std::shared_ptr<float> confirmQps_ = nullptr;
    std::shared_ptr<float> deliverQps_ = nullptr;
    std::shared_ptr<float> getQps_ = nullptr;
    std::shared_ptr<int32_t> prefetch_ = nullptr;
    std::shared_ptr<float> publishQps_ = nullptr;
    std::shared_ptr<int32_t> state_ = nullptr;
    std::shared_ptr<int32_t> unacked_ = nullptr;
    std::shared_ptr<int32_t> unconfirmed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
