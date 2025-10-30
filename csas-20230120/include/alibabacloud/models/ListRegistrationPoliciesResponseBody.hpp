// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRegistrationPoliciesResponseBodyPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListRegistrationPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistrationPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistrationPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListRegistrationPoliciesResponseBody() = default ;
    ListRegistrationPoliciesResponseBody(const ListRegistrationPoliciesResponseBody &) = default ;
    ListRegistrationPoliciesResponseBody(ListRegistrationPoliciesResponseBody &&) = default ;
    ListRegistrationPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistrationPoliciesResponseBody() = default ;
    ListRegistrationPoliciesResponseBody& operator=(const ListRegistrationPoliciesResponseBody &) = default ;
    ListRegistrationPoliciesResponseBody& operator=(ListRegistrationPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policies_ == nullptr
        && return this->requestId_ == nullptr && return this->totalNum_ == nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<ListRegistrationPoliciesResponseBodyPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ListRegistrationPoliciesResponseBodyPolicies>) };
    inline vector<ListRegistrationPoliciesResponseBodyPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<ListRegistrationPoliciesResponseBodyPolicies>) };
    inline ListRegistrationPoliciesResponseBody& setPolicies(const vector<ListRegistrationPoliciesResponseBodyPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListRegistrationPoliciesResponseBody& setPolicies(vector<ListRegistrationPoliciesResponseBodyPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRegistrationPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline string totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, "") };
    inline ListRegistrationPoliciesResponseBody& setTotalNum(string totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    std::shared_ptr<vector<ListRegistrationPoliciesResponseBodyPolicies>> policies_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
