// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAUDIOAUDITCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAudioAuditConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAudioAuditConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveAudioAuditConfigList, liveAudioAuditConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAudioAuditConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveAudioAuditConfigList, liveAudioAuditConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveAudioAuditConfigResponseBody() = default ;
    DescribeLiveAudioAuditConfigResponseBody(const DescribeLiveAudioAuditConfigResponseBody &) = default ;
    DescribeLiveAudioAuditConfigResponseBody(DescribeLiveAudioAuditConfigResponseBody &&) = default ;
    DescribeLiveAudioAuditConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAudioAuditConfigResponseBody() = default ;
    DescribeLiveAudioAuditConfigResponseBody& operator=(const DescribeLiveAudioAuditConfigResponseBody &) = default ;
    DescribeLiveAudioAuditConfigResponseBody& operator=(DescribeLiveAudioAuditConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveAudioAuditConfigList_ == nullptr
        && return this->requestId_ == nullptr; };
    // liveAudioAuditConfigList Field Functions 
    bool hasLiveAudioAuditConfigList() const { return this->liveAudioAuditConfigList_ != nullptr;};
    void deleteLiveAudioAuditConfigList() { this->liveAudioAuditConfigList_ = nullptr;};
    inline const DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList & liveAudioAuditConfigList() const { DARABONBA_PTR_GET_CONST(liveAudioAuditConfigList_, DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList) };
    inline DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList liveAudioAuditConfigList() { DARABONBA_PTR_GET(liveAudioAuditConfigList_, DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList) };
    inline DescribeLiveAudioAuditConfigResponseBody& setLiveAudioAuditConfigList(const DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList & liveAudioAuditConfigList) { DARABONBA_PTR_SET_VALUE(liveAudioAuditConfigList_, liveAudioAuditConfigList) };
    inline DescribeLiveAudioAuditConfigResponseBody& setLiveAudioAuditConfigList(DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList && liveAudioAuditConfigList) { DARABONBA_PTR_SET_RVALUE(liveAudioAuditConfigList_, liveAudioAuditConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAudioAuditConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of audio moderation configurations.
    std::shared_ptr<DescribeLiveAudioAuditConfigResponseBodyLiveAudioAuditConfigList> liveAudioAuditConfigList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
