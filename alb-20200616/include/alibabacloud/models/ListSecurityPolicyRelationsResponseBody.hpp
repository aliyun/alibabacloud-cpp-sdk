// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICYRELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListSecurityPolicyRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPolicyRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecrityPolicyRelations, secrityPolicyRelations_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPolicyRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecrityPolicyRelations, secrityPolicyRelations_);
    };
    ListSecurityPolicyRelationsResponseBody() = default ;
    ListSecurityPolicyRelationsResponseBody(const ListSecurityPolicyRelationsResponseBody &) = default ;
    ListSecurityPolicyRelationsResponseBody(ListSecurityPolicyRelationsResponseBody &&) = default ;
    ListSecurityPolicyRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPolicyRelationsResponseBody() = default ;
    ListSecurityPolicyRelationsResponseBody& operator=(const ListSecurityPolicyRelationsResponseBody &) = default ;
    ListSecurityPolicyRelationsResponseBody& operator=(ListSecurityPolicyRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->secrityPolicyRelations_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecurityPolicyRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secrityPolicyRelations Field Functions 
    bool hasSecrityPolicyRelations() const { return this->secrityPolicyRelations_ != nullptr;};
    void deleteSecrityPolicyRelations() { this->secrityPolicyRelations_ = nullptr;};
    inline const vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations> & secrityPolicyRelations() const { DARABONBA_PTR_GET_CONST(secrityPolicyRelations_, vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations>) };
    inline vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations> secrityPolicyRelations() { DARABONBA_PTR_GET(secrityPolicyRelations_, vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations>) };
    inline ListSecurityPolicyRelationsResponseBody& setSecrityPolicyRelations(const vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations> & secrityPolicyRelations) { DARABONBA_PTR_SET_VALUE(secrityPolicyRelations_, secrityPolicyRelations) };
    inline ListSecurityPolicyRelationsResponseBody& setSecrityPolicyRelations(vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations> && secrityPolicyRelations) { DARABONBA_PTR_SET_RVALUE(secrityPolicyRelations_, secrityPolicyRelations) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The security policies and the listeners that are associated with the security policies.
    std::shared_ptr<vector<ListSecurityPolicyRelationsResponseBodySecrityPolicyRelations>> secrityPolicyRelations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
