// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABNORMALPATTERNDETECTIONRESPONSEBODYDETECTIONITEMSRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABNORMALPATTERNDETECTIONRESPONSEBODYDETECTIONITEMSRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& obj) { 
      DARABONBA_PTR_TO_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(PatternId, patternId_);
      DARABONBA_PTR_TO_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_TO_JSON(RelatedMetrics, relatedMetrics_);
      DARABONBA_PTR_TO_JSON(SQLPattern, SQLPattern_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessIp, accessIp_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(PatternId, patternId_);
      DARABONBA_PTR_FROM_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_FROM_JSON(RelatedMetrics, relatedMetrics_);
      DARABONBA_PTR_FROM_JSON(SQLPattern, SQLPattern_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults() = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults(const DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults &) = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults(DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults &&) = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults() = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& operator=(const DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults &) = default ;
    DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& operator=(DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessIp_ == nullptr
        && return this->detail_ == nullptr && return this->failedCount_ == nullptr && return this->patternId_ == nullptr && return this->queryCount_ == nullptr && return this->relatedMetrics_ == nullptr
        && return this->SQLPattern_ == nullptr && return this->tables_ == nullptr && return this->user_ == nullptr; };
    // accessIp Field Functions 
    bool hasAccessIp() const { return this->accessIp_ != nullptr;};
    void deleteAccessIp() { this->accessIp_ = nullptr;};
    inline string accessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // patternId Field Functions 
    bool hasPatternId() const { return this->patternId_ != nullptr;};
    void deletePatternId() { this->patternId_ = nullptr;};
    inline string patternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


    // queryCount Field Functions 
    bool hasQueryCount() const { return this->queryCount_ != nullptr;};
    void deleteQueryCount() { this->queryCount_ = nullptr;};
    inline int64_t queryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0L) };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setQueryCount(int64_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


    // relatedMetrics Field Functions 
    bool hasRelatedMetrics() const { return this->relatedMetrics_ != nullptr;};
    void deleteRelatedMetrics() { this->relatedMetrics_ = nullptr;};
    inline string relatedMetrics() const { DARABONBA_PTR_GET_DEFAULT(relatedMetrics_, "") };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setRelatedMetrics(string relatedMetrics) { DARABONBA_PTR_SET_VALUE(relatedMetrics_, relatedMetrics) };


    // SQLPattern Field Functions 
    bool hasSQLPattern() const { return this->SQLPattern_ != nullptr;};
    void deleteSQLPattern() { this->SQLPattern_ = nullptr;};
    inline string SQLPattern() const { DARABONBA_PTR_GET_DEFAULT(SQLPattern_, "") };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setSQLPattern(string SQLPattern) { DARABONBA_PTR_SET_VALUE(SQLPattern_, SQLPattern) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline string tables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeAbnormalPatternDetectionResponseBodyDetectionItemsResults& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The IP address of the SQL client that submits the SQL pattern.
    std::shared_ptr<string> accessIp_ = nullptr;
    // The description of the detection result.
    std::shared_ptr<string> detail_ = nullptr;
    // The number of failed SQL patterns within the time range.
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    // The SQL pattern ID.
    std::shared_ptr<string> patternId_ = nullptr;
    // The number of queries.
    std::shared_ptr<int64_t> queryCount_ = nullptr;
    // The metrics related to the SQL pattern.
    std::shared_ptr<string> relatedMetrics_ = nullptr;
    // The SQL statement that represents the SQL pattern.
    std::shared_ptr<string> SQLPattern_ = nullptr;
    // The names of tables.
    std::shared_ptr<string> tables_ = nullptr;
    // The name of the database account that is used to submit the query.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
