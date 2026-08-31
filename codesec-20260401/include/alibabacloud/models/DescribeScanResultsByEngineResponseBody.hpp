// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANRESULTSBYENGINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANRESULTSBYENGINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class DescribeScanResultsByEngineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScanResultsByEngineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(engine, engine_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scanId, scanId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScanResultsByEngineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(engine, engine_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scanId, scanId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    DescribeScanResultsByEngineResponseBody() = default ;
    DescribeScanResultsByEngineResponseBody(const DescribeScanResultsByEngineResponseBody &) = default ;
    DescribeScanResultsByEngineResponseBody(DescribeScanResultsByEngineResponseBody &&) = default ;
    DescribeScanResultsByEngineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScanResultsByEngineResponseBody() = default ;
    DescribeScanResultsByEngineResponseBody& operator=(const DescribeScanResultsByEngineResponseBody &) = default ;
    DescribeScanResultsByEngineResponseBody& operator=(DescribeScanResultsByEngineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(baselineState, baselineState_);
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(codeSnippet, codeSnippet_);
        DARABONBA_PTR_TO_JSON(confidence, confidence_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(cweId, cweId_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(endLine, endLine_);
        DARABONBA_PTR_TO_JSON(filePath, filePath_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(itemSummary, itemSummary_);
        DARABONBA_PTR_TO_JSON(owaspCategory, owaspCategory_);
        DARABONBA_PTR_TO_JSON(projectName, projectName_);
        DARABONBA_PTR_TO_JSON(remediationCodeExample, remediationCodeExample_);
        DARABONBA_PTR_TO_JSON(remediationSuggestion, remediationSuggestion_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(scaComponent, scaComponent_);
        DARABONBA_PTR_TO_JSON(scanId, scanId_);
        DARABONBA_PTR_TO_JSON(severity, severity_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(startLine, startLine_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(taintFlow, taintFlow_);
        DARABONBA_PTR_TO_JSON(taintFlowSummary, taintFlowSummary_);
        DARABONBA_PTR_TO_JSON(title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(baselineState, baselineState_);
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(codeSnippet, codeSnippet_);
        DARABONBA_PTR_FROM_JSON(confidence, confidence_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(cweId, cweId_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(endLine, endLine_);
        DARABONBA_PTR_FROM_JSON(filePath, filePath_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(itemSummary, itemSummary_);
        DARABONBA_PTR_FROM_JSON(owaspCategory, owaspCategory_);
        DARABONBA_PTR_FROM_JSON(projectName, projectName_);
        DARABONBA_PTR_FROM_JSON(remediationCodeExample, remediationCodeExample_);
        DARABONBA_PTR_FROM_JSON(remediationSuggestion, remediationSuggestion_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(scaComponent, scaComponent_);
        DARABONBA_PTR_FROM_JSON(scanId, scanId_);
        DARABONBA_PTR_FROM_JSON(severity, severity_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(startLine, startLine_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(taintFlow, taintFlow_);
        DARABONBA_PTR_FROM_JSON(taintFlowSummary, taintFlowSummary_);
        DARABONBA_PTR_FROM_JSON(title, title_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaintFlow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaintFlow& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(file, file_);
          DARABONBA_PTR_TO_JSON(kind, kind_);
          DARABONBA_PTR_TO_JSON(line, line_);
          DARABONBA_PTR_TO_JSON(note, note_);
          DARABONBA_PTR_TO_JSON(step, step_);
        };
        friend void from_json(const Darabonba::Json& j, TaintFlow& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(file, file_);
          DARABONBA_PTR_FROM_JSON(kind, kind_);
          DARABONBA_PTR_FROM_JSON(line, line_);
          DARABONBA_PTR_FROM_JSON(note, note_);
          DARABONBA_PTR_FROM_JSON(step, step_);
        };
        TaintFlow() = default ;
        TaintFlow(const TaintFlow &) = default ;
        TaintFlow(TaintFlow &&) = default ;
        TaintFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaintFlow() = default ;
        TaintFlow& operator=(const TaintFlow &) = default ;
        TaintFlow& operator=(TaintFlow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->file_ == nullptr && this->kind_ == nullptr && this->line_ == nullptr && this->note_ == nullptr && this->step_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline TaintFlow& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // file Field Functions 
        bool hasFile() const { return this->file_ != nullptr;};
        void deleteFile() { this->file_ = nullptr;};
        inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
        inline TaintFlow& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


        // kind Field Functions 
        bool hasKind() const { return this->kind_ != nullptr;};
        void deleteKind() { this->kind_ = nullptr;};
        inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
        inline TaintFlow& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


        // line Field Functions 
        bool hasLine() const { return this->line_ != nullptr;};
        void deleteLine() { this->line_ = nullptr;};
        inline int32_t getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, 0) };
        inline TaintFlow& setLine(int32_t line) { DARABONBA_PTR_SET_VALUE(line_, line) };


        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline TaintFlow& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
        inline TaintFlow& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      protected:
        // The code.
        shared_ptr<string> code_ {};
        // The file path.
        shared_ptr<string> file_ {};
        // The role type in the taint propagation chain. Valid values:
        // * source: taint source.
        // * propagator: propagation node.	
        // * validation: validation or scrubbing center.	
        // * sink: dangerous sink.
        shared_ptr<string> kind_ {};
        // The line number.
        shared_ptr<int32_t> line_ {};
        // The remarks.
        shared_ptr<string> note_ {};
        // The step number, starting from 0 and incrementing.
        shared_ptr<int32_t> step_ {};
      };

      class ScaComponent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScaComponent& obj) { 
          DARABONBA_PTR_TO_JSON(cveCount, cveCount_);
          DARABONBA_PTR_TO_JSON(cveDetails, cveDetails_);
          DARABONBA_PTR_TO_JSON(introPaths, introPaths_);
          DARABONBA_PTR_TO_JSON(isDirect, isDirect_);
          DARABONBA_PTR_TO_JSON(packageName, packageName_);
          DARABONBA_PTR_TO_JSON(remediation, remediation_);
          DARABONBA_PTR_TO_JSON(version, version_);
        };
        friend void from_json(const Darabonba::Json& j, ScaComponent& obj) { 
          DARABONBA_PTR_FROM_JSON(cveCount, cveCount_);
          DARABONBA_PTR_FROM_JSON(cveDetails, cveDetails_);
          DARABONBA_PTR_FROM_JSON(introPaths, introPaths_);
          DARABONBA_PTR_FROM_JSON(isDirect, isDirect_);
          DARABONBA_PTR_FROM_JSON(packageName, packageName_);
          DARABONBA_PTR_FROM_JSON(remediation, remediation_);
          DARABONBA_PTR_FROM_JSON(version, version_);
        };
        ScaComponent() = default ;
        ScaComponent(const ScaComponent &) = default ;
        ScaComponent(ScaComponent &&) = default ;
        ScaComponent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScaComponent() = default ;
        ScaComponent& operator=(const ScaComponent &) = default ;
        ScaComponent& operator=(ScaComponent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CveDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CveDetails& obj) { 
            DARABONBA_PTR_TO_JSON(cveId, cveId_);
            DARABONBA_PTR_TO_JSON(cvss, cvss_);
            DARABONBA_PTR_TO_JSON(cvssVersion, cvssVersion_);
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(references, references_);
            DARABONBA_PTR_TO_JSON(severity, severity_);
          };
          friend void from_json(const Darabonba::Json& j, CveDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(cveId, cveId_);
            DARABONBA_PTR_FROM_JSON(cvss, cvss_);
            DARABONBA_PTR_FROM_JSON(cvssVersion, cvssVersion_);
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(references, references_);
            DARABONBA_PTR_FROM_JSON(severity, severity_);
          };
          CveDetails() = default ;
          CveDetails(const CveDetails &) = default ;
          CveDetails(CveDetails &&) = default ;
          CveDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CveDetails() = default ;
          CveDetails& operator=(const CveDetails &) = default ;
          CveDetails& operator=(CveDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cveId_ == nullptr
        && this->cvss_ == nullptr && this->cvssVersion_ == nullptr && this->description_ == nullptr && this->references_ == nullptr && this->severity_ == nullptr; };
          // cveId Field Functions 
          bool hasCveId() const { return this->cveId_ != nullptr;};
          void deleteCveId() { this->cveId_ = nullptr;};
          inline string getCveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
          inline CveDetails& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


          // cvss Field Functions 
          bool hasCvss() const { return this->cvss_ != nullptr;};
          void deleteCvss() { this->cvss_ = nullptr;};
          inline double getCvss() const { DARABONBA_PTR_GET_DEFAULT(cvss_, 0.0) };
          inline CveDetails& setCvss(double cvss) { DARABONBA_PTR_SET_VALUE(cvss_, cvss) };


          // cvssVersion Field Functions 
          bool hasCvssVersion() const { return this->cvssVersion_ != nullptr;};
          void deleteCvssVersion() { this->cvssVersion_ = nullptr;};
          inline string getCvssVersion() const { DARABONBA_PTR_GET_DEFAULT(cvssVersion_, "") };
          inline CveDetails& setCvssVersion(string cvssVersion) { DARABONBA_PTR_SET_VALUE(cvssVersion_, cvssVersion) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline CveDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // references Field Functions 
          bool hasReferences() const { return this->references_ != nullptr;};
          void deleteReferences() { this->references_ = nullptr;};
          inline const vector<string> & getReferences() const { DARABONBA_PTR_GET_CONST(references_, vector<string>) };
          inline vector<string> getReferences() { DARABONBA_PTR_GET(references_, vector<string>) };
          inline CveDetails& setReferences(const vector<string> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
          inline CveDetails& setReferences(vector<string> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline CveDetails& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        protected:
          // The associated CWE ID.
          shared_ptr<string> cveId_ {};
          // The CVSS score.
          shared_ptr<double> cvss_ {};
          // The CVSS version.
          shared_ptr<string> cvssVersion_ {};
          // The description.
          shared_ptr<string> description_ {};
          // The reference information.
          shared_ptr<vector<string>> references_ {};
          // The severity level. Valid values:
          // * critical
          // * high
          // * medium
          // * low
          shared_ptr<string> severity_ {};
        };

        virtual bool empty() const override { return this->cveCount_ == nullptr
        && this->cveDetails_ == nullptr && this->introPaths_ == nullptr && this->isDirect_ == nullptr && this->packageName_ == nullptr && this->remediation_ == nullptr
        && this->version_ == nullptr; };
        // cveCount Field Functions 
        bool hasCveCount() const { return this->cveCount_ != nullptr;};
        void deleteCveCount() { this->cveCount_ = nullptr;};
        inline int64_t getCveCount() const { DARABONBA_PTR_GET_DEFAULT(cveCount_, 0L) };
        inline ScaComponent& setCveCount(int64_t cveCount) { DARABONBA_PTR_SET_VALUE(cveCount_, cveCount) };


        // cveDetails Field Functions 
        bool hasCveDetails() const { return this->cveDetails_ != nullptr;};
        void deleteCveDetails() { this->cveDetails_ = nullptr;};
        inline const vector<ScaComponent::CveDetails> & getCveDetails() const { DARABONBA_PTR_GET_CONST(cveDetails_, vector<ScaComponent::CveDetails>) };
        inline vector<ScaComponent::CveDetails> getCveDetails() { DARABONBA_PTR_GET(cveDetails_, vector<ScaComponent::CveDetails>) };
        inline ScaComponent& setCveDetails(const vector<ScaComponent::CveDetails> & cveDetails) { DARABONBA_PTR_SET_VALUE(cveDetails_, cveDetails) };
        inline ScaComponent& setCveDetails(vector<ScaComponent::CveDetails> && cveDetails) { DARABONBA_PTR_SET_RVALUE(cveDetails_, cveDetails) };


        // introPaths Field Functions 
        bool hasIntroPaths() const { return this->introPaths_ != nullptr;};
        void deleteIntroPaths() { this->introPaths_ = nullptr;};
        inline const vector<string> & getIntroPaths() const { DARABONBA_PTR_GET_CONST(introPaths_, vector<string>) };
        inline vector<string> getIntroPaths() { DARABONBA_PTR_GET(introPaths_, vector<string>) };
        inline ScaComponent& setIntroPaths(const vector<string> & introPaths) { DARABONBA_PTR_SET_VALUE(introPaths_, introPaths) };
        inline ScaComponent& setIntroPaths(vector<string> && introPaths) { DARABONBA_PTR_SET_RVALUE(introPaths_, introPaths) };


        // isDirect Field Functions 
        bool hasIsDirect() const { return this->isDirect_ != nullptr;};
        void deleteIsDirect() { this->isDirect_ = nullptr;};
        inline bool getIsDirect() const { DARABONBA_PTR_GET_DEFAULT(isDirect_, false) };
        inline ScaComponent& setIsDirect(bool isDirect) { DARABONBA_PTR_SET_VALUE(isDirect_, isDirect) };


        // packageName Field Functions 
        bool hasPackageName() const { return this->packageName_ != nullptr;};
        void deletePackageName() { this->packageName_ = nullptr;};
        inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
        inline ScaComponent& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


        // remediation Field Functions 
        bool hasRemediation() const { return this->remediation_ != nullptr;};
        void deleteRemediation() { this->remediation_ = nullptr;};
        inline string getRemediation() const { DARABONBA_PTR_GET_DEFAULT(remediation_, "") };
        inline ScaComponent& setRemediation(string remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline ScaComponent& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The number of CVEs.
        shared_ptr<int64_t> cveCount_ {};
        // The list of CVE details associated with a component in the SCA finding.
        shared_ptr<vector<ScaComponent::CveDetails>> cveDetails_ {};
        // The list of dependency introduction paths in the SCA component information. This field is returned only when engine is set to sca.
        shared_ptr<vector<string>> introPaths_ {};
        // Indicates whether the component is a direct dependency.
        shared_ptr<bool> isDirect_ {};
        // The component coordinate.
        shared_ptr<string> packageName_ {};
        // The component-level remediation suggestion.
        shared_ptr<string> remediation_ {};
        // The component version.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->baselineState_ == nullptr
        && this->category_ == nullptr && this->codeSnippet_ == nullptr && this->confidence_ == nullptr && this->createdAt_ == nullptr && this->cweId_ == nullptr
        && this->description_ == nullptr && this->endLine_ == nullptr && this->filePath_ == nullptr && this->id_ == nullptr && this->itemSummary_ == nullptr
        && this->owaspCategory_ == nullptr && this->projectName_ == nullptr && this->remediationCodeExample_ == nullptr && this->remediationSuggestion_ == nullptr && this->ruleId_ == nullptr
        && this->scaComponent_ == nullptr && this->scanId_ == nullptr && this->severity_ == nullptr && this->source_ == nullptr && this->startLine_ == nullptr
        && this->status_ == nullptr && this->taintFlow_ == nullptr && this->taintFlowSummary_ == nullptr && this->title_ == nullptr; };
      // baselineState Field Functions 
      bool hasBaselineState() const { return this->baselineState_ != nullptr;};
      void deleteBaselineState() { this->baselineState_ = nullptr;};
      inline string getBaselineState() const { DARABONBA_PTR_GET_DEFAULT(baselineState_, "") };
      inline Items& setBaselineState(string baselineState) { DARABONBA_PTR_SET_VALUE(baselineState_, baselineState) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Items& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // codeSnippet Field Functions 
      bool hasCodeSnippet() const { return this->codeSnippet_ != nullptr;};
      void deleteCodeSnippet() { this->codeSnippet_ = nullptr;};
      inline string getCodeSnippet() const { DARABONBA_PTR_GET_DEFAULT(codeSnippet_, "") };
      inline Items& setCodeSnippet(string codeSnippet) { DARABONBA_PTR_SET_VALUE(codeSnippet_, codeSnippet) };


      // confidence Field Functions 
      bool hasConfidence() const { return this->confidence_ != nullptr;};
      void deleteConfidence() { this->confidence_ = nullptr;};
      inline double getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
      inline Items& setConfidence(double confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // cweId Field Functions 
      bool hasCweId() const { return this->cweId_ != nullptr;};
      void deleteCweId() { this->cweId_ = nullptr;};
      inline string getCweId() const { DARABONBA_PTR_GET_DEFAULT(cweId_, "") };
      inline Items& setCweId(string cweId) { DARABONBA_PTR_SET_VALUE(cweId_, cweId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endLine Field Functions 
      bool hasEndLine() const { return this->endLine_ != nullptr;};
      void deleteEndLine() { this->endLine_ = nullptr;};
      inline int64_t getEndLine() const { DARABONBA_PTR_GET_DEFAULT(endLine_, 0L) };
      inline Items& setEndLine(int64_t endLine) { DARABONBA_PTR_SET_VALUE(endLine_, endLine) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Items& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // itemSummary Field Functions 
      bool hasItemSummary() const { return this->itemSummary_ != nullptr;};
      void deleteItemSummary() { this->itemSummary_ = nullptr;};
      inline string getItemSummary() const { DARABONBA_PTR_GET_DEFAULT(itemSummary_, "") };
      inline Items& setItemSummary(string itemSummary) { DARABONBA_PTR_SET_VALUE(itemSummary_, itemSummary) };


      // owaspCategory Field Functions 
      bool hasOwaspCategory() const { return this->owaspCategory_ != nullptr;};
      void deleteOwaspCategory() { this->owaspCategory_ = nullptr;};
      inline string getOwaspCategory() const { DARABONBA_PTR_GET_DEFAULT(owaspCategory_, "") };
      inline Items& setOwaspCategory(string owaspCategory) { DARABONBA_PTR_SET_VALUE(owaspCategory_, owaspCategory) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Items& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // remediationCodeExample Field Functions 
      bool hasRemediationCodeExample() const { return this->remediationCodeExample_ != nullptr;};
      void deleteRemediationCodeExample() { this->remediationCodeExample_ = nullptr;};
      inline string getRemediationCodeExample() const { DARABONBA_PTR_GET_DEFAULT(remediationCodeExample_, "") };
      inline Items& setRemediationCodeExample(string remediationCodeExample) { DARABONBA_PTR_SET_VALUE(remediationCodeExample_, remediationCodeExample) };


      // remediationSuggestion Field Functions 
      bool hasRemediationSuggestion() const { return this->remediationSuggestion_ != nullptr;};
      void deleteRemediationSuggestion() { this->remediationSuggestion_ = nullptr;};
      inline string getRemediationSuggestion() const { DARABONBA_PTR_GET_DEFAULT(remediationSuggestion_, "") };
      inline Items& setRemediationSuggestion(string remediationSuggestion) { DARABONBA_PTR_SET_VALUE(remediationSuggestion_, remediationSuggestion) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Items& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // scaComponent Field Functions 
      bool hasScaComponent() const { return this->scaComponent_ != nullptr;};
      void deleteScaComponent() { this->scaComponent_ = nullptr;};
      inline const Items::ScaComponent & getScaComponent() const { DARABONBA_PTR_GET_CONST(scaComponent_, Items::ScaComponent) };
      inline Items::ScaComponent getScaComponent() { DARABONBA_PTR_GET(scaComponent_, Items::ScaComponent) };
      inline Items& setScaComponent(const Items::ScaComponent & scaComponent) { DARABONBA_PTR_SET_VALUE(scaComponent_, scaComponent) };
      inline Items& setScaComponent(Items::ScaComponent && scaComponent) { DARABONBA_PTR_SET_RVALUE(scaComponent_, scaComponent) };


      // scanId Field Functions 
      bool hasScanId() const { return this->scanId_ != nullptr;};
      void deleteScanId() { this->scanId_ = nullptr;};
      inline int64_t getScanId() const { DARABONBA_PTR_GET_DEFAULT(scanId_, 0L) };
      inline Items& setScanId(int64_t scanId) { DARABONBA_PTR_SET_VALUE(scanId_, scanId) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline Items& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Items& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // startLine Field Functions 
      bool hasStartLine() const { return this->startLine_ != nullptr;};
      void deleteStartLine() { this->startLine_ = nullptr;};
      inline int64_t getStartLine() const { DARABONBA_PTR_GET_DEFAULT(startLine_, 0L) };
      inline Items& setStartLine(int64_t startLine) { DARABONBA_PTR_SET_VALUE(startLine_, startLine) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taintFlow Field Functions 
      bool hasTaintFlow() const { return this->taintFlow_ != nullptr;};
      void deleteTaintFlow() { this->taintFlow_ = nullptr;};
      inline const vector<Items::TaintFlow> & getTaintFlow() const { DARABONBA_PTR_GET_CONST(taintFlow_, vector<Items::TaintFlow>) };
      inline vector<Items::TaintFlow> getTaintFlow() { DARABONBA_PTR_GET(taintFlow_, vector<Items::TaintFlow>) };
      inline Items& setTaintFlow(const vector<Items::TaintFlow> & taintFlow) { DARABONBA_PTR_SET_VALUE(taintFlow_, taintFlow) };
      inline Items& setTaintFlow(vector<Items::TaintFlow> && taintFlow) { DARABONBA_PTR_SET_RVALUE(taintFlow_, taintFlow) };


      // taintFlowSummary Field Functions 
      bool hasTaintFlowSummary() const { return this->taintFlowSummary_ != nullptr;};
      void deleteTaintFlowSummary() { this->taintFlowSummary_ = nullptr;};
      inline string getTaintFlowSummary() const { DARABONBA_PTR_GET_DEFAULT(taintFlowSummary_, "") };
      inline Items& setTaintFlowSummary(string taintFlowSummary) { DARABONBA_PTR_SET_VALUE(taintFlowSummary_, taintFlowSummary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Items& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Filters results by incremental scan baseline status. Valid values: new, unchanged, absent, updated.
      shared_ptr<string> baselineState_ {};
      // The category. The system classifies files based on file name extensions and MIME types. Common categories include doc, image, audio, and video.
      shared_ptr<string> category_ {};
      // The code snippet near the primary location (SAST).
      shared_ptr<string> codeSnippet_ {};
      // The rule confidence level, ranging from 0 to 1. This field is common in SAST results and is omitted if not applicable.
      shared_ptr<double> confidence_ {};
      // The time when the finding record was created (RFC 3339 format).
      shared_ptr<string> createdAt_ {};
      // The associated CWE ID.
      shared_ptr<string> cweId_ {};
      // The issue description.
      shared_ptr<string> description_ {};
      // The end line number.
      shared_ptr<int64_t> endLine_ {};
      // The file path.
      shared_ptr<string> filePath_ {};
      // The project ID.
      shared_ptr<int64_t> id_ {};
      // The brief summary of the finding. Unlike description, this field is more of a conclusion statement.
      shared_ptr<string> itemSummary_ {};
      // The OWASP category.
      shared_ptr<string> owaspCategory_ {};
      // The project name.
      shared_ptr<string> projectName_ {};
      // The remediation code example.
      shared_ptr<string> remediationCodeExample_ {};
      // The remediation suggestion.
      shared_ptr<string> remediationSuggestion_ {};
      // The rule ID.
      shared_ptr<string> ruleId_ {};
      // The SCA component information. This field is returned only when engine is set to sca.
      shared_ptr<Items::ScaComponent> scaComponent_ {};
      // The task ID.
      shared_ptr<int64_t> scanId_ {};
      // The severity level. Valid values:
      // * critical 
      // * high 
      // * medium 
      // * low
      shared_ptr<string> severity_ {};
      // The source.
      shared_ptr<string> source_ {};
      // The start line number.
      shared_ptr<int64_t> startLine_ {};
      // The status. Valid values:
      // * running: Running.
      // * completed: Completed.
      // * failed: Failed.
      shared_ptr<string> status_ {};
      // The SAST taint analysis call chain that describes the complete propagation path of sensitive data from the taint source to the dangerous sink. This field is returned only when engine is set to sast.
      shared_ptr<vector<Items::TaintFlow>> taintFlow_ {};
      // The text summary of the taint call chain. This field is returned only when engine is set to sast.
      shared_ptr<string> taintFlowSummary_ {};
      // The issue title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->engine_ == nullptr
        && this->items_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->projectId_ == nullptr && this->requestId_ == nullptr
        && this->scanId_ == nullptr && this->totalCount_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeScanResultsByEngineResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeScanResultsByEngineResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeScanResultsByEngineResponseBody::Items>) };
    inline vector<DescribeScanResultsByEngineResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeScanResultsByEngineResponseBody::Items>) };
    inline DescribeScanResultsByEngineResponseBody& setItems(const vector<DescribeScanResultsByEngineResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeScanResultsByEngineResponseBody& setItems(vector<DescribeScanResultsByEngineResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeScanResultsByEngineResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeScanResultsByEngineResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DescribeScanResultsByEngineResponseBody& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScanResultsByEngineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scanId Field Functions 
    bool hasScanId() const { return this->scanId_ != nullptr;};
    void deleteScanId() { this->scanId_ = nullptr;};
    inline int64_t getScanId() const { DARABONBA_PTR_GET_DEFAULT(scanId_, 0L) };
    inline DescribeScanResultsByEngineResponseBody& setScanId(int64_t scanId) { DARABONBA_PTR_SET_VALUE(scanId_, scanId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeScanResultsByEngineResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The engine type. Valid values:
    // * sast
    // * sca
    shared_ptr<string> engine_ {};
    // The result list.
    shared_ptr<vector<DescribeScanResultsByEngineResponseBody::Items>> items_ {};
    // The number of entries per page.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token. Do not pass nextToken or pass an empty string for the first page. To retrieve the next page, pass the nextToken value from the previous response without any modification. When the nextToken in the response is empty, you have reached the last page.
    shared_ptr<string> nextToken_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The task ID.
    shared_ptr<int64_t> scanId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
