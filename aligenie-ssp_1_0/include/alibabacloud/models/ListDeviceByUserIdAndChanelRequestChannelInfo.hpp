// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELREQUESTCHANNELINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELREQUESTCHANNELINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdAndChanelRequestChannelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdAndChanelRequestChannelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdAndChanelRequestChannelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
    };
    ListDeviceByUserIdAndChanelRequestChannelInfo() = default ;
    ListDeviceByUserIdAndChanelRequestChannelInfo(const ListDeviceByUserIdAndChanelRequestChannelInfo &) = default ;
    ListDeviceByUserIdAndChanelRequestChannelInfo(ListDeviceByUserIdAndChanelRequestChannelInfo &&) = default ;
    ListDeviceByUserIdAndChanelRequestChannelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdAndChanelRequestChannelInfo() = default ;
    ListDeviceByUserIdAndChanelRequestChannelInfo& operator=(const ListDeviceByUserIdAndChanelRequestChannelInfo &) = default ;
    ListDeviceByUserIdAndChanelRequestChannelInfo& operator=(ListDeviceByUserIdAndChanelRequestChannelInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->extInfo_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ListDeviceByUserIdAndChanelRequestChannelInfo& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline ListDeviceByUserIdAndChanelRequestChannelInfo& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> extInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
