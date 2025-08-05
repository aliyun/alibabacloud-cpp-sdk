// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIYUNOFFICIALEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTALIYUNOFFICIALEVENTSOURCESRESPONSEBODYDATAEVENTSOURCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Ctime, ctime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(FullName, fullName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Ctime, ctime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(FullName, fullName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList() = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList(const ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList &) = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList(ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList &&) = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList() = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& operator=(const ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList &) = default ;
    ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& operator=(ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->ctime_ != nullptr && this->description_ != nullptr && this->eventBusName_ != nullptr && this->eventTypes_ != nullptr && this->fullName_ != nullptr
        && this->name_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // ctime Field Functions 
    bool hasCtime() const { return this->ctime_ != nullptr;};
    void deleteCtime() { this->ctime_ = nullptr;};
    inline float ctime() const { DARABONBA_PTR_GET_DEFAULT(ctime_, 0.0) };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setCtime(float ctime) { DARABONBA_PTR_SET_VALUE(ctime_, ctime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes> & eventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes>) };
    inline vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes> eventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes>) };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setEventTypes(const vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setEventTypes(vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string fullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAliyunOfficialEventSourcesResponseBodyDataEventSourceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the event bus.
    std::shared_ptr<string> arn_ = nullptr;
    // The time when the event source was created. Unit: milliseconds.
    std::shared_ptr<float> ctime_ = nullptr;
    // The description of the event source.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the event source to which the event type belongs.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The event types.
    std::shared_ptr<vector<Models::ListAliyunOfficialEventSourcesResponseBodyDataEventSourceListEventTypes>> eventTypes_ = nullptr;
    // The full name of the event source.
    std::shared_ptr<string> fullName_ = nullptr;
    // The name of the event source.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the event source. Valid value: Activated.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the event source.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
