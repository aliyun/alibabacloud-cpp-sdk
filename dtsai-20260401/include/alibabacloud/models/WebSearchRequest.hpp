// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WEBSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
namespace Models
{
  class WebSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UrlScopeDomains, urlScopeDomains_);
      DARABONBA_PTR_TO_JSON(UrlScopeMode, urlScopeMode_);
    };
    friend void from_json(const Darabonba::Json& j, WebSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UrlScopeDomains, urlScopeDomains_);
      DARABONBA_PTR_FROM_JSON(UrlScopeMode, urlScopeMode_);
    };
    WebSearchRequest() = default ;
    WebSearchRequest(const WebSearchRequest &) = default ;
    WebSearchRequest(WebSearchRequest &&) = default ;
    WebSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebSearchRequest() = default ;
    WebSearchRequest& operator=(const WebSearchRequest &) = default ;
    WebSearchRequest& operator=(WebSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->maxResults_ == nullptr && this->query_ == nullptr && this->regionId_ == nullptr && this->urlScopeDomains_ == nullptr && this->urlScopeMode_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline WebSearchRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline WebSearchRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline WebSearchRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline WebSearchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // urlScopeDomains Field Functions 
    bool hasUrlScopeDomains() const { return this->urlScopeDomains_ != nullptr;};
    void deleteUrlScopeDomains() { this->urlScopeDomains_ = nullptr;};
    inline string getUrlScopeDomains() const { DARABONBA_PTR_GET_DEFAULT(urlScopeDomains_, "") };
    inline WebSearchRequest& setUrlScopeDomains(string urlScopeDomains) { DARABONBA_PTR_SET_VALUE(urlScopeDomains_, urlScopeDomains) };


    // urlScopeMode Field Functions 
    bool hasUrlScopeMode() const { return this->urlScopeMode_ != nullptr;};
    void deleteUrlScopeMode() { this->urlScopeMode_ = nullptr;};
    inline string getUrlScopeMode() const { DARABONBA_PTR_GET_DEFAULT(urlScopeMode_, "") };
    inline WebSearchRequest& setUrlScopeMode(string urlScopeMode) { DARABONBA_PTR_SET_VALUE(urlScopeMode_, urlScopeMode) };


  protected:
    shared_ptr<string> agentName_ {};
    // The maximum number of results to return. Default value: 10. Valid values: 1 to 50.
    shared_ptr<int32_t> maxResults_ {};
    // The search query statement.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of domain names.
    shared_ptr<string> urlScopeDomains_ {};
    // The URL scope mode.
    shared_ptr<string> urlScopeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif
