// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEventStreamingShrinkRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_TO_JSON(RunOptions, runOptionsShrink_);
      DARABONBA_PTR_TO_JSON(Sink, sinkShrink_);
      DARABONBA_PTR_TO_JSON(Source, sourceShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Transforms, transformsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_FROM_JSON(RunOptions, runOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(Sink, sinkShrink_);
      DARABONBA_PTR_FROM_JSON(Source, sourceShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Transforms, transformsShrink_);
    };
    CreateEventStreamingShrinkRequest() = default ;
    CreateEventStreamingShrinkRequest(const CreateEventStreamingShrinkRequest &) = default ;
    CreateEventStreamingShrinkRequest(CreateEventStreamingShrinkRequest &&) = default ;
    CreateEventStreamingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingShrinkRequest() = default ;
    CreateEventStreamingShrinkRequest& operator=(const CreateEventStreamingShrinkRequest &) = default ;
    CreateEventStreamingShrinkRequest& operator=(CreateEventStreamingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventStreamingName_ != nullptr && this->filterPattern_ != nullptr && this->runOptionsShrink_ != nullptr && this->sinkShrink_ != nullptr && this->sourceShrink_ != nullptr
        && this->tags_ != nullptr && this->transformsShrink_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventStreamingShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string eventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline CreateEventStreamingShrinkRequest& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string filterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline CreateEventStreamingShrinkRequest& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // runOptionsShrink Field Functions 
    bool hasRunOptionsShrink() const { return this->runOptionsShrink_ != nullptr;};
    void deleteRunOptionsShrink() { this->runOptionsShrink_ = nullptr;};
    inline string runOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(runOptionsShrink_, "") };
    inline CreateEventStreamingShrinkRequest& setRunOptionsShrink(string runOptionsShrink) { DARABONBA_PTR_SET_VALUE(runOptionsShrink_, runOptionsShrink) };


    // sinkShrink Field Functions 
    bool hasSinkShrink() const { return this->sinkShrink_ != nullptr;};
    void deleteSinkShrink() { this->sinkShrink_ = nullptr;};
    inline string sinkShrink() const { DARABONBA_PTR_GET_DEFAULT(sinkShrink_, "") };
    inline CreateEventStreamingShrinkRequest& setSinkShrink(string sinkShrink) { DARABONBA_PTR_SET_VALUE(sinkShrink_, sinkShrink) };


    // sourceShrink Field Functions 
    bool hasSourceShrink() const { return this->sourceShrink_ != nullptr;};
    void deleteSourceShrink() { this->sourceShrink_ = nullptr;};
    inline string sourceShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceShrink_, "") };
    inline CreateEventStreamingShrinkRequest& setSourceShrink(string sourceShrink) { DARABONBA_PTR_SET_VALUE(sourceShrink_, sourceShrink) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateEventStreamingShrinkRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateEventStreamingShrinkRequestTags>) };
    inline vector<CreateEventStreamingShrinkRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateEventStreamingShrinkRequestTags>) };
    inline CreateEventStreamingShrinkRequest& setTags(const vector<CreateEventStreamingShrinkRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEventStreamingShrinkRequest& setTags(vector<CreateEventStreamingShrinkRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transformsShrink Field Functions 
    bool hasTransformsShrink() const { return this->transformsShrink_ != nullptr;};
    void deleteTransformsShrink() { this->transformsShrink_ = nullptr;};
    inline string transformsShrink() const { DARABONBA_PTR_GET_DEFAULT(transformsShrink_, "") };
    inline CreateEventStreamingShrinkRequest& setTransformsShrink(string transformsShrink) { DARABONBA_PTR_SET_VALUE(transformsShrink_, transformsShrink) };


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
    std::shared_ptr<string> runOptionsShrink_ = nullptr;
    // The event target. You must and can specify only one event target.
    // 
    // This parameter is required.
    std::shared_ptr<string> sinkShrink_ = nullptr;
    // The event provider, which is also known as the event source. You must and can specify only one event source.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceShrink_ = nullptr;
    std::shared_ptr<vector<CreateEventStreamingShrinkRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> transformsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
