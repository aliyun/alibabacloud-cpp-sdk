// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCHANNELSRESPONSEBODYCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCHANNELSRESPONSEBODYCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterChannelsResponseBodyChannelsChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterChannelsResponseBodyChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterChannelsResponseBodyChannels& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterChannelsResponseBodyChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
    };
    DescribeCasterChannelsResponseBodyChannels() = default ;
    DescribeCasterChannelsResponseBodyChannels(const DescribeCasterChannelsResponseBodyChannels &) = default ;
    DescribeCasterChannelsResponseBodyChannels(DescribeCasterChannelsResponseBodyChannels &&) = default ;
    DescribeCasterChannelsResponseBodyChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterChannelsResponseBodyChannels() = default ;
    DescribeCasterChannelsResponseBodyChannels& operator=(const DescribeCasterChannelsResponseBodyChannels &) = default ;
    DescribeCasterChannelsResponseBodyChannels& operator=(DescribeCasterChannelsResponseBodyChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const vector<Models::DescribeCasterChannelsResponseBodyChannelsChannel> & channel() const { DARABONBA_PTR_GET_CONST(channel_, vector<Models::DescribeCasterChannelsResponseBodyChannelsChannel>) };
    inline vector<Models::DescribeCasterChannelsResponseBodyChannelsChannel> channel() { DARABONBA_PTR_GET(channel_, vector<Models::DescribeCasterChannelsResponseBodyChannelsChannel>) };
    inline DescribeCasterChannelsResponseBodyChannels& setChannel(const vector<Models::DescribeCasterChannelsResponseBodyChannelsChannel> & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline DescribeCasterChannelsResponseBodyChannels& setChannel(vector<Models::DescribeCasterChannelsResponseBodyChannelsChannel> && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterChannelsResponseBodyChannelsChannel>> channel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
