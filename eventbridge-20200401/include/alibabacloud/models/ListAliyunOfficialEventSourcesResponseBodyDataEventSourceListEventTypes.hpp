// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIYUNOFFICIALEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELISTEVENTTYPES_HPP_
#define ALIBABACLOUD_MODELS_LISTALIYUNOFFICIALEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELISTEVENTTYPES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes& obj) { 
      DARABONBA_PTR_TO_JSON(EventSourceName, eventSourceName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShortName, shortName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(EventSourceName, eventSourceName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
    };
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes() = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes(const ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes &) = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes(ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes &&) = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes() = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes& operator=(const ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes &) = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes& operator=(ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventSourceName_ != nullptr
        && this->groupName_ != nullptr && this->name_ != nullptr && this->shortName_ != nullptr; };
    // eventSourceName Field Functions 
    bool hasEventSourceName() const { return this->eventSourceName_ != nullptr;};
    void deleteEventSourceName() { this->eventSourceName_ = nullptr;};
    inline string eventSourceName() const { DARABONBA_PTR_GET_DEFAULT(eventSourceName_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes& setEventSourceName(string eventSourceName) { DARABONBA_PTR_SET_VALUE(eventSourceName_, eventSourceName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // shortName Field Functions 
    bool hasShortName() const { return this->shortName_ != nullptr;};
    void deleteShortName() { this->shortName_ = nullptr;};
    inline string shortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


  protected:
    // The name of the event source.
    std::shared_ptr<string> eventSourceName_ = nullptr;
    // The name of the group to which the event type belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The full name of the event type.
    std::shared_ptr<string> name_ = nullptr;
    // The short name of the event type.
    std::shared_ptr<string> shortName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
