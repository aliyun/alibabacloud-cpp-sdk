// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->eventStreamingName_ == nullptr && this->filterPattern_ == nullptr && this->runOptionsShrink_ == nullptr && this->sinkShrink_ == nullptr && this->sourceShrink_ == nullptr
        && this->tags_ == nullptr && this->transformsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventStreamingShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string getEventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline CreateEventStreamingShrinkRequest& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string getFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline CreateEventStreamingShrinkRequest& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // runOptionsShrink Field Functions 
    bool hasRunOptionsShrink() const { return this->runOptionsShrink_ != nullptr;};
    void deleteRunOptionsShrink() { this->runOptionsShrink_ = nullptr;};
    inline string getRunOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(runOptionsShrink_, "") };
    inline CreateEventStreamingShrinkRequest& setRunOptionsShrink(string runOptionsShrink) { DARABONBA_PTR_SET_VALUE(runOptionsShrink_, runOptionsShrink) };


    // sinkShrink Field Functions 
    bool hasSinkShrink() const { return this->sinkShrink_ != nullptr;};
    void deleteSinkShrink() { this->sinkShrink_ = nullptr;};
    inline string getSinkShrink() const { DARABONBA_PTR_GET_DEFAULT(sinkShrink_, "") };
    inline CreateEventStreamingShrinkRequest& setSinkShrink(string sinkShrink) { DARABONBA_PTR_SET_VALUE(sinkShrink_, sinkShrink) };


    // sourceShrink Field Functions 
    bool hasSourceShrink() const { return this->sourceShrink_ != nullptr;};
    void deleteSourceShrink() { this->sourceShrink_ = nullptr;};
    inline string getSourceShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceShrink_, "") };
    inline CreateEventStreamingShrinkRequest& setSourceShrink(string sourceShrink) { DARABONBA_PTR_SET_VALUE(sourceShrink_, sourceShrink) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateEventStreamingShrinkRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateEventStreamingShrinkRequest::Tags>) };
    inline vector<CreateEventStreamingShrinkRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateEventStreamingShrinkRequest::Tags>) };
    inline CreateEventStreamingShrinkRequest& setTags(const vector<CreateEventStreamingShrinkRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEventStreamingShrinkRequest& setTags(vector<CreateEventStreamingShrinkRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transformsShrink Field Functions 
    bool hasTransformsShrink() const { return this->transformsShrink_ != nullptr;};
    void deleteTransformsShrink() { this->transformsShrink_ = nullptr;};
    inline string getTransformsShrink() const { DARABONBA_PTR_GET_DEFAULT(transformsShrink_, "") };
    inline CreateEventStreamingShrinkRequest& setTransformsShrink(string transformsShrink) { DARABONBA_PTR_SET_VALUE(transformsShrink_, transformsShrink) };


  protected:
    // The description of the event stream.
    shared_ptr<string> description_ {};
    // The name of the event stream.
    // 
    // This parameter is required.
    shared_ptr<string> eventStreamingName_ {};
    // The rule that is used to filter events. If you leave this parameter empty, all events are matched.
    // 
    // This parameter is required.
    shared_ptr<string> filterPattern_ {};
    // The parameters that are configured for the runtime environment.
    shared_ptr<string> runOptionsShrink_ {};
    // The event target. You must and can specify only one event target.
    // 
    // This parameter is required.
    shared_ptr<string> sinkShrink_ {};
    // The event provider, which is also known as the event source. You must and can specify only one event source.
    // 
    // This parameter is required.
    shared_ptr<string> sourceShrink_ {};
    shared_ptr<vector<CreateEventStreamingShrinkRequest::Tags>> tags_ {};
    shared_ptr<string> transformsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
