// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREENTITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFeatureEntitiesResponseBodyFeatureEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureEntities, featureEntities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureEntities, featureEntities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFeatureEntitiesResponseBody() = default ;
    ListFeatureEntitiesResponseBody(const ListFeatureEntitiesResponseBody &) = default ;
    ListFeatureEntitiesResponseBody(ListFeatureEntitiesResponseBody &&) = default ;
    ListFeatureEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureEntitiesResponseBody() = default ;
    ListFeatureEntitiesResponseBody& operator=(const ListFeatureEntitiesResponseBody &) = default ;
    ListFeatureEntitiesResponseBody& operator=(ListFeatureEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureEntities_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // featureEntities Field Functions 
    bool hasFeatureEntities() const { return this->featureEntities_ != nullptr;};
    void deleteFeatureEntities() { this->featureEntities_ = nullptr;};
    inline const vector<ListFeatureEntitiesResponseBodyFeatureEntities> & featureEntities() const { DARABONBA_PTR_GET_CONST(featureEntities_, vector<ListFeatureEntitiesResponseBodyFeatureEntities>) };
    inline vector<ListFeatureEntitiesResponseBodyFeatureEntities> featureEntities() { DARABONBA_PTR_GET(featureEntities_, vector<ListFeatureEntitiesResponseBodyFeatureEntities>) };
    inline ListFeatureEntitiesResponseBody& setFeatureEntities(const vector<ListFeatureEntitiesResponseBodyFeatureEntities> & featureEntities) { DARABONBA_PTR_SET_VALUE(featureEntities_, featureEntities) };
    inline ListFeatureEntitiesResponseBody& setFeatureEntities(vector<ListFeatureEntitiesResponseBodyFeatureEntities> && featureEntities) { DARABONBA_PTR_SET_RVALUE(featureEntities_, featureEntities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFeatureEntitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListFeatureEntitiesResponseBodyFeatureEntities>> featureEntities_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
