// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINVSWITCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINVSWITCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastDomainVSwitchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastDomainVSwitchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastDomainVSwitchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    ListTransitRouterMulticastDomainVSwitchesResponseBody() = default ;
    ListTransitRouterMulticastDomainVSwitchesResponseBody(const ListTransitRouterMulticastDomainVSwitchesResponseBody &) = default ;
    ListTransitRouterMulticastDomainVSwitchesResponseBody(ListTransitRouterMulticastDomainVSwitchesResponseBody &&) = default ;
    ListTransitRouterMulticastDomainVSwitchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastDomainVSwitchesResponseBody() = default ;
    ListTransitRouterMulticastDomainVSwitchesResponseBody& operator=(const ListTransitRouterMulticastDomainVSwitchesResponseBody &) = default ;
    ListTransitRouterMulticastDomainVSwitchesResponseBody& operator=(ListTransitRouterMulticastDomainVSwitchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vSwitchIds_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterMulticastDomainVSwitchesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterMulticastDomainVSwitchesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterMulticastDomainVSwitchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterMulticastDomainVSwitchesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline ListTransitRouterMulticastDomainVSwitchesResponseBody& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ListTransitRouterMulticastDomainVSwitchesResponseBody& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
