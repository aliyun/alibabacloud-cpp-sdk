// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class LookupResourceGroupEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupResourceGroupEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventCategory, eventCategory_);
      DARABONBA_PTR_TO_JSON(LookupAttributes, lookupAttributes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, LookupResourceGroupEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventCategory, eventCategory_);
      DARABONBA_PTR_FROM_JSON(LookupAttributes, lookupAttributes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupDisplayName, resourceGroupDisplayName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    LookupResourceGroupEventsRequest() = default ;
    LookupResourceGroupEventsRequest(const LookupResourceGroupEventsRequest &) = default ;
    LookupResourceGroupEventsRequest(LookupResourceGroupEventsRequest &&) = default ;
    LookupResourceGroupEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupResourceGroupEventsRequest() = default ;
    LookupResourceGroupEventsRequest& operator=(const LookupResourceGroupEventsRequest &) = default ;
    LookupResourceGroupEventsRequest& operator=(LookupResourceGroupEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LookupAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LookupAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, LookupAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      LookupAttributes() = default ;
      LookupAttributes(const LookupAttributes &) = default ;
      LookupAttributes(LookupAttributes &&) = default ;
      LookupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LookupAttributes() = default ;
      LookupAttributes& operator=(const LookupAttributes &) = default ;
      LookupAttributes& operator=(LookupAttributes &&) = default ;
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
      inline LookupAttributes& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline LookupAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the attribute.
      shared_ptr<string> key_ {};
      // The value of the attribute.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->eventCategory_ == nullptr && this->lookupAttributes_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupDisplayName_ == nullptr
        && this->resourceGroupId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LookupResourceGroupEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventCategory Field Functions 
    bool hasEventCategory() const { return this->eventCategory_ != nullptr;};
    void deleteEventCategory() { this->eventCategory_ = nullptr;};
    inline string getEventCategory() const { DARABONBA_PTR_GET_DEFAULT(eventCategory_, "") };
    inline LookupResourceGroupEventsRequest& setEventCategory(string eventCategory) { DARABONBA_PTR_SET_VALUE(eventCategory_, eventCategory) };


    // lookupAttributes Field Functions 
    bool hasLookupAttributes() const { return this->lookupAttributes_ != nullptr;};
    void deleteLookupAttributes() { this->lookupAttributes_ = nullptr;};
    inline const vector<LookupResourceGroupEventsRequest::LookupAttributes> & getLookupAttributes() const { DARABONBA_PTR_GET_CONST(lookupAttributes_, vector<LookupResourceGroupEventsRequest::LookupAttributes>) };
    inline vector<LookupResourceGroupEventsRequest::LookupAttributes> getLookupAttributes() { DARABONBA_PTR_GET(lookupAttributes_, vector<LookupResourceGroupEventsRequest::LookupAttributes>) };
    inline LookupResourceGroupEventsRequest& setLookupAttributes(const vector<LookupResourceGroupEventsRequest::LookupAttributes> & lookupAttributes) { DARABONBA_PTR_SET_VALUE(lookupAttributes_, lookupAttributes) };
    inline LookupResourceGroupEventsRequest& setLookupAttributes(vector<LookupResourceGroupEventsRequest::LookupAttributes> && lookupAttributes) { DARABONBA_PTR_SET_RVALUE(lookupAttributes_, lookupAttributes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline LookupResourceGroupEventsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupResourceGroupEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string getResourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline LookupResourceGroupEventsRequest& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline LookupResourceGroupEventsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LookupResourceGroupEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The event type.
    // 
    // This parameter is required.
    shared_ptr<string> eventCategory_ {};
    // The attributes used for advanced search.
    shared_ptr<vector<LookupResourceGroupEventsRequest::LookupAttributes>> lookupAttributes_ {};
    // The number of entries per page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<string> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The resource group name.
    shared_ptr<string> resourceGroupDisplayName_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The beginning of the time range to query. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
