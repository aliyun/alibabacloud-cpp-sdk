// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConditionalAccessPoliciesForUserResponseBody() = default ;
    ListConditionalAccessPoliciesForUserResponseBody(const ListConditionalAccessPoliciesForUserResponseBody &) = default ;
    ListConditionalAccessPoliciesForUserResponseBody(ListConditionalAccessPoliciesForUserResponseBody &&) = default ;
    ListConditionalAccessPoliciesForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForUserResponseBody() = default ;
    ListConditionalAccessPoliciesForUserResponseBody& operator=(const ListConditionalAccessPoliciesForUserResponseBody &) = default ;
    ListConditionalAccessPoliciesForUserResponseBody& operator=(ListConditionalAccessPoliciesForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionalAccessPolicies_ == nullptr
        && return this->requestId_ == nullptr; };
    // conditionalAccessPolicies Field Functions 
    bool hasConditionalAccessPolicies() const { return this->conditionalAccessPolicies_ != nullptr;};
    void deleteConditionalAccessPolicies() { this->conditionalAccessPolicies_ = nullptr;};
    inline const vector<ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies> & conditionalAccessPolicies() const { DARABONBA_PTR_GET_CONST(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies>) };
    inline vector<ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies> conditionalAccessPolicies() { DARABONBA_PTR_GET(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies>) };
    inline ListConditionalAccessPoliciesForUserResponseBody& setConditionalAccessPolicies(const vector<ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies> & conditionalAccessPolicies) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };
    inline ListConditionalAccessPoliciesForUserResponseBody& setConditionalAccessPolicies(vector<ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies> && conditionalAccessPolicies) { DARABONBA_PTR_SET_RVALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies>> conditionalAccessPolicies_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
