// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODYSTRUCTSYNCJOBANALYZERESULTSUMMARYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCJOBANALYZERESULTRESPONSEBODYSTRUCTSYNCJOBANALYZERESULTSUMMARYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList& obj) { 
      DARABONBA_PTR_TO_JSON(CompareType, compareType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompareType, compareType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList() = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList(const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList &) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList(GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList &&) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList() = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList& operator=(const GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList &) = default ;
    GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList& operator=(GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->compareType_ != nullptr
        && this->count_ != nullptr; };
    // compareType Field Functions 
    bool hasCompareType() const { return this->compareType_ != nullptr;};
    void deleteCompareType() { this->compareType_ = nullptr;};
    inline string compareType() const { DARABONBA_PTR_GET_DEFAULT(compareType_, "") };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList& setCompareType(string compareType) { DARABONBA_PTR_SET_VALUE(compareType_, compareType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The type of the comparison. Valid values:
    // 
    // *   **CREATE_TABLE**: compares the created tables.
    // *   **ALTER_TABLE**: compares the modified tables.
    // *   **EQUAL_TABLE**: compares the identical tables.
    // *   **PASS_TABLE**: compares the tables that are skipped during schema synchronization.
    // *   **NOT_COMPARE**: does not compare tables.
    std::shared_ptr<string> compareType_ = nullptr;
    // The number of tables.
    std::shared_ptr<int64_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
