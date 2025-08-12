// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTATTRIBUTERESPONSEBODYCUSTOMEVENTSCUSTOMEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTATTRIBUTERESPONSEBODYCUSTOMEVENTSCUSTOMEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent() = default ;
    DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent(const DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent &) = default ;
    DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent(DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent &&) = default ;
    DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent() = default ;
    DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& operator=(const DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent &) = default ;
    DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& operator=(DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->groupId_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->time_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeCustomEventAttributeResponseBodyCustomEventsCustomEvent& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The content of the event.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The event ID.
    std::shared_ptr<string> id_ = nullptr;
    // The event name.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the event occurred.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
