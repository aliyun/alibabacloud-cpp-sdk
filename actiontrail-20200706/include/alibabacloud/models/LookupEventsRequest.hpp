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
      // The attribute key. For information about valid values, see [How do I configure the LookupAttribute parameter when calling LookupInsightEvents?](https://help.aliyun.com/document_detail/2920829.html)
      shared_ptr<string> key_ {};
      // The attribute value. For information about valid values, see [How do I configure the LookupAttribute parameter when calling LookupInsightEvents?](https://help.aliyun.com/document_detail/2920829.html)
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
    // The order in which events are retrieved. Valid values:
    // 
    // - FORWARD: Chronological order.
    // 
    // - BACKWARD (default): Reverse chronological order.
    shared_ptr<string> direction_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > You must specify both `StartTime` and `EndTime`, or leave both unspecified. If you leave them unspecified, the default value of `EndTime` is the current time.
    shared_ptr<string> endTime_ {};
    // The filter conditions.
    // 
    // > You can specify one or two filter conditions at a time. For more information, see [Limitations](https://help.aliyun.com/document_detail/2920829.html).
    shared_ptr<vector<LookupEventsRequest::LookupAttribute>> lookupAttribute_ {};
    // The maximum number of results to return.<br>Valid values: 1 to 50.
    shared_ptr<string> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // > You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // > You must specify both `StartTime` and `EndTime`, or leave both unspecified. If you leave them unspecified, the default value of `StartTime` is 7 days before the current time.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
