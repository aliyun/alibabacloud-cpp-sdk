// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTRESPONSEBODYDATACASERESULTCASEDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHCASEFULLTEXTRESPONSEBODYDATACASERESULTCASEDOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& obj) { 
      DARABONBA_PTR_TO_JSON(abstractObj, abstractObj_);
      DARABONBA_PTR_TO_JSON(appliedLaws, appliedLaws_);
      DARABONBA_PTR_TO_JSON(basicCase, basicCase_);
      DARABONBA_PTR_TO_JSON(caseBasic, caseBasic_);
      DARABONBA_PTR_TO_JSON(caseCause, caseCause_);
      DARABONBA_PTR_TO_JSON(caseFeature, caseFeature_);
      DARABONBA_PTR_TO_JSON(caseId, caseId_);
      DARABONBA_PTR_TO_JSON(caseNo, caseNo_);
      DARABONBA_PTR_TO_JSON(caseSummary, caseSummary_);
      DARABONBA_PTR_TO_JSON(caseTitle, caseTitle_);
      DARABONBA_PTR_TO_JSON(caseType, caseType_);
      DARABONBA_PTR_TO_JSON(closeCaseCause, closeCaseCause_);
      DARABONBA_PTR_TO_JSON(courtFindOut, courtFindOut_);
      DARABONBA_PTR_TO_JSON(courtThink, courtThink_);
      DARABONBA_PTR_TO_JSON(dataFrom, dataFrom_);
      DARABONBA_PTR_TO_JSON(disputeFocus, disputeFocus_);
      DARABONBA_PTR_TO_JSON(disputeFocusTag, disputeFocusTag_);
      DARABONBA_PTR_TO_JSON(disputedpoints, disputedpoints_);
      DARABONBA_PTR_TO_JSON(documentType, documentType_);
      DARABONBA_PTR_TO_JSON(judgReason, judgReason_);
      DARABONBA_PTR_TO_JSON(keyfacts, keyfacts_);
      DARABONBA_PTR_TO_JSON(legalBasis, legalBasis_);
      DARABONBA_PTR_TO_JSON(litigants, litigants_);
      DARABONBA_PTR_TO_JSON(litigationParticipant, litigationParticipant_);
      DARABONBA_PTR_TO_JSON(openCaseCause, openCaseCause_);
      DARABONBA_PTR_TO_JSON(preTrialProcess, preTrialProcess_);
      DARABONBA_PTR_TO_JSON(referLevel, referLevel_);
      DARABONBA_PTR_TO_JSON(refereeGist, refereeGist_);
      DARABONBA_PTR_TO_JSON(sourceContent, sourceContent_);
      DARABONBA_PTR_TO_JSON(trialCourt, trialCourt_);
      DARABONBA_PTR_TO_JSON(trialDate, trialDate_);
      DARABONBA_PTR_TO_JSON(trialLevel, trialLevel_);
      DARABONBA_PTR_TO_JSON(trialProcess, trialProcess_);
      DARABONBA_PTR_TO_JSON(trialProgram, trialProgram_);
      DARABONBA_PTR_TO_JSON(verdict, verdict_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& obj) { 
      DARABONBA_PTR_FROM_JSON(abstractObj, abstractObj_);
      DARABONBA_PTR_FROM_JSON(appliedLaws, appliedLaws_);
      DARABONBA_PTR_FROM_JSON(basicCase, basicCase_);
      DARABONBA_PTR_FROM_JSON(caseBasic, caseBasic_);
      DARABONBA_PTR_FROM_JSON(caseCause, caseCause_);
      DARABONBA_PTR_FROM_JSON(caseFeature, caseFeature_);
      DARABONBA_PTR_FROM_JSON(caseId, caseId_);
      DARABONBA_PTR_FROM_JSON(caseNo, caseNo_);
      DARABONBA_PTR_FROM_JSON(caseSummary, caseSummary_);
      DARABONBA_PTR_FROM_JSON(caseTitle, caseTitle_);
      DARABONBA_PTR_FROM_JSON(caseType, caseType_);
      DARABONBA_PTR_FROM_JSON(closeCaseCause, closeCaseCause_);
      DARABONBA_PTR_FROM_JSON(courtFindOut, courtFindOut_);
      DARABONBA_PTR_FROM_JSON(courtThink, courtThink_);
      DARABONBA_PTR_FROM_JSON(dataFrom, dataFrom_);
      DARABONBA_PTR_FROM_JSON(disputeFocus, disputeFocus_);
      DARABONBA_PTR_FROM_JSON(disputeFocusTag, disputeFocusTag_);
      DARABONBA_PTR_FROM_JSON(disputedpoints, disputedpoints_);
      DARABONBA_PTR_FROM_JSON(documentType, documentType_);
      DARABONBA_PTR_FROM_JSON(judgReason, judgReason_);
      DARABONBA_PTR_FROM_JSON(keyfacts, keyfacts_);
      DARABONBA_PTR_FROM_JSON(legalBasis, legalBasis_);
      DARABONBA_PTR_FROM_JSON(litigants, litigants_);
      DARABONBA_PTR_FROM_JSON(litigationParticipant, litigationParticipant_);
      DARABONBA_PTR_FROM_JSON(openCaseCause, openCaseCause_);
      DARABONBA_PTR_FROM_JSON(preTrialProcess, preTrialProcess_);
      DARABONBA_PTR_FROM_JSON(referLevel, referLevel_);
      DARABONBA_PTR_FROM_JSON(refereeGist, refereeGist_);
      DARABONBA_PTR_FROM_JSON(sourceContent, sourceContent_);
      DARABONBA_PTR_FROM_JSON(trialCourt, trialCourt_);
      DARABONBA_PTR_FROM_JSON(trialDate, trialDate_);
      DARABONBA_PTR_FROM_JSON(trialLevel, trialLevel_);
      DARABONBA_PTR_FROM_JSON(trialProcess, trialProcess_);
      DARABONBA_PTR_FROM_JSON(trialProgram, trialProgram_);
      DARABONBA_PTR_FROM_JSON(verdict, verdict_);
    };
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain() = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain(const RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain &) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain(RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain &&) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain() = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& operator=(const RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain &) = default ;
    RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& operator=(RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abstractObj_ == nullptr
        && return this->appliedLaws_ == nullptr && return this->basicCase_ == nullptr && return this->caseBasic_ == nullptr && return this->caseCause_ == nullptr && return this->caseFeature_ == nullptr
        && return this->caseId_ == nullptr && return this->caseNo_ == nullptr && return this->caseSummary_ == nullptr && return this->caseTitle_ == nullptr && return this->caseType_ == nullptr
        && return this->closeCaseCause_ == nullptr && return this->courtFindOut_ == nullptr && return this->courtThink_ == nullptr && return this->dataFrom_ == nullptr && return this->disputeFocus_ == nullptr
        && return this->disputeFocusTag_ == nullptr && return this->disputedpoints_ == nullptr && return this->documentType_ == nullptr && return this->judgReason_ == nullptr && return this->keyfacts_ == nullptr
        && return this->legalBasis_ == nullptr && return this->litigants_ == nullptr && return this->litigationParticipant_ == nullptr && return this->openCaseCause_ == nullptr && return this->preTrialProcess_ == nullptr
        && return this->referLevel_ == nullptr && return this->refereeGist_ == nullptr && return this->sourceContent_ == nullptr && return this->trialCourt_ == nullptr && return this->trialDate_ == nullptr
        && return this->trialLevel_ == nullptr && return this->trialProcess_ == nullptr && return this->trialProgram_ == nullptr && return this->verdict_ == nullptr; };
    // abstractObj Field Functions 
    bool hasAbstractObj() const { return this->abstractObj_ != nullptr;};
    void deleteAbstractObj() { this->abstractObj_ = nullptr;};
    inline string abstractObj() const { DARABONBA_PTR_GET_DEFAULT(abstractObj_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setAbstractObj(string abstractObj) { DARABONBA_PTR_SET_VALUE(abstractObj_, abstractObj) };


    // appliedLaws Field Functions 
    bool hasAppliedLaws() const { return this->appliedLaws_ != nullptr;};
    void deleteAppliedLaws() { this->appliedLaws_ = nullptr;};
    inline string appliedLaws() const { DARABONBA_PTR_GET_DEFAULT(appliedLaws_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setAppliedLaws(string appliedLaws) { DARABONBA_PTR_SET_VALUE(appliedLaws_, appliedLaws) };


    // basicCase Field Functions 
    bool hasBasicCase() const { return this->basicCase_ != nullptr;};
    void deleteBasicCase() { this->basicCase_ = nullptr;};
    inline string basicCase() const { DARABONBA_PTR_GET_DEFAULT(basicCase_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setBasicCase(string basicCase) { DARABONBA_PTR_SET_VALUE(basicCase_, basicCase) };


    // caseBasic Field Functions 
    bool hasCaseBasic() const { return this->caseBasic_ != nullptr;};
    void deleteCaseBasic() { this->caseBasic_ = nullptr;};
    inline string caseBasic() const { DARABONBA_PTR_GET_DEFAULT(caseBasic_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCaseBasic(string caseBasic) { DARABONBA_PTR_SET_VALUE(caseBasic_, caseBasic) };


    // caseCause Field Functions 
    bool hasCaseCause() const { return this->caseCause_ != nullptr;};
    void deleteCaseCause() { this->caseCause_ = nullptr;};
    inline string caseCause() const { DARABONBA_PTR_GET_DEFAULT(caseCause_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCaseCause(string caseCause) { DARABONBA_PTR_SET_VALUE(caseCause_, caseCause) };


    // caseFeature Field Functions 
    bool hasCaseFeature() const { return this->caseFeature_ != nullptr;};
    void deleteCaseFeature() { this->caseFeature_ = nullptr;};
    inline string caseFeature() const { DARABONBA_PTR_GET_DEFAULT(caseFeature_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCaseFeature(string caseFeature) { DARABONBA_PTR_SET_VALUE(caseFeature_, caseFeature) };


    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline string caseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // caseNo Field Functions 
    bool hasCaseNo() const { return this->caseNo_ != nullptr;};
    void deleteCaseNo() { this->caseNo_ = nullptr;};
    inline string caseNo() const { DARABONBA_PTR_GET_DEFAULT(caseNo_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCaseNo(string caseNo) { DARABONBA_PTR_SET_VALUE(caseNo_, caseNo) };


    // caseSummary Field Functions 
    bool hasCaseSummary() const { return this->caseSummary_ != nullptr;};
    void deleteCaseSummary() { this->caseSummary_ = nullptr;};
    inline string caseSummary() const { DARABONBA_PTR_GET_DEFAULT(caseSummary_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCaseSummary(string caseSummary) { DARABONBA_PTR_SET_VALUE(caseSummary_, caseSummary) };


    // caseTitle Field Functions 
    bool hasCaseTitle() const { return this->caseTitle_ != nullptr;};
    void deleteCaseTitle() { this->caseTitle_ = nullptr;};
    inline string caseTitle() const { DARABONBA_PTR_GET_DEFAULT(caseTitle_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCaseTitle(string caseTitle) { DARABONBA_PTR_SET_VALUE(caseTitle_, caseTitle) };


    // caseType Field Functions 
    bool hasCaseType() const { return this->caseType_ != nullptr;};
    void deleteCaseType() { this->caseType_ = nullptr;};
    inline string caseType() const { DARABONBA_PTR_GET_DEFAULT(caseType_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCaseType(string caseType) { DARABONBA_PTR_SET_VALUE(caseType_, caseType) };


    // closeCaseCause Field Functions 
    bool hasCloseCaseCause() const { return this->closeCaseCause_ != nullptr;};
    void deleteCloseCaseCause() { this->closeCaseCause_ = nullptr;};
    inline string closeCaseCause() const { DARABONBA_PTR_GET_DEFAULT(closeCaseCause_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCloseCaseCause(string closeCaseCause) { DARABONBA_PTR_SET_VALUE(closeCaseCause_, closeCaseCause) };


    // courtFindOut Field Functions 
    bool hasCourtFindOut() const { return this->courtFindOut_ != nullptr;};
    void deleteCourtFindOut() { this->courtFindOut_ = nullptr;};
    inline string courtFindOut() const { DARABONBA_PTR_GET_DEFAULT(courtFindOut_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCourtFindOut(string courtFindOut) { DARABONBA_PTR_SET_VALUE(courtFindOut_, courtFindOut) };


    // courtThink Field Functions 
    bool hasCourtThink() const { return this->courtThink_ != nullptr;};
    void deleteCourtThink() { this->courtThink_ = nullptr;};
    inline string courtThink() const { DARABONBA_PTR_GET_DEFAULT(courtThink_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setCourtThink(string courtThink) { DARABONBA_PTR_SET_VALUE(courtThink_, courtThink) };


    // dataFrom Field Functions 
    bool hasDataFrom() const { return this->dataFrom_ != nullptr;};
    void deleteDataFrom() { this->dataFrom_ = nullptr;};
    inline string dataFrom() const { DARABONBA_PTR_GET_DEFAULT(dataFrom_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setDataFrom(string dataFrom) { DARABONBA_PTR_SET_VALUE(dataFrom_, dataFrom) };


    // disputeFocus Field Functions 
    bool hasDisputeFocus() const { return this->disputeFocus_ != nullptr;};
    void deleteDisputeFocus() { this->disputeFocus_ = nullptr;};
    inline string disputeFocus() const { DARABONBA_PTR_GET_DEFAULT(disputeFocus_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setDisputeFocus(string disputeFocus) { DARABONBA_PTR_SET_VALUE(disputeFocus_, disputeFocus) };


    // disputeFocusTag Field Functions 
    bool hasDisputeFocusTag() const { return this->disputeFocusTag_ != nullptr;};
    void deleteDisputeFocusTag() { this->disputeFocusTag_ = nullptr;};
    inline const vector<string> & disputeFocusTag() const { DARABONBA_PTR_GET_CONST(disputeFocusTag_, vector<string>) };
    inline vector<string> disputeFocusTag() { DARABONBA_PTR_GET(disputeFocusTag_, vector<string>) };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setDisputeFocusTag(const vector<string> & disputeFocusTag) { DARABONBA_PTR_SET_VALUE(disputeFocusTag_, disputeFocusTag) };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setDisputeFocusTag(vector<string> && disputeFocusTag) { DARABONBA_PTR_SET_RVALUE(disputeFocusTag_, disputeFocusTag) };


    // disputedpoints Field Functions 
    bool hasDisputedpoints() const { return this->disputedpoints_ != nullptr;};
    void deleteDisputedpoints() { this->disputedpoints_ = nullptr;};
    inline string disputedpoints() const { DARABONBA_PTR_GET_DEFAULT(disputedpoints_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setDisputedpoints(string disputedpoints) { DARABONBA_PTR_SET_VALUE(disputedpoints_, disputedpoints) };


    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string documentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // judgReason Field Functions 
    bool hasJudgReason() const { return this->judgReason_ != nullptr;};
    void deleteJudgReason() { this->judgReason_ = nullptr;};
    inline string judgReason() const { DARABONBA_PTR_GET_DEFAULT(judgReason_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setJudgReason(string judgReason) { DARABONBA_PTR_SET_VALUE(judgReason_, judgReason) };


    // keyfacts Field Functions 
    bool hasKeyfacts() const { return this->keyfacts_ != nullptr;};
    void deleteKeyfacts() { this->keyfacts_ = nullptr;};
    inline string keyfacts() const { DARABONBA_PTR_GET_DEFAULT(keyfacts_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setKeyfacts(string keyfacts) { DARABONBA_PTR_SET_VALUE(keyfacts_, keyfacts) };


    // legalBasis Field Functions 
    bool hasLegalBasis() const { return this->legalBasis_ != nullptr;};
    void deleteLegalBasis() { this->legalBasis_ = nullptr;};
    inline string legalBasis() const { DARABONBA_PTR_GET_DEFAULT(legalBasis_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setLegalBasis(string legalBasis) { DARABONBA_PTR_SET_VALUE(legalBasis_, legalBasis) };


    // litigants Field Functions 
    bool hasLitigants() const { return this->litigants_ != nullptr;};
    void deleteLitigants() { this->litigants_ = nullptr;};
    inline string litigants() const { DARABONBA_PTR_GET_DEFAULT(litigants_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setLitigants(string litigants) { DARABONBA_PTR_SET_VALUE(litigants_, litigants) };


    // litigationParticipant Field Functions 
    bool hasLitigationParticipant() const { return this->litigationParticipant_ != nullptr;};
    void deleteLitigationParticipant() { this->litigationParticipant_ = nullptr;};
    inline string litigationParticipant() const { DARABONBA_PTR_GET_DEFAULT(litigationParticipant_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setLitigationParticipant(string litigationParticipant) { DARABONBA_PTR_SET_VALUE(litigationParticipant_, litigationParticipant) };


    // openCaseCause Field Functions 
    bool hasOpenCaseCause() const { return this->openCaseCause_ != nullptr;};
    void deleteOpenCaseCause() { this->openCaseCause_ = nullptr;};
    inline string openCaseCause() const { DARABONBA_PTR_GET_DEFAULT(openCaseCause_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setOpenCaseCause(string openCaseCause) { DARABONBA_PTR_SET_VALUE(openCaseCause_, openCaseCause) };


    // preTrialProcess Field Functions 
    bool hasPreTrialProcess() const { return this->preTrialProcess_ != nullptr;};
    void deletePreTrialProcess() { this->preTrialProcess_ = nullptr;};
    inline string preTrialProcess() const { DARABONBA_PTR_GET_DEFAULT(preTrialProcess_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setPreTrialProcess(string preTrialProcess) { DARABONBA_PTR_SET_VALUE(preTrialProcess_, preTrialProcess) };


    // referLevel Field Functions 
    bool hasReferLevel() const { return this->referLevel_ != nullptr;};
    void deleteReferLevel() { this->referLevel_ = nullptr;};
    inline string referLevel() const { DARABONBA_PTR_GET_DEFAULT(referLevel_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setReferLevel(string referLevel) { DARABONBA_PTR_SET_VALUE(referLevel_, referLevel) };


    // refereeGist Field Functions 
    bool hasRefereeGist() const { return this->refereeGist_ != nullptr;};
    void deleteRefereeGist() { this->refereeGist_ = nullptr;};
    inline string refereeGist() const { DARABONBA_PTR_GET_DEFAULT(refereeGist_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setRefereeGist(string refereeGist) { DARABONBA_PTR_SET_VALUE(refereeGist_, refereeGist) };


    // sourceContent Field Functions 
    bool hasSourceContent() const { return this->sourceContent_ != nullptr;};
    void deleteSourceContent() { this->sourceContent_ = nullptr;};
    inline string sourceContent() const { DARABONBA_PTR_GET_DEFAULT(sourceContent_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setSourceContent(string sourceContent) { DARABONBA_PTR_SET_VALUE(sourceContent_, sourceContent) };


    // trialCourt Field Functions 
    bool hasTrialCourt() const { return this->trialCourt_ != nullptr;};
    void deleteTrialCourt() { this->trialCourt_ = nullptr;};
    inline const Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt & trialCourt() const { DARABONBA_PTR_GET_CONST(trialCourt_, Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt) };
    inline Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt trialCourt() { DARABONBA_PTR_GET(trialCourt_, Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt) };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setTrialCourt(const Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt & trialCourt) { DARABONBA_PTR_SET_VALUE(trialCourt_, trialCourt) };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setTrialCourt(Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt && trialCourt) { DARABONBA_PTR_SET_RVALUE(trialCourt_, trialCourt) };


    // trialDate Field Functions 
    bool hasTrialDate() const { return this->trialDate_ != nullptr;};
    void deleteTrialDate() { this->trialDate_ = nullptr;};
    inline string trialDate() const { DARABONBA_PTR_GET_DEFAULT(trialDate_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setTrialDate(string trialDate) { DARABONBA_PTR_SET_VALUE(trialDate_, trialDate) };


    // trialLevel Field Functions 
    bool hasTrialLevel() const { return this->trialLevel_ != nullptr;};
    void deleteTrialLevel() { this->trialLevel_ = nullptr;};
    inline string trialLevel() const { DARABONBA_PTR_GET_DEFAULT(trialLevel_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setTrialLevel(string trialLevel) { DARABONBA_PTR_SET_VALUE(trialLevel_, trialLevel) };


    // trialProcess Field Functions 
    bool hasTrialProcess() const { return this->trialProcess_ != nullptr;};
    void deleteTrialProcess() { this->trialProcess_ = nullptr;};
    inline string trialProcess() const { DARABONBA_PTR_GET_DEFAULT(trialProcess_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setTrialProcess(string trialProcess) { DARABONBA_PTR_SET_VALUE(trialProcess_, trialProcess) };


    // trialProgram Field Functions 
    bool hasTrialProgram() const { return this->trialProgram_ != nullptr;};
    void deleteTrialProgram() { this->trialProgram_ = nullptr;};
    inline string trialProgram() const { DARABONBA_PTR_GET_DEFAULT(trialProgram_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setTrialProgram(string trialProgram) { DARABONBA_PTR_SET_VALUE(trialProgram_, trialProgram) };


    // verdict Field Functions 
    bool hasVerdict() const { return this->verdict_ != nullptr;};
    void deleteVerdict() { this->verdict_ = nullptr;};
    inline string verdict() const { DARABONBA_PTR_GET_DEFAULT(verdict_, "") };
    inline RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain& setVerdict(string verdict) { DARABONBA_PTR_SET_VALUE(verdict_, verdict) };


  protected:
    std::shared_ptr<string> abstractObj_ = nullptr;
    std::shared_ptr<string> appliedLaws_ = nullptr;
    std::shared_ptr<string> basicCase_ = nullptr;
    std::shared_ptr<string> caseBasic_ = nullptr;
    std::shared_ptr<string> caseCause_ = nullptr;
    std::shared_ptr<string> caseFeature_ = nullptr;
    std::shared_ptr<string> caseId_ = nullptr;
    std::shared_ptr<string> caseNo_ = nullptr;
    std::shared_ptr<string> caseSummary_ = nullptr;
    std::shared_ptr<string> caseTitle_ = nullptr;
    std::shared_ptr<string> caseType_ = nullptr;
    std::shared_ptr<string> closeCaseCause_ = nullptr;
    std::shared_ptr<string> courtFindOut_ = nullptr;
    std::shared_ptr<string> courtThink_ = nullptr;
    std::shared_ptr<string> dataFrom_ = nullptr;
    std::shared_ptr<string> disputeFocus_ = nullptr;
    std::shared_ptr<vector<string>> disputeFocusTag_ = nullptr;
    std::shared_ptr<string> disputedpoints_ = nullptr;
    std::shared_ptr<string> documentType_ = nullptr;
    std::shared_ptr<string> judgReason_ = nullptr;
    std::shared_ptr<string> keyfacts_ = nullptr;
    std::shared_ptr<string> legalBasis_ = nullptr;
    std::shared_ptr<string> litigants_ = nullptr;
    std::shared_ptr<string> litigationParticipant_ = nullptr;
    std::shared_ptr<string> openCaseCause_ = nullptr;
    std::shared_ptr<string> preTrialProcess_ = nullptr;
    std::shared_ptr<string> referLevel_ = nullptr;
    std::shared_ptr<string> refereeGist_ = nullptr;
    std::shared_ptr<string> sourceContent_ = nullptr;
    std::shared_ptr<Models::RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt> trialCourt_ = nullptr;
    std::shared_ptr<string> trialDate_ = nullptr;
    std::shared_ptr<string> trialLevel_ = nullptr;
    std::shared_ptr<string> trialProcess_ = nullptr;
    std::shared_ptr<string> trialProgram_ = nullptr;
    std::shared_ptr<string> verdict_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
