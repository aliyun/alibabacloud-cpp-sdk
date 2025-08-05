// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestRunOptions.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSink.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSource.hpp>
#include <vector>
#include <alibabacloud/models/CreateEventStreamingRequestTags.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestTransforms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_TO_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_TO_JSON(Sink, sink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Transforms, transforms_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_FROM_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_FROM_JSON(Sink, sink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Transforms, transforms_);
    };
    CreateEventStreamingRequest() = default ;
    CreateEventStreamingRequest(const CreateEventStreamingRequest &) = default ;
    CreateEventStreamingRequest(CreateEventStreamingRequest &&) = default ;
    CreateEventStreamingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequest() = default ;
    CreateEventStreamingRequest& operator=(const CreateEventStreamingRequest &) = default ;
    CreateEventStreamingRequest& operator=(CreateEventStreamingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventStreamingName_ != nullptr && this->filterPattern_ != nullptr && this->runOptions_ != nullptr && this->sink_ != nullptr && this->source_ != nullptr
        && this->tags_ != nullptr && this->transforms_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventStreamingRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string eventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline CreateEventStreamingRequest& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string filterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline CreateEventStreamingRequest& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // runOptions Field Functions 
    bool hasRunOptions() const { return this->runOptions_ != nullptr;};
    void deleteRunOptions() { this->runOptions_ = nullptr;};
    inline const CreateEventStreamingRequestRunOptions & runOptions() const { DARABONBA_PTR_GET_CONST(runOptions_, CreateEventStreamingRequestRunOptions) };
    inline CreateEventStreamingRequestRunOptions runOptions() { DARABONBA_PTR_GET(runOptions_, CreateEventStreamingRequestRunOptions) };
    inline CreateEventStreamingRequest& setRunOptions(const CreateEventStreamingRequestRunOptions & runOptions) { DARABONBA_PTR_SET_VALUE(runOptions_, runOptions) };
    inline CreateEventStreamingRequest& setRunOptions(CreateEventStreamingRequestRunOptions && runOptions) { DARABONBA_PTR_SET_RVALUE(runOptions_, runOptions) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline const CreateEventStreamingRequestSink & sink() const { DARABONBA_PTR_GET_CONST(sink_, CreateEventStreamingRequestSink) };
    inline CreateEventStreamingRequestSink sink() { DARABONBA_PTR_GET(sink_, CreateEventStreamingRequestSink) };
    inline CreateEventStreamingRequest& setSink(const CreateEventStreamingRequestSink & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
    inline CreateEventStreamingRequest& setSink(CreateEventStreamingRequestSink && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const CreateEventStreamingRequestSource & source() const { DARABONBA_PTR_GET_CONST(source_, CreateEventStreamingRequestSource) };
    inline CreateEventStreamingRequestSource source() { DARABONBA_PTR_GET(source_, CreateEventStreamingRequestSource) };
    inline CreateEventStreamingRequest& setSource(const CreateEventStreamingRequestSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CreateEventStreamingRequest& setSource(CreateEventStreamingRequestSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateEventStreamingRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateEventStreamingRequestTags>) };
    inline vector<CreateEventStreamingRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateEventStreamingRequestTags>) };
    inline CreateEventStreamingRequest& setTags(const vector<CreateEventStreamingRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEventStreamingRequest& setTags(vector<CreateEventStreamingRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transforms Field Functions 
    bool hasTransforms() const { return this->transforms_ != nullptr;};
    void deleteTransforms() { this->transforms_ = nullptr;};
    inline const vector<CreateEventStreamingRequestTransforms> & transforms() const { DARABONBA_PTR_GET_CONST(transforms_, vector<CreateEventStreamingRequestTransforms>) };
    inline vector<CreateEventStreamingRequestTransforms> transforms() { DARABONBA_PTR_GET(transforms_, vector<CreateEventStreamingRequestTransforms>) };
    inline CreateEventStreamingRequest& setTransforms(const vector<CreateEventStreamingRequestTransforms> & transforms) { DARABONBA_PTR_SET_VALUE(transforms_, transforms) };
    inline CreateEventStreamingRequest& setTransforms(vector<CreateEventStreamingRequestTransforms> && transforms) { DARABONBA_PTR_SET_RVALUE(transforms_, transforms) };


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
    std::shared_ptr<CreateEventStreamingRequestRunOptions> runOptions_ = nullptr;
    // The event target. You must and can specify only one event target.
    // 
    // This parameter is required.
    std::shared_ptr<CreateEventStreamingRequestSink> sink_ = nullptr;
    // The event provider, which is also known as the event source. You must and can specify only one event source.
    // 
    // This parameter is required.
    std::shared_ptr<CreateEventStreamingRequestSource> source_ = nullptr;
    std::shared_ptr<vector<CreateEventStreamingRequestTags>> tags_ = nullptr;
    std::shared_ptr<vector<CreateEventStreamingRequestTransforms>> transforms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
