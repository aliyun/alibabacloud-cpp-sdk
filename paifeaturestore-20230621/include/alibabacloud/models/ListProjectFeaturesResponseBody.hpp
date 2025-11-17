// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectFeaturesResponseBodyFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListProjectFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListProjectFeaturesResponseBody() = default ;
    ListProjectFeaturesResponseBody(const ListProjectFeaturesResponseBody &) = default ;
    ListProjectFeaturesResponseBody(ListProjectFeaturesResponseBody &&) = default ;
    ListProjectFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectFeaturesResponseBody() = default ;
    ListProjectFeaturesResponseBody& operator=(const ListProjectFeaturesResponseBody &) = default ;
    ListProjectFeaturesResponseBody& operator=(ListProjectFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->features_ == nullptr
        && return this->totalCount_ == nullptr && return this->requestId_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<ListProjectFeaturesResponseBodyFeatures> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<ListProjectFeaturesResponseBodyFeatures>) };
    inline vector<ListProjectFeaturesResponseBodyFeatures> features() { DARABONBA_PTR_GET(features_, vector<ListProjectFeaturesResponseBodyFeatures>) };
    inline ListProjectFeaturesResponseBody& setFeatures(const vector<ListProjectFeaturesResponseBodyFeatures> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ListProjectFeaturesResponseBody& setFeatures(vector<ListProjectFeaturesResponseBodyFeatures> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProjectFeaturesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListProjectFeaturesResponseBodyFeatures>> features_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
