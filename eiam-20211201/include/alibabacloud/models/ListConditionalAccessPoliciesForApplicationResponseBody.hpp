// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConditionalAccessPoliciesForApplicationResponseBody() = default ;
    ListConditionalAccessPoliciesForApplicationResponseBody(const ListConditionalAccessPoliciesForApplicationResponseBody &) = default ;
    ListConditionalAccessPoliciesForApplicationResponseBody(ListConditionalAccessPoliciesForApplicationResponseBody &&) = default ;
    ListConditionalAccessPoliciesForApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForApplicationResponseBody() = default ;
    ListConditionalAccessPoliciesForApplicationResponseBody& operator=(const ListConditionalAccessPoliciesForApplicationResponseBody &) = default ;
    ListConditionalAccessPoliciesForApplicationResponseBody& operator=(ListConditionalAccessPoliciesForApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionalAccessPolicies_ == nullptr
        && return this->requestId_ == nullptr; };
    // conditionalAccessPolicies Field Functions 
    bool hasConditionalAccessPolicies() const { return this->conditionalAccessPolicies_ != nullptr;};
    void deleteConditionalAccessPolicies() { this->conditionalAccessPolicies_ = nullptr;};
    inline const vector<ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPolicies> & conditionalAccessPolicies() const { DARABONBA_PTR_GET_CONST(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPolicies>) };
    inline vector<ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPolicies> conditionalAccessPolicies() { DARABONBA_PTR_GET(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPolicies>) };
    inline ListConditionalAccessPoliciesForApplicationResponseBody& setConditionalAccessPolicies(const vector<ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPolicies> & conditionalAccessPolicies) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };
    inline ListConditionalAccessPoliciesForApplicationResponseBody& setConditionalAccessPolicies(vector<ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPolicies> && conditionalAccessPolicies) { DARABONBA_PTR_SET_RVALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConditionalAccessPoliciesForApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPolicies>> conditionalAccessPolicies_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
