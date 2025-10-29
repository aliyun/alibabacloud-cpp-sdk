// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITNOTIFYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITNOTIFYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAudioAuditNotifyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAudioAuditNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAudioAuditNotifyConfigList, liveAudioAuditNotifyConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAudioAuditNotifyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAudioAuditNotifyConfigList, liveAudioAuditNotifyConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveAudioAuditNotifyConfigResponseBody() = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody(const DescribeLiveAudioAuditNotifyConfigResponseBody &) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody(DescribeLiveAudioAuditNotifyConfigResponseBody &&) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAudioAuditNotifyConfigResponseBody() = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody& operator=(const DescribeLiveAudioAuditNotifyConfigResponseBody &) = default ;
    DescribeLiveAudioAuditNotifyConfigResponseBody& operator=(DescribeLiveAudioAuditNotifyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveAudioAuditNotifyConfigList_ == nullptr
        && return this->requestId_ == nullptr; };
    // liveAudioAuditNotifyConfigList Field Functions 
    bool hasLiveAudioAuditNotifyConfigList() const { return this->liveAudioAuditNotifyConfigList_ != nullptr;};
    void deleteLiveAudioAuditNotifyConfigList() { this->liveAudioAuditNotifyConfigList_ = nullptr;};
    inline const DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList & liveAudioAuditNotifyConfigList() const { DARABONBA_PTR_GET_CONST(liveAudioAuditNotifyConfigList_, DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList) };
    inline DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList liveAudioAuditNotifyConfigList() { DARABONBA_PTR_GET(liveAudioAuditNotifyConfigList_, DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList) };
    inline DescribeLiveAudioAuditNotifyConfigResponseBody& setLiveAudioAuditNotifyConfigList(const DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList & liveAudioAuditNotifyConfigList) { DARABONBA_PTR_SET_VALUE(liveAudioAuditNotifyConfigList_, liveAudioAuditNotifyConfigList) };
    inline DescribeLiveAudioAuditNotifyConfigResponseBody& setLiveAudioAuditNotifyConfigList(DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList && liveAudioAuditNotifyConfigList) { DARABONBA_PTR_SET_RVALUE(liveAudioAuditNotifyConfigList_, liveAudioAuditNotifyConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAudioAuditNotifyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of callbacks for audio moderation results.
    std::shared_ptr<DescribeLiveAudioAuditNotifyConfigResponseBodyLiveAudioAuditNotifyConfigList> liveAudioAuditNotifyConfigList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
