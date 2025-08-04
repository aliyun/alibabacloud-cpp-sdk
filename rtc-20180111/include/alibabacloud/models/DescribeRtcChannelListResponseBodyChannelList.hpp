// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODYCHANNELLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELLISTRESPONSEBODYCHANNELLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRtcChannelListResponseBodyChannelListChannelList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelListResponseBodyChannelList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelListResponseBodyChannelList& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelList, channelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelListResponseBodyChannelList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelList, channelList_);
    };
    DescribeRtcChannelListResponseBodyChannelList() = default ;
    DescribeRtcChannelListResponseBodyChannelList(const DescribeRtcChannelListResponseBodyChannelList &) = default ;
    DescribeRtcChannelListResponseBodyChannelList(DescribeRtcChannelListResponseBodyChannelList &&) = default ;
    DescribeRtcChannelListResponseBodyChannelList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelListResponseBodyChannelList() = default ;
    DescribeRtcChannelListResponseBodyChannelList& operator=(const DescribeRtcChannelListResponseBodyChannelList &) = default ;
    DescribeRtcChannelListResponseBodyChannelList& operator=(DescribeRtcChannelListResponseBodyChannelList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelList_ != nullptr; };
    // channelList Field Functions 
    bool hasChannelList() const { return this->channelList_ != nullptr;};
    void deleteChannelList() { this->channelList_ = nullptr;};
    inline const vector<Models::DescribeRtcChannelListResponseBodyChannelListChannelList> & channelList() const { DARABONBA_PTR_GET_CONST(channelList_, vector<Models::DescribeRtcChannelListResponseBodyChannelListChannelList>) };
    inline vector<Models::DescribeRtcChannelListResponseBodyChannelListChannelList> channelList() { DARABONBA_PTR_GET(channelList_, vector<Models::DescribeRtcChannelListResponseBodyChannelListChannelList>) };
    inline DescribeRtcChannelListResponseBodyChannelList& setChannelList(const vector<Models::DescribeRtcChannelListResponseBodyChannelListChannelList> & channelList) { DARABONBA_PTR_SET_VALUE(channelList_, channelList) };
    inline DescribeRtcChannelListResponseBodyChannelList& setChannelList(vector<Models::DescribeRtcChannelListResponseBodyChannelListChannelList> && channelList) { DARABONBA_PTR_SET_RVALUE(channelList_, channelList) };


  protected:
    std::shared_ptr<vector<Models::DescribeRtcChannelListResponseBodyChannelListChannelList>> channelList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
