// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatasourceFeatureViewsResponseBodyFeatureViews.hpp>
#include <alibabacloud/models/ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourceFeatureViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourceFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalUsageStatistics, totalUsageStatistics_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourceFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalUsageStatistics, totalUsageStatistics_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListDatasourceFeatureViewsResponseBody() = default ;
    ListDatasourceFeatureViewsResponseBody(const ListDatasourceFeatureViewsResponseBody &) = default ;
    ListDatasourceFeatureViewsResponseBody(ListDatasourceFeatureViewsResponseBody &&) = default ;
    ListDatasourceFeatureViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourceFeatureViewsResponseBody() = default ;
    ListDatasourceFeatureViewsResponseBody& operator=(const ListDatasourceFeatureViewsResponseBody &) = default ;
    ListDatasourceFeatureViewsResponseBody& operator=(ListDatasourceFeatureViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureViews_ == nullptr
        && return this->totalCount_ == nullptr && return this->totalUsageStatistics_ == nullptr && return this->requestId_ == nullptr; };
    // featureViews Field Functions 
    bool hasFeatureViews() const { return this->featureViews_ != nullptr;};
    void deleteFeatureViews() { this->featureViews_ = nullptr;};
    inline const vector<ListDatasourceFeatureViewsResponseBodyFeatureViews> & featureViews() const { DARABONBA_PTR_GET_CONST(featureViews_, vector<ListDatasourceFeatureViewsResponseBodyFeatureViews>) };
    inline vector<ListDatasourceFeatureViewsResponseBodyFeatureViews> featureViews() { DARABONBA_PTR_GET(featureViews_, vector<ListDatasourceFeatureViewsResponseBodyFeatureViews>) };
    inline ListDatasourceFeatureViewsResponseBody& setFeatureViews(const vector<ListDatasourceFeatureViewsResponseBodyFeatureViews> & featureViews) { DARABONBA_PTR_SET_VALUE(featureViews_, featureViews) };
    inline ListDatasourceFeatureViewsResponseBody& setFeatureViews(vector<ListDatasourceFeatureViewsResponseBodyFeatureViews> && featureViews) { DARABONBA_PTR_SET_RVALUE(featureViews_, featureViews) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatasourceFeatureViewsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalUsageStatistics Field Functions 
    bool hasTotalUsageStatistics() const { return this->totalUsageStatistics_ != nullptr;};
    void deleteTotalUsageStatistics() { this->totalUsageStatistics_ = nullptr;};
    inline const ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics & totalUsageStatistics() const { DARABONBA_PTR_GET_CONST(totalUsageStatistics_, ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics) };
    inline ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics totalUsageStatistics() { DARABONBA_PTR_GET(totalUsageStatistics_, ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics) };
    inline ListDatasourceFeatureViewsResponseBody& setTotalUsageStatistics(const ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics & totalUsageStatistics) { DARABONBA_PTR_SET_VALUE(totalUsageStatistics_, totalUsageStatistics) };
    inline ListDatasourceFeatureViewsResponseBody& setTotalUsageStatistics(ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics && totalUsageStatistics) { DARABONBA_PTR_SET_RVALUE(totalUsageStatistics_, totalUsageStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatasourceFeatureViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListDatasourceFeatureViewsResponseBodyFeatureViews>> featureViews_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics> totalUsageStatistics_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
