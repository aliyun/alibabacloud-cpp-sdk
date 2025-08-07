// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKSCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATANETWORKLISTRESPONSEBODYITEMSNETWORKSCHANNELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelStatus, channelStatus_);
      DARABONBA_PTR_TO_JSON(FreezeSourceDuringSync, freezeSourceDuringSync_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelStatus, channelStatus_);
      DARABONBA_PTR_FROM_JSON(FreezeSourceDuringSync, freezeSourceDuringSync_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
    };
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels(const DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels(DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels &&) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels() = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels& operator=(const DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels &) = default ;
    DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels& operator=(DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelId_ != nullptr
        && this->channelStatus_ != nullptr && this->freezeSourceDuringSync_ != nullptr && this->progress_ != nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelStatus Field Functions 
    bool hasChannelStatus() const { return this->channelStatus_ != nullptr;};
    void deleteChannelStatus() { this->channelStatus_ = nullptr;};
    inline string channelStatus() const { DARABONBA_PTR_GET_DEFAULT(channelStatus_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels& setChannelStatus(string channelStatus) { DARABONBA_PTR_SET_VALUE(channelStatus_, channelStatus) };


    // freezeSourceDuringSync Field Functions 
    bool hasFreezeSourceDuringSync() const { return this->freezeSourceDuringSync_ != nullptr;};
    void deleteFreezeSourceDuringSync() { this->freezeSourceDuringSync_ = nullptr;};
    inline bool freezeSourceDuringSync() const { DARABONBA_PTR_GET_DEFAULT(freezeSourceDuringSync_, false) };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels& setFreezeSourceDuringSync(bool freezeSourceDuringSync) { DARABONBA_PTR_SET_VALUE(freezeSourceDuringSync_, freezeSourceDuringSync) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeGlobalDataNetworkListResponseBodyItemsNetworksChannels& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


  protected:
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> channelStatus_ = nullptr;
    std::shared_ptr<bool> freezeSourceDuringSync_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
