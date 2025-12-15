// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPRESOURCEGROUPEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LookupResourceGroupEventsRequestLookupAttributes.hpp>
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
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->eventCategory_ == nullptr && return this->lookupAttributes_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->resourceGroupDisplayName_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LookupResourceGroupEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventCategory Field Functions 
    bool hasEventCategory() const { return this->eventCategory_ != nullptr;};
    void deleteEventCategory() { this->eventCategory_ = nullptr;};
    inline string eventCategory() const { DARABONBA_PTR_GET_DEFAULT(eventCategory_, "") };
    inline LookupResourceGroupEventsRequest& setEventCategory(string eventCategory) { DARABONBA_PTR_SET_VALUE(eventCategory_, eventCategory) };


    // lookupAttributes Field Functions 
    bool hasLookupAttributes() const { return this->lookupAttributes_ != nullptr;};
    void deleteLookupAttributes() { this->lookupAttributes_ = nullptr;};
    inline const vector<LookupResourceGroupEventsRequestLookupAttributes> & lookupAttributes() const { DARABONBA_PTR_GET_CONST(lookupAttributes_, vector<LookupResourceGroupEventsRequestLookupAttributes>) };
    inline vector<LookupResourceGroupEventsRequestLookupAttributes> lookupAttributes() { DARABONBA_PTR_GET(lookupAttributes_, vector<LookupResourceGroupEventsRequestLookupAttributes>) };
    inline LookupResourceGroupEventsRequest& setLookupAttributes(const vector<LookupResourceGroupEventsRequestLookupAttributes> & lookupAttributes) { DARABONBA_PTR_SET_VALUE(lookupAttributes_, lookupAttributes) };
    inline LookupResourceGroupEventsRequest& setLookupAttributes(vector<LookupResourceGroupEventsRequestLookupAttributes> && lookupAttributes) { DARABONBA_PTR_SET_RVALUE(lookupAttributes_, lookupAttributes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline LookupResourceGroupEventsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline LookupResourceGroupEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupDisplayName Field Functions 
    bool hasResourceGroupDisplayName() const { return this->resourceGroupDisplayName_ != nullptr;};
    void deleteResourceGroupDisplayName() { this->resourceGroupDisplayName_ = nullptr;};
    inline string resourceGroupDisplayName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupDisplayName_, "") };
    inline LookupResourceGroupEventsRequest& setResourceGroupDisplayName(string resourceGroupDisplayName) { DARABONBA_PTR_SET_VALUE(resourceGroupDisplayName_, resourceGroupDisplayName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline LookupResourceGroupEventsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LookupResourceGroupEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> eventCategory_ = nullptr;
    std::shared_ptr<vector<LookupResourceGroupEventsRequestLookupAttributes>> lookupAttributes_ = nullptr;
    std::shared_ptr<string> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> resourceGroupDisplayName_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
