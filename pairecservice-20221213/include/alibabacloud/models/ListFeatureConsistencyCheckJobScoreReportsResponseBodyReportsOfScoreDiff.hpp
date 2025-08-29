// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSRESPONSEBODYREPORTSOFSCOREDIFF_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSRESPONSEBODYREPORTSOFSCOREDIFF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& obj) { 
      DARABONBA_PTR_TO_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(ScoreDiff, scoreDiff_);
      DARABONBA_PTR_TO_JSON(ScoreDiffDetail, scoreDiffDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& obj) { 
      DARABONBA_PTR_FROM_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(ScoreDiff, scoreDiff_);
      DARABONBA_PTR_FROM_JSON(ScoreDiffDetail, scoreDiffDetail_);
    };
    ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff() = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff(const ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff &) = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff(ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff &&) = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff() = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& operator=(const ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff &) = default ;
    ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& operator=(ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logItemId_ != nullptr
        && this->logRequestId_ != nullptr && this->logUserId_ != nullptr && this->scoreDiff_ != nullptr && this->scoreDiffDetail_ != nullptr; };
    // logItemId Field Functions 
    bool hasLogItemId() const { return this->logItemId_ != nullptr;};
    void deleteLogItemId() { this->logItemId_ = nullptr;};
    inline string logItemId() const { DARABONBA_PTR_GET_DEFAULT(logItemId_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& setLogItemId(string logItemId) { DARABONBA_PTR_SET_VALUE(logItemId_, logItemId) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string logRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline string logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& setLogUserId(string logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // scoreDiff Field Functions 
    bool hasScoreDiff() const { return this->scoreDiff_ != nullptr;};
    void deleteScoreDiff() { this->scoreDiff_ = nullptr;};
    inline string scoreDiff() const { DARABONBA_PTR_GET_DEFAULT(scoreDiff_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& setScoreDiff(string scoreDiff) { DARABONBA_PTR_SET_VALUE(scoreDiff_, scoreDiff) };


    // scoreDiffDetail Field Functions 
    bool hasScoreDiffDetail() const { return this->scoreDiffDetail_ != nullptr;};
    void deleteScoreDiffDetail() { this->scoreDiffDetail_ = nullptr;};
    inline string scoreDiffDetail() const { DARABONBA_PTR_GET_DEFAULT(scoreDiffDetail_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff& setScoreDiffDetail(string scoreDiffDetail) { DARABONBA_PTR_SET_VALUE(scoreDiffDetail_, scoreDiffDetail) };


  protected:
    std::shared_ptr<string> logItemId_ = nullptr;
    std::shared_ptr<string> logRequestId_ = nullptr;
    std::shared_ptr<string> logUserId_ = nullptr;
    std::shared_ptr<string> scoreDiff_ = nullptr;
    std::shared_ptr<string> scoreDiffDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
