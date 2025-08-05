// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsIP, assetsIP_);
      DARABONBA_PTR_TO_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_TO_JSON(AssetsInstanceName, assetsInstanceName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventKey, eventKey_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_TO_JSON(IsIgnore, isIgnore_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProcessStatusList, processStatusList_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsIP, assetsIP_);
      DARABONBA_PTR_FROM_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssetsInstanceName, assetsInstanceName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventKey, eventKey_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_FROM_JSON(IsIgnore, isIgnore_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProcessStatusList, processStatusList_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeInvadeEventListRequest() = default ;
    DescribeInvadeEventListRequest(const DescribeInvadeEventListRequest &) = default ;
    DescribeInvadeEventListRequest(DescribeInvadeEventListRequest &&) = default ;
    DescribeInvadeEventListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventListRequest() = default ;
    DescribeInvadeEventListRequest& operator=(const DescribeInvadeEventListRequest &) = default ;
    DescribeInvadeEventListRequest& operator=(DescribeInvadeEventListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetsIP_ != nullptr
        && this->assetsInstanceId_ != nullptr && this->assetsInstanceName_ != nullptr && this->currentPage_ != nullptr && this->endTime_ != nullptr && this->eventKey_ != nullptr
        && this->eventName_ != nullptr && this->eventUuid_ != nullptr && this->isIgnore_ != nullptr && this->lang_ != nullptr && this->memberUid_ != nullptr
        && this->pageSize_ != nullptr && this->processStatusList_ != nullptr && this->riskLevel_ != nullptr && this->sourceIp_ != nullptr && this->startTime_ != nullptr; };
    // assetsIP Field Functions 
    bool hasAssetsIP() const { return this->assetsIP_ != nullptr;};
    void deleteAssetsIP() { this->assetsIP_ = nullptr;};
    inline string assetsIP() const { DARABONBA_PTR_GET_DEFAULT(assetsIP_, "") };
    inline DescribeInvadeEventListRequest& setAssetsIP(string assetsIP) { DARABONBA_PTR_SET_VALUE(assetsIP_, assetsIP) };


    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string assetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInvadeEventListRequest& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // assetsInstanceName Field Functions 
    bool hasAssetsInstanceName() const { return this->assetsInstanceName_ != nullptr;};
    void deleteAssetsInstanceName() { this->assetsInstanceName_ = nullptr;};
    inline string assetsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceName_, "") };
    inline DescribeInvadeEventListRequest& setAssetsInstanceName(string assetsInstanceName) { DARABONBA_PTR_SET_VALUE(assetsInstanceName_, assetsInstanceName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeInvadeEventListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeInvadeEventListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventKey Field Functions 
    bool hasEventKey() const { return this->eventKey_ != nullptr;};
    void deleteEventKey() { this->eventKey_ = nullptr;};
    inline string eventKey() const { DARABONBA_PTR_GET_DEFAULT(eventKey_, "") };
    inline DescribeInvadeEventListRequest& setEventKey(string eventKey) { DARABONBA_PTR_SET_VALUE(eventKey_, eventKey) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeInvadeEventListRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventUuid Field Functions 
    bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
    void deleteEventUuid() { this->eventUuid_ = nullptr;};
    inline string eventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
    inline DescribeInvadeEventListRequest& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


    // isIgnore Field Functions 
    bool hasIsIgnore() const { return this->isIgnore_ != nullptr;};
    void deleteIsIgnore() { this->isIgnore_ = nullptr;};
    inline string isIgnore() const { DARABONBA_PTR_GET_DEFAULT(isIgnore_, "") };
    inline DescribeInvadeEventListRequest& setIsIgnore(string isIgnore) { DARABONBA_PTR_SET_VALUE(isIgnore_, isIgnore) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInvadeEventListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeInvadeEventListRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInvadeEventListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processStatusList Field Functions 
    bool hasProcessStatusList() const { return this->processStatusList_ != nullptr;};
    void deleteProcessStatusList() { this->processStatusList_ = nullptr;};
    inline const vector<int32_t> & processStatusList() const { DARABONBA_PTR_GET_CONST(processStatusList_, vector<int32_t>) };
    inline vector<int32_t> processStatusList() { DARABONBA_PTR_GET(processStatusList_, vector<int32_t>) };
    inline DescribeInvadeEventListRequest& setProcessStatusList(const vector<int32_t> & processStatusList) { DARABONBA_PTR_SET_VALUE(processStatusList_, processStatusList) };
    inline DescribeInvadeEventListRequest& setProcessStatusList(vector<int32_t> && processStatusList) { DARABONBA_PTR_SET_RVALUE(processStatusList_, processStatusList) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<int32_t> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<int32_t>) };
    inline vector<int32_t> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<int32_t>) };
    inline DescribeInvadeEventListRequest& setRiskLevel(const vector<int32_t> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline DescribeInvadeEventListRequest& setRiskLevel(vector<int32_t> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInvadeEventListRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInvadeEventListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The IP address of the affected asset.
    std::shared_ptr<string> assetsIP_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> assetsInstanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> assetsInstanceName_ = nullptr;
    // The number of the page to return.
    // 
    // Default value: 1.
    std::shared_ptr<string> currentPage_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds. If you do not specify this parameter, the query ends at the current time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the breach awareness event.
    std::shared_ptr<string> eventKey_ = nullptr;
    // The name of the breach awareness event.
    std::shared_ptr<string> eventName_ = nullptr;
    // The UUID of the breach awareness event.
    std::shared_ptr<string> eventUuid_ = nullptr;
    // Specifies whether the breach awareness event is ignored. Valid values:
    // 
    // *   **true**: The breach awareness event is ignored.
    // *   **false**: The breach awareness event is not ignored.
    std::shared_ptr<string> isIgnore_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the member.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Default value: 6. Maximum value: 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The handling status of breach awareness events.
    std::shared_ptr<vector<int32_t>> processStatusList_ = nullptr;
    // The risk levels.
    std::shared_ptr<vector<int32_t>> riskLevel_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds. If you do not specify this parameter, the query starts from 30 days before the current time.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
