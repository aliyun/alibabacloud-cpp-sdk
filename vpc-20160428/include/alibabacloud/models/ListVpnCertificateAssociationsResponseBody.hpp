// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPNCERTIFICATEASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPNCERTIFICATEASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpnCertificateAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpnCertificateAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnCertificateRelations, vpnCertificateRelations_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpnCertificateAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnCertificateRelations, vpnCertificateRelations_);
    };
    ListVpnCertificateAssociationsResponseBody() = default ;
    ListVpnCertificateAssociationsResponseBody(const ListVpnCertificateAssociationsResponseBody &) = default ;
    ListVpnCertificateAssociationsResponseBody(ListVpnCertificateAssociationsResponseBody &&) = default ;
    ListVpnCertificateAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpnCertificateAssociationsResponseBody() = default ;
    ListVpnCertificateAssociationsResponseBody& operator=(const ListVpnCertificateAssociationsResponseBody &) = default ;
    ListVpnCertificateAssociationsResponseBody& operator=(ListVpnCertificateAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vpnCertificateRelations_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpnCertificateAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpnCertificateAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpnCertificateAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpnCertificateAssociationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnCertificateRelations Field Functions 
    bool hasVpnCertificateRelations() const { return this->vpnCertificateRelations_ != nullptr;};
    void deleteVpnCertificateRelations() { this->vpnCertificateRelations_ = nullptr;};
    inline const vector<ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations> & vpnCertificateRelations() const { DARABONBA_PTR_GET_CONST(vpnCertificateRelations_, vector<ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations>) };
    inline vector<ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations> vpnCertificateRelations() { DARABONBA_PTR_GET(vpnCertificateRelations_, vector<ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations>) };
    inline ListVpnCertificateAssociationsResponseBody& setVpnCertificateRelations(const vector<ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations> & vpnCertificateRelations) { DARABONBA_PTR_SET_VALUE(vpnCertificateRelations_, vpnCertificateRelations) };
    inline ListVpnCertificateAssociationsResponseBody& setVpnCertificateRelations(vector<ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations> && vpnCertificateRelations) { DARABONBA_PTR_SET_RVALUE(vpnCertificateRelations_, vpnCertificateRelations) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If **NextToken** is not empty, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The association information.
    std::shared_ptr<vector<ListVpnCertificateAssociationsResponseBodyVpnCertificateRelations>> vpnCertificateRelations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
