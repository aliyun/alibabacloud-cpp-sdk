// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDELAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDelayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TaskTriggerMode, taskTriggerMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TaskTriggerMode, taskTriggerMode_);
    };
    DescribeLiveDelayConfigResponseBody() = default ;
    DescribeLiveDelayConfigResponseBody(const DescribeLiveDelayConfigResponseBody &) = default ;
    DescribeLiveDelayConfigResponseBody(DescribeLiveDelayConfigResponseBody &&) = default ;
    DescribeLiveDelayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDelayConfigResponseBody() = default ;
    DescribeLiveDelayConfigResponseBody& operator=(const DescribeLiveDelayConfigResponseBody &) = default ;
    DescribeLiveDelayConfigResponseBody& operator=(DescribeLiveDelayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->delayTime_ == nullptr && return this->domain_ == nullptr && return this->requestId_ == nullptr && return this->stream_ == nullptr && return this->taskTriggerMode_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeLiveDelayConfigResponseBody& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline string delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, "") };
    inline DescribeLiveDelayConfigResponseBody& setDelayTime(string delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveDelayConfigResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDelayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline DescribeLiveDelayConfigResponseBody& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // taskTriggerMode Field Functions 
    bool hasTaskTriggerMode() const { return this->taskTriggerMode_ != nullptr;};
    void deleteTaskTriggerMode() { this->taskTriggerMode_ = nullptr;};
    inline string taskTriggerMode() const { DARABONBA_PTR_GET_DEFAULT(taskTriggerMode_, "") };
    inline DescribeLiveDelayConfigResponseBody& setTaskTriggerMode(string taskTriggerMode) { DARABONBA_PTR_SET_VALUE(taskTriggerMode_, taskTriggerMode) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> app_ = nullptr;
    // The duration for which the playback of the live stream is delayed.
    std::shared_ptr<string> delayTime_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> domain_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> stream_ = nullptr;
    // The trigger mode. Valid values:
    // 
    // *   **PUBLISH_ONLY**: Stream delay can be triggered only by specifying the stream delay parameter in the ingest URL.
    // *   **CONFIG_ONLY**: Stream delay can be triggered only by the stream delay configuration.
    // *   **PUBLISH_CONFIG**: Stream delay can be triggered by the stream delay parameter in the ingest URL or the stream delay configuration. The stream delay parameter takes precedence over the stream delay configuration.
    std::shared_ptr<string> taskTriggerMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
