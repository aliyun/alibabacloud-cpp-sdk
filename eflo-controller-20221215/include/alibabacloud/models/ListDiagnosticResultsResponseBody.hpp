// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSTICRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSTICRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListDiagnosticResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosticResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosticResults, diagnosticResults_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnosticResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosticResults, diagnosticResults_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDiagnosticResultsResponseBody() = default ;
    ListDiagnosticResultsResponseBody(const ListDiagnosticResultsResponseBody &) = default ;
    ListDiagnosticResultsResponseBody(ListDiagnosticResultsResponseBody &&) = default ;
    ListDiagnosticResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosticResultsResponseBody() = default ;
    ListDiagnosticResultsResponseBody& operator=(const ListDiagnosticResultsResponseBody &) = default ;
    ListDiagnosticResultsResponseBody& operator=(ListDiagnosticResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DiagnosticResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiagnosticResults& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DiagContent, diagContent_);
        DARABONBA_PTR_TO_JSON(DiagId, diagId_);
        DARABONBA_PTR_TO_JSON(DiagResult, diagResult_);
        DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ServerName, serverName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DiagnosticResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DiagContent, diagContent_);
        DARABONBA_PTR_FROM_JSON(DiagId, diagId_);
        DARABONBA_PTR_FROM_JSON(DiagResult, diagResult_);
        DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ServerName, serverName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DiagnosticResults() = default ;
      DiagnosticResults(const DiagnosticResults &) = default ;
      DiagnosticResults(DiagnosticResults &&) = default ;
      DiagnosticResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiagnosticResults() = default ;
      DiagnosticResults& operator=(const DiagnosticResults &) = default ;
      DiagnosticResults& operator=(DiagnosticResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->creationTime_ == nullptr && this->diagContent_ == nullptr && this->diagId_ == nullptr && this->diagResult_ == nullptr
        && this->finishedTime_ == nullptr && this->resourceId_ == nullptr && this->serverName_ == nullptr && this->status_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline DiagnosticResults& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline DiagnosticResults& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline DiagnosticResults& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // diagContent Field Functions 
      bool hasDiagContent() const { return this->diagContent_ != nullptr;};
      void deleteDiagContent() { this->diagContent_ = nullptr;};
      inline string getDiagContent() const { DARABONBA_PTR_GET_DEFAULT(diagContent_, "") };
      inline DiagnosticResults& setDiagContent(string diagContent) { DARABONBA_PTR_SET_VALUE(diagContent_, diagContent) };


      // diagId Field Functions 
      bool hasDiagId() const { return this->diagId_ != nullptr;};
      void deleteDiagId() { this->diagId_ = nullptr;};
      inline string getDiagId() const { DARABONBA_PTR_GET_DEFAULT(diagId_, "") };
      inline DiagnosticResults& setDiagId(string diagId) { DARABONBA_PTR_SET_VALUE(diagId_, diagId) };


      // diagResult Field Functions 
      bool hasDiagResult() const { return this->diagResult_ != nullptr;};
      void deleteDiagResult() { this->diagResult_ = nullptr;};
      inline string getDiagResult() const { DARABONBA_PTR_GET_DEFAULT(diagResult_, "") };
      inline DiagnosticResults& setDiagResult(string diagResult) { DARABONBA_PTR_SET_VALUE(diagResult_, diagResult) };


      // finishedTime Field Functions 
      bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
      void deleteFinishedTime() { this->finishedTime_ = nullptr;};
      inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
      inline DiagnosticResults& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline DiagnosticResults& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // serverName Field Functions 
      bool hasServerName() const { return this->serverName_ != nullptr;};
      void deleteServerName() { this->serverName_ = nullptr;};
      inline string getServerName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
      inline DiagnosticResults& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DiagnosticResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // Cluster Name
      shared_ptr<string> clusterName_ {};
      // Creation time of the diagnostic task.
      shared_ptr<string> creationTime_ {};
      // Diagnostic content. For example, in network diagnostics, there are static configuration checks, dynamic operation checks, and other diagnostic contents.
      shared_ptr<string> diagContent_ {};
      // Diagnosis ID
      shared_ptr<string> diagId_ {};
      // Diagnostic result, either success or failure.
      shared_ptr<string> diagResult_ {};
      // Completion time of the diagnostic task.
      shared_ptr<string> finishedTime_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // Server name.
      shared_ptr<string> serverName_ {};
      // Status of the diagnostic task. Possible values:
      // - InProgress: Diagnosing.
      // - Finished: Diagnosis completed.
      // - Failed: Diagnosis failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->diagnosticResults_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // diagnosticResults Field Functions 
    bool hasDiagnosticResults() const { return this->diagnosticResults_ != nullptr;};
    void deleteDiagnosticResults() { this->diagnosticResults_ = nullptr;};
    inline const vector<ListDiagnosticResultsResponseBody::DiagnosticResults> & getDiagnosticResults() const { DARABONBA_PTR_GET_CONST(diagnosticResults_, vector<ListDiagnosticResultsResponseBody::DiagnosticResults>) };
    inline vector<ListDiagnosticResultsResponseBody::DiagnosticResults> getDiagnosticResults() { DARABONBA_PTR_GET(diagnosticResults_, vector<ListDiagnosticResultsResponseBody::DiagnosticResults>) };
    inline ListDiagnosticResultsResponseBody& setDiagnosticResults(const vector<ListDiagnosticResultsResponseBody::DiagnosticResults> & diagnosticResults) { DARABONBA_PTR_SET_VALUE(diagnosticResults_, diagnosticResults) };
    inline ListDiagnosticResultsResponseBody& setDiagnosticResults(vector<ListDiagnosticResultsResponseBody::DiagnosticResults> && diagnosticResults) { DARABONBA_PTR_SET_RVALUE(diagnosticResults_, diagnosticResults) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListDiagnosticResultsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDiagnosticResultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDiagnosticResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostic information.
    shared_ptr<vector<ListDiagnosticResultsResponseBody::DiagnosticResults>> diagnosticResults_ {};
    // Number of items per page in a paginated query. The maximum value is 100.
    // 
    // Default value:
    // 
    // - If no value is set or the set value is less than 20, the default value is 20.
    // - If the set value is greater than 100, the default value is 100.
    shared_ptr<int64_t> maxResults_ {};
    // NextToken for the next page. Include this value when requesting the next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
