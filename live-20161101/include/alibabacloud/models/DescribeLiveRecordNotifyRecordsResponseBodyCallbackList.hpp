// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYRECORDSRESPONSEBODYCALLBACKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYRECORDSRESPONSEBODYCALLBACKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordNotifyRecordsResponseBodyCallbackList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(NotifyContent, notifyContent_);
      DARABONBA_PTR_TO_JSON(NotifyResponse, notifyResponse_);
      DARABONBA_PTR_TO_JSON(NotifyResult, notifyResult_);
      DARABONBA_PTR_TO_JSON(NotifyTime, notifyTime_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(NotifyContent, notifyContent_);
      DARABONBA_PTR_FROM_JSON(NotifyResponse, notifyResponse_);
      DARABONBA_PTR_FROM_JSON(NotifyResult, notifyResult_);
      DARABONBA_PTR_FROM_JSON(NotifyTime, notifyTime_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(NotifyUrl, notifyUrl_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    DescribeLiveRecordNotifyRecordsResponseBodyCallbackList() = default ;
    DescribeLiveRecordNotifyRecordsResponseBodyCallbackList(const DescribeLiveRecordNotifyRecordsResponseBodyCallbackList &) = default ;
    DescribeLiveRecordNotifyRecordsResponseBodyCallbackList(DescribeLiveRecordNotifyRecordsResponseBodyCallbackList &&) = default ;
    DescribeLiveRecordNotifyRecordsResponseBodyCallbackList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordNotifyRecordsResponseBodyCallbackList() = default ;
    DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& operator=(const DescribeLiveRecordNotifyRecordsResponseBodyCallbackList &) = default ;
    DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& operator=(DescribeLiveRecordNotifyRecordsResponseBodyCallbackList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->description_ != nullptr && this->domainName_ != nullptr && this->notifyContent_ != nullptr && this->notifyResponse_ != nullptr && this->notifyResult_ != nullptr
        && this->notifyTime_ != nullptr && this->notifyType_ != nullptr && this->notifyUrl_ != nullptr && this->streamName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // notifyContent Field Functions 
    bool hasNotifyContent() const { return this->notifyContent_ != nullptr;};
    void deleteNotifyContent() { this->notifyContent_ = nullptr;};
    inline string notifyContent() const { DARABONBA_PTR_GET_DEFAULT(notifyContent_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setNotifyContent(string notifyContent) { DARABONBA_PTR_SET_VALUE(notifyContent_, notifyContent) };


    // notifyResponse Field Functions 
    bool hasNotifyResponse() const { return this->notifyResponse_ != nullptr;};
    void deleteNotifyResponse() { this->notifyResponse_ = nullptr;};
    inline string notifyResponse() const { DARABONBA_PTR_GET_DEFAULT(notifyResponse_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setNotifyResponse(string notifyResponse) { DARABONBA_PTR_SET_VALUE(notifyResponse_, notifyResponse) };


    // notifyResult Field Functions 
    bool hasNotifyResult() const { return this->notifyResult_ != nullptr;};
    void deleteNotifyResult() { this->notifyResult_ = nullptr;};
    inline string notifyResult() const { DARABONBA_PTR_GET_DEFAULT(notifyResult_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setNotifyResult(string notifyResult) { DARABONBA_PTR_SET_VALUE(notifyResult_, notifyResult) };


    // notifyTime Field Functions 
    bool hasNotifyTime() const { return this->notifyTime_ != nullptr;};
    void deleteNotifyTime() { this->notifyTime_ = nullptr;};
    inline string notifyTime() const { DARABONBA_PTR_GET_DEFAULT(notifyTime_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setNotifyTime(string notifyTime) { DARABONBA_PTR_SET_VALUE(notifyTime_, notifyTime) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // notifyUrl Field Functions 
    bool hasNotifyUrl() const { return this->notifyUrl_ != nullptr;};
    void deleteNotifyUrl() { this->notifyUrl_ = nullptr;};
    inline string notifyUrl() const { DARABONBA_PTR_GET_DEFAULT(notifyUrl_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setNotifyUrl(string notifyUrl) { DARABONBA_PTR_SET_VALUE(notifyUrl_, notifyUrl) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveRecordNotifyRecordsResponseBodyCallbackList& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> appName_ = nullptr;
    // The description of the result. A value of success indicates that the request is successful. If the request fails, an error message is returned.
    std::shared_ptr<string> description_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The callback content.
    std::shared_ptr<string> notifyContent_ = nullptr;
    std::shared_ptr<string> notifyResponse_ = nullptr;
    // The callback result. Valid values:
    // 
    // *   success
    // *   failed
    std::shared_ptr<string> notifyResult_ = nullptr;
    // The time when the callback was returned. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> notifyTime_ = nullptr;
    // The callback type. Valid values:
    // 
    // *   file_created: The recording file is created.
    // *   record_error: A recording error occurs.
    // *   record_started: Recording is started.
    // *   record_paused: Recording is paused.
    // *   record_resumed: Recording is resumed.
    // *   record_force_transcode_fail: The recording task fails to trigger transcoding.
    // *   transformat_error: An error occurs when the live stream is parsed.
    std::shared_ptr<string> notifyType_ = nullptr;
    // The recording callback URL.
    std::shared_ptr<string> notifyUrl_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
