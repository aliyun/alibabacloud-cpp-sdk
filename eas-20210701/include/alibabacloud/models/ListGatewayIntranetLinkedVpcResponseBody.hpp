// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayIntranetLinkedVpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIntranetLinkedVpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(IntranetLinkedVpcList, intranetLinkedVpcList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIntranetLinkedVpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(IntranetLinkedVpcList, intranetLinkedVpcList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGatewayIntranetLinkedVpcResponseBody() = default ;
    ListGatewayIntranetLinkedVpcResponseBody(const ListGatewayIntranetLinkedVpcResponseBody &) = default ;
    ListGatewayIntranetLinkedVpcResponseBody(ListGatewayIntranetLinkedVpcResponseBody &&) = default ;
    ListGatewayIntranetLinkedVpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIntranetLinkedVpcResponseBody() = default ;
    ListGatewayIntranetLinkedVpcResponseBody& operator=(const ListGatewayIntranetLinkedVpcResponseBody &) = default ;
    ListGatewayIntranetLinkedVpcResponseBody& operator=(ListGatewayIntranetLinkedVpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayId_ != nullptr
        && this->intranetLinkedVpcList_ != nullptr && this->requestId_ != nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBody& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // intranetLinkedVpcList Field Functions 
    bool hasIntranetLinkedVpcList() const { return this->intranetLinkedVpcList_ != nullptr;};
    void deleteIntranetLinkedVpcList() { this->intranetLinkedVpcList_ = nullptr;};
    inline const vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList> & intranetLinkedVpcList() const { DARABONBA_PTR_GET_CONST(intranetLinkedVpcList_, vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList>) };
    inline vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList> intranetLinkedVpcList() { DARABONBA_PTR_GET(intranetLinkedVpcList_, vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList>) };
    inline ListGatewayIntranetLinkedVpcResponseBody& setIntranetLinkedVpcList(const vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList> & intranetLinkedVpcList) { DARABONBA_PTR_SET_VALUE(intranetLinkedVpcList_, intranetLinkedVpcList) };
    inline ListGatewayIntranetLinkedVpcResponseBody& setIntranetLinkedVpcList(vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList> && intranetLinkedVpcList) { DARABONBA_PTR_SET_RVALUE(intranetLinkedVpcList_, intranetLinkedVpcList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayIntranetLinkedVpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The private gateway ID.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The internal endpoints.
    std::shared_ptr<vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList>> intranetLinkedVpcList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
