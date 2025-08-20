// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATEPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATEPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEnterpriseAcceleratePoliciesResponseBodyPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAcceleratePoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAcceleratePoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAcceleratePoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEnterpriseAcceleratePoliciesResponseBody() = default ;
    ListEnterpriseAcceleratePoliciesResponseBody(const ListEnterpriseAcceleratePoliciesResponseBody &) = default ;
    ListEnterpriseAcceleratePoliciesResponseBody(ListEnterpriseAcceleratePoliciesResponseBody &&) = default ;
    ListEnterpriseAcceleratePoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAcceleratePoliciesResponseBody() = default ;
    ListEnterpriseAcceleratePoliciesResponseBody& operator=(const ListEnterpriseAcceleratePoliciesResponseBody &) = default ;
    ListEnterpriseAcceleratePoliciesResponseBody& operator=(ListEnterpriseAcceleratePoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policies_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<ListEnterpriseAcceleratePoliciesResponseBodyPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ListEnterpriseAcceleratePoliciesResponseBodyPolicies>) };
    inline vector<ListEnterpriseAcceleratePoliciesResponseBodyPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<ListEnterpriseAcceleratePoliciesResponseBodyPolicies>) };
    inline ListEnterpriseAcceleratePoliciesResponseBody& setPolicies(const vector<ListEnterpriseAcceleratePoliciesResponseBodyPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListEnterpriseAcceleratePoliciesResponseBody& setPolicies(vector<ListEnterpriseAcceleratePoliciesResponseBodyPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListEnterpriseAcceleratePoliciesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListEnterpriseAcceleratePoliciesResponseBodyPolicies>> policies_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
