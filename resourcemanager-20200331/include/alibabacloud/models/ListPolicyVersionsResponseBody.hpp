// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPolicyVersionsResponseBodyPolicyVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPolicyVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyVersions, policyVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyVersions, policyVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPolicyVersionsResponseBody() = default ;
    ListPolicyVersionsResponseBody(const ListPolicyVersionsResponseBody &) = default ;
    ListPolicyVersionsResponseBody(ListPolicyVersionsResponseBody &&) = default ;
    ListPolicyVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyVersionsResponseBody() = default ;
    ListPolicyVersionsResponseBody& operator=(const ListPolicyVersionsResponseBody &) = default ;
    ListPolicyVersionsResponseBody& operator=(ListPolicyVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyVersions_ == nullptr
        && return this->requestId_ == nullptr; };
    // policyVersions Field Functions 
    bool hasPolicyVersions() const { return this->policyVersions_ != nullptr;};
    void deletePolicyVersions() { this->policyVersions_ = nullptr;};
    inline const ListPolicyVersionsResponseBodyPolicyVersions & policyVersions() const { DARABONBA_PTR_GET_CONST(policyVersions_, ListPolicyVersionsResponseBodyPolicyVersions) };
    inline ListPolicyVersionsResponseBodyPolicyVersions policyVersions() { DARABONBA_PTR_GET(policyVersions_, ListPolicyVersionsResponseBodyPolicyVersions) };
    inline ListPolicyVersionsResponseBody& setPolicyVersions(const ListPolicyVersionsResponseBodyPolicyVersions & policyVersions) { DARABONBA_PTR_SET_VALUE(policyVersions_, policyVersions) };
    inline ListPolicyVersionsResponseBody& setPolicyVersions(ListPolicyVersionsResponseBodyPolicyVersions && policyVersions) { DARABONBA_PTR_SET_RVALUE(policyVersions_, policyVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicyVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the policy version.
    std::shared_ptr<ListPolicyVersionsResponseBodyPolicyVersions> policyVersions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
