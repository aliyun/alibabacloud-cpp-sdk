// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataDetailedStatus.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataRunOptions.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSink.hpp>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataSource.hpp>
#include <vector>
#include <alibabacloud/models/GetEventStreamingResponseBodyDataTransforms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DetailedStatus, detailedStatus_);
      DARABONBA_PTR_TO_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_TO_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_TO_JSON(Sink, sink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Transforms, transforms_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DetailedStatus, detailedStatus_);
      DARABONBA_PTR_FROM_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_FROM_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_FROM_JSON(Sink, sink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Transforms, transforms_);
    };
    GetEventStreamingResponseBodyData() = default ;
    GetEventStreamingResponseBodyData(const GetEventStreamingResponseBodyData &) = default ;
    GetEventStreamingResponseBodyData(GetEventStreamingResponseBodyData &&) = default ;
    GetEventStreamingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyData() = default ;
    GetEventStreamingResponseBodyData& operator=(const GetEventStreamingResponseBodyData &) = default ;
    GetEventStreamingResponseBodyData& operator=(GetEventStreamingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->detailedStatus_ != nullptr && this->eventStreamingName_ != nullptr && this->filterPattern_ != nullptr && this->runOptions_ != nullptr && this->sink_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->transforms_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEventStreamingResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailedStatus Field Functions 
    bool hasDetailedStatus() const { return this->detailedStatus_ != nullptr;};
    void deleteDetailedStatus() { this->detailedStatus_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataDetailedStatus & detailedStatus() const { DARABONBA_PTR_GET_CONST(detailedStatus_, Models::GetEventStreamingResponseBodyDataDetailedStatus) };
    inline Models::GetEventStreamingResponseBodyDataDetailedStatus detailedStatus() { DARABONBA_PTR_GET(detailedStatus_, Models::GetEventStreamingResponseBodyDataDetailedStatus) };
    inline GetEventStreamingResponseBodyData& setDetailedStatus(const Models::GetEventStreamingResponseBodyDataDetailedStatus & detailedStatus) { DARABONBA_PTR_SET_VALUE(detailedStatus_, detailedStatus) };
    inline GetEventStreamingResponseBodyData& setDetailedStatus(Models::GetEventStreamingResponseBodyDataDetailedStatus && detailedStatus) { DARABONBA_PTR_SET_RVALUE(detailedStatus_, detailedStatus) };


    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string eventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline GetEventStreamingResponseBodyData& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string filterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline GetEventStreamingResponseBodyData& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // runOptions Field Functions 
    bool hasRunOptions() const { return this->runOptions_ != nullptr;};
    void deleteRunOptions() { this->runOptions_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataRunOptions & runOptions() const { DARABONBA_PTR_GET_CONST(runOptions_, Models::GetEventStreamingResponseBodyDataRunOptions) };
    inline Models::GetEventStreamingResponseBodyDataRunOptions runOptions() { DARABONBA_PTR_GET(runOptions_, Models::GetEventStreamingResponseBodyDataRunOptions) };
    inline GetEventStreamingResponseBodyData& setRunOptions(const Models::GetEventStreamingResponseBodyDataRunOptions & runOptions) { DARABONBA_PTR_SET_VALUE(runOptions_, runOptions) };
    inline GetEventStreamingResponseBodyData& setRunOptions(Models::GetEventStreamingResponseBodyDataRunOptions && runOptions) { DARABONBA_PTR_SET_RVALUE(runOptions_, runOptions) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSink & sink() const { DARABONBA_PTR_GET_CONST(sink_, Models::GetEventStreamingResponseBodyDataSink) };
    inline Models::GetEventStreamingResponseBodyDataSink sink() { DARABONBA_PTR_GET(sink_, Models::GetEventStreamingResponseBodyDataSink) };
    inline GetEventStreamingResponseBodyData& setSink(const Models::GetEventStreamingResponseBodyDataSink & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
    inline GetEventStreamingResponseBodyData& setSink(Models::GetEventStreamingResponseBodyDataSink && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::GetEventStreamingResponseBodyDataSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::GetEventStreamingResponseBodyDataSource) };
    inline Models::GetEventStreamingResponseBodyDataSource source() { DARABONBA_PTR_GET(source_, Models::GetEventStreamingResponseBodyDataSource) };
    inline GetEventStreamingResponseBodyData& setSource(const Models::GetEventStreamingResponseBodyDataSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline GetEventStreamingResponseBodyData& setSource(Models::GetEventStreamingResponseBodyDataSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEventStreamingResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transforms Field Functions 
    bool hasTransforms() const { return this->transforms_ != nullptr;};
    void deleteTransforms() { this->transforms_ = nullptr;};
    inline const vector<Models::GetEventStreamingResponseBodyDataTransforms> & transforms() const { DARABONBA_PTR_GET_CONST(transforms_, vector<Models::GetEventStreamingResponseBodyDataTransforms>) };
    inline vector<Models::GetEventStreamingResponseBodyDataTransforms> transforms() { DARABONBA_PTR_GET(transforms_, vector<Models::GetEventStreamingResponseBodyDataTransforms>) };
    inline GetEventStreamingResponseBodyData& setTransforms(const vector<Models::GetEventStreamingResponseBodyDataTransforms> & transforms) { DARABONBA_PTR_SET_VALUE(transforms_, transforms) };
    inline GetEventStreamingResponseBodyData& setTransforms(vector<Models::GetEventStreamingResponseBodyDataTransforms> && transforms) { DARABONBA_PTR_SET_RVALUE(transforms_, transforms) };


  protected:
    // The description of the event stream that is returned.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataDetailedStatus> detailedStatus_ = nullptr;
    // The name of the event stream that is returned.
    std::shared_ptr<string> eventStreamingName_ = nullptr;
    // The rule that is used to filter events. If you leave this parameter empty, all events are matched.
    std::shared_ptr<string> filterPattern_ = nullptr;
    // The runtime environment-related configurations.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataRunOptions> runOptions_ = nullptr;
    // The event target.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSink> sink_ = nullptr;
    // The event source.
    std::shared_ptr<Models::GetEventStreamingResponseBodyDataSource> source_ = nullptr;
    // The status of the event stream that is returned.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::GetEventStreamingResponseBodyDataTransforms>> transforms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
