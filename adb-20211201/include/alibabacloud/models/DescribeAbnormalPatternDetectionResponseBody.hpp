// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABNORMALPATTERNDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABNORMALPATTERNDETECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAbnormalPatternDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbnormalPatternDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbnormalPatternDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAbnormalPatternDetectionResponseBody() = default ;
    DescribeAbnormalPatternDetectionResponseBody(const DescribeAbnormalPatternDetectionResponseBody &) = default ;
    DescribeAbnormalPatternDetectionResponseBody(DescribeAbnormalPatternDetectionResponseBody &&) = default ;
    DescribeAbnormalPatternDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbnormalPatternDetectionResponseBody() = default ;
    DescribeAbnormalPatternDetectionResponseBody& operator=(const DescribeAbnormalPatternDetectionResponseBody &) = default ;
    DescribeAbnormalPatternDetectionResponseBody& operator=(DescribeAbnormalPatternDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectionItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectionItems& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Results, results_);
      };
      friend void from_json(const Darabonba::Json& j, DetectionItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
      };
      DetectionItems() = default ;
      DetectionItems(const DetectionItems &) = default ;
      DetectionItems(DetectionItems &&) = default ;
      DetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectionItems() = default ;
      DetectionItems& operator=(const DetectionItems &) = default ;
      DetectionItems& operator=(DetectionItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
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
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessIp_ == nullptr
        && this->detail_ == nullptr && this->failedCount_ == nullptr && this->patternId_ == nullptr && this->queryCount_ == nullptr && this->relatedMetrics_ == nullptr
        && this->SQLPattern_ == nullptr && this->tables_ == nullptr && this->user_ == nullptr; };
        // accessIp Field Functions 
        bool hasAccessIp() const { return this->accessIp_ != nullptr;};
        void deleteAccessIp() { this->accessIp_ = nullptr;};
        inline string getAccessIp() const { DARABONBA_PTR_GET_DEFAULT(accessIp_, "") };
        inline Results& setAccessIp(string accessIp) { DARABONBA_PTR_SET_VALUE(accessIp_, accessIp) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline Results& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // failedCount Field Functions 
        bool hasFailedCount() const { return this->failedCount_ != nullptr;};
        void deleteFailedCount() { this->failedCount_ = nullptr;};
        inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
        inline Results& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


        // patternId Field Functions 
        bool hasPatternId() const { return this->patternId_ != nullptr;};
        void deletePatternId() { this->patternId_ = nullptr;};
        inline string getPatternId() const { DARABONBA_PTR_GET_DEFAULT(patternId_, "") };
        inline Results& setPatternId(string patternId) { DARABONBA_PTR_SET_VALUE(patternId_, patternId) };


        // queryCount Field Functions 
        bool hasQueryCount() const { return this->queryCount_ != nullptr;};
        void deleteQueryCount() { this->queryCount_ = nullptr;};
        inline int64_t getQueryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0L) };
        inline Results& setQueryCount(int64_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


        // relatedMetrics Field Functions 
        bool hasRelatedMetrics() const { return this->relatedMetrics_ != nullptr;};
        void deleteRelatedMetrics() { this->relatedMetrics_ = nullptr;};
        inline string getRelatedMetrics() const { DARABONBA_PTR_GET_DEFAULT(relatedMetrics_, "") };
        inline Results& setRelatedMetrics(string relatedMetrics) { DARABONBA_PTR_SET_VALUE(relatedMetrics_, relatedMetrics) };


        // SQLPattern Field Functions 
        bool hasSQLPattern() const { return this->SQLPattern_ != nullptr;};
        void deleteSQLPattern() { this->SQLPattern_ = nullptr;};
        inline string getSQLPattern() const { DARABONBA_PTR_GET_DEFAULT(SQLPattern_, "") };
        inline Results& setSQLPattern(string SQLPattern) { DARABONBA_PTR_SET_VALUE(SQLPattern_, SQLPattern) };


        // tables Field Functions 
        bool hasTables() const { return this->tables_ != nullptr;};
        void deleteTables() { this->tables_ = nullptr;};
        inline string getTables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
        inline Results& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline Results& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // The IP address of the SQL client that submits the SQL pattern.
        shared_ptr<string> accessIp_ {};
        // The description of the detection result.
        shared_ptr<string> detail_ {};
        // The number of failed SQL patterns within the time range.
        shared_ptr<int64_t> failedCount_ {};
        // The SQL pattern ID.
        shared_ptr<string> patternId_ {};
        // The number of queries.
        shared_ptr<int64_t> queryCount_ {};
        // The metrics related to the SQL pattern.
        shared_ptr<string> relatedMetrics_ {};
        // The SQL statement that represents the SQL pattern.
        shared_ptr<string> SQLPattern_ {};
        // The names of tables.
        shared_ptr<string> tables_ {};
        // The name of the database account that is used to submit the query.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->results_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<DetectionItems::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DetectionItems::Results>) };
      inline vector<DetectionItems::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DetectionItems::Results>) };
      inline DetectionItems& setResults(const vector<DetectionItems::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline DetectionItems& setResults(vector<DetectionItems::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    protected:
      // The name of the detection item.
      shared_ptr<string> name_ {};
      // The detection result items.
      shared_ptr<vector<DetectionItems::Results>> results_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->detectionItems_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAbnormalPatternDetectionResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeAbnormalPatternDetectionResponseBody::DetectionItems> & getDetectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeAbnormalPatternDetectionResponseBody::DetectionItems>) };
    inline vector<DescribeAbnormalPatternDetectionResponseBody::DetectionItems> getDetectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeAbnormalPatternDetectionResponseBody::DetectionItems>) };
    inline DescribeAbnormalPatternDetectionResponseBody& setDetectionItems(const vector<DescribeAbnormalPatternDetectionResponseBody::DetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeAbnormalPatternDetectionResponseBody& setDetectionItems(vector<DescribeAbnormalPatternDetectionResponseBody::DetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAbnormalPatternDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeAbnormalPatternDetectionResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried detection items and detection results.
    shared_ptr<vector<DescribeAbnormalPatternDetectionResponseBody::DetectionItems>> detectionItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
