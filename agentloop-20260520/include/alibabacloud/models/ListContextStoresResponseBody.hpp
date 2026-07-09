// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTSTORESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTSTORESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListContextStoresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextStoresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextStoresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListContextStoresResponseBody() = default ;
    ListContextStoresResponseBody(const ListContextStoresResponseBody &) = default ;
    ListContextStoresResponseBody(ListContextStoresResponseBody &&) = default ;
    ListContextStoresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextStoresResponseBody() = default ;
    ListContextStoresResponseBody& operator=(const ListContextStoresResponseBody &) = default ;
    ListContextStoresResponseBody& operator=(ListContextStoresResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_TO_JSON(contextStoreName, contextStoreName_);
        DARABONBA_PTR_TO_JSON(contextType, contextType_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(serviceNames, serviceNames_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
        DARABONBA_PTR_FROM_JSON(contextStoreName, contextStoreName_);
        DARABONBA_PTR_FROM_JSON(contextType, contextType_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(serviceNames, serviceNames_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->contextStoreName_ == nullptr && this->contextType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->regionId_ == nullptr
        && this->serviceNames_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // agentSpace Field Functions 
      bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
      void deleteAgentSpace() { this->agentSpace_ = nullptr;};
      inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
      inline Results& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


      // contextStoreName Field Functions 
      bool hasContextStoreName() const { return this->contextStoreName_ != nullptr;};
      void deleteContextStoreName() { this->contextStoreName_ = nullptr;};
      inline string getContextStoreName() const { DARABONBA_PTR_GET_DEFAULT(contextStoreName_, "") };
      inline Results& setContextStoreName(string contextStoreName) { DARABONBA_PTR_SET_VALUE(contextStoreName_, contextStoreName) };


      // contextType Field Functions 
      bool hasContextType() const { return this->contextType_ != nullptr;};
      void deleteContextType() { this->contextType_ = nullptr;};
      inline string getContextType() const { DARABONBA_PTR_GET_DEFAULT(contextType_, "") };
      inline Results& setContextType(string contextType) { DARABONBA_PTR_SET_VALUE(contextType_, contextType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Results& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Results& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Results& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // serviceNames Field Functions 
      bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
      void deleteServiceNames() { this->serviceNames_ = nullptr;};
      inline const vector<string> & getServiceNames() const { DARABONBA_PTR_GET_CONST(serviceNames_, vector<string>) };
      inline vector<string> getServiceNames() { DARABONBA_PTR_GET(serviceNames_, vector<string>) };
      inline Results& setServiceNames(const vector<string> & serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };
      inline Results& setServiceNames(vector<string> && serviceNames) { DARABONBA_PTR_SET_RVALUE(serviceNames_, serviceNames) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Results& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Results& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The name of the AgentSpace to which the context store belongs.
      shared_ptr<string> agentSpace_ {};
      // The name of the context store.
      shared_ptr<string> contextStoreName_ {};
      // The type of the context store, such as experience or memory.
      shared_ptr<string> contextType_ {};
      // The time when the context store was created, in ISO 8601 UTC format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> createTime_ {};
      // The description of the context store.
      shared_ptr<string> description_ {};
      // The region ID of the context store.
      shared_ptr<string> regionId_ {};
      // The list of service names. This parameter has a value only for context stores of the experience type. The service names are used together with the data source AgentSpace to locate trace data sources.
      shared_ptr<vector<string>> serviceNames_ {};
      // The status of the context store. Valid values: ACTIVE, INITIALIZING, and FAILED.
      shared_ptr<string> status_ {};
      // The time when the context store was last updated, in ISO 8601 UTC format.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListContextStoresResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListContextStoresResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContextStoresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<ListContextStoresResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<ListContextStoresResponseBody::Results>) };
    inline vector<ListContextStoresResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<ListContextStoresResponseBody::Results>) };
    inline ListContextStoresResponseBody& setResults(const vector<ListContextStoresResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ListContextStoresResponseBody& setResults(vector<ListContextStoresResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListContextStoresResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The maximum number of entries per page that was specified in the request. This value is echoed back.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page. An empty string indicates that the current page is the last page.
    shared_ptr<string> nextToken_ {};
    // The request ID. You can use this ID to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The list of context stores.
    shared_ptr<vector<ListContextStoresResponseBody::Results>> results_ {};
    // The total number of context stores that match the query conditions.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
