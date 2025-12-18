// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOMMENDMANAGEDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOMMENDMANAGEDRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecommendManagedRulesResponseBodyRecommendedManagedRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRecommendManagedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecommendManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecommendedManagedRules, recommendedManagedRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecommendManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecommendedManagedRules, recommendedManagedRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecommendManagedRulesResponseBody() = default ;
    ListRecommendManagedRulesResponseBody(const ListRecommendManagedRulesResponseBody &) = default ;
    ListRecommendManagedRulesResponseBody(ListRecommendManagedRulesResponseBody &&) = default ;
    ListRecommendManagedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecommendManagedRulesResponseBody() = default ;
    ListRecommendManagedRulesResponseBody& operator=(const ListRecommendManagedRulesResponseBody &) = default ;
    ListRecommendManagedRulesResponseBody& operator=(ListRecommendManagedRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recommendedManagedRules_ == nullptr
        && return this->requestId_ == nullptr; };
    // recommendedManagedRules Field Functions 
    bool hasRecommendedManagedRules() const { return this->recommendedManagedRules_ != nullptr;};
    void deleteRecommendedManagedRules() { this->recommendedManagedRules_ = nullptr;};
    inline const ListRecommendManagedRulesResponseBodyRecommendedManagedRules & recommendedManagedRules() const { DARABONBA_PTR_GET_CONST(recommendedManagedRules_, ListRecommendManagedRulesResponseBodyRecommendedManagedRules) };
    inline ListRecommendManagedRulesResponseBodyRecommendedManagedRules recommendedManagedRules() { DARABONBA_PTR_GET(recommendedManagedRules_, ListRecommendManagedRulesResponseBodyRecommendedManagedRules) };
    inline ListRecommendManagedRulesResponseBody& setRecommendedManagedRules(const ListRecommendManagedRulesResponseBodyRecommendedManagedRules & recommendedManagedRules) { DARABONBA_PTR_SET_VALUE(recommendedManagedRules_, recommendedManagedRules) };
    inline ListRecommendManagedRulesResponseBody& setRecommendedManagedRules(ListRecommendManagedRulesResponseBodyRecommendedManagedRules && recommendedManagedRules) { DARABONBA_PTR_SET_RVALUE(recommendedManagedRules_, recommendedManagedRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecommendManagedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListRecommendManagedRulesResponseBodyRecommendedManagedRules> recommendedManagedRules_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
