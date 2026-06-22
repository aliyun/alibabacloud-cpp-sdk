// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHAPTERSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_CHAPTERSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Summary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ChapterSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChapterSummary& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TitleID, titleID_);
    };
    friend void from_json(const Darabonba::Json& j, ChapterSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TitleID, titleID_);
    };
    ChapterSummary() = default ;
    ChapterSummary(const ChapterSummary &) = default ;
    ChapterSummary(ChapterSummary &&) = default ;
    ChapterSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChapterSummary() = default ;
    ChapterSummary& operator=(const ChapterSummary &) = default ;
    ChapterSummary& operator=(ChapterSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->summary_ == nullptr && this->timeRange_ == nullptr && this->title_ == nullptr && this->titleID_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ChapterSummary& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const vector<Summary> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, vector<Summary>) };
    inline vector<Summary> getSummary() { DARABONBA_PTR_GET(summary_, vector<Summary>) };
    inline ChapterSummary& setSummary(const vector<Summary> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline ChapterSummary& setSummary(vector<Summary> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const vector<int64_t> & getTimeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, vector<int64_t>) };
    inline vector<int64_t> getTimeRange() { DARABONBA_PTR_GET(timeRange_, vector<int64_t>) };
    inline ChapterSummary& setTimeRange(const vector<int64_t> & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline ChapterSummary& setTimeRange(vector<int64_t> && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ChapterSummary& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // titleID Field Functions 
    bool hasTitleID() const { return this->titleID_ != nullptr;};
    void deleteTitleID() { this->titleID_ = nullptr;};
    inline string getTitleID() const { DARABONBA_PTR_GET_DEFAULT(titleID_, "") };
    inline ChapterSummary& setTitleID(string titleID) { DARABONBA_PTR_SET_VALUE(titleID_, titleID) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<vector<Summary>> summary_ {};
    shared_ptr<vector<int64_t>> timeRange_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> titleID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
