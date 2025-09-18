// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListModelFeaturesResponseBodyModelFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListModelFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelFeatures, modelFeatures_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelFeatures, modelFeatures_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListModelFeaturesResponseBody() = default ;
    ListModelFeaturesResponseBody(const ListModelFeaturesResponseBody &) = default ;
    ListModelFeaturesResponseBody(ListModelFeaturesResponseBody &&) = default ;
    ListModelFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelFeaturesResponseBody() = default ;
    ListModelFeaturesResponseBody& operator=(const ListModelFeaturesResponseBody &) = default ;
    ListModelFeaturesResponseBody& operator=(ListModelFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->modelFeatures_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // modelFeatures Field Functions 
    bool hasModelFeatures() const { return this->modelFeatures_ != nullptr;};
    void deleteModelFeatures() { this->modelFeatures_ = nullptr;};
    inline const vector<ListModelFeaturesResponseBodyModelFeatures> & modelFeatures() const { DARABONBA_PTR_GET_CONST(modelFeatures_, vector<ListModelFeaturesResponseBodyModelFeatures>) };
    inline vector<ListModelFeaturesResponseBodyModelFeatures> modelFeatures() { DARABONBA_PTR_GET(modelFeatures_, vector<ListModelFeaturesResponseBodyModelFeatures>) };
    inline ListModelFeaturesResponseBody& setModelFeatures(const vector<ListModelFeaturesResponseBodyModelFeatures> & modelFeatures) { DARABONBA_PTR_SET_VALUE(modelFeatures_, modelFeatures) };
    inline ListModelFeaturesResponseBody& setModelFeatures(vector<ListModelFeaturesResponseBodyModelFeatures> && modelFeatures) { DARABONBA_PTR_SET_RVALUE(modelFeatures_, modelFeatures) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelFeaturesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListModelFeaturesResponseBodyModelFeatures>> modelFeatures_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
