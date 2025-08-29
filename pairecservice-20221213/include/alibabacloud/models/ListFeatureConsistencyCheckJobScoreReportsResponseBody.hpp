// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBSCOREREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff.hpp>
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
    virtual bool empty() const override { this->dataPath_ != nullptr
        && this->ossPath_ != nullptr && this->reportsOfScoreDiff_ != nullptr && this->requestId_ != nullptr; };
    // dataPath Field Functions 
    bool hasDataPath() const { return this->dataPath_ != nullptr;};
    void deleteDataPath() { this->dataPath_ = nullptr;};
    inline string dataPath() const { DARABONBA_PTR_GET_DEFAULT(dataPath_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setDataPath(string dataPath) { DARABONBA_PTR_SET_VALUE(dataPath_, dataPath) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // reportsOfScoreDiff Field Functions 
    bool hasReportsOfScoreDiff() const { return this->reportsOfScoreDiff_ != nullptr;};
    void deleteReportsOfScoreDiff() { this->reportsOfScoreDiff_ = nullptr;};
    inline const vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff> & reportsOfScoreDiff() const { DARABONBA_PTR_GET_CONST(reportsOfScoreDiff_, vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff>) };
    inline vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff> reportsOfScoreDiff() { DARABONBA_PTR_GET(reportsOfScoreDiff_, vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff>) };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setReportsOfScoreDiff(const vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff> & reportsOfScoreDiff) { DARABONBA_PTR_SET_VALUE(reportsOfScoreDiff_, reportsOfScoreDiff) };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setReportsOfScoreDiff(vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff> && reportsOfScoreDiff) { DARABONBA_PTR_SET_RVALUE(reportsOfScoreDiff_, reportsOfScoreDiff) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureConsistencyCheckJobScoreReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> dataPath_ = nullptr;
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<vector<ListFeatureConsistencyCheckJobScoreReportsResponseBodyReportsOfScoreDiff>> reportsOfScoreDiff_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
