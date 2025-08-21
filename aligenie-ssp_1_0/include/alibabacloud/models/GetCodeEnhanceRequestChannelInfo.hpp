// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCODEENHANCEREQUESTCHANNELINFO_HPP_
#define ALIBABACLOUD_MODELS_GETCODEENHANCEREQUESTCHANNELINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetCodeEnhanceRequestChannelInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCodeEnhanceRequestChannelInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetCodeEnhanceRequestChannelInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
    };
    GetCodeEnhanceRequestChannelInfo() = default ;
    GetCodeEnhanceRequestChannelInfo(const GetCodeEnhanceRequestChannelInfo &) = default ;
    GetCodeEnhanceRequestChannelInfo(GetCodeEnhanceRequestChannelInfo &&) = default ;
    GetCodeEnhanceRequestChannelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCodeEnhanceRequestChannelInfo() = default ;
    GetCodeEnhanceRequestChannelInfo& operator=(const GetCodeEnhanceRequestChannelInfo &) = default ;
    GetCodeEnhanceRequestChannelInfo& operator=(GetCodeEnhanceRequestChannelInfo &&) = default ;
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
    inline GetCodeEnhanceRequestChannelInfo& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline GetCodeEnhanceRequestChannelInfo& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> extInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
