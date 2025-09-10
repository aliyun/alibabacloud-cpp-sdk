// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAclPolicyResponseBodyInternetAclPolicyList.hpp>
#include <alibabacloud/models/ListAclPolicyResponseBodyIntranetVpcAclPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListAclPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(InternetAclPolicyList, internetAclPolicyList_);
      DARABONBA_PTR_TO_JSON(IntranetVpcAclPolicyList, intranetVpcAclPolicyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(InternetAclPolicyList, internetAclPolicyList_);
      DARABONBA_PTR_FROM_JSON(IntranetVpcAclPolicyList, intranetVpcAclPolicyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAclPolicyResponseBody() = default ;
    ListAclPolicyResponseBody(const ListAclPolicyResponseBody &) = default ;
    ListAclPolicyResponseBody(ListAclPolicyResponseBody &&) = default ;
    ListAclPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclPolicyResponseBody() = default ;
    ListAclPolicyResponseBody& operator=(const ListAclPolicyResponseBody &) = default ;
    ListAclPolicyResponseBody& operator=(ListAclPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayId_ != nullptr
        && this->internetAclPolicyList_ != nullptr && this->intranetVpcAclPolicyList_ != nullptr && this->requestId_ != nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListAclPolicyResponseBody& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // internetAclPolicyList Field Functions 
    bool hasInternetAclPolicyList() const { return this->internetAclPolicyList_ != nullptr;};
    void deleteInternetAclPolicyList() { this->internetAclPolicyList_ = nullptr;};
    inline const vector<ListAclPolicyResponseBodyInternetAclPolicyList> & internetAclPolicyList() const { DARABONBA_PTR_GET_CONST(internetAclPolicyList_, vector<ListAclPolicyResponseBodyInternetAclPolicyList>) };
    inline vector<ListAclPolicyResponseBodyInternetAclPolicyList> internetAclPolicyList() { DARABONBA_PTR_GET(internetAclPolicyList_, vector<ListAclPolicyResponseBodyInternetAclPolicyList>) };
    inline ListAclPolicyResponseBody& setInternetAclPolicyList(const vector<ListAclPolicyResponseBodyInternetAclPolicyList> & internetAclPolicyList) { DARABONBA_PTR_SET_VALUE(internetAclPolicyList_, internetAclPolicyList) };
    inline ListAclPolicyResponseBody& setInternetAclPolicyList(vector<ListAclPolicyResponseBodyInternetAclPolicyList> && internetAclPolicyList) { DARABONBA_PTR_SET_RVALUE(internetAclPolicyList_, internetAclPolicyList) };


    // intranetVpcAclPolicyList Field Functions 
    bool hasIntranetVpcAclPolicyList() const { return this->intranetVpcAclPolicyList_ != nullptr;};
    void deleteIntranetVpcAclPolicyList() { this->intranetVpcAclPolicyList_ = nullptr;};
    inline const vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList> & intranetVpcAclPolicyList() const { DARABONBA_PTR_GET_CONST(intranetVpcAclPolicyList_, vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList>) };
    inline vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList> intranetVpcAclPolicyList() { DARABONBA_PTR_GET(intranetVpcAclPolicyList_, vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList>) };
    inline ListAclPolicyResponseBody& setIntranetVpcAclPolicyList(const vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList> & intranetVpcAclPolicyList) { DARABONBA_PTR_SET_VALUE(intranetVpcAclPolicyList_, intranetVpcAclPolicyList) };
    inline ListAclPolicyResponseBody& setIntranetVpcAclPolicyList(vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList> && intranetVpcAclPolicyList) { DARABONBA_PTR_SET_RVALUE(intranetVpcAclPolicyList_, intranetVpcAclPolicyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAclPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The private gateway ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The access control policies of the private gateway over the Internet.
    std::shared_ptr<vector<ListAclPolicyResponseBodyInternetAclPolicyList>> internetAclPolicyList_ = nullptr;
    // The access control policies of the private gateway over the internal network.
    std::shared_ptr<vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList>> intranetVpcAclPolicyList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
