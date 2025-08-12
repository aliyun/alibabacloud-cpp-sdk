// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterChannelsResponseBodyChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterChannelsResponseBody() = default ;
    DescribeCasterChannelsResponseBody(const DescribeCasterChannelsResponseBody &) = default ;
    DescribeCasterChannelsResponseBody(DescribeCasterChannelsResponseBody &&) = default ;
    DescribeCasterChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterChannelsResponseBody() = default ;
    DescribeCasterChannelsResponseBody& operator=(const DescribeCasterChannelsResponseBody &) = default ;
    DescribeCasterChannelsResponseBody& operator=(DescribeCasterChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channels_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const DescribeCasterChannelsResponseBodyChannels & channels() const { DARABONBA_PTR_GET_CONST(channels_, DescribeCasterChannelsResponseBodyChannels) };
    inline DescribeCasterChannelsResponseBodyChannels channels() { DARABONBA_PTR_GET(channels_, DescribeCasterChannelsResponseBodyChannels) };
    inline DescribeCasterChannelsResponseBody& setChannels(const DescribeCasterChannelsResponseBodyChannels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline DescribeCasterChannelsResponseBody& setChannels(DescribeCasterChannelsResponseBodyChannels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterChannelsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The channels.
    std::shared_ptr<DescribeCasterChannelsResponseBodyChannels> channels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of channels.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
