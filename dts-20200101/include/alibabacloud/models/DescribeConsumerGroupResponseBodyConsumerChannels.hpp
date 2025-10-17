// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONSUMERGROUPRESPONSEBODYCONSUMERCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONSUMERGROUPRESPONSEBODYCONSUMERCHANNELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConsumerGroupResponseBodyConsumerChannelsDescribeConsumerChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeConsumerGroupResponseBodyConsumerChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConsumerGroupResponseBodyConsumerChannels& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeConsumerChannel, describeConsumerChannel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConsumerGroupResponseBodyConsumerChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeConsumerChannel, describeConsumerChannel_);
    };
    DescribeConsumerGroupResponseBodyConsumerChannels() = default ;
    DescribeConsumerGroupResponseBodyConsumerChannels(const DescribeConsumerGroupResponseBodyConsumerChannels &) = default ;
    DescribeConsumerGroupResponseBodyConsumerChannels(DescribeConsumerGroupResponseBodyConsumerChannels &&) = default ;
    DescribeConsumerGroupResponseBodyConsumerChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConsumerGroupResponseBodyConsumerChannels() = default ;
    DescribeConsumerGroupResponseBodyConsumerChannels& operator=(const DescribeConsumerGroupResponseBodyConsumerChannels &) = default ;
    DescribeConsumerGroupResponseBodyConsumerChannels& operator=(DescribeConsumerGroupResponseBodyConsumerChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeConsumerChannel_ == nullptr; };
    // describeConsumerChannel Field Functions 
    bool hasDescribeConsumerChannel() const { return this->describeConsumerChannel_ != nullptr;};
    void deleteDescribeConsumerChannel() { this->describeConsumerChannel_ = nullptr;};
    inline const vector<Models::DescribeConsumerGroupResponseBodyConsumerChannelsDescribeConsumerChannel> & describeConsumerChannel() const { DARABONBA_PTR_GET_CONST(describeConsumerChannel_, vector<Models::DescribeConsumerGroupResponseBodyConsumerChannelsDescribeConsumerChannel>) };
    inline vector<Models::DescribeConsumerGroupResponseBodyConsumerChannelsDescribeConsumerChannel> describeConsumerChannel() { DARABONBA_PTR_GET(describeConsumerChannel_, vector<Models::DescribeConsumerGroupResponseBodyConsumerChannelsDescribeConsumerChannel>) };
    inline DescribeConsumerGroupResponseBodyConsumerChannels& setDescribeConsumerChannel(const vector<Models::DescribeConsumerGroupResponseBodyConsumerChannelsDescribeConsumerChannel> & describeConsumerChannel) { DARABONBA_PTR_SET_VALUE(describeConsumerChannel_, describeConsumerChannel) };
    inline DescribeConsumerGroupResponseBodyConsumerChannels& setDescribeConsumerChannel(vector<Models::DescribeConsumerGroupResponseBodyConsumerChannelsDescribeConsumerChannel> && describeConsumerChannel) { DARABONBA_PTR_SET_RVALUE(describeConsumerChannel_, describeConsumerChannel) };


  protected:
    std::shared_ptr<vector<Models::DescribeConsumerGroupResponseBodyConsumerChannelsDescribeConsumerChannel>> describeConsumerChannel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
