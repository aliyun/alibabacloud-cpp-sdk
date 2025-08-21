// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsStreamsNotifyUrlConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsStreamsNotifyUrlConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamsNotifyConfig, liveStreamsNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsStreamsNotifyUrlConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamsNotifyConfig, liveStreamsNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsStreamsNotifyUrlConfigResponseBody() = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody(const DescribeVsStreamsNotifyUrlConfigResponseBody &) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody(DescribeVsStreamsNotifyUrlConfigResponseBody &&) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsStreamsNotifyUrlConfigResponseBody() = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody& operator=(const DescribeVsStreamsNotifyUrlConfigResponseBody &) = default ;
    DescribeVsStreamsNotifyUrlConfigResponseBody& operator=(DescribeVsStreamsNotifyUrlConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveStreamsNotifyConfig_ != nullptr
        && this->requestId_ != nullptr; };
    // liveStreamsNotifyConfig Field Functions 
    bool hasLiveStreamsNotifyConfig() const { return this->liveStreamsNotifyConfig_ != nullptr;};
    void deleteLiveStreamsNotifyConfig() { this->liveStreamsNotifyConfig_ = nullptr;};
    inline const DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig & liveStreamsNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveStreamsNotifyConfig_, DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig) };
    inline DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig liveStreamsNotifyConfig() { DARABONBA_PTR_GET(liveStreamsNotifyConfig_, DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig) };
    inline DescribeVsStreamsNotifyUrlConfigResponseBody& setLiveStreamsNotifyConfig(const DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig & liveStreamsNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveStreamsNotifyConfig_, liveStreamsNotifyConfig) };
    inline DescribeVsStreamsNotifyUrlConfigResponseBody& setLiveStreamsNotifyConfig(DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig && liveStreamsNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamsNotifyConfig_, liveStreamsNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsStreamsNotifyUrlConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeVsStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig> liveStreamsNotifyConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
