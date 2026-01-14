// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGOVERNANCEKUBERNETESCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGOVERNANCEKUBERNETESCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryGovernanceKubernetesClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGovernanceKubernetesClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGovernanceKubernetesClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryGovernanceKubernetesClusterResponseBody() = default ;
    QueryGovernanceKubernetesClusterResponseBody(const QueryGovernanceKubernetesClusterResponseBody &) = default ;
    QueryGovernanceKubernetesClusterResponseBody(QueryGovernanceKubernetesClusterResponseBody &&) = default ;
    QueryGovernanceKubernetesClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGovernanceKubernetesClusterResponseBody() = default ;
    QueryGovernanceKubernetesClusterResponseBody& operator=(const QueryGovernanceKubernetesClusterResponseBody &) = default ;
    QueryGovernanceKubernetesClusterResponseBody& operator=(QueryGovernanceKubernetesClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_TO_JSON(K8sVersion, k8sVersion_);
          DARABONBA_PTR_TO_JSON(NamespaceInfos, namespaceInfos_);
          DARABONBA_PTR_TO_JSON(PilotStartTime, pilotStartTime_);
          DARABONBA_PTR_TO_JSON(PilotVersion, pilotVersion_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(VersionLifeCycle, versionLifeCycle_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
          DARABONBA_PTR_FROM_JSON(K8sVersion, k8sVersion_);
          DARABONBA_PTR_FROM_JSON(NamespaceInfos, namespaceInfos_);
          DARABONBA_PTR_FROM_JSON(PilotStartTime, pilotStartTime_);
          DARABONBA_PTR_FROM_JSON(PilotVersion, pilotVersion_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(VersionLifeCycle, versionLifeCycle_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->k8sVersion_ == nullptr && this->namespaceInfos_ == nullptr && this->pilotStartTime_ == nullptr && this->pilotVersion_ == nullptr
        && this->region_ == nullptr && this->versionLifeCycle_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline Result& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // clusterName Field Functions 
        bool hasClusterName() const { return this->clusterName_ != nullptr;};
        void deleteClusterName() { this->clusterName_ = nullptr;};
        inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
        inline Result& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


        // k8sVersion Field Functions 
        bool hasK8sVersion() const { return this->k8sVersion_ != nullptr;};
        void deleteK8sVersion() { this->k8sVersion_ = nullptr;};
        inline string getK8sVersion() const { DARABONBA_PTR_GET_DEFAULT(k8sVersion_, "") };
        inline Result& setK8sVersion(string k8sVersion) { DARABONBA_PTR_SET_VALUE(k8sVersion_, k8sVersion) };


        // namespaceInfos Field Functions 
        bool hasNamespaceInfos() const { return this->namespaceInfos_ != nullptr;};
        void deleteNamespaceInfos() { this->namespaceInfos_ = nullptr;};
        inline string getNamespaceInfos() const { DARABONBA_PTR_GET_DEFAULT(namespaceInfos_, "") };
        inline Result& setNamespaceInfos(string namespaceInfos) { DARABONBA_PTR_SET_VALUE(namespaceInfos_, namespaceInfos) };


        // pilotStartTime Field Functions 
        bool hasPilotStartTime() const { return this->pilotStartTime_ != nullptr;};
        void deletePilotStartTime() { this->pilotStartTime_ = nullptr;};
        inline string getPilotStartTime() const { DARABONBA_PTR_GET_DEFAULT(pilotStartTime_, "") };
        inline Result& setPilotStartTime(string pilotStartTime) { DARABONBA_PTR_SET_VALUE(pilotStartTime_, pilotStartTime) };


        // pilotVersion Field Functions 
        bool hasPilotVersion() const { return this->pilotVersion_ != nullptr;};
        void deletePilotVersion() { this->pilotVersion_ = nullptr;};
        inline string getPilotVersion() const { DARABONBA_PTR_GET_DEFAULT(pilotVersion_, "") };
        inline Result& setPilotVersion(string pilotVersion) { DARABONBA_PTR_SET_VALUE(pilotVersion_, pilotVersion) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Result& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // versionLifeCycle Field Functions 
        bool hasVersionLifeCycle() const { return this->versionLifeCycle_ != nullptr;};
        void deleteVersionLifeCycle() { this->versionLifeCycle_ = nullptr;};
        inline string getVersionLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifeCycle_, "") };
        inline Result& setVersionLifeCycle(string versionLifeCycle) { DARABONBA_PTR_SET_VALUE(versionLifeCycle_, versionLifeCycle) };


      protected:
        // The ID of the cluster.
        shared_ptr<string> clusterId_ {};
        // The name of the cluster.
        shared_ptr<string> clusterName_ {};
        // The version of the cluster.
        shared_ptr<string> k8sVersion_ {};
        // The information about the namespace.
        shared_ptr<string> namespaceInfos_ {};
        // The time when the pilot component was started.
        shared_ptr<string> pilotStartTime_ {};
        shared_ptr<string> pilotVersion_ {};
        // The region where the cluster resides.
        shared_ptr<string> region_ {};
        shared_ptr<string> versionLifeCycle_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The details of the data.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of clusters.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryGovernanceKubernetesClusterResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryGovernanceKubernetesClusterResponseBody::Data) };
    inline QueryGovernanceKubernetesClusterResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryGovernanceKubernetesClusterResponseBody::Data) };
    inline QueryGovernanceKubernetesClusterResponseBody& setData(const QueryGovernanceKubernetesClusterResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryGovernanceKubernetesClusterResponseBody& setData(QueryGovernanceKubernetesClusterResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryGovernanceKubernetesClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGovernanceKubernetesClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryGovernanceKubernetesClusterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<QueryGovernanceKubernetesClusterResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
