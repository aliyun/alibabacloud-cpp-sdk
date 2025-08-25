// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_TO_JSON(ContactDispositionList, contactDispositionList_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactType, contactType_);
      DARABONBA_PTR_TO_JSON(ContactTypeList, contactTypeList_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(EarlyMediaStateList, earlyMediaStateList_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderByField, orderByField_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SatisfactionDescriptionList, satisfactionDescriptionList_);
      DARABONBA_PTR_TO_JSON(SatisfactionList, satisfactionList_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ContactDisposition, contactDisposition_);
      DARABONBA_PTR_FROM_JSON(ContactDispositionList, contactDispositionList_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
      DARABONBA_PTR_FROM_JSON(ContactTypeList, contactTypeList_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaStateList, earlyMediaStateList_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderByField, orderByField_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SatisfactionDescriptionList, satisfactionDescriptionList_);
      DARABONBA_PTR_FROM_JSON(SatisfactionList, satisfactionList_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListCallDetailRecordsRequest() = default ;
    ListCallDetailRecordsRequest(const ListCallDetailRecordsRequest &) = default ;
    ListCallDetailRecordsRequest(ListCallDetailRecordsRequest &&) = default ;
    ListCallDetailRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsRequest() = default ;
    ListCallDetailRecordsRequest& operator=(const ListCallDetailRecordsRequest &) = default ;
    ListCallDetailRecordsRequest& operator=(ListCallDetailRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->calledNumber_ != nullptr && this->callingNumber_ != nullptr && this->contactDisposition_ != nullptr && this->contactDispositionList_ != nullptr && this->contactId_ != nullptr
        && this->contactType_ != nullptr && this->contactTypeList_ != nullptr && this->criteria_ != nullptr && this->earlyMediaStateList_ != nullptr && this->endTime_ != nullptr
        && this->instanceId_ != nullptr && this->orderByField_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->satisfactionDescriptionList_ != nullptr
        && this->satisfactionList_ != nullptr && this->satisfactionSurveyChannel_ != nullptr && this->skillGroupId_ != nullptr && this->sortOrder_ != nullptr && this->startTime_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListCallDetailRecordsRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline ListCallDetailRecordsRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline ListCallDetailRecordsRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // contactDisposition Field Functions 
    bool hasContactDisposition() const { return this->contactDisposition_ != nullptr;};
    void deleteContactDisposition() { this->contactDisposition_ = nullptr;};
    inline string contactDisposition() const { DARABONBA_PTR_GET_DEFAULT(contactDisposition_, "") };
    inline ListCallDetailRecordsRequest& setContactDisposition(string contactDisposition) { DARABONBA_PTR_SET_VALUE(contactDisposition_, contactDisposition) };


    // contactDispositionList Field Functions 
    bool hasContactDispositionList() const { return this->contactDispositionList_ != nullptr;};
    void deleteContactDispositionList() { this->contactDispositionList_ = nullptr;};
    inline string contactDispositionList() const { DARABONBA_PTR_GET_DEFAULT(contactDispositionList_, "") };
    inline ListCallDetailRecordsRequest& setContactDispositionList(string contactDispositionList) { DARABONBA_PTR_SET_VALUE(contactDispositionList_, contactDispositionList) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListCallDetailRecordsRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline ListCallDetailRecordsRequest& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


    // contactTypeList Field Functions 
    bool hasContactTypeList() const { return this->contactTypeList_ != nullptr;};
    void deleteContactTypeList() { this->contactTypeList_ = nullptr;};
    inline string contactTypeList() const { DARABONBA_PTR_GET_DEFAULT(contactTypeList_, "") };
    inline ListCallDetailRecordsRequest& setContactTypeList(string contactTypeList) { DARABONBA_PTR_SET_VALUE(contactTypeList_, contactTypeList) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline ListCallDetailRecordsRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // earlyMediaStateList Field Functions 
    bool hasEarlyMediaStateList() const { return this->earlyMediaStateList_ != nullptr;};
    void deleteEarlyMediaStateList() { this->earlyMediaStateList_ = nullptr;};
    inline string earlyMediaStateList() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaStateList_, "") };
    inline ListCallDetailRecordsRequest& setEarlyMediaStateList(string earlyMediaStateList) { DARABONBA_PTR_SET_VALUE(earlyMediaStateList_, earlyMediaStateList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCallDetailRecordsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCallDetailRecordsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderByField Field Functions 
    bool hasOrderByField() const { return this->orderByField_ != nullptr;};
    void deleteOrderByField() { this->orderByField_ = nullptr;};
    inline string orderByField() const { DARABONBA_PTR_GET_DEFAULT(orderByField_, "") };
    inline ListCallDetailRecordsRequest& setOrderByField(string orderByField) { DARABONBA_PTR_SET_VALUE(orderByField_, orderByField) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCallDetailRecordsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCallDetailRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // satisfactionDescriptionList Field Functions 
    bool hasSatisfactionDescriptionList() const { return this->satisfactionDescriptionList_ != nullptr;};
    void deleteSatisfactionDescriptionList() { this->satisfactionDescriptionList_ = nullptr;};
    inline string satisfactionDescriptionList() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescriptionList_, "") };
    inline ListCallDetailRecordsRequest& setSatisfactionDescriptionList(string satisfactionDescriptionList) { DARABONBA_PTR_SET_VALUE(satisfactionDescriptionList_, satisfactionDescriptionList) };


    // satisfactionList Field Functions 
    bool hasSatisfactionList() const { return this->satisfactionList_ != nullptr;};
    void deleteSatisfactionList() { this->satisfactionList_ = nullptr;};
    inline string satisfactionList() const { DARABONBA_PTR_GET_DEFAULT(satisfactionList_, "") };
    inline ListCallDetailRecordsRequest& setSatisfactionList(string satisfactionList) { DARABONBA_PTR_SET_VALUE(satisfactionList_, satisfactionList) };


    // satisfactionSurveyChannel Field Functions 
    bool hasSatisfactionSurveyChannel() const { return this->satisfactionSurveyChannel_ != nullptr;};
    void deleteSatisfactionSurveyChannel() { this->satisfactionSurveyChannel_ = nullptr;};
    inline string satisfactionSurveyChannel() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyChannel_, "") };
    inline ListCallDetailRecordsRequest& setSatisfactionSurveyChannel(string satisfactionSurveyChannel) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyChannel_, satisfactionSurveyChannel) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListCallDetailRecordsRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListCallDetailRecordsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCallDetailRecordsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> contactDisposition_ = nullptr;
    std::shared_ptr<string> contactDispositionList_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> contactType_ = nullptr;
    std::shared_ptr<string> contactTypeList_ = nullptr;
    std::shared_ptr<string> criteria_ = nullptr;
    std::shared_ptr<string> earlyMediaStateList_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> orderByField_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> satisfactionDescriptionList_ = nullptr;
    std::shared_ptr<string> satisfactionList_ = nullptr;
    std::shared_ptr<string> satisfactionSurveyChannel_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> sortOrder_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
