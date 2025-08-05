// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsRunOptions.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSink.hpp>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsSource.hpp>
#include <vector>
#include <alibabacloud/models/ListEventStreamingsResponseBodyDataEventStreamingsTransforms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamings& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_TO_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_TO_JSON(Sink, sink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Transforms, transforms_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamings& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_FROM_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_FROM_JSON(Sink, sink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Transforms, transforms_);
    };
    ListEventStreamingsResponseBodyDataEventStreamings() = default ;
    ListEventStreamingsResponseBodyDataEventStreamings(const ListEventStreamingsResponseBodyDataEventStreamings &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamings(ListEventStreamingsResponseBodyDataEventStreamings &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamings() = default ;
    ListEventStreamingsResponseBodyDataEventStreamings& operator=(const ListEventStreamingsResponseBodyDataEventStreamings &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamings& operator=(ListEventStreamingsResponseBodyDataEventStreamings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventStreamingName_ != nullptr && this->filterPattern_ != nullptr && this->runOptions_ != nullptr && this->sink_ != nullptr && this->source_ != nullptr
        && this->status_ != nullptr && this->transforms_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string eventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string filterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // runOptions Field Functions 
    bool hasRunOptions() const { return this->runOptions_ != nullptr;};
    void deleteRunOptions() { this->runOptions_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptions & runOptions() const { DARABONBA_PTR_GET_CONST(runOptions_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptions) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptions runOptions() { DARABONBA_PTR_GET(runOptions_, Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptions) };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setRunOptions(const Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptions & runOptions) { DARABONBA_PTR_SET_VALUE(runOptions_, runOptions) };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setRunOptions(Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptions && runOptions) { DARABONBA_PTR_SET_RVALUE(runOptions_, runOptions) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSink & sink() const { DARABONBA_PTR_GET_CONST(sink_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSink) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSink sink() { DARABONBA_PTR_GET(sink_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSink) };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setSink(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSink & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setSink(Models::ListEventStreamingsResponseBodyDataEventStreamingsSink && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::ListEventStreamingsResponseBodyDataEventStreamingsSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSource) };
    inline Models::ListEventStreamingsResponseBodyDataEventStreamingsSource source() { DARABONBA_PTR_GET(source_, Models::ListEventStreamingsResponseBodyDataEventStreamingsSource) };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setSource(const Models::ListEventStreamingsResponseBodyDataEventStreamingsSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setSource(Models::ListEventStreamingsResponseBodyDataEventStreamingsSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transforms Field Functions 
    bool hasTransforms() const { return this->transforms_ != nullptr;};
    void deleteTransforms() { this->transforms_ = nullptr;};
    inline const vector<Models::ListEventStreamingsResponseBodyDataEventStreamingsTransforms> & transforms() const { DARABONBA_PTR_GET_CONST(transforms_, vector<Models::ListEventStreamingsResponseBodyDataEventStreamingsTransforms>) };
    inline vector<Models::ListEventStreamingsResponseBodyDataEventStreamingsTransforms> transforms() { DARABONBA_PTR_GET(transforms_, vector<Models::ListEventStreamingsResponseBodyDataEventStreamingsTransforms>) };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setTransforms(const vector<Models::ListEventStreamingsResponseBodyDataEventStreamingsTransforms> & transforms) { DARABONBA_PTR_SET_VALUE(transforms_, transforms) };
    inline ListEventStreamingsResponseBodyDataEventStreamings& setTransforms(vector<Models::ListEventStreamingsResponseBodyDataEventStreamingsTransforms> && transforms) { DARABONBA_PTR_SET_RVALUE(transforms_, transforms) };


  protected:
    // The description of the event stream.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the event stream.
    std::shared_ptr<string> eventStreamingName_ = nullptr;
    // The rule that is used to filter events. If you leave this parameter empty, all events are matched.
    std::shared_ptr<string> filterPattern_ = nullptr;
    // The parameters that are returned for the runtime environment.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsRunOptions> runOptions_ = nullptr;
    // The event target.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSink> sink_ = nullptr;
    // The event provider, which is also known as the event source.
    std::shared_ptr<Models::ListEventStreamingsResponseBodyDataEventStreamingsSource> source_ = nullptr;
    // The status of the event stream that is returned.
    std::shared_ptr<string> status_ = nullptr;
    // The transformation-related configurations.
    std::shared_ptr<vector<Models::ListEventStreamingsResponseBodyDataEventStreamingsTransforms>> transforms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
