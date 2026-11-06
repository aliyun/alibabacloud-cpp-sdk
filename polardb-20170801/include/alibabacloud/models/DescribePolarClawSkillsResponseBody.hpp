// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawSkillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillList, skillList_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillList, skillList_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribePolarClawSkillsResponseBody() = default ;
    DescribePolarClawSkillsResponseBody(const DescribePolarClawSkillsResponseBody &) = default ;
    DescribePolarClawSkillsResponseBody(DescribePolarClawSkillsResponseBody &&) = default ;
    DescribePolarClawSkillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillsResponseBody() = default ;
    DescribePolarClawSkillsResponseBody& operator=(const DescribePolarClawSkillsResponseBody &) = default ;
    DescribePolarClawSkillsResponseBody& operator=(DescribePolarClawSkillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SkillList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillList& obj) { 
        DARABONBA_PTR_TO_JSON(AssessmentStatus, assessmentStatus_);
        DARABONBA_PTR_TO_JSON(AvailableToAgent, availableToAgent_);
        DARABONBA_PTR_TO_JSON(Disabled, disabled_);
        DARABONBA_PTR_TO_JSON(EvaluationStatus, evaluationStatus_);
        DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(RiskDetail, riskDetail_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, SkillList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssessmentStatus, assessmentStatus_);
        DARABONBA_PTR_FROM_JSON(AvailableToAgent, availableToAgent_);
        DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(EvaluationStatus, evaluationStatus_);
        DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(RiskDetail, riskDetail_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      SkillList() = default ;
      SkillList(const SkillList &) = default ;
      SkillList(SkillList &&) = default ;
      SkillList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SkillList() = default ;
      SkillList& operator=(const SkillList &) = default ;
      SkillList& operator=(SkillList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assessmentStatus_ == nullptr
        && this->availableToAgent_ == nullptr && this->disabled_ == nullptr && this->evaluationStatus_ == nullptr && this->fileCount_ == nullptr && this->path_ == nullptr
        && this->riskDetail_ == nullptr && this->size_ == nullptr && this->skillName_ == nullptr && this->skillVersion_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr; };
      // assessmentStatus Field Functions 
      bool hasAssessmentStatus() const { return this->assessmentStatus_ != nullptr;};
      void deleteAssessmentStatus() { this->assessmentStatus_ = nullptr;};
      inline string getAssessmentStatus() const { DARABONBA_PTR_GET_DEFAULT(assessmentStatus_, "") };
      inline SkillList& setAssessmentStatus(string assessmentStatus) { DARABONBA_PTR_SET_VALUE(assessmentStatus_, assessmentStatus) };


      // availableToAgent Field Functions 
      bool hasAvailableToAgent() const { return this->availableToAgent_ != nullptr;};
      void deleteAvailableToAgent() { this->availableToAgent_ = nullptr;};
      inline bool getAvailableToAgent() const { DARABONBA_PTR_GET_DEFAULT(availableToAgent_, false) };
      inline SkillList& setAvailableToAgent(bool availableToAgent) { DARABONBA_PTR_SET_VALUE(availableToAgent_, availableToAgent) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline SkillList& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // evaluationStatus Field Functions 
      bool hasEvaluationStatus() const { return this->evaluationStatus_ != nullptr;};
      void deleteEvaluationStatus() { this->evaluationStatus_ = nullptr;};
      inline string getEvaluationStatus() const { DARABONBA_PTR_GET_DEFAULT(evaluationStatus_, "") };
      inline SkillList& setEvaluationStatus(string evaluationStatus) { DARABONBA_PTR_SET_VALUE(evaluationStatus_, evaluationStatus) };


      // fileCount Field Functions 
      bool hasFileCount() const { return this->fileCount_ != nullptr;};
      void deleteFileCount() { this->fileCount_ = nullptr;};
      inline int32_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0) };
      inline SkillList& setFileCount(int32_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline SkillList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // riskDetail Field Functions 
      bool hasRiskDetail() const { return this->riskDetail_ != nullptr;};
      void deleteRiskDetail() { this->riskDetail_ = nullptr;};
      inline string getRiskDetail() const { DARABONBA_PTR_GET_DEFAULT(riskDetail_, "") };
      inline SkillList& setRiskDetail(string riskDetail) { DARABONBA_PTR_SET_VALUE(riskDetail_, riskDetail) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline SkillList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline SkillList& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // skillVersion Field Functions 
      bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
      void deleteSkillVersion() { this->skillVersion_ = nullptr;};
      inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
      inline SkillList& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline SkillList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SkillList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline SkillList& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SkillList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The assessment status.
      shared_ptr<string> assessmentStatus_ {};
      // Indicates whether the skill is available to the agent. The value is false if the skill is not in the agent workspace or is excluded by the availability policy of the agent.
      shared_ptr<bool> availableToAgent_ {};
      // Indicates whether the skill is disabled. If AgentId is not specified, the status of the default agent is returned.
      shared_ptr<bool> disabled_ {};
      // The evaluation status.
      shared_ptr<string> evaluationStatus_ {};
      // The total number of files.
      shared_ptr<int32_t> fileCount_ {};
      // The directory path.
      shared_ptr<string> path_ {};
      // The baseline risk details.
      shared_ptr<string> riskDetail_ {};
      // The size of the databases and tables. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The skill name.
      shared_ptr<string> skillName_ {};
      // The skill version.
      shared_ptr<string> skillVersion_ {};
      // The skill source. Valid values:
      // - PUBLIC: public
      // - SELF: private
      // - OTHER: other
      shared_ptr<string> source_ {};
      // The skill status.
      shared_ptr<string> status_ {};
      // The OpenAPI summary.
      shared_ptr<string> summary_ {};
      // The title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->skillList_ == nullptr && this->totalRecordCount_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawSkillsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolarClawSkillsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribePolarClawSkillsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawSkillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillList Field Functions 
    bool hasSkillList() const { return this->skillList_ != nullptr;};
    void deleteSkillList() { this->skillList_ = nullptr;};
    inline const vector<DescribePolarClawSkillsResponseBody::SkillList> & getSkillList() const { DARABONBA_PTR_GET_CONST(skillList_, vector<DescribePolarClawSkillsResponseBody::SkillList>) };
    inline vector<DescribePolarClawSkillsResponseBody::SkillList> getSkillList() { DARABONBA_PTR_GET(skillList_, vector<DescribePolarClawSkillsResponseBody::SkillList>) };
    inline DescribePolarClawSkillsResponseBody& setSkillList(const vector<DescribePolarClawSkillsResponseBody::SkillList> & skillList) { DARABONBA_PTR_SET_VALUE(skillList_, skillList) };
    inline DescribePolarClawSkillsResponseBody& setSkillList(vector<DescribePolarClawSkillsResponseBody::SkillList> && skillList) { DARABONBA_PTR_SET_RVALUE(skillList_, skillList) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribePolarClawSkillsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The skill list.
    shared_ptr<vector<DescribePolarClawSkillsResponseBody::SkillList>> skillList_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
