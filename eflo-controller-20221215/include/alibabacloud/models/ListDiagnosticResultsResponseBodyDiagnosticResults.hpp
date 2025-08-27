// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSTICRESULTSRESPONSEBODYDIAGNOSTICRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSTICRESULTSRESPONSEBODYDIAGNOSTICRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListDiagnosticResultsResponseBodyDiagnosticResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnosticResultsResponseBodyDiagnosticResults& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDiagnosticResultsResponseBodyDiagnosticResults& obj) { 
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
    ListDiagnosticResultsResponseBodyDiagnosticResults() = default ;
    ListDiagnosticResultsResponseBodyDiagnosticResults(const ListDiagnosticResultsResponseBodyDiagnosticResults &) = default ;
    ListDiagnosticResultsResponseBodyDiagnosticResults(ListDiagnosticResultsResponseBodyDiagnosticResults &&) = default ;
    ListDiagnosticResultsResponseBodyDiagnosticResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnosticResultsResponseBodyDiagnosticResults() = default ;
    ListDiagnosticResultsResponseBodyDiagnosticResults& operator=(const ListDiagnosticResultsResponseBodyDiagnosticResults &) = default ;
    ListDiagnosticResultsResponseBodyDiagnosticResults& operator=(ListDiagnosticResultsResponseBodyDiagnosticResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterName_ != nullptr && this->creationTime_ != nullptr && this->diagContent_ != nullptr && this->diagId_ != nullptr && this->diagResult_ != nullptr
        && this->finishedTime_ != nullptr && this->resourceId_ != nullptr && this->serverName_ != nullptr && this->status_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // diagContent Field Functions 
    bool hasDiagContent() const { return this->diagContent_ != nullptr;};
    void deleteDiagContent() { this->diagContent_ = nullptr;};
    inline string diagContent() const { DARABONBA_PTR_GET_DEFAULT(diagContent_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setDiagContent(string diagContent) { DARABONBA_PTR_SET_VALUE(diagContent_, diagContent) };


    // diagId Field Functions 
    bool hasDiagId() const { return this->diagId_ != nullptr;};
    void deleteDiagId() { this->diagId_ = nullptr;};
    inline string diagId() const { DARABONBA_PTR_GET_DEFAULT(diagId_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setDiagId(string diagId) { DARABONBA_PTR_SET_VALUE(diagId_, diagId) };


    // diagResult Field Functions 
    bool hasDiagResult() const { return this->diagResult_ != nullptr;};
    void deleteDiagResult() { this->diagResult_ = nullptr;};
    inline string diagResult() const { DARABONBA_PTR_GET_DEFAULT(diagResult_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setDiagResult(string diagResult) { DARABONBA_PTR_SET_VALUE(diagResult_, diagResult) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // serverName Field Functions 
    bool hasServerName() const { return this->serverName_ != nullptr;};
    void deleteServerName() { this->serverName_ = nullptr;};
    inline string serverName() const { DARABONBA_PTR_GET_DEFAULT(serverName_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setServerName(string serverName) { DARABONBA_PTR_SET_VALUE(serverName_, serverName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDiagnosticResultsResponseBodyDiagnosticResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Cluster Name
    std::shared_ptr<string> clusterName_ = nullptr;
    // Creation time of the diagnostic task.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Diagnostic content. For example, in network diagnostics, there are static configuration checks, dynamic operation checks, and other diagnostic contents.
    std::shared_ptr<string> diagContent_ = nullptr;
    // Diagnosis ID
    std::shared_ptr<string> diagId_ = nullptr;
    // Diagnostic result, either success or failure.
    std::shared_ptr<string> diagResult_ = nullptr;
    // Completion time of the diagnostic task.
    std::shared_ptr<string> finishedTime_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // Server name.
    std::shared_ptr<string> serverName_ = nullptr;
    // Status of the diagnostic task. Possible values:
    // - InProgress: Diagnosing.
    // - Finished: Diagnosis completed.
    // - Failed: Diagnosis failed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
