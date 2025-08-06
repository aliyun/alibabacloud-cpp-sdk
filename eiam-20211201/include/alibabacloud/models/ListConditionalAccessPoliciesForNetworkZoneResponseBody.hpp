// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORNETWORKZONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORNETWORKZONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConditionalAccessPoliciesForNetworkZoneResponseBodyConditionalAccessPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForNetworkZoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForNetworkZoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicies, conditionalAccessPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConditionalAccessPoliciesForNetworkZoneResponseBody() = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody(const ListConditionalAccessPoliciesForNetworkZoneResponseBody &) = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody(ListConditionalAccessPoliciesForNetworkZoneResponseBody &&) = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForNetworkZoneResponseBody() = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody& operator=(const ListConditionalAccessPoliciesForNetworkZoneResponseBody &) = default ;
    ListConditionalAccessPoliciesForNetworkZoneResponseBody& operator=(ListConditionalAccessPoliciesForNetworkZoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionalAccessPolicies_ != nullptr
        && this->requestId_ != nullptr; };
    // conditionalAccessPolicies Field Functions 
    bool hasConditionalAccessPolicies() const { return this->conditionalAccessPolicies_ != nullptr;};
    void deleteConditionalAccessPolicies() { this->conditionalAccessPolicies_ = nullptr;};
    inline const vector<ListConditionalAccessPoliciesForNetworkZoneResponseBodyConditionalAccessPolicies> & conditionalAccessPolicies() const { DARABONBA_PTR_GET_CONST(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesForNetworkZoneResponseBodyConditionalAccessPolicies>) };
    inline vector<ListConditionalAccessPoliciesForNetworkZoneResponseBodyConditionalAccessPolicies> conditionalAccessPolicies() { DARABONBA_PTR_GET(conditionalAccessPolicies_, vector<ListConditionalAccessPoliciesForNetworkZoneResponseBodyConditionalAccessPolicies>) };
    inline ListConditionalAccessPoliciesForNetworkZoneResponseBody& setConditionalAccessPolicies(const vector<ListConditionalAccessPoliciesForNetworkZoneResponseBodyConditionalAccessPolicies> & conditionalAccessPolicies) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };
    inline ListConditionalAccessPoliciesForNetworkZoneResponseBody& setConditionalAccessPolicies(vector<ListConditionalAccessPoliciesForNetworkZoneResponseBodyConditionalAccessPolicies> && conditionalAccessPolicies) { DARABONBA_PTR_SET_RVALUE(conditionalAccessPolicies_, conditionalAccessPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConditionalAccessPoliciesForNetworkZoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Collection of conditional access policies
    std::shared_ptr<vector<ListConditionalAccessPoliciesForNetworkZoneResponseBodyConditionalAccessPolicies>> conditionalAccessPolicies_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
