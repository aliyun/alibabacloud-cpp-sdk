// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPINSIGHTEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPINSIGHTEVENTSREQUEST_HPP_
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
  class LookupInsightEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupInsightEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LookupAttribute, lookupAttribute_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, LookupInsightEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LookupAttribute, lookupAttribute_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    LookupInsightEventsRequest() = default ;
    LookupInsightEventsRequest(const LookupInsightEventsRequest &) = default ;
    LookupInsightEventsRequest(LookupInsightEventsRequest &&) = default ;
    LookupInsightEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupInsightEventsRequest() = default ;
    LookupInsightEventsRequest& operator=(const LookupInsightEventsRequest &) = default ;
    LookupInsightEventsRequest& operator=(LookupInsightEventsRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->lookupAttribute_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LookupInsightEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lookupAttribute Field Functions 
    bool hasLookupAttribute() const { return this->lookupAttribute_ != nullptr;};
    void deleteLookupAttribute() { this->lookupAttribute_ = nullptr;};
    inline const vector<LookupInsightEventsRequest::LookupAttribute> & getLookupAttribute() const { DARABONBA_PTR_GET_CONST(lookupAttribute_, vector<LookupInsightEventsRequest::LookupAttribute>) };
    inline vector<LookupInsightEventsRequest::LookupAttribute> getLookupAttribute() { DARABONBA_PTR_GET(lookupAttribute_, vector<LookupInsightEventsRequest::LookupAttribute>) };
    inline LookupInsightEventsRequest& setLookupAttribute(const vector<LookupInsightEventsRequest::LookupAttribute> & lookupAttribute) { DARABONBA_PTR_SET_VALUE(lookupAttribute_, lookupAttribute) };
    inline LookupInsightEventsRequest& setLookupAttribute(vector<LookupInsightEventsRequest::LookupAttribute> && lookupAttribute) { DARABONBA_PTR_SET_RVALUE(lookupAttribute_, lookupAttribute) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline LookupInsightEventsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupInsightEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LookupInsightEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<vector<LookupInsightEventsRequest::LookupAttribute>> lookupAttribute_ {};
    shared_ptr<string> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
