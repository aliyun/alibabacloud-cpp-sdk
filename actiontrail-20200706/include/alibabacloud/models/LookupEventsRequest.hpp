// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LookupEventsRequestLookupAttribute.hpp>
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
    virtual bool empty() const override { return this->direction_ == nullptr
        && return this->endTime_ == nullptr && return this->lookupAttribute_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->startTime_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline LookupEventsRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LookupEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lookupAttribute Field Functions 
    bool hasLookupAttribute() const { return this->lookupAttribute_ != nullptr;};
    void deleteLookupAttribute() { this->lookupAttribute_ = nullptr;};
    inline const vector<LookupEventsRequestLookupAttribute> & lookupAttribute() const { DARABONBA_PTR_GET_CONST(lookupAttribute_, vector<LookupEventsRequestLookupAttribute>) };
    inline vector<LookupEventsRequestLookupAttribute> lookupAttribute() { DARABONBA_PTR_GET(lookupAttribute_, vector<LookupEventsRequestLookupAttribute>) };
    inline LookupEventsRequest& setLookupAttribute(const vector<LookupEventsRequestLookupAttribute> & lookupAttribute) { DARABONBA_PTR_SET_VALUE(lookupAttribute_, lookupAttribute) };
    inline LookupEventsRequest& setLookupAttribute(vector<LookupEventsRequestLookupAttribute> && lookupAttribute) { DARABONBA_PTR_SET_RVALUE(lookupAttribute_, lookupAttribute) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline LookupEventsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LookupEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The order in which details of events are to be retrieved. Valid values:
    // 
    // *   FORWARD: ascending order.
    // *   BACKWARD: descending order. This is the default value.
    std::shared_ptr<string> direction_ = nullptr;
    // The end of the time range to query. The default time is the current time. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // Query conditions.
    std::shared_ptr<vector<LookupEventsRequestLookupAttribute>> lookupAttribute_ = nullptr;
    // The maximum number of entries to be returned.
    // 
    // Valid values: 0 to 50.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The token used to request the next page of query results.
    // 
    // > The request parameters must be the same as those of the last request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The beginning of the time range to query. The default time is seven days prior to the current time. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
