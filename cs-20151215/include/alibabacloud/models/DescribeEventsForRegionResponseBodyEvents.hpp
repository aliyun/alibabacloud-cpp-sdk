// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSFORREGIONRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSFORREGIONRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventsForRegionResponseBodyEventsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEventsForRegionResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsForRegionResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsForRegionResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeEventsForRegionResponseBodyEvents() = default ;
    DescribeEventsForRegionResponseBodyEvents(const DescribeEventsForRegionResponseBodyEvents &) = default ;
    DescribeEventsForRegionResponseBodyEvents(DescribeEventsForRegionResponseBodyEvents &&) = default ;
    DescribeEventsForRegionResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsForRegionResponseBodyEvents() = default ;
    DescribeEventsForRegionResponseBodyEvents& operator=(const DescribeEventsForRegionResponseBodyEvents &) = default ;
    DescribeEventsForRegionResponseBodyEvents& operator=(DescribeEventsForRegionResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->data_ == nullptr && return this->eventId_ == nullptr && return this->source_ == nullptr && return this->subject_ == nullptr && return this->time_ == nullptr
        && return this->type_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeEventsForRegionResponseBodyEvents& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeEventsForRegionResponseBodyEventsData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeEventsForRegionResponseBodyEventsData) };
    inline Models::DescribeEventsForRegionResponseBodyEventsData data() { DARABONBA_PTR_GET(data_, Models::DescribeEventsForRegionResponseBodyEventsData) };
    inline DescribeEventsForRegionResponseBodyEvents& setData(const Models::DescribeEventsForRegionResponseBodyEventsData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEventsForRegionResponseBodyEvents& setData(Models::DescribeEventsForRegionResponseBodyEventsData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeEventsForRegionResponseBodyEvents& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeEventsForRegionResponseBodyEvents& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline DescribeEventsForRegionResponseBodyEvents& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeEventsForRegionResponseBodyEvents& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEventsForRegionResponseBodyEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The description of the event.
    std::shared_ptr<Models::DescribeEventsForRegionResponseBodyEventsData> data_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The event source.
    std::shared_ptr<string> source_ = nullptr;
    // The object associated with the event.
    std::shared_ptr<string> subject_ = nullptr;
    // The time when the event was generated.
    std::shared_ptr<string> time_ = nullptr;
    // The event type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
