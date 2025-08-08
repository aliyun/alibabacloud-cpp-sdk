// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODYCHECKRESULTSTATUSSQLREVIEWRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSRESPONSEBODYCHECKRESULTSTATUSSQLREVIEWRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& obj) { 
      DARABONBA_PTR_TO_JSON(MustImprove, mustImprove_);
      DARABONBA_PTR_TO_JSON(PotentialIssue, potentialIssue_);
      DARABONBA_PTR_TO_JSON(SuggestImprove, suggestImprove_);
      DARABONBA_PTR_TO_JSON(TableIndexSuggest, tableIndexSuggest_);
      DARABONBA_PTR_TO_JSON(UseDmsDmlUnlock, useDmsDmlUnlock_);
      DARABONBA_PTR_TO_JSON(UseDmsToolkit, useDmsToolkit_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MustImprove, mustImprove_);
      DARABONBA_PTR_FROM_JSON(PotentialIssue, potentialIssue_);
      DARABONBA_PTR_FROM_JSON(SuggestImprove, suggestImprove_);
      DARABONBA_PTR_FROM_JSON(TableIndexSuggest, tableIndexSuggest_);
      DARABONBA_PTR_FROM_JSON(UseDmsDmlUnlock, useDmsDmlUnlock_);
      DARABONBA_PTR_FROM_JSON(UseDmsToolkit, useDmsToolkit_);
    };
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult() = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult(const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult &) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult(GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult &&) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult() = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& operator=(const GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult &) = default ;
    GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& operator=(GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mustImprove_ != nullptr
        && this->potentialIssue_ != nullptr && this->suggestImprove_ != nullptr && this->tableIndexSuggest_ != nullptr && this->useDmsDmlUnlock_ != nullptr && this->useDmsToolkit_ != nullptr; };
    // mustImprove Field Functions 
    bool hasMustImprove() const { return this->mustImprove_ != nullptr;};
    void deleteMustImprove() { this->mustImprove_ = nullptr;};
    inline int64_t mustImprove() const { DARABONBA_PTR_GET_DEFAULT(mustImprove_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& setMustImprove(int64_t mustImprove) { DARABONBA_PTR_SET_VALUE(mustImprove_, mustImprove) };


    // potentialIssue Field Functions 
    bool hasPotentialIssue() const { return this->potentialIssue_ != nullptr;};
    void deletePotentialIssue() { this->potentialIssue_ = nullptr;};
    inline int64_t potentialIssue() const { DARABONBA_PTR_GET_DEFAULT(potentialIssue_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& setPotentialIssue(int64_t potentialIssue) { DARABONBA_PTR_SET_VALUE(potentialIssue_, potentialIssue) };


    // suggestImprove Field Functions 
    bool hasSuggestImprove() const { return this->suggestImprove_ != nullptr;};
    void deleteSuggestImprove() { this->suggestImprove_ = nullptr;};
    inline int64_t suggestImprove() const { DARABONBA_PTR_GET_DEFAULT(suggestImprove_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& setSuggestImprove(int64_t suggestImprove) { DARABONBA_PTR_SET_VALUE(suggestImprove_, suggestImprove) };


    // tableIndexSuggest Field Functions 
    bool hasTableIndexSuggest() const { return this->tableIndexSuggest_ != nullptr;};
    void deleteTableIndexSuggest() { this->tableIndexSuggest_ = nullptr;};
    inline int64_t tableIndexSuggest() const { DARABONBA_PTR_GET_DEFAULT(tableIndexSuggest_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& setTableIndexSuggest(int64_t tableIndexSuggest) { DARABONBA_PTR_SET_VALUE(tableIndexSuggest_, tableIndexSuggest) };


    // useDmsDmlUnlock Field Functions 
    bool hasUseDmsDmlUnlock() const { return this->useDmsDmlUnlock_ != nullptr;};
    void deleteUseDmsDmlUnlock() { this->useDmsDmlUnlock_ = nullptr;};
    inline int64_t useDmsDmlUnlock() const { DARABONBA_PTR_GET_DEFAULT(useDmsDmlUnlock_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& setUseDmsDmlUnlock(int64_t useDmsDmlUnlock) { DARABONBA_PTR_SET_VALUE(useDmsDmlUnlock_, useDmsDmlUnlock) };


    // useDmsToolkit Field Functions 
    bool hasUseDmsToolkit() const { return this->useDmsToolkit_ != nullptr;};
    void deleteUseDmsToolkit() { this->useDmsToolkit_ = nullptr;};
    inline int64_t useDmsToolkit() const { DARABONBA_PTR_GET_DEFAULT(useDmsToolkit_, 0L) };
    inline GetSQLReviewCheckResultStatusResponseBodyCheckResultStatusSQLReviewResult& setUseDmsToolkit(int64_t useDmsToolkit) { DARABONBA_PTR_SET_VALUE(useDmsToolkit_, useDmsToolkit) };


  protected:
    // The number of SQL statements that must be modified.
    std::shared_ptr<int64_t> mustImprove_ = nullptr;
    // The number of SQL statements that have potential issues.
    std::shared_ptr<int64_t> potentialIssue_ = nullptr;
    // The number of SQL statements that can be modified.
    std::shared_ptr<int64_t> suggestImprove_ = nullptr;
    // The number of SQL statements that can use indexes.
    std::shared_ptr<int64_t> tableIndexSuggest_ = nullptr;
    // The number of SQL statements that can be used for lock-free data changes.
    std::shared_ptr<int64_t> useDmsDmlUnlock_ = nullptr;
    // The number of SQL statements that can be used for lock-free schema changes.
    std::shared_ptr<int64_t> useDmsToolkit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
