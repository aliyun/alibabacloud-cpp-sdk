// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLogAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Analyses, analyses_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Analyses, analyses_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLogAnalysisResponseBody() = default ;
    DescribeLogAnalysisResponseBody(const DescribeLogAnalysisResponseBody &) = default ;
    DescribeLogAnalysisResponseBody(DescribeLogAnalysisResponseBody &&) = default ;
    DescribeLogAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogAnalysisResponseBody() = default ;
    DescribeLogAnalysisResponseBody& operator=(const DescribeLogAnalysisResponseBody &) = default ;
    DescribeLogAnalysisResponseBody& operator=(DescribeLogAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Analyses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Analyses& obj) { 
        DARABONBA_PTR_TO_JSON(Analysis, analysis_);
      };
      friend void from_json(const Darabonba::Json& j, Analyses& obj) { 
        DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
      };
      Analyses() = default ;
      Analyses(const Analyses &) = default ;
      Analyses(Analyses &&) = default ;
      Analyses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Analyses() = default ;
      Analyses& operator=(const Analyses &) = default ;
      Analyses& operator=(Analyses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Analysis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Analysis& obj) { 
          DARABONBA_PTR_TO_JSON(MetaKey, metaKey_);
          DARABONBA_PTR_TO_JSON(MetaValue, metaValue_);
        };
        friend void from_json(const Darabonba::Json& j, Analysis& obj) { 
          DARABONBA_PTR_FROM_JSON(MetaKey, metaKey_);
          DARABONBA_PTR_FROM_JSON(MetaValue, metaValue_);
        };
        Analysis() = default ;
        Analysis(const Analysis &) = default ;
        Analysis(Analysis &&) = default ;
        Analysis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Analysis() = default ;
        Analysis& operator=(const Analysis &) = default ;
        Analysis& operator=(Analysis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MetaValue : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MetaValue& obj) { 
            DARABONBA_PTR_TO_JSON(Logstore, logstore_);
            DARABONBA_PTR_TO_JSON(Project, project_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
          };
          friend void from_json(const Darabonba::Json& j, MetaValue& obj) { 
            DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
            DARABONBA_PTR_FROM_JSON(Project, project_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
          };
          MetaValue() = default ;
          MetaValue(const MetaValue &) = default ;
          MetaValue(MetaValue &&) = default ;
          MetaValue(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MetaValue() = default ;
          MetaValue& operator=(const MetaValue &) = default ;
          MetaValue& operator=(MetaValue &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr && this->region_ == nullptr && this->roleArn_ == nullptr; };
          // logstore Field Functions 
          bool hasLogstore() const { return this->logstore_ != nullptr;};
          void deleteLogstore() { this->logstore_ = nullptr;};
          inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
          inline MetaValue& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


          // project Field Functions 
          bool hasProject() const { return this->project_ != nullptr;};
          void deleteProject() { this->project_ = nullptr;};
          inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
          inline MetaValue& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline MetaValue& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // roleArn Field Functions 
          bool hasRoleArn() const { return this->roleArn_ != nullptr;};
          void deleteRoleArn() { this->roleArn_ = nullptr;};
          inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
          inline MetaValue& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


        protected:
          // The name of the dedicated Logstore that is used to store NAS operation logs.
          shared_ptr<string> logstore_ {};
          // The name of the project where the dedicated Logstore resides.
          shared_ptr<string> project_ {};
          // The region where the dedicated Logstore resides.
          shared_ptr<string> region_ {};
          // The role that is used by NAS to access Simple Log Service.
          shared_ptr<string> roleArn_ {};
        };

        virtual bool empty() const override { return this->metaKey_ == nullptr
        && this->metaValue_ == nullptr; };
        // metaKey Field Functions 
        bool hasMetaKey() const { return this->metaKey_ != nullptr;};
        void deleteMetaKey() { this->metaKey_ = nullptr;};
        inline string getMetaKey() const { DARABONBA_PTR_GET_DEFAULT(metaKey_, "") };
        inline Analysis& setMetaKey(string metaKey) { DARABONBA_PTR_SET_VALUE(metaKey_, metaKey) };


        // metaValue Field Functions 
        bool hasMetaValue() const { return this->metaValue_ != nullptr;};
        void deleteMetaValue() { this->metaValue_ = nullptr;};
        inline const Analysis::MetaValue & getMetaValue() const { DARABONBA_PTR_GET_CONST(metaValue_, Analysis::MetaValue) };
        inline Analysis::MetaValue getMetaValue() { DARABONBA_PTR_GET(metaValue_, Analysis::MetaValue) };
        inline Analysis& setMetaValue(const Analysis::MetaValue & metaValue) { DARABONBA_PTR_SET_VALUE(metaValue_, metaValue) };
        inline Analysis& setMetaValue(Analysis::MetaValue && metaValue) { DARABONBA_PTR_SET_RVALUE(metaValue_, metaValue) };


      protected:
        // The ID of the file system.
        shared_ptr<string> metaKey_ {};
        // The log dump information of the file system.
        shared_ptr<Analysis::MetaValue> metaValue_ {};
      };

      virtual bool empty() const override { return this->analysis_ == nullptr; };
      // analysis Field Functions 
      bool hasAnalysis() const { return this->analysis_ != nullptr;};
      void deleteAnalysis() { this->analysis_ = nullptr;};
      inline const vector<Analyses::Analysis> & getAnalysis() const { DARABONBA_PTR_GET_CONST(analysis_, vector<Analyses::Analysis>) };
      inline vector<Analyses::Analysis> getAnalysis() { DARABONBA_PTR_GET(analysis_, vector<Analyses::Analysis>) };
      inline Analyses& setAnalysis(const vector<Analyses::Analysis> & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
      inline Analyses& setAnalysis(vector<Analyses::Analysis> && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


    protected:
      shared_ptr<vector<Analyses::Analysis>> analysis_ {};
    };

    virtual bool empty() const override { return this->analyses_ == nullptr
        && this->code_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // analyses Field Functions 
    bool hasAnalyses() const { return this->analyses_ != nullptr;};
    void deleteAnalyses() { this->analyses_ = nullptr;};
    inline const DescribeLogAnalysisResponseBody::Analyses & getAnalyses() const { DARABONBA_PTR_GET_CONST(analyses_, DescribeLogAnalysisResponseBody::Analyses) };
    inline DescribeLogAnalysisResponseBody::Analyses getAnalyses() { DARABONBA_PTR_GET(analyses_, DescribeLogAnalysisResponseBody::Analyses) };
    inline DescribeLogAnalysisResponseBody& setAnalyses(const DescribeLogAnalysisResponseBody::Analyses & analyses) { DARABONBA_PTR_SET_VALUE(analyses_, analyses) };
    inline DescribeLogAnalysisResponseBody& setAnalyses(DescribeLogAnalysisResponseBody::Analyses && analyses) { DARABONBA_PTR_SET_RVALUE(analyses_, analyses) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeLogAnalysisResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLogAnalysisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLogAnalysisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLogAnalysisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The collection of log dump information.
    shared_ptr<DescribeLogAnalysisResponseBody::Analyses> analyses_ {};
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of log dump entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of log dump entries in the region.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
