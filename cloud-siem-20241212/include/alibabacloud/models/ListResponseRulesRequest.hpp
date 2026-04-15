// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESPONSERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESPONSERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListResponseRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResponseRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResponseActionType, responseActionType_);
      DARABONBA_PTR_TO_JSON(ResponseRuleName, responseRuleName_);
      DARABONBA_PTR_TO_JSON(ResponseRuleStatus, responseRuleStatus_);
      DARABONBA_PTR_TO_JSON(ResponseRuleType, responseRuleType_);
      DARABONBA_PTR_TO_JSON(ResponseTriggerType, responseTriggerType_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResponseRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResponseActionType, responseActionType_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleName, responseRuleName_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleStatus, responseRuleStatus_);
      DARABONBA_PTR_FROM_JSON(ResponseRuleType, responseRuleType_);
      DARABONBA_PTR_FROM_JSON(ResponseTriggerType, responseTriggerType_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    ListResponseRulesRequest() = default ;
    ListResponseRulesRequest(const ListResponseRulesRequest &) = default ;
    ListResponseRulesRequest(ListResponseRulesRequest &&) = default ;
    ListResponseRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResponseRulesRequest() = default ;
    ListResponseRulesRequest& operator=(const ListResponseRulesRequest &) = default ;
    ListResponseRulesRequest& operator=(ListResponseRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->responseActionType_ == nullptr && this->responseRuleName_ == nullptr && this->responseRuleStatus_ == nullptr && this->responseRuleType_ == nullptr && this->responseTriggerType_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListResponseRulesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResponseRulesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResponseRulesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResponseRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResponseRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResponseRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // responseActionType Field Functions 
    bool hasResponseActionType() const { return this->responseActionType_ != nullptr;};
    void deleteResponseActionType() { this->responseActionType_ = nullptr;};
    inline string getResponseActionType() const { DARABONBA_PTR_GET_DEFAULT(responseActionType_, "") };
    inline ListResponseRulesRequest& setResponseActionType(string responseActionType) { DARABONBA_PTR_SET_VALUE(responseActionType_, responseActionType) };


    // responseRuleName Field Functions 
    bool hasResponseRuleName() const { return this->responseRuleName_ != nullptr;};
    void deleteResponseRuleName() { this->responseRuleName_ = nullptr;};
    inline string getResponseRuleName() const { DARABONBA_PTR_GET_DEFAULT(responseRuleName_, "") };
    inline ListResponseRulesRequest& setResponseRuleName(string responseRuleName) { DARABONBA_PTR_SET_VALUE(responseRuleName_, responseRuleName) };


    // responseRuleStatus Field Functions 
    bool hasResponseRuleStatus() const { return this->responseRuleStatus_ != nullptr;};
    void deleteResponseRuleStatus() { this->responseRuleStatus_ = nullptr;};
    inline int32_t getResponseRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(responseRuleStatus_, 0) };
    inline ListResponseRulesRequest& setResponseRuleStatus(int32_t responseRuleStatus) { DARABONBA_PTR_SET_VALUE(responseRuleStatus_, responseRuleStatus) };


    // responseRuleType Field Functions 
    bool hasResponseRuleType() const { return this->responseRuleType_ != nullptr;};
    void deleteResponseRuleType() { this->responseRuleType_ = nullptr;};
    inline string getResponseRuleType() const { DARABONBA_PTR_GET_DEFAULT(responseRuleType_, "") };
    inline ListResponseRulesRequest& setResponseRuleType(string responseRuleType) { DARABONBA_PTR_SET_VALUE(responseRuleType_, responseRuleType) };


    // responseTriggerType Field Functions 
    bool hasResponseTriggerType() const { return this->responseTriggerType_ != nullptr;};
    void deleteResponseTriggerType() { this->responseTriggerType_ = nullptr;};
    inline string getResponseTriggerType() const { DARABONBA_PTR_GET_DEFAULT(responseTriggerType_, "") };
    inline ListResponseRulesRequest& setResponseTriggerType(string responseTriggerType) { DARABONBA_PTR_SET_VALUE(responseTriggerType_, responseTriggerType) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListResponseRulesRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListResponseRulesRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> responseActionType_ {};
    shared_ptr<string> responseRuleName_ {};
    shared_ptr<int32_t> responseRuleStatus_ {};
    shared_ptr<string> responseRuleType_ {};
    shared_ptr<string> responseTriggerType_ {};
    shared_ptr<int64_t> roleFor_ {};
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
