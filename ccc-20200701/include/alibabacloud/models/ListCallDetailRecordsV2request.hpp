// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCallDetailRecordsV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelTypeList, accessChannelTypeList_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AnalyticsReportReady, analyticsReportReady_);
      DARABONBA_PTR_TO_JSON(Broker, broker_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(ContactDispositionList, contactDispositionList_);
      DARABONBA_PTR_TO_JSON(ContactIdList, contactIdList_);
      DARABONBA_PTR_TO_JSON(ContactTypeList, contactTypeList_);
      DARABONBA_PTR_TO_JSON(EarlyMediaStateList, earlyMediaStateList_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FirstAgentId, firstAgentId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(OrderByField, orderByField_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReleaseInitiatorList, releaseInitiatorList_);
      DARABONBA_PTR_TO_JSON(ReleaseReasonList, releaseReasonList_);
      DARABONBA_PTR_TO_JSON(SatisfactionDescriptionList, satisfactionDescriptionList_);
      DARABONBA_PTR_TO_JSON(SatisfactionRateList, satisfactionRateList_);
      DARABONBA_PTR_TO_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
      DARABONBA_PTR_TO_JSON(SearchPattern, searchPattern_);
      DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdList_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelTypeList, accessChannelTypeList_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AnalyticsReportReady, analyticsReportReady_);
      DARABONBA_PTR_FROM_JSON(Broker, broker_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(ContactDispositionList, contactDispositionList_);
      DARABONBA_PTR_FROM_JSON(ContactIdList, contactIdList_);
      DARABONBA_PTR_FROM_JSON(ContactTypeList, contactTypeList_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaStateList, earlyMediaStateList_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FirstAgentId, firstAgentId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(OrderByField, orderByField_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReleaseInitiatorList, releaseInitiatorList_);
      DARABONBA_PTR_FROM_JSON(ReleaseReasonList, releaseReasonList_);
      DARABONBA_PTR_FROM_JSON(SatisfactionDescriptionList, satisfactionDescriptionList_);
      DARABONBA_PTR_FROM_JSON(SatisfactionRateList, satisfactionRateList_);
      DARABONBA_PTR_FROM_JSON(SatisfactionSurveyChannel, satisfactionSurveyChannel_);
      DARABONBA_PTR_FROM_JSON(SearchPattern, searchPattern_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdList_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListCallDetailRecordsV2Request() = default ;
    ListCallDetailRecordsV2Request(const ListCallDetailRecordsV2Request &) = default ;
    ListCallDetailRecordsV2Request(ListCallDetailRecordsV2Request &&) = default ;
    ListCallDetailRecordsV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsV2Request() = default ;
    ListCallDetailRecordsV2Request& operator=(const ListCallDetailRecordsV2Request &) = default ;
    ListCallDetailRecordsV2Request& operator=(ListCallDetailRecordsV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessChannelTypeList_ != nullptr
        && this->agentId_ != nullptr && this->analyticsReportReady_ != nullptr && this->broker_ != nullptr && this->calledNumber_ != nullptr && this->callingNumber_ != nullptr
        && this->contactDispositionList_ != nullptr && this->contactIdList_ != nullptr && this->contactTypeList_ != nullptr && this->earlyMediaStateList_ != nullptr && this->endTime_ != nullptr
        && this->firstAgentId_ != nullptr && this->instanceId_ != nullptr && this->mediaType_ != nullptr && this->number_ != nullptr && this->orderByField_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->releaseInitiatorList_ != nullptr && this->releaseReasonList_ != nullptr && this->satisfactionDescriptionList_ != nullptr
        && this->satisfactionRateList_ != nullptr && this->satisfactionSurveyChannel_ != nullptr && this->searchPattern_ != nullptr && this->skillGroupIdList_ != nullptr && this->sortOrder_ != nullptr
        && this->startTime_ != nullptr; };
    // accessChannelTypeList Field Functions 
    bool hasAccessChannelTypeList() const { return this->accessChannelTypeList_ != nullptr;};
    void deleteAccessChannelTypeList() { this->accessChannelTypeList_ = nullptr;};
    inline string accessChannelTypeList() const { DARABONBA_PTR_GET_DEFAULT(accessChannelTypeList_, "") };
    inline ListCallDetailRecordsV2Request& setAccessChannelTypeList(string accessChannelTypeList) { DARABONBA_PTR_SET_VALUE(accessChannelTypeList_, accessChannelTypeList) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListCallDetailRecordsV2Request& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // analyticsReportReady Field Functions 
    bool hasAnalyticsReportReady() const { return this->analyticsReportReady_ != nullptr;};
    void deleteAnalyticsReportReady() { this->analyticsReportReady_ = nullptr;};
    inline bool analyticsReportReady() const { DARABONBA_PTR_GET_DEFAULT(analyticsReportReady_, false) };
    inline ListCallDetailRecordsV2Request& setAnalyticsReportReady(bool analyticsReportReady) { DARABONBA_PTR_SET_VALUE(analyticsReportReady_, analyticsReportReady) };


    // broker Field Functions 
    bool hasBroker() const { return this->broker_ != nullptr;};
    void deleteBroker() { this->broker_ = nullptr;};
    inline string broker() const { DARABONBA_PTR_GET_DEFAULT(broker_, "") };
    inline ListCallDetailRecordsV2Request& setBroker(string broker) { DARABONBA_PTR_SET_VALUE(broker_, broker) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline ListCallDetailRecordsV2Request& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline ListCallDetailRecordsV2Request& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // contactDispositionList Field Functions 
    bool hasContactDispositionList() const { return this->contactDispositionList_ != nullptr;};
    void deleteContactDispositionList() { this->contactDispositionList_ = nullptr;};
    inline string contactDispositionList() const { DARABONBA_PTR_GET_DEFAULT(contactDispositionList_, "") };
    inline ListCallDetailRecordsV2Request& setContactDispositionList(string contactDispositionList) { DARABONBA_PTR_SET_VALUE(contactDispositionList_, contactDispositionList) };


    // contactIdList Field Functions 
    bool hasContactIdList() const { return this->contactIdList_ != nullptr;};
    void deleteContactIdList() { this->contactIdList_ = nullptr;};
    inline string contactIdList() const { DARABONBA_PTR_GET_DEFAULT(contactIdList_, "") };
    inline ListCallDetailRecordsV2Request& setContactIdList(string contactIdList) { DARABONBA_PTR_SET_VALUE(contactIdList_, contactIdList) };


    // contactTypeList Field Functions 
    bool hasContactTypeList() const { return this->contactTypeList_ != nullptr;};
    void deleteContactTypeList() { this->contactTypeList_ = nullptr;};
    inline string contactTypeList() const { DARABONBA_PTR_GET_DEFAULT(contactTypeList_, "") };
    inline ListCallDetailRecordsV2Request& setContactTypeList(string contactTypeList) { DARABONBA_PTR_SET_VALUE(contactTypeList_, contactTypeList) };


    // earlyMediaStateList Field Functions 
    bool hasEarlyMediaStateList() const { return this->earlyMediaStateList_ != nullptr;};
    void deleteEarlyMediaStateList() { this->earlyMediaStateList_ = nullptr;};
    inline string earlyMediaStateList() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaStateList_, "") };
    inline ListCallDetailRecordsV2Request& setEarlyMediaStateList(string earlyMediaStateList) { DARABONBA_PTR_SET_VALUE(earlyMediaStateList_, earlyMediaStateList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCallDetailRecordsV2Request& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // firstAgentId Field Functions 
    bool hasFirstAgentId() const { return this->firstAgentId_ != nullptr;};
    void deleteFirstAgentId() { this->firstAgentId_ = nullptr;};
    inline string firstAgentId() const { DARABONBA_PTR_GET_DEFAULT(firstAgentId_, "") };
    inline ListCallDetailRecordsV2Request& setFirstAgentId(string firstAgentId) { DARABONBA_PTR_SET_VALUE(firstAgentId_, firstAgentId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCallDetailRecordsV2Request& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListCallDetailRecordsV2Request& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListCallDetailRecordsV2Request& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // orderByField Field Functions 
    bool hasOrderByField() const { return this->orderByField_ != nullptr;};
    void deleteOrderByField() { this->orderByField_ = nullptr;};
    inline string orderByField() const { DARABONBA_PTR_GET_DEFAULT(orderByField_, "") };
    inline ListCallDetailRecordsV2Request& setOrderByField(string orderByField) { DARABONBA_PTR_SET_VALUE(orderByField_, orderByField) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCallDetailRecordsV2Request& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCallDetailRecordsV2Request& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // releaseInitiatorList Field Functions 
    bool hasReleaseInitiatorList() const { return this->releaseInitiatorList_ != nullptr;};
    void deleteReleaseInitiatorList() { this->releaseInitiatorList_ = nullptr;};
    inline string releaseInitiatorList() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiatorList_, "") };
    inline ListCallDetailRecordsV2Request& setReleaseInitiatorList(string releaseInitiatorList) { DARABONBA_PTR_SET_VALUE(releaseInitiatorList_, releaseInitiatorList) };


    // releaseReasonList Field Functions 
    bool hasReleaseReasonList() const { return this->releaseReasonList_ != nullptr;};
    void deleteReleaseReasonList() { this->releaseReasonList_ = nullptr;};
    inline string releaseReasonList() const { DARABONBA_PTR_GET_DEFAULT(releaseReasonList_, "") };
    inline ListCallDetailRecordsV2Request& setReleaseReasonList(string releaseReasonList) { DARABONBA_PTR_SET_VALUE(releaseReasonList_, releaseReasonList) };


    // satisfactionDescriptionList Field Functions 
    bool hasSatisfactionDescriptionList() const { return this->satisfactionDescriptionList_ != nullptr;};
    void deleteSatisfactionDescriptionList() { this->satisfactionDescriptionList_ = nullptr;};
    inline string satisfactionDescriptionList() const { DARABONBA_PTR_GET_DEFAULT(satisfactionDescriptionList_, "") };
    inline ListCallDetailRecordsV2Request& setSatisfactionDescriptionList(string satisfactionDescriptionList) { DARABONBA_PTR_SET_VALUE(satisfactionDescriptionList_, satisfactionDescriptionList) };


    // satisfactionRateList Field Functions 
    bool hasSatisfactionRateList() const { return this->satisfactionRateList_ != nullptr;};
    void deleteSatisfactionRateList() { this->satisfactionRateList_ = nullptr;};
    inline string satisfactionRateList() const { DARABONBA_PTR_GET_DEFAULT(satisfactionRateList_, "") };
    inline ListCallDetailRecordsV2Request& setSatisfactionRateList(string satisfactionRateList) { DARABONBA_PTR_SET_VALUE(satisfactionRateList_, satisfactionRateList) };


    // satisfactionSurveyChannel Field Functions 
    bool hasSatisfactionSurveyChannel() const { return this->satisfactionSurveyChannel_ != nullptr;};
    void deleteSatisfactionSurveyChannel() { this->satisfactionSurveyChannel_ = nullptr;};
    inline string satisfactionSurveyChannel() const { DARABONBA_PTR_GET_DEFAULT(satisfactionSurveyChannel_, "") };
    inline ListCallDetailRecordsV2Request& setSatisfactionSurveyChannel(string satisfactionSurveyChannel) { DARABONBA_PTR_SET_VALUE(satisfactionSurveyChannel_, satisfactionSurveyChannel) };


    // searchPattern Field Functions 
    bool hasSearchPattern() const { return this->searchPattern_ != nullptr;};
    void deleteSearchPattern() { this->searchPattern_ = nullptr;};
    inline string searchPattern() const { DARABONBA_PTR_GET_DEFAULT(searchPattern_, "") };
    inline ListCallDetailRecordsV2Request& setSearchPattern(string searchPattern) { DARABONBA_PTR_SET_VALUE(searchPattern_, searchPattern) };


    // skillGroupIdList Field Functions 
    bool hasSkillGroupIdList() const { return this->skillGroupIdList_ != nullptr;};
    void deleteSkillGroupIdList() { this->skillGroupIdList_ = nullptr;};
    inline string skillGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIdList_, "") };
    inline ListCallDetailRecordsV2Request& setSkillGroupIdList(string skillGroupIdList) { DARABONBA_PTR_SET_VALUE(skillGroupIdList_, skillGroupIdList) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListCallDetailRecordsV2Request& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCallDetailRecordsV2Request& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> accessChannelTypeList_ = nullptr;
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<bool> analyticsReportReady_ = nullptr;
    std::shared_ptr<string> broker_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> contactDispositionList_ = nullptr;
    std::shared_ptr<string> contactIdList_ = nullptr;
    std::shared_ptr<string> contactTypeList_ = nullptr;
    std::shared_ptr<string> earlyMediaStateList_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> firstAgentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> orderByField_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> releaseInitiatorList_ = nullptr;
    std::shared_ptr<string> releaseReasonList_ = nullptr;
    std::shared_ptr<string> satisfactionDescriptionList_ = nullptr;
    std::shared_ptr<string> satisfactionRateList_ = nullptr;
    std::shared_ptr<string> satisfactionSurveyChannel_ = nullptr;
    std::shared_ptr<string> searchPattern_ = nullptr;
    std::shared_ptr<string> skillGroupIdList_ = nullptr;
    std::shared_ptr<string> sortOrder_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
