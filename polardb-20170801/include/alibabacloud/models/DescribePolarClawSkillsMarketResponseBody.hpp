// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLSMARKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWSKILLSMARKETRESPONSEBODY_HPP_
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
  class DescribePolarClawSkillsMarketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawSkillsMarketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillList, skillList_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawSkillsMarketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillList, skillList_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribePolarClawSkillsMarketResponseBody() = default ;
    DescribePolarClawSkillsMarketResponseBody(const DescribePolarClawSkillsMarketResponseBody &) = default ;
    DescribePolarClawSkillsMarketResponseBody(DescribePolarClawSkillsMarketResponseBody &&) = default ;
    DescribePolarClawSkillsMarketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawSkillsMarketResponseBody() = default ;
    DescribePolarClawSkillsMarketResponseBody& operator=(const DescribePolarClawSkillsMarketResponseBody &) = default ;
    DescribePolarClawSkillsMarketResponseBody& operator=(DescribePolarClawSkillsMarketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SkillList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillList& obj) { 
        DARABONBA_PTR_TO_JSON(AssessmentStatus, assessmentStatus_);
        DARABONBA_PTR_TO_JSON(DownloadCount, downloadCount_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, SkillList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssessmentStatus, assessmentStatus_);
        DARABONBA_PTR_FROM_JSON(DownloadCount, downloadCount_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
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
        && this->downloadCount_ == nullptr && this->skillName_ == nullptr && this->skillVersion_ == nullptr && this->summary_ == nullptr && this->tagList_ == nullptr
        && this->title_ == nullptr; };
      // assessmentStatus Field Functions 
      bool hasAssessmentStatus() const { return this->assessmentStatus_ != nullptr;};
      void deleteAssessmentStatus() { this->assessmentStatus_ = nullptr;};
      inline string getAssessmentStatus() const { DARABONBA_PTR_GET_DEFAULT(assessmentStatus_, "") };
      inline SkillList& setAssessmentStatus(string assessmentStatus) { DARABONBA_PTR_SET_VALUE(assessmentStatus_, assessmentStatus) };


      // downloadCount Field Functions 
      bool hasDownloadCount() const { return this->downloadCount_ != nullptr;};
      void deleteDownloadCount() { this->downloadCount_ = nullptr;};
      inline string getDownloadCount() const { DARABONBA_PTR_GET_DEFAULT(downloadCount_, "") };
      inline SkillList& setDownloadCount(string downloadCount) { DARABONBA_PTR_SET_VALUE(downloadCount_, downloadCount) };


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


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline SkillList& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<string> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
      inline vector<string> getTagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
      inline SkillList& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline SkillList& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SkillList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The assessment status.
      shared_ptr<string> assessmentStatus_ {};
      // The number of downloads.
      shared_ptr<string> downloadCount_ {};
      // The skill name.
      shared_ptr<string> skillName_ {};
      // The skill version.
      shared_ptr<string> skillVersion_ {};
      // The OpenAPI summary.
      shared_ptr<string> summary_ {};
      // The tag list.
      shared_ptr<vector<string>> tagList_ {};
      // The title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->skillList_ == nullptr && this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePolarClawSkillsMarketResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribePolarClawSkillsMarketResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarClawSkillsMarketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillList Field Functions 
    bool hasSkillList() const { return this->skillList_ != nullptr;};
    void deleteSkillList() { this->skillList_ = nullptr;};
    inline const vector<DescribePolarClawSkillsMarketResponseBody::SkillList> & getSkillList() const { DARABONBA_PTR_GET_CONST(skillList_, vector<DescribePolarClawSkillsMarketResponseBody::SkillList>) };
    inline vector<DescribePolarClawSkillsMarketResponseBody::SkillList> getSkillList() { DARABONBA_PTR_GET(skillList_, vector<DescribePolarClawSkillsMarketResponseBody::SkillList>) };
    inline DescribePolarClawSkillsMarketResponseBody& setSkillList(const vector<DescribePolarClawSkillsMarketResponseBody::SkillList> & skillList) { DARABONBA_PTR_SET_VALUE(skillList_, skillList) };
    inline DescribePolarClawSkillsMarketResponseBody& setSkillList(vector<DescribePolarClawSkillsMarketResponseBody::SkillList> && skillList) { DARABONBA_PTR_SET_RVALUE(skillList_, skillList) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribePolarClawSkillsMarketResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill list.
    shared_ptr<vector<DescribePolarClawSkillsMarketResponseBody::SkillList>> skillList_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
