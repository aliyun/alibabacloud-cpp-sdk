// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKCHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKCHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkChannelResponseBodyChannelInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeNetworkChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelInfos, channelInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelInfos, channelInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkChannelResponseBody() = default ;
    DescribeNetworkChannelResponseBody(const DescribeNetworkChannelResponseBody &) = default ;
    DescribeNetworkChannelResponseBody(DescribeNetworkChannelResponseBody &&) = default ;
    DescribeNetworkChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkChannelResponseBody() = default ;
    DescribeNetworkChannelResponseBody& operator=(const DescribeNetworkChannelResponseBody &) = default ;
    DescribeNetworkChannelResponseBody& operator=(DescribeNetworkChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // channelInfos Field Functions 
    bool hasChannelInfos() const { return this->channelInfos_ != nullptr;};
    void deleteChannelInfos() { this->channelInfos_ = nullptr;};
    inline const vector<DescribeNetworkChannelResponseBodyChannelInfos> & channelInfos() const { DARABONBA_PTR_GET_CONST(channelInfos_, vector<DescribeNetworkChannelResponseBodyChannelInfos>) };
    inline vector<DescribeNetworkChannelResponseBodyChannelInfos> channelInfos() { DARABONBA_PTR_GET(channelInfos_, vector<DescribeNetworkChannelResponseBodyChannelInfos>) };
    inline DescribeNetworkChannelResponseBody& setChannelInfos(const vector<DescribeNetworkChannelResponseBodyChannelInfos> & channelInfos) { DARABONBA_PTR_SET_VALUE(channelInfos_, channelInfos) };
    inline DescribeNetworkChannelResponseBody& setChannelInfos(vector<DescribeNetworkChannelResponseBodyChannelInfos> && channelInfos) { DARABONBA_PTR_SET_RVALUE(channelInfos_, channelInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeNetworkChannelResponseBodyChannelInfos>> channelInfos_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
