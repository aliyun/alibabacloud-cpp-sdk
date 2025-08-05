// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestRunOptions.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSink.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSource.hpp>
#include <vector>
#include <alibabacloud/models/UpdateEventStreamingRequestTransforms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_TO_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_TO_JSON(Sink, sink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Transforms, transforms_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_FROM_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_FROM_JSON(Sink, sink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Transforms, transforms_);
    };
    UpdateEventStreamingRequest() = default ;
    UpdateEventStreamingRequest(const UpdateEventStreamingRequest &) = default ;
    UpdateEventStreamingRequest(UpdateEventStreamingRequest &&) = default ;
    UpdateEventStreamingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequest() = default ;
    UpdateEventStreamingRequest& operator=(const UpdateEventStreamingRequest &) = default ;
    UpdateEventStreamingRequest& operator=(UpdateEventStreamingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventStreamingName_ != nullptr && this->filterPattern_ != nullptr && this->runOptions_ != nullptr && this->sink_ != nullptr && this->source_ != nullptr
        && this->transforms_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEventStreamingRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string eventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline UpdateEventStreamingRequest& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string filterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline UpdateEventStreamingRequest& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // runOptions Field Functions 
    bool hasRunOptions() const { return this->runOptions_ != nullptr;};
    void deleteRunOptions() { this->runOptions_ = nullptr;};
    inline const UpdateEventStreamingRequestRunOptions & runOptions() const { DARABONBA_PTR_GET_CONST(runOptions_, UpdateEventStreamingRequestRunOptions) };
    inline UpdateEventStreamingRequestRunOptions runOptions() { DARABONBA_PTR_GET(runOptions_, UpdateEventStreamingRequestRunOptions) };
    inline UpdateEventStreamingRequest& setRunOptions(const UpdateEventStreamingRequestRunOptions & runOptions) { DARABONBA_PTR_SET_VALUE(runOptions_, runOptions) };
    inline UpdateEventStreamingRequest& setRunOptions(UpdateEventStreamingRequestRunOptions && runOptions) { DARABONBA_PTR_SET_RVALUE(runOptions_, runOptions) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline const UpdateEventStreamingRequestSink & sink() const { DARABONBA_PTR_GET_CONST(sink_, UpdateEventStreamingRequestSink) };
    inline UpdateEventStreamingRequestSink sink() { DARABONBA_PTR_GET(sink_, UpdateEventStreamingRequestSink) };
    inline UpdateEventStreamingRequest& setSink(const UpdateEventStreamingRequestSink & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
    inline UpdateEventStreamingRequest& setSink(UpdateEventStreamingRequestSink && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const UpdateEventStreamingRequestSource & source() const { DARABONBA_PTR_GET_CONST(source_, UpdateEventStreamingRequestSource) };
    inline UpdateEventStreamingRequestSource source() { DARABONBA_PTR_GET(source_, UpdateEventStreamingRequestSource) };
    inline UpdateEventStreamingRequest& setSource(const UpdateEventStreamingRequestSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline UpdateEventStreamingRequest& setSource(UpdateEventStreamingRequestSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // transforms Field Functions 
    bool hasTransforms() const { return this->transforms_ != nullptr;};
    void deleteTransforms() { this->transforms_ = nullptr;};
    inline const vector<UpdateEventStreamingRequestTransforms> & transforms() const { DARABONBA_PTR_GET_CONST(transforms_, vector<UpdateEventStreamingRequestTransforms>) };
    inline vector<UpdateEventStreamingRequestTransforms> transforms() { DARABONBA_PTR_GET(transforms_, vector<UpdateEventStreamingRequestTransforms>) };
    inline UpdateEventStreamingRequest& setTransforms(const vector<UpdateEventStreamingRequestTransforms> & transforms) { DARABONBA_PTR_SET_VALUE(transforms_, transforms) };
    inline UpdateEventStreamingRequest& setTransforms(vector<UpdateEventStreamingRequestTransforms> && transforms) { DARABONBA_PTR_SET_RVALUE(transforms_, transforms) };


  protected:
    // The description of the event stream.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the event stream.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventStreamingName_ = nullptr;
    // The rule that is used to filter events. If you leave this parameter empty, all events are matched.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterPattern_ = nullptr;
    // The parameters that are configured for the runtime environment.
    std::shared_ptr<UpdateEventStreamingRequestRunOptions> runOptions_ = nullptr;
    // The event target. You must and can specify only one event target.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateEventStreamingRequestSink> sink_ = nullptr;
    // The event provider, which is also known as the event source. You must and can specify only one event source.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateEventStreamingRequestSource> source_ = nullptr;
    std::shared_ptr<vector<UpdateEventStreamingRequestTransforms>> transforms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
