// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTNOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTNOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDetectNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDetectNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveDetectNotifyConfig, liveDetectNotifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDetectNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveDetectNotifyConfig, liveDetectNotifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDetectNotifyConfigResponseBody() = default ;
    DescribeLiveDetectNotifyConfigResponseBody(const DescribeLiveDetectNotifyConfigResponseBody &) = default ;
    DescribeLiveDetectNotifyConfigResponseBody(DescribeLiveDetectNotifyConfigResponseBody &&) = default ;
    DescribeLiveDetectNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDetectNotifyConfigResponseBody() = default ;
    DescribeLiveDetectNotifyConfigResponseBody& operator=(const DescribeLiveDetectNotifyConfigResponseBody &) = default ;
    DescribeLiveDetectNotifyConfigResponseBody& operator=(DescribeLiveDetectNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveDetectNotifyConfig_ != nullptr
        && this->requestId_ != nullptr; };
    // liveDetectNotifyConfig Field Functions 
    bool hasLiveDetectNotifyConfig() const { return this->liveDetectNotifyConfig_ != nullptr;};
    void deleteLiveDetectNotifyConfig() { this->liveDetectNotifyConfig_ = nullptr;};
    inline const DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig & liveDetectNotifyConfig() const { DARABONBA_PTR_GET_CONST(liveDetectNotifyConfig_, DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig) };
    inline DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig liveDetectNotifyConfig() { DARABONBA_PTR_GET(liveDetectNotifyConfig_, DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig) };
    inline DescribeLiveDetectNotifyConfigResponseBody& setLiveDetectNotifyConfig(const DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig & liveDetectNotifyConfig) { DARABONBA_PTR_SET_VALUE(liveDetectNotifyConfig_, liveDetectNotifyConfig) };
    inline DescribeLiveDetectNotifyConfigResponseBody& setLiveDetectNotifyConfig(DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig && liveDetectNotifyConfig) { DARABONBA_PTR_SET_RVALUE(liveDetectNotifyConfig_, liveDetectNotifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDetectNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The callback configuration.
    std::shared_ptr<DescribeLiveDetectNotifyConfigResponseBodyLiveDetectNotifyConfig> liveDetectNotifyConfig_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
