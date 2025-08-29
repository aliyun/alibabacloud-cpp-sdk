// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBFEATUREREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBFEATUREREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobFeatureReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobFeatureReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataPath, dataPath_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(ReportsOfFeatureDiff, reportsOfFeatureDiff_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobFeatureReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPath, dataPath_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(ReportsOfFeatureDiff, reportsOfFeatureDiff_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody() = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody(const ListFeatureConsistencyCheckJobFeatureReportsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody(ListFeatureConsistencyCheckJobFeatureReportsResponseBody &&) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobFeatureReportsResponseBody() = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody& operator=(const ListFeatureConsistencyCheckJobFeatureReportsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody& operator=(ListFeatureConsistencyCheckJobFeatureReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataPath_ != nullptr
        && this->ossPath_ != nullptr && this->reportsOfFeatureDiff_ != nullptr && this->requestId_ != nullptr; };
    // dataPath Field Functions 
    bool hasDataPath() const { return this->dataPath_ != nullptr;};
    void deleteDataPath() { this->dataPath_ = nullptr;};
    inline string dataPath() const { DARABONBA_PTR_GET_DEFAULT(dataPath_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setDataPath(string dataPath) { DARABONBA_PTR_SET_VALUE(dataPath_, dataPath) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string ossPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // reportsOfFeatureDiff Field Functions 
    bool hasReportsOfFeatureDiff() const { return this->reportsOfFeatureDiff_ != nullptr;};
    void deleteReportsOfFeatureDiff() { this->reportsOfFeatureDiff_ = nullptr;};
    inline const vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff> & reportsOfFeatureDiff() const { DARABONBA_PTR_GET_CONST(reportsOfFeatureDiff_, vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff>) };
    inline vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff> reportsOfFeatureDiff() { DARABONBA_PTR_GET(reportsOfFeatureDiff_, vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff>) };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setReportsOfFeatureDiff(const vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff> & reportsOfFeatureDiff) { DARABONBA_PTR_SET_VALUE(reportsOfFeatureDiff_, reportsOfFeatureDiff) };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setReportsOfFeatureDiff(vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff> && reportsOfFeatureDiff) { DARABONBA_PTR_SET_RVALUE(reportsOfFeatureDiff_, reportsOfFeatureDiff) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> dataPath_ = nullptr;
    std::shared_ptr<string> ossPath_ = nullptr;
    std::shared_ptr<vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff>> reportsOfFeatureDiff_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
