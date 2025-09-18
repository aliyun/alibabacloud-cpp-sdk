// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTFEATUREVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTFEATUREVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectFeatureViewsResponseBodyFeatureViews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListProjectFeatureViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectFeatureViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViews, featureViews_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectFeatureViewsResponseBody() = default ;
    ListProjectFeatureViewsResponseBody(const ListProjectFeatureViewsResponseBody &) = default ;
    ListProjectFeatureViewsResponseBody(ListProjectFeatureViewsResponseBody &&) = default ;
    ListProjectFeatureViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectFeatureViewsResponseBody() = default ;
    ListProjectFeatureViewsResponseBody& operator=(const ListProjectFeatureViewsResponseBody &) = default ;
    ListProjectFeatureViewsResponseBody& operator=(ListProjectFeatureViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureViews_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // featureViews Field Functions 
    bool hasFeatureViews() const { return this->featureViews_ != nullptr;};
    void deleteFeatureViews() { this->featureViews_ = nullptr;};
    inline const vector<ListProjectFeatureViewsResponseBodyFeatureViews> & featureViews() const { DARABONBA_PTR_GET_CONST(featureViews_, vector<ListProjectFeatureViewsResponseBodyFeatureViews>) };
    inline vector<ListProjectFeatureViewsResponseBodyFeatureViews> featureViews() { DARABONBA_PTR_GET(featureViews_, vector<ListProjectFeatureViewsResponseBodyFeatureViews>) };
    inline ListProjectFeatureViewsResponseBody& setFeatureViews(const vector<ListProjectFeatureViewsResponseBodyFeatureViews> & featureViews) { DARABONBA_PTR_SET_VALUE(featureViews_, featureViews) };
    inline ListProjectFeatureViewsResponseBody& setFeatureViews(vector<ListProjectFeatureViewsResponseBodyFeatureViews> && featureViews) { DARABONBA_PTR_SET_RVALUE(featureViews_, featureViews) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectFeatureViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListProjectFeatureViewsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListProjectFeatureViewsResponseBodyFeatureViews>> featureViews_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
