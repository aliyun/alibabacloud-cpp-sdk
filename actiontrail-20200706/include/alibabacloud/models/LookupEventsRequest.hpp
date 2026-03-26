// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class LookupEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LookupAttribute, lookupAttribute_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, LookupEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LookupAttribute, lookupAttribute_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    LookupEventsRequest() = default ;
    LookupEventsRequest(const LookupEventsRequest &) = default ;
    LookupEventsRequest(LookupEventsRequest &&) = default ;
    LookupEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupEventsRequest() = default ;
    LookupEventsRequest& operator=(const LookupEventsRequest &) = default ;
    LookupEventsRequest& operator=(LookupEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LookupAttribute : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LookupAttribute& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, LookupAttribute& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      LookupAttribute() = default ;
      LookupAttribute(const LookupAttribute &) = default ;
      LookupAttribute(LookupAttribute &&) = default ;
      LookupAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LookupAttribute() = default ;
      LookupAttribute& operator=(const LookupAttribute &) = default ;
      LookupAttribute& operator=(LookupAttribute &&) = default ;
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
      inline LookupAttribute& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline LookupAttribute& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the query condition. Valid values:
      // 
      // *  ServiceName: the name of a specific Alibaba Cloud service.
      // *  EventName: the name of a specific event.
      // *  User: the name of the RAM user who calls a specific operation.
      // *  EventId: the ID of a specific event.
      // *  ResourceType: the type of resources.
      // *   ResourceName: the name of a specific resource.
      // *   EventRW: the read/write type of events.
      // *  EventAccessKeyId: the AccessKey ID used in events.
      // 
      // > You can use only one query condition for each query.
      shared_ptr<string> key_ {};
      // The value of the query condition. Valid values:
      // 
      // *   When the LookupAttribute.N.Key parameter is set to ServiceName, you can set this parameter to a value such as `Ecs`.
      // *   When the LookupAttribute.N.Key parameter is set to EventName, you can set this parameter to a value such as `ConsoleSignin`.
      // *   When the LookupAttribute.N.Key parameter is set to User, you can set this parameter to a value such as `Alice`.
      // *   When the LookupAttribute.N.Key parameter is set to EventId, you can set this parameter to a value such as `B702AFA3-FD4B-40E3-88E4-C0752FAA****`.
      // *   When the LookupAttribute.N.Key parameter is set to ResourceType, you can set this parameter to a value such as `ACS::ECS::Instance`.
      // *   When the LookupAttribute.N.Key parameter is set to ResourceName, you can set this parameter to a value such as `i-bp14664y88udkt45****`.
      // *   When the LookupAttribute.N.Key parameter is set to EventRW, you can set this parameter to `Read` or `Write`.
      // *   When the LookupAttribute.N.Key parameter is set to EventAccessKeyId, you can set this parameter to a value such as `LTAI****************`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->direction_ == nullptr
        && this->endTime_ == nullptr && this->lookupAttribute_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->startTime_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline LookupEventsRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LookupEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lookupAttribute Field Functions 
    bool hasLookupAttribute() const { return this->lookupAttribute_ != nullptr;};
    void deleteLookupAttribute() { this->lookupAttribute_ = nullptr;};
    inline const vector<LookupEventsRequest::LookupAttribute> & getLookupAttribute() const { DARABONBA_PTR_GET_CONST(lookupAttribute_, vector<LookupEventsRequest::LookupAttribute>) };
    inline vector<LookupEventsRequest::LookupAttribute> getLookupAttribute() { DARABONBA_PTR_GET(lookupAttribute_, vector<LookupEventsRequest::LookupAttribute>) };
    inline LookupEventsRequest& setLookupAttribute(const vector<LookupEventsRequest::LookupAttribute> & lookupAttribute) { DARABONBA_PTR_SET_VALUE(lookupAttribute_, lookupAttribute) };
    inline LookupEventsRequest& setLookupAttribute(vector<LookupEventsRequest::LookupAttribute> && lookupAttribute) { DARABONBA_PTR_SET_RVALUE(lookupAttribute_, lookupAttribute) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline LookupEventsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LookupEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The order in which details of events are to be retrieved. Valid values:
    // 
    // *   FORWARD: ascending order.
    // *   BACKWARD: descending order. This is the default value.
    shared_ptr<string> direction_ {};
    // The end of the time range to query. The default time is the current time. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // Query conditions.
    shared_ptr<vector<LookupEventsRequest::LookupAttribute>> lookupAttribute_ {};
    // The maximum number of entries to be returned.
    // 
    // Valid values: 0 to 50.
    shared_ptr<string> maxResults_ {};
    // The token used to request the next page of query results.
    // 
    // > The request parameters must be the same as those of the last request.
    shared_ptr<string> nextToken_ {};
    // The beginning of the time range to query. The default time is seven days prior to the current time. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
