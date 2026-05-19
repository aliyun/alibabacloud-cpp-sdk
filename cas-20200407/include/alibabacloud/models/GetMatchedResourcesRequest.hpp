// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMATCHEDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMATCHEDRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetMatchedResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMatchedResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertIds, certIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceScope, resourceScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetMatchedResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceScope, resourceScope_);
    };
    GetMatchedResourcesRequest() = default ;
    GetMatchedResourcesRequest(const GetMatchedResourcesRequest &) = default ;
    GetMatchedResourcesRequest(GetMatchedResourcesRequest &&) = default ;
    GetMatchedResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMatchedResourcesRequest() = default ;
    GetMatchedResourcesRequest& operator=(const GetMatchedResourcesRequest &) = default ;
    GetMatchedResourcesRequest& operator=(GetMatchedResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIds_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceScope_ == nullptr; };
    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string getCertIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline GetMatchedResourcesRequest& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetMatchedResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetMatchedResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceScope Field Functions 
    bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
    void deleteResourceScope() { this->resourceScope_ = nullptr;};
    inline string getResourceScope() const { DARABONBA_PTR_GET_DEFAULT(resourceScope_, "") };
    inline GetMatchedResourcesRequest& setResourceScope(string resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };


  protected:
    // This parameter is required.
    shared_ptr<string> certIds_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> resourceScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
