// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODYDATACONNECTIONSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETSTATISTICSBYVHOSTRESPONSEBODYDATACONNECTIONSTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetStatisticsByVhostResponseBodyDataConnectionStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStatisticsByVhostResponseBodyDataConnectionStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(ChannelNum, channelNum_);
      DARABONBA_PTR_TO_JSON(ChannelStatisticsList, channelStatisticsList_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(DeliverQps, deliverQps_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(PublishQps, publishQps_);
      DARABONBA_PTR_TO_JSON(RemoteAddress, remoteAddress_);
      DARABONBA_PTR_TO_JSON(SecurityTransport, securityTransport_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetStatisticsByVhostResponseBodyDataConnectionStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(ChannelNum, channelNum_);
      DARABONBA_PTR_FROM_JSON(ChannelStatisticsList, channelStatisticsList_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(DeliverQps, deliverQps_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(PublishQps, publishQps_);
      DARABONBA_PTR_FROM_JSON(RemoteAddress, remoteAddress_);
      DARABONBA_PTR_FROM_JSON(SecurityTransport, securityTransport_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetStatisticsByVhostResponseBodyDataConnectionStatistics() = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatistics(const GetStatisticsByVhostResponseBodyDataConnectionStatistics &) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatistics(GetStatisticsByVhostResponseBodyDataConnectionStatistics &&) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStatisticsByVhostResponseBodyDataConnectionStatistics() = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatistics& operator=(const GetStatisticsByVhostResponseBodyDataConnectionStatistics &) = default ;
    GetStatisticsByVhostResponseBodyDataConnectionStatistics& operator=(GetStatisticsByVhostResponseBodyDataConnectionStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKey_ == nullptr
        && return this->channelNum_ == nullptr && return this->channelStatisticsList_ == nullptr && return this->connectionName_ == nullptr && return this->deliverQps_ == nullptr && return this->protocol_ == nullptr
        && return this->publishQps_ == nullptr && return this->remoteAddress_ == nullptr && return this->securityTransport_ == nullptr && return this->state_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // channelNum Field Functions 
    bool hasChannelNum() const { return this->channelNum_ != nullptr;};
    void deleteChannelNum() { this->channelNum_ = nullptr;};
    inline int32_t channelNum() const { DARABONBA_PTR_GET_DEFAULT(channelNum_, 0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setChannelNum(int32_t channelNum) { DARABONBA_PTR_SET_VALUE(channelNum_, channelNum) };


    // channelStatisticsList Field Functions 
    bool hasChannelStatisticsList() const { return this->channelStatisticsList_ != nullptr;};
    void deleteChannelStatisticsList() { this->channelStatisticsList_ = nullptr;};
    inline const Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList & channelStatisticsList() const { DARABONBA_PTR_GET_CONST(channelStatisticsList_, Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList) };
    inline Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList channelStatisticsList() { DARABONBA_PTR_GET(channelStatisticsList_, Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setChannelStatisticsList(const Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList & channelStatisticsList) { DARABONBA_PTR_SET_VALUE(channelStatisticsList_, channelStatisticsList) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setChannelStatisticsList(Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList && channelStatisticsList) { DARABONBA_PTR_SET_RVALUE(channelStatisticsList_, channelStatisticsList) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // deliverQps Field Functions 
    bool hasDeliverQps() const { return this->deliverQps_ != nullptr;};
    void deleteDeliverQps() { this->deliverQps_ = nullptr;};
    inline float deliverQps() const { DARABONBA_PTR_GET_DEFAULT(deliverQps_, 0.0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setDeliverQps(float deliverQps) { DARABONBA_PTR_SET_VALUE(deliverQps_, deliverQps) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // publishQps Field Functions 
    bool hasPublishQps() const { return this->publishQps_ != nullptr;};
    void deletePublishQps() { this->publishQps_ = nullptr;};
    inline float publishQps() const { DARABONBA_PTR_GET_DEFAULT(publishQps_, 0.0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setPublishQps(float publishQps) { DARABONBA_PTR_SET_VALUE(publishQps_, publishQps) };


    // remoteAddress Field Functions 
    bool hasRemoteAddress() const { return this->remoteAddress_ != nullptr;};
    void deleteRemoteAddress() { this->remoteAddress_ = nullptr;};
    inline string remoteAddress() const { DARABONBA_PTR_GET_DEFAULT(remoteAddress_, "") };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setRemoteAddress(string remoteAddress) { DARABONBA_PTR_SET_VALUE(remoteAddress_, remoteAddress) };


    // securityTransport Field Functions 
    bool hasSecurityTransport() const { return this->securityTransport_ != nullptr;};
    void deleteSecurityTransport() { this->securityTransport_ = nullptr;};
    inline bool securityTransport() const { DARABONBA_PTR_GET_DEFAULT(securityTransport_, false) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setSecurityTransport(bool securityTransport) { DARABONBA_PTR_SET_VALUE(securityTransport_, securityTransport) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline GetStatisticsByVhostResponseBodyDataConnectionStatistics& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> accessKey_ = nullptr;
    std::shared_ptr<int32_t> channelNum_ = nullptr;
    std::shared_ptr<Models::GetStatisticsByVhostResponseBodyDataConnectionStatisticsChannelStatisticsList> channelStatisticsList_ = nullptr;
    std::shared_ptr<string> connectionName_ = nullptr;
    std::shared_ptr<float> deliverQps_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<float> publishQps_ = nullptr;
    std::shared_ptr<string> remoteAddress_ = nullptr;
    std::shared_ptr<bool> securityTransport_ = nullptr;
    std::shared_ptr<int32_t> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
