// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONSECURITYDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONSECURITYDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationSecurityDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationSecurityDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationSecurityDomains, normalizationSecurityDomains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationSecurityDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationSecurityDomains, normalizationSecurityDomains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNormalizationSecurityDomainsResponseBody() = default ;
    ListNormalizationSecurityDomainsResponseBody(const ListNormalizationSecurityDomainsResponseBody &) = default ;
    ListNormalizationSecurityDomainsResponseBody(ListNormalizationSecurityDomainsResponseBody &&) = default ;
    ListNormalizationSecurityDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationSecurityDomainsResponseBody() = default ;
    ListNormalizationSecurityDomainsResponseBody& operator=(const ListNormalizationSecurityDomainsResponseBody &) = default ;
    ListNormalizationSecurityDomainsResponseBody& operator=(ListNormalizationSecurityDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NormalizationSecurityDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationSecurityDomains& obj) { 
        DARABONBA_PTR_TO_JSON(NormalizationSecurityDomainId, normalizationSecurityDomainId_);
        DARABONBA_PTR_TO_JSON(NormalizationSecurityDomainName, normalizationSecurityDomainName_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationSecurityDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(NormalizationSecurityDomainId, normalizationSecurityDomainId_);
        DARABONBA_PTR_FROM_JSON(NormalizationSecurityDomainName, normalizationSecurityDomainName_);
      };
      NormalizationSecurityDomains() = default ;
      NormalizationSecurityDomains(const NormalizationSecurityDomains &) = default ;
      NormalizationSecurityDomains(NormalizationSecurityDomains &&) = default ;
      NormalizationSecurityDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationSecurityDomains() = default ;
      NormalizationSecurityDomains& operator=(const NormalizationSecurityDomains &) = default ;
      NormalizationSecurityDomains& operator=(NormalizationSecurityDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->normalizationSecurityDomainId_ == nullptr
        && this->normalizationSecurityDomainName_ == nullptr; };
      // normalizationSecurityDomainId Field Functions 
      bool hasNormalizationSecurityDomainId() const { return this->normalizationSecurityDomainId_ != nullptr;};
      void deleteNormalizationSecurityDomainId() { this->normalizationSecurityDomainId_ = nullptr;};
      inline string getNormalizationSecurityDomainId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSecurityDomainId_, "") };
      inline NormalizationSecurityDomains& setNormalizationSecurityDomainId(string normalizationSecurityDomainId) { DARABONBA_PTR_SET_VALUE(normalizationSecurityDomainId_, normalizationSecurityDomainId) };


      // normalizationSecurityDomainName Field Functions 
      bool hasNormalizationSecurityDomainName() const { return this->normalizationSecurityDomainName_ != nullptr;};
      void deleteNormalizationSecurityDomainName() { this->normalizationSecurityDomainName_ = nullptr;};
      inline string getNormalizationSecurityDomainName() const { DARABONBA_PTR_GET_DEFAULT(normalizationSecurityDomainName_, "") };
      inline NormalizationSecurityDomains& setNormalizationSecurityDomainName(string normalizationSecurityDomainName) { DARABONBA_PTR_SET_VALUE(normalizationSecurityDomainName_, normalizationSecurityDomainName) };


    protected:
      // The security domain ID.
      shared_ptr<string> normalizationSecurityDomainId_ {};
      // The security domain name.
      shared_ptr<string> normalizationSecurityDomainName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->normalizationSecurityDomains_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationSecurityDomainsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationSecurityDomainsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationSecurityDomains Field Functions 
    bool hasNormalizationSecurityDomains() const { return this->normalizationSecurityDomains_ != nullptr;};
    void deleteNormalizationSecurityDomains() { this->normalizationSecurityDomains_ = nullptr;};
    inline const vector<ListNormalizationSecurityDomainsResponseBody::NormalizationSecurityDomains> & getNormalizationSecurityDomains() const { DARABONBA_PTR_GET_CONST(normalizationSecurityDomains_, vector<ListNormalizationSecurityDomainsResponseBody::NormalizationSecurityDomains>) };
    inline vector<ListNormalizationSecurityDomainsResponseBody::NormalizationSecurityDomains> getNormalizationSecurityDomains() { DARABONBA_PTR_GET(normalizationSecurityDomains_, vector<ListNormalizationSecurityDomainsResponseBody::NormalizationSecurityDomains>) };
    inline ListNormalizationSecurityDomainsResponseBody& setNormalizationSecurityDomains(const vector<ListNormalizationSecurityDomainsResponseBody::NormalizationSecurityDomains> & normalizationSecurityDomains) { DARABONBA_PTR_SET_VALUE(normalizationSecurityDomains_, normalizationSecurityDomains) };
    inline ListNormalizationSecurityDomainsResponseBody& setNormalizationSecurityDomains(vector<ListNormalizationSecurityDomainsResponseBody::NormalizationSecurityDomains> && normalizationSecurityDomains) { DARABONBA_PTR_SET_RVALUE(normalizationSecurityDomains_, normalizationSecurityDomains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationSecurityDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationSecurityDomainsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token for the next query. Leave this parameter empty for the first query or if no more results exist. If more results exist, set this parameter to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The list of security domains.
    shared_ptr<vector<ListNormalizationSecurityDomainsResponseBody::NormalizationSecurityDomains>> normalizationSecurityDomains_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
