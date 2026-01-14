// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEKUBERNETESCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEKUBERNETESCLUSTERRESPONSEBODY_HPP_
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
  class GetGovernanceKubernetesClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceKubernetesClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceKubernetesClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetGovernanceKubernetesClusterResponseBody() = default ;
    GetGovernanceKubernetesClusterResponseBody(const GetGovernanceKubernetesClusterResponseBody &) = default ;
    GetGovernanceKubernetesClusterResponseBody(GetGovernanceKubernetesClusterResponseBody &&) = default ;
    GetGovernanceKubernetesClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceKubernetesClusterResponseBody() = default ;
    GetGovernanceKubernetesClusterResponseBody& operator=(const GetGovernanceKubernetesClusterResponseBody &) = default ;
    GetGovernanceKubernetesClusterResponseBody& operator=(GetGovernanceKubernetesClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(K8sVersion, k8sVersion_);
        DARABONBA_PTR_TO_JSON(NamespaceInfos, namespaceInfos_);
        DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_TO_JSON(PilotStartTime, pilotStartTime_);
        DARABONBA_PTR_TO_JSON(PilotVersion, pilotVersion_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VersionLifeCycle, versionLifeCycle_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(K8sVersion, k8sVersion_);
        DARABONBA_PTR_FROM_JSON(NamespaceInfos, namespaceInfos_);
        DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
        DARABONBA_PTR_FROM_JSON(PilotStartTime, pilotStartTime_);
        DARABONBA_PTR_FROM_JSON(PilotVersion, pilotVersion_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VersionLifeCycle, versionLifeCycle_);
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
      class Namespaces : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Namespaces& obj) { 
          DARABONBA_PTR_TO_JSON(MseNamespace, mseNamespace_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Namespaces& obj) { 
          DARABONBA_PTR_FROM_JSON(MseNamespace, mseNamespace_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Namespaces() = default ;
        Namespaces(const Namespaces &) = default ;
        Namespaces(Namespaces &&) = default ;
        Namespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Namespaces() = default ;
        Namespaces& operator=(const Namespaces &) = default ;
        Namespaces& operator=(Namespaces &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mseNamespace_ == nullptr
        && this->name_ == nullptr; };
        // mseNamespace Field Functions 
        bool hasMseNamespace() const { return this->mseNamespace_ != nullptr;};
        void deleteMseNamespace() { this->mseNamespace_ = nullptr;};
        inline string getMseNamespace() const { DARABONBA_PTR_GET_DEFAULT(mseNamespace_, "") };
        inline Namespaces& setMseNamespace(string mseNamespace) { DARABONBA_PTR_SET_VALUE(mseNamespace_, mseNamespace) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Namespaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The name of the MSE namespace that you want to access.
        shared_ptr<string> mseNamespace_ {};
        // The name of the namespace in the ACK cluster.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterName_ == nullptr && this->k8sVersion_ == nullptr && this->namespaceInfos_ == nullptr && this->namespaces_ == nullptr && this->pilotStartTime_ == nullptr
        && this->pilotVersion_ == nullptr && this->region_ == nullptr && this->updateTime_ == nullptr && this->versionLifeCycle_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // k8sVersion Field Functions 
      bool hasK8sVersion() const { return this->k8sVersion_ != nullptr;};
      void deleteK8sVersion() { this->k8sVersion_ = nullptr;};
      inline string getK8sVersion() const { DARABONBA_PTR_GET_DEFAULT(k8sVersion_, "") };
      inline Data& setK8sVersion(string k8sVersion) { DARABONBA_PTR_SET_VALUE(k8sVersion_, k8sVersion) };


      // namespaceInfos Field Functions 
      bool hasNamespaceInfos() const { return this->namespaceInfos_ != nullptr;};
      void deleteNamespaceInfos() { this->namespaceInfos_ = nullptr;};
      inline string getNamespaceInfos() const { DARABONBA_PTR_GET_DEFAULT(namespaceInfos_, "") };
      inline Data& setNamespaceInfos(string namespaceInfos) { DARABONBA_PTR_SET_VALUE(namespaceInfos_, namespaceInfos) };


      // namespaces Field Functions 
      bool hasNamespaces() const { return this->namespaces_ != nullptr;};
      void deleteNamespaces() { this->namespaces_ = nullptr;};
      inline const vector<Data::Namespaces> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<Data::Namespaces>) };
      inline vector<Data::Namespaces> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<Data::Namespaces>) };
      inline Data& setNamespaces(const vector<Data::Namespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
      inline Data& setNamespaces(vector<Data::Namespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


      // pilotStartTime Field Functions 
      bool hasPilotStartTime() const { return this->pilotStartTime_ != nullptr;};
      void deletePilotStartTime() { this->pilotStartTime_ = nullptr;};
      inline string getPilotStartTime() const { DARABONBA_PTR_GET_DEFAULT(pilotStartTime_, "") };
      inline Data& setPilotStartTime(string pilotStartTime) { DARABONBA_PTR_SET_VALUE(pilotStartTime_, pilotStartTime) };


      // pilotVersion Field Functions 
      bool hasPilotVersion() const { return this->pilotVersion_ != nullptr;};
      void deletePilotVersion() { this->pilotVersion_ = nullptr;};
      inline string getPilotVersion() const { DARABONBA_PTR_GET_DEFAULT(pilotVersion_, "") };
      inline Data& setPilotVersion(string pilotVersion) { DARABONBA_PTR_SET_VALUE(pilotVersion_, pilotVersion) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // versionLifeCycle Field Functions 
      bool hasVersionLifeCycle() const { return this->versionLifeCycle_ != nullptr;};
      void deleteVersionLifeCycle() { this->versionLifeCycle_ = nullptr;};
      inline string getVersionLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifeCycle_, "") };
      inline Data& setVersionLifeCycle(string versionLifeCycle) { DARABONBA_PTR_SET_VALUE(versionLifeCycle_, versionLifeCycle) };


    protected:
      // The ID of the instance.
      shared_ptr<string> clusterId_ {};
      // The name of the instance.
      shared_ptr<string> clusterName_ {};
      // The version of Kubernetes.
      shared_ptr<string> k8sVersion_ {};
      // The information of the namespace.
      shared_ptr<string> namespaceInfos_ {};
      // The queried namespaces.
      shared_ptr<vector<Data::Namespaces>> namespaces_ {};
      // The time when the pilot component was started.
      shared_ptr<string> pilotStartTime_ {};
      shared_ptr<string> pilotVersion_ {};
      // The ID of the region in which the instance resides. The region is supported by MSE.
      shared_ptr<string> region_ {};
      // The time of the last modification.
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> versionLifeCycle_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGovernanceKubernetesClusterResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGovernanceKubernetesClusterResponseBody::Data) };
    inline GetGovernanceKubernetesClusterResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGovernanceKubernetesClusterResponseBody::Data) };
    inline GetGovernanceKubernetesClusterResponseBody& setData(const GetGovernanceKubernetesClusterResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGovernanceKubernetesClusterResponseBody& setData(GetGovernanceKubernetesClusterResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGovernanceKubernetesClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGovernanceKubernetesClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetGovernanceKubernetesClusterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<GetGovernanceKubernetesClusterResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
