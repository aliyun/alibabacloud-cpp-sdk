// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFOCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFOCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningConfigResponseBodyDataWarningConfigInfoChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningConfigResponseBodyDataWarningConfigInfoChannels& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningConfigResponseBodyDataWarningConfigInfoChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
    };
    ListWarningConfigResponseBodyDataWarningConfigInfoChannels() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannels(const ListWarningConfigResponseBodyDataWarningConfigInfoChannels &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannels(ListWarningConfigResponseBodyDataWarningConfigInfoChannels &&) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningConfigResponseBodyDataWarningConfigInfoChannels() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannels& operator=(const ListWarningConfigResponseBodyDataWarningConfigInfoChannels &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfoChannels& operator=(ListWarningConfigResponseBodyDataWarningConfigInfoChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel> & channel() const { DARABONBA_PTR_GET_CONST(channel_, vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel>) };
    inline vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel> channel() { DARABONBA_PTR_GET(channel_, vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel>) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoChannels& setChannel(const vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel> & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfoChannels& setChannel(vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel> && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


  protected:
    std::shared_ptr<vector<Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannelsChannel>> channel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
