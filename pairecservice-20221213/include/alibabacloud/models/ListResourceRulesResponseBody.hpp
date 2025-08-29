// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceRulesResponseBodyResourceRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListResourceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRules, resourceRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRules, resourceRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResourceRulesResponseBody() = default ;
    ListResourceRulesResponseBody(const ListResourceRulesResponseBody &) = default ;
    ListResourceRulesResponseBody(ListResourceRulesResponseBody &&) = default ;
    ListResourceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceRulesResponseBody() = default ;
    ListResourceRulesResponseBody& operator=(const ListResourceRulesResponseBody &) = default ;
    ListResourceRulesResponseBody& operator=(ListResourceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceRules_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRules Field Functions 
    bool hasResourceRules() const { return this->resourceRules_ != nullptr;};
    void deleteResourceRules() { this->resourceRules_ = nullptr;};
    inline const vector<ListResourceRulesResponseBodyResourceRules> & resourceRules() const { DARABONBA_PTR_GET_CONST(resourceRules_, vector<ListResourceRulesResponseBodyResourceRules>) };
    inline vector<ListResourceRulesResponseBodyResourceRules> resourceRules() { DARABONBA_PTR_GET(resourceRules_, vector<ListResourceRulesResponseBodyResourceRules>) };
    inline ListResourceRulesResponseBody& setResourceRules(const vector<ListResourceRulesResponseBodyResourceRules> & resourceRules) { DARABONBA_PTR_SET_VALUE(resourceRules_, resourceRules) };
    inline ListResourceRulesResponseBody& setResourceRules(vector<ListResourceRulesResponseBodyResourceRules> && resourceRules) { DARABONBA_PTR_SET_RVALUE(resourceRules_, resourceRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListResourceRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListResourceRulesResponseBodyResourceRules>> resourceRules_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
