// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODYDATACONNECTIONSTATISTICSCHANNELSTATISTICSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODYDATACONNECTIONSTATISTICSCHANNELSTATISTICSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelStatistics, channelStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelStatistics, channelStatistics_);
    };
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList() = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList(const GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList &) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList(GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList &&) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList() = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList& operator=(const GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList &) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList& operator=(GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelStatistics_ == nullptr; };
    // channelStatistics Field Functions 
    bool hasChannelStatistics() const { return this->channelStatistics_ != nullptr;};
    void deleteChannelStatistics() { this->channelStatistics_ = nullptr;};
    inline const vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics> & channelStatistics() const { DARABONBA_PTR_GET_CONST(channelStatistics_, vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics>) };
    inline vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics> channelStatistics() { DARABONBA_PTR_GET(channelStatistics_, vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics>) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList& setChannelStatistics(const vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics> & channelStatistics) { DARABONBA_PTR_SET_VALUE(channelStatistics_, channelStatistics) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList& setChannelStatistics(vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics> && channelStatistics) { DARABONBA_PTR_SET_RVALUE(channelStatistics_, channelStatistics) };


  protected:
    std::shared_ptr<vector<Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsListChannelStatistics>> channelStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
