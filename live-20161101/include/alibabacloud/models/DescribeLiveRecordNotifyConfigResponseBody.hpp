// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordNotifyConfig, liveRecordNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordNotifyConfig, liveRecordNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveRecordNotifyConfigResponseBody() = default ;
    DescribeLiveRecordNotifyConfigResponseBody(const DescribeLiveRecordNotifyConfigResponseBody &) = default ;
    DescribeLiveRecordNotifyConfigResponseBody(DescribeLiveRecordNotifyConfigResponseBody &&) = default ;
    DescribeLiveRecordNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordNotifyConfigResponseBody() = default ;
    DescribeLiveRecordNotifyConfigResponseBody& operator=(const DescribeLiveRecordNotifyConfigResponseBody &) = default ;
    DescribeLiveRecordNotifyConfigResponseBody& operator=(DescribeLiveRecordNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveRecordNotifyConfig_ != nullptr
        && this->requestId_ != nullptr; };
    // liveRecordNotifyConfig Field Functions 
    bool hasLiveRecordNotifyConfig() const { return this->liveRecordNotifyConfig_ != nullptr;};
    void deleteLiveRecordNotifyConfig() { this->liveRecordNotifyConfig_ = nullptr;};
    inline const DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig & liveRecordNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveRecordNotifyConfig_, DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig) };
    inline DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig liveRecordNotifyConfig() { DARABONBA_PTR_GET(liveRecordNotifyConfig_, DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig) };
    inline DescribeLiveRecordNotifyConfigResponseBody& setLiveRecordNotifyConfig(const DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig & liveRecordNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveRecordNotifyConfig_, liveRecordNotifyConfig) };
    inline DescribeLiveRecordNotifyConfigResponseBody& setLiveRecordNotifyConfig(DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig && liveRecordNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveRecordNotifyConfig_, liveRecordNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRecordNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of callbacks for live stream recording.
    std::shared_ptr<DescribeLiveRecordNotifyConfigResponseBodyLiveRecordNotifyConfig> liveRecordNotifyConfig_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
