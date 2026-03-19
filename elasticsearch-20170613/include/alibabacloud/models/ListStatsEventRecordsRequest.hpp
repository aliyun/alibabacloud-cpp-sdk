// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATSEVENTRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATSEVENTRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListStatsEventRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStatsEventRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListStatsEventRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListStatsEventRecordsRequest() = default ;
    ListStatsEventRecordsRequest(const ListStatsEventRecordsRequest &) = default ;
    ListStatsEventRecordsRequest(ListStatsEventRecordsRequest &&) = default ;
    ListStatsEventRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStatsEventRecordsRequest() = default ;
    ListStatsEventRecordsRequest& operator=(const ListStatsEventRecordsRequest &) = default ;
    ListStatsEventRecordsRequest& operator=(ListStatsEventRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventType_ == nullptr
        && this->level_ == nullptr && this->status_ == nullptr; };
    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListStatsEventRecordsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListStatsEventRecordsRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStatsEventRecordsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> eventType_ {};
    shared_ptr<string> level_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
