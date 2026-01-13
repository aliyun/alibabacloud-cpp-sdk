// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobScoreReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobScoreReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataPath, dataPath_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(ReportsOfScoreDiff, reportsOfScoreDiff_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobScoreReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPath, dataPath_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(ReportsOfScoreDiff, reportsOfScoreDiff_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFeatureConsistencyCheckJobScoreReportsResponseBody() = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBody(const ListFeatureConsistencyCheckJobScoreReportsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBody(ListFeatureConsistencyCheckJobScoreReportsResponseBody &&) = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobScoreReportsResponseBody() = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBody& operator=(const ListFeatureConsistencyCheckJobScoreReportsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBody& operator=(ListFeatureConsistencyCheckJobScoreReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportsOfScoreDiff : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportsOfScoreDiff& obj) { 
        DARABONBA_PTR_TO_JSON(LogItemId, logItemId_);
        DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
        DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
        DARABONBA_PTR_TO_JSON(ScoreDiff, scoreDiff_);
        DARABONBA_PTR_TO_JSON(ScoreDiffDetail, scoreDiffDetail_);
      };
      friend void from_json(const Darabonba::Json& j, ReportsOfScoreDiff& obj) { 
        DARABONBA_PTR_FROM_JSON(LogItemId, logItemId_);
        DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
        DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
        DARABONBA_PTR_FROM_JSON(ScoreDiff, scoreDiff_);
        DARABONBA_PTR_FROM_JSON(ScoreDiffDetail, scoreDiffDetail_);
      };
      ReportsOfScoreDiff() = default ;
      ReportsOfScoreDiff(const ReportsOfScoreDiff &) = default ;
      ReportsOfScoreDiff(ReportsOfScoreDiff &&) = default ;
      ReportsOfScoreDiff(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportsOfScoreDiff() = default ;
      ReportsOfScoreDiff& operator=(const ReportsOfScoreDiff &) = default ;
      ReportsOfScoreDiff& operator=(ReportsOfScoreDiff &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logItemId_ == nullptr
        && this->logRequestId_ == nullptr && this->logUserId_ == nullptr && this->scoreDiff_ == nullptr && this->scoreDiffDetail_ == nullptr; };
      // logItemId Field Functions 
      bool hasLogItemId() const { return this->logItemId_ != nullptr;};
      void deleteLogItemId() { this->logItemId_ = nullptr;};
      inline string getLogItemId() const { DARABONBA_PTR_GET_DEFAULT(logItemId_, "") };
      inline ReportsOfScoreDiff& setLogItemId(string logItemId) { DARABONBA_PTR_SET_VALUE(logItemId_, logItemId) };


      // logRequestId Field Functions 
      bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
      void deleteLogRequestId() { this->logRequestId_ = nullptr;};
      inline string getLogRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
      inline ReportsOfScoreDiff& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


      // logUserId Field Functions 
      bool hasLogUserId() const { return this->logUserId_ != nullptr;};
      void deleteLogUserId() { this->logUserId_ = nullptr;};
      inline string getLogUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, "") };
      inline ReportsOfScoreDiff& setLogUserId(string logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


      // scoreDiff Field Functions 
      bool hasScoreDiff() const { return this->scoreDiff_ != nullptr;};
      void deleteScoreDiff() { this->scoreDiff_ = nullptr;};
      inline string getScoreDiff() const { DARABONBA_PTR_GET_DEFAULT(scoreDiff_, "") };
      inline ReportsOfScoreDiff& setScoreDiff(string scoreDiff) { DARABONBA_PTR_SET_VALUE(scoreDiff_, scoreDiff) };


      // scoreDiffDetail Field Functions 
      bool hasScoreDiffDetail() const { return this->scoreDiffDetail_ != nullptr;};
      void deleteScoreDiffDetail() { this->scoreDiffDetail_ = nullptr;};
      inline string getScoreDiffDetail() const { DARABONBA_PTR_GET_DEFAULT(scoreDiffDetail_, "") };
      inline ReportsOfScoreDiff& setScoreDiffDetail(string scoreDiffDetail) { DARABONBA_PTR_SET_VALUE(scoreDiffDetail_, scoreDiffDetail) };


    protected:
      shared_ptr<string> logItemId_ {};
      shared_ptr<string> logRequestId_ {};
      shared_ptr<string> logUserId_ {};
      shared_ptr<string> scoreDiff_ {};
      shared_ptr<string> scoreDiffDetail_ {};
    };

    virtual bool empty() const override { return this->dataPath_ == nullptr
        && this->ossPath_ == nullptr && this->reportsOfScoreDiff_ == nullptr && this->requestId_ == nullptr; };
    // dataPath Field Functions 
    bool hasDataPath() const { return this->dataPath_ != nullptr;};
    void deleteDataPath() { this->dataPath_ = nullptr;};
    inline string getDataPath() const { DARABONBA_PTR_GET_DEFAULT(dataPath_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setDataPath(string dataPath) { DARABONBA_PTR_SET_VALUE(dataPath_, dataPath) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // reportsOfScoreDiff Field Functions 
    bool hasReportsOfScoreDiff() const { return this->reportsOfScoreDiff_ != nullptr;};
    void deleteReportsOfScoreDiff() { this->reportsOfScoreDiff_ = nullptr;};
    inline const vector<ListFeatureConsistencyCheckJobScoreReportsResponseBody::ReportsOfScoreDiff> & getReportsOfScoreDiff() const { DARABONBA_PTR_GET_CONST(reportsOfScoreDiff_, vector<ListFeatureConsistencyCheckJobScoreReportsResponseBody::ReportsOfScoreDiff>) };
    inline vector<ListFeatureConsistencyCheckJobScoreReportsResponseBody::ReportsOfScoreDiff> getReportsOfScoreDiff() { DARABONBA_PTR_GET(reportsOfScoreDiff_, vector<ListFeatureConsistencyCheckJobScoreReportsResponseBody::ReportsOfScoreDiff>) };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setReportsOfScoreDiff(const vector<ListFeatureConsistencyCheckJobScoreReportsResponseBody::ReportsOfScoreDiff> & reportsOfScoreDiff) { DARABONBA_PTR_SET_VALUE(reportsOfScoreDiff_, reportsOfScoreDiff) };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setReportsOfScoreDiff(vector<ListFeatureConsistencyCheckJobScoreReportsResponseBody::ReportsOfScoreDiff> && reportsOfScoreDiff) { DARABONBA_PTR_SET_RVALUE(reportsOfScoreDiff_, reportsOfScoreDiff) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> dataPath_ {};
    shared_ptr<string> ossPath_ {};
    shared_ptr<vector<ListFeatureConsistencyCheckJobScoreReportsResponseBody::ReportsOfScoreDiff>> reportsOfScoreDiff_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
