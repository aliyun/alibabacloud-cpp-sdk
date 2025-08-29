// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckConfigs, featureConsistencyCheckConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckConfigs, featureConsistencyCheckConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFeatureConsistencyCheckJobConfigsResponseBody() = default ;
    ListFeatureConsistencyCheckJobConfigsResponseBody(const ListFeatureConsistencyCheckJobConfigsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobConfigsResponseBody(ListFeatureConsistencyCheckJobConfigsResponseBody &&) = default ;
    ListFeatureConsistencyCheckJobConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobConfigsResponseBody() = default ;
    ListFeatureConsistencyCheckJobConfigsResponseBody& operator=(const ListFeatureConsistencyCheckJobConfigsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobConfigsResponseBody& operator=(ListFeatureConsistencyCheckJobConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureConsistencyCheckConfigs_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // featureConsistencyCheckConfigs Field Functions 
    bool hasFeatureConsistencyCheckConfigs() const { return this->featureConsistencyCheckConfigs_ != nullptr;};
    void deleteFeatureConsistencyCheckConfigs() { this->featureConsistencyCheckConfigs_ = nullptr;};
    inline const vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs> & featureConsistencyCheckConfigs() const { DARABONBA_PTR_GET_CONST(featureConsistencyCheckConfigs_, vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs>) };
    inline vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs> featureConsistencyCheckConfigs() { DARABONBA_PTR_GET(featureConsistencyCheckConfigs_, vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs>) };
    inline ListFeatureConsistencyCheckJobConfigsResponseBody& setFeatureConsistencyCheckConfigs(const vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs> & featureConsistencyCheckConfigs) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckConfigs_, featureConsistencyCheckConfigs) };
    inline ListFeatureConsistencyCheckJobConfigsResponseBody& setFeatureConsistencyCheckConfigs(vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs> && featureConsistencyCheckConfigs) { DARABONBA_PTR_SET_RVALUE(featureConsistencyCheckConfigs_, featureConsistencyCheckConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureConsistencyCheckJobConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFeatureConsistencyCheckJobConfigsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListFeatureConsistencyCheckJobConfigsResponseBodyFeatureConsistencyCheckConfigs>> featureConsistencyCheckConfigs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
