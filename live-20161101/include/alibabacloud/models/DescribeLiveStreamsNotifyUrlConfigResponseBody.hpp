// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYURLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSNOTIFYURLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsNotifyUrlConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsNotifyUrlConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveStreamsNotifyConfig, liveStreamsNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsNotifyUrlConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveStreamsNotifyConfig, liveStreamsNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamsNotifyUrlConfigResponseBody() = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody(const DescribeLiveStreamsNotifyUrlConfigResponseBody &) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody(DescribeLiveStreamsNotifyUrlConfigResponseBody &&) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsNotifyUrlConfigResponseBody() = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody& operator=(const DescribeLiveStreamsNotifyUrlConfigResponseBody &) = default ;
    DescribeLiveStreamsNotifyUrlConfigResponseBody& operator=(DescribeLiveStreamsNotifyUrlConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveStreamsNotifyConfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // liveStreamsNotifyConfig Field Functions 
    bool hasLiveStreamsNotifyConfig() const { return this->liveStreamsNotifyConfig_ != nullptr;};
    void deleteLiveStreamsNotifyConfig() { this->liveStreamsNotifyConfig_ = nullptr;};
    inline const DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig & liveStreamsNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveStreamsNotifyConfig_, DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig) };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig liveStreamsNotifyConfig() { DARABONBA_PTR_GET(liveStreamsNotifyConfig_, DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig) };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBody& setLiveStreamsNotifyConfig(const DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig & liveStreamsNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveStreamsNotifyConfig_, liveStreamsNotifyConfig) };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBody& setLiveStreamsNotifyConfig(DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig && liveStreamsNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveStreamsNotifyConfig_, liveStreamsNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsNotifyUrlConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The callback configuration.
    std::shared_ptr<DescribeLiveStreamsNotifyUrlConfigResponseBodyLiveStreamsNotifyConfig> liveStreamsNotifyConfig_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
