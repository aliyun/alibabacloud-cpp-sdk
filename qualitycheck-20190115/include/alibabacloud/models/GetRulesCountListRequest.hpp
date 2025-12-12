// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULESCOUNTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRULESCOUNTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRulesCountListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRulesCountListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
      DARABONBA_PTR_TO_JSON(BusinessRange, businessRange_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(CountTotal, countTotal_);
      DARABONBA_PTR_TO_JSON(CreateEmpid, createEmpid_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LastUpdateEmpid, lastUpdateEmpid_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequireInfos, requireInfos_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleIdOrRuleName, ruleIdOrRuleName_);
      DARABONBA_PTR_TO_JSON(RuleScoreSingleType, ruleScoreSingleType_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      DARABONBA_PTR_TO_JSON(UpdateEndTime, updateEndTime_);
      DARABONBA_PTR_TO_JSON(UpdateStartTime, updateStartTime_);
      DARABONBA_PTR_TO_JSON(UpdateUserId, updateUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRulesCountListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
      DARABONBA_PTR_FROM_JSON(BusinessRange, businessRange_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(CountTotal, countTotal_);
      DARABONBA_PTR_FROM_JSON(CreateEmpid, createEmpid_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LastUpdateEmpid, lastUpdateEmpid_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequireInfos, requireInfos_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleIdOrRuleName, ruleIdOrRuleName_);
      DARABONBA_PTR_FROM_JSON(RuleScoreSingleType, ruleScoreSingleType_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      DARABONBA_PTR_FROM_JSON(UpdateEndTime, updateEndTime_);
      DARABONBA_PTR_FROM_JSON(UpdateStartTime, updateStartTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUserId, updateUserId_);
    };
    GetRulesCountListRequest() = default ;
    GetRulesCountListRequest(const GetRulesCountListRequest &) = default ;
    GetRulesCountListRequest(GetRulesCountListRequest &&) = default ;
    GetRulesCountListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRulesCountListRequest() = default ;
    GetRulesCountListRequest& operator=(const GetRulesCountListRequest &) = default ;
    GetRulesCountListRequest& operator=(GetRulesCountListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseMeAgentId_ == nullptr
        && return this->businessName_ == nullptr && return this->businessRange_ == nullptr && return this->categoryName_ == nullptr && return this->countTotal_ == nullptr && return this->createEmpid_ == nullptr
        && return this->createUserId_ == nullptr && return this->currentPage_ == nullptr && return this->endTime_ == nullptr && return this->lastUpdateEmpid_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requireInfos_ == nullptr && return this->rid_ == nullptr && return this->ruleIdOrRuleName_ == nullptr && return this->ruleScoreSingleType_ == nullptr
        && return this->ruleType_ == nullptr && return this->schemeId_ == nullptr && return this->sourceType_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr && return this->typeName_ == nullptr && return this->updateEndTime_ == nullptr && return this->updateStartTime_ == nullptr && return this->updateUserId_ == nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline GetRulesCountListRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // businessName Field Functions 
    bool hasBusinessName() const { return this->businessName_ != nullptr;};
    void deleteBusinessName() { this->businessName_ = nullptr;};
    inline string businessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
    inline GetRulesCountListRequest& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


    // businessRange Field Functions 
    bool hasBusinessRange() const { return this->businessRange_ != nullptr;};
    void deleteBusinessRange() { this->businessRange_ = nullptr;};
    inline int32_t businessRange() const { DARABONBA_PTR_GET_DEFAULT(businessRange_, 0) };
    inline GetRulesCountListRequest& setBusinessRange(int32_t businessRange) { DARABONBA_PTR_SET_VALUE(businessRange_, businessRange) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline GetRulesCountListRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // countTotal Field Functions 
    bool hasCountTotal() const { return this->countTotal_ != nullptr;};
    void deleteCountTotal() { this->countTotal_ = nullptr;};
    inline bool countTotal() const { DARABONBA_PTR_GET_DEFAULT(countTotal_, false) };
    inline GetRulesCountListRequest& setCountTotal(bool countTotal) { DARABONBA_PTR_SET_VALUE(countTotal_, countTotal) };


    // createEmpid Field Functions 
    bool hasCreateEmpid() const { return this->createEmpid_ != nullptr;};
    void deleteCreateEmpid() { this->createEmpid_ = nullptr;};
    inline string createEmpid() const { DARABONBA_PTR_GET_DEFAULT(createEmpid_, "") };
    inline GetRulesCountListRequest& setCreateEmpid(string createEmpid) { DARABONBA_PTR_SET_VALUE(createEmpid_, createEmpid) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline int64_t createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
    inline GetRulesCountListRequest& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetRulesCountListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetRulesCountListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lastUpdateEmpid Field Functions 
    bool hasLastUpdateEmpid() const { return this->lastUpdateEmpid_ != nullptr;};
    void deleteLastUpdateEmpid() { this->lastUpdateEmpid_ = nullptr;};
    inline string lastUpdateEmpid() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateEmpid_, "") };
    inline GetRulesCountListRequest& setLastUpdateEmpid(string lastUpdateEmpid) { DARABONBA_PTR_SET_VALUE(lastUpdateEmpid_, lastUpdateEmpid) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetRulesCountListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetRulesCountListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requireInfos Field Functions 
    bool hasRequireInfos() const { return this->requireInfos_ != nullptr;};
    void deleteRequireInfos() { this->requireInfos_ = nullptr;};
    inline const vector<string> & requireInfos() const { DARABONBA_PTR_GET_CONST(requireInfos_, vector<string>) };
    inline vector<string> requireInfos() { DARABONBA_PTR_GET(requireInfos_, vector<string>) };
    inline GetRulesCountListRequest& setRequireInfos(const vector<string> & requireInfos) { DARABONBA_PTR_SET_VALUE(requireInfos_, requireInfos) };
    inline GetRulesCountListRequest& setRequireInfos(vector<string> && requireInfos) { DARABONBA_PTR_SET_RVALUE(requireInfos_, requireInfos) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline GetRulesCountListRequest& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleIdOrRuleName Field Functions 
    bool hasRuleIdOrRuleName() const { return this->ruleIdOrRuleName_ != nullptr;};
    void deleteRuleIdOrRuleName() { this->ruleIdOrRuleName_ = nullptr;};
    inline string ruleIdOrRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleIdOrRuleName_, "") };
    inline GetRulesCountListRequest& setRuleIdOrRuleName(string ruleIdOrRuleName) { DARABONBA_PTR_SET_VALUE(ruleIdOrRuleName_, ruleIdOrRuleName) };


    // ruleScoreSingleType Field Functions 
    bool hasRuleScoreSingleType() const { return this->ruleScoreSingleType_ != nullptr;};
    void deleteRuleScoreSingleType() { this->ruleScoreSingleType_ = nullptr;};
    inline int32_t ruleScoreSingleType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreSingleType_, 0) };
    inline GetRulesCountListRequest& setRuleScoreSingleType(int32_t ruleScoreSingleType) { DARABONBA_PTR_SET_VALUE(ruleScoreSingleType_, ruleScoreSingleType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline GetRulesCountListRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // schemeId Field Functions 
    bool hasSchemeId() const { return this->schemeId_ != nullptr;};
    void deleteSchemeId() { this->schemeId_ = nullptr;};
    inline int64_t schemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
    inline GetRulesCountListRequest& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline int32_t sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0) };
    inline GetRulesCountListRequest& setSourceType(int32_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetRulesCountListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetRulesCountListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetRulesCountListRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline GetRulesCountListRequest& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // updateEndTime Field Functions 
    bool hasUpdateEndTime() const { return this->updateEndTime_ != nullptr;};
    void deleteUpdateEndTime() { this->updateEndTime_ = nullptr;};
    inline string updateEndTime() const { DARABONBA_PTR_GET_DEFAULT(updateEndTime_, "") };
    inline GetRulesCountListRequest& setUpdateEndTime(string updateEndTime) { DARABONBA_PTR_SET_VALUE(updateEndTime_, updateEndTime) };


    // updateStartTime Field Functions 
    bool hasUpdateStartTime() const { return this->updateStartTime_ != nullptr;};
    void deleteUpdateStartTime() { this->updateStartTime_ = nullptr;};
    inline string updateStartTime() const { DARABONBA_PTR_GET_DEFAULT(updateStartTime_, "") };
    inline GetRulesCountListRequest& setUpdateStartTime(string updateStartTime) { DARABONBA_PTR_SET_VALUE(updateStartTime_, updateStartTime) };


    // updateUserId Field Functions 
    bool hasUpdateUserId() const { return this->updateUserId_ != nullptr;};
    void deleteUpdateUserId() { this->updateUserId_ = nullptr;};
    inline int64_t updateUserId() const { DARABONBA_PTR_GET_DEFAULT(updateUserId_, 0L) };
    inline GetRulesCountListRequest& setUpdateUserId(int64_t updateUserId) { DARABONBA_PTR_SET_VALUE(updateUserId_, updateUserId) };


  protected:
    // baseMeAgentId
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    std::shared_ptr<string> businessName_ = nullptr;
    std::shared_ptr<int32_t> businessRange_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<bool> countTotal_ = nullptr;
    std::shared_ptr<string> createEmpid_ = nullptr;
    std::shared_ptr<int64_t> createUserId_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> lastUpdateEmpid_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> requireInfos_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<string> ruleIdOrRuleName_ = nullptr;
    std::shared_ptr<int32_t> ruleScoreSingleType_ = nullptr;
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    std::shared_ptr<int64_t> schemeId_ = nullptr;
    std::shared_ptr<int32_t> sourceType_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> typeName_ = nullptr;
    std::shared_ptr<string> updateEndTime_ = nullptr;
    std::shared_ptr<string> updateStartTime_ = nullptr;
    std::shared_ptr<int64_t> updateUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
