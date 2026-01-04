// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVCIESCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServcieScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServcieScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_TO_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_TO_JSON(PodAbstractInfo, podAbstractInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestRepeated, requestRepeated_);
      DARABONBA_PTR_TO_JSON(TcpPorts, tcpPorts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServcieScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_FROM_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_FROM_JSON(PodAbstractInfo, podAbstractInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestRepeated, requestRepeated_);
      DARABONBA_PTR_FROM_JSON(TcpPorts, tcpPorts_);
    };
    DescribeServcieScheduleResponseBody() = default ;
    DescribeServcieScheduleResponseBody(const DescribeServcieScheduleResponseBody &) = default ;
    DescribeServcieScheduleResponseBody(DescribeServcieScheduleResponseBody &&) = default ;
    DescribeServcieScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServcieScheduleResponseBody() = default ;
    DescribeServcieScheduleResponseBody& operator=(const DescribeServcieScheduleResponseBody &) = default ;
    DescribeServcieScheduleResponseBody& operator=(DescribeServcieScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PodAbstractInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PodAbstractInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ContainerService, containerService_);
        DARABONBA_PTR_TO_JSON(ContainerStatuses, containerStatuses_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ResourceScope, resourceScope_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, PodAbstractInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ContainerService, containerService_);
        DARABONBA_PTR_FROM_JSON(ContainerStatuses, containerStatuses_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ResourceScope, resourceScope_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      PodAbstractInfo() = default ;
      PodAbstractInfo(const PodAbstractInfo &) = default ;
      PodAbstractInfo(PodAbstractInfo &&) = default ;
      PodAbstractInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PodAbstractInfo() = default ;
      PodAbstractInfo& operator=(const PodAbstractInfo &) = default ;
      PodAbstractInfo& operator=(PodAbstractInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ContainerStatuses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContainerStatuses& obj) { 
          DARABONBA_PTR_TO_JSON(ContainerStatus, containerStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ContainerStatuses& obj) { 
          DARABONBA_PTR_FROM_JSON(ContainerStatus, containerStatus_);
        };
        ContainerStatuses() = default ;
        ContainerStatuses(const ContainerStatuses &) = default ;
        ContainerStatuses(ContainerStatuses &&) = default ;
        ContainerStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContainerStatuses() = default ;
        ContainerStatuses& operator=(const ContainerStatuses &) = default ;
        ContainerStatuses& operator=(ContainerStatuses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ContainerStatus : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContainerStatus& obj) { 
            DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ContainerStatus& obj) { 
            DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ContainerStatus() = default ;
          ContainerStatus(const ContainerStatus &) = default ;
          ContainerStatus(ContainerStatus &&) = default ;
          ContainerStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContainerStatus() = default ;
          ContainerStatus& operator=(const ContainerStatus &) = default ;
          ContainerStatus& operator=(ContainerStatus &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->containerId_ == nullptr
        && this->name_ == nullptr; };
          // containerId Field Functions 
          bool hasContainerId() const { return this->containerId_ != nullptr;};
          void deleteContainerId() { this->containerId_ = nullptr;};
          inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
          inline ContainerStatus& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ContainerStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the container.
          shared_ptr<string> containerId_ {};
          // The name of the container.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->containerStatus_ == nullptr; };
        // containerStatus Field Functions 
        bool hasContainerStatus() const { return this->containerStatus_ != nullptr;};
        void deleteContainerStatus() { this->containerStatus_ = nullptr;};
        inline const vector<ContainerStatuses::ContainerStatus> & getContainerStatus() const { DARABONBA_PTR_GET_CONST(containerStatus_, vector<ContainerStatuses::ContainerStatus>) };
        inline vector<ContainerStatuses::ContainerStatus> getContainerStatus() { DARABONBA_PTR_GET(containerStatus_, vector<ContainerStatuses::ContainerStatus>) };
        inline ContainerStatuses& setContainerStatus(const vector<ContainerStatuses::ContainerStatus> & containerStatus) { DARABONBA_PTR_SET_VALUE(containerStatus_, containerStatus) };
        inline ContainerStatuses& setContainerStatus(vector<ContainerStatuses::ContainerStatus> && containerStatus) { DARABONBA_PTR_SET_RVALUE(containerStatus_, containerStatus) };


      protected:
        shared_ptr<vector<ContainerStatuses::ContainerStatus>> containerStatus_ {};
      };

      virtual bool empty() const override { return this->containerService_ == nullptr
        && this->containerStatuses_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->resourceScope_ == nullptr && this->status_ == nullptr; };
      // containerService Field Functions 
      bool hasContainerService() const { return this->containerService_ != nullptr;};
      void deleteContainerService() { this->containerService_ = nullptr;};
      inline bool getContainerService() const { DARABONBA_PTR_GET_DEFAULT(containerService_, false) };
      inline PodAbstractInfo& setContainerService(bool containerService) { DARABONBA_PTR_SET_VALUE(containerService_, containerService) };


      // containerStatuses Field Functions 
      bool hasContainerStatuses() const { return this->containerStatuses_ != nullptr;};
      void deleteContainerStatuses() { this->containerStatuses_ = nullptr;};
      inline const PodAbstractInfo::ContainerStatuses & getContainerStatuses() const { DARABONBA_PTR_GET_CONST(containerStatuses_, PodAbstractInfo::ContainerStatuses) };
      inline PodAbstractInfo::ContainerStatuses getContainerStatuses() { DARABONBA_PTR_GET(containerStatuses_, PodAbstractInfo::ContainerStatuses) };
      inline PodAbstractInfo& setContainerStatuses(const PodAbstractInfo::ContainerStatuses & containerStatuses) { DARABONBA_PTR_SET_VALUE(containerStatuses_, containerStatuses) };
      inline PodAbstractInfo& setContainerStatuses(PodAbstractInfo::ContainerStatuses && containerStatuses) { DARABONBA_PTR_SET_RVALUE(containerStatuses_, containerStatuses) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline bool getName() const { DARABONBA_PTR_GET_DEFAULT(name_, false) };
      inline PodAbstractInfo& setName(bool name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline bool getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, false) };
      inline PodAbstractInfo& setNamespace(bool _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // resourceScope Field Functions 
      bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
      void deleteResourceScope() { this->resourceScope_ = nullptr;};
      inline bool getResourceScope() const { DARABONBA_PTR_GET_DEFAULT(resourceScope_, false) };
      inline PodAbstractInfo& setResourceScope(bool resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline PodAbstractInfo& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the container service.
      shared_ptr<bool> containerService_ {};
      // The information about the container.
      shared_ptr<PodAbstractInfo::ContainerStatuses> containerStatuses_ {};
      // The name of the pod.
      shared_ptr<bool> name_ {};
      // The name of the namespace.
      shared_ptr<bool> namespace_ {};
      // The pod scope.
      shared_ptr<bool> resourceScope_ {};
      // The status of the pod.
      shared_ptr<bool> status_ {};
    };

    virtual bool empty() const override { return this->index_ == nullptr
        && this->instanceId_ == nullptr && this->instanceIp_ == nullptr && this->instancePort_ == nullptr && this->podAbstractInfo_ == nullptr && this->requestId_ == nullptr
        && this->requestRepeated_ == nullptr && this->tcpPorts_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeServcieScheduleResponseBody& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeServcieScheduleResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string getInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline DescribeServcieScheduleResponseBody& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // instancePort Field Functions 
    bool hasInstancePort() const { return this->instancePort_ != nullptr;};
    void deleteInstancePort() { this->instancePort_ = nullptr;};
    inline int32_t getInstancePort() const { DARABONBA_PTR_GET_DEFAULT(instancePort_, 0) };
    inline DescribeServcieScheduleResponseBody& setInstancePort(int32_t instancePort) { DARABONBA_PTR_SET_VALUE(instancePort_, instancePort) };


    // podAbstractInfo Field Functions 
    bool hasPodAbstractInfo() const { return this->podAbstractInfo_ != nullptr;};
    void deletePodAbstractInfo() { this->podAbstractInfo_ = nullptr;};
    inline const DescribeServcieScheduleResponseBody::PodAbstractInfo & getPodAbstractInfo() const { DARABONBA_PTR_GET_CONST(podAbstractInfo_, DescribeServcieScheduleResponseBody::PodAbstractInfo) };
    inline DescribeServcieScheduleResponseBody::PodAbstractInfo getPodAbstractInfo() { DARABONBA_PTR_GET(podAbstractInfo_, DescribeServcieScheduleResponseBody::PodAbstractInfo) };
    inline DescribeServcieScheduleResponseBody& setPodAbstractInfo(const DescribeServcieScheduleResponseBody::PodAbstractInfo & podAbstractInfo) { DARABONBA_PTR_SET_VALUE(podAbstractInfo_, podAbstractInfo) };
    inline DescribeServcieScheduleResponseBody& setPodAbstractInfo(DescribeServcieScheduleResponseBody::PodAbstractInfo && podAbstractInfo) { DARABONBA_PTR_SET_RVALUE(podAbstractInfo_, podAbstractInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServcieScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestRepeated Field Functions 
    bool hasRequestRepeated() const { return this->requestRepeated_ != nullptr;};
    void deleteRequestRepeated() { this->requestRepeated_ = nullptr;};
    inline bool getRequestRepeated() const { DARABONBA_PTR_GET_DEFAULT(requestRepeated_, false) };
    inline DescribeServcieScheduleResponseBody& setRequestRepeated(bool requestRepeated) { DARABONBA_PTR_SET_VALUE(requestRepeated_, requestRepeated) };


    // tcpPorts Field Functions 
    bool hasTcpPorts() const { return this->tcpPorts_ != nullptr;};
    void deleteTcpPorts() { this->tcpPorts_ = nullptr;};
    inline string getTcpPorts() const { DARABONBA_PTR_GET_DEFAULT(tcpPorts_, "") };
    inline DescribeServcieScheduleResponseBody& setTcpPorts(string tcpPorts) { DARABONBA_PTR_SET_VALUE(tcpPorts_, tcpPorts) };


  protected:
    // The index number of the scheduled virtual device (pod).
    shared_ptr<int32_t> index_ {};
    // The ID of the scheduled instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the scheduled instance.
    shared_ptr<string> instanceIp_ {};
    // The start port of the scheduled instance.
    shared_ptr<int32_t> instancePort_ {};
    // The summary information about the scheduled virtual device.
    shared_ptr<DescribeServcieScheduleResponseBody::PodAbstractInfo> podAbstractInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is repeated.
    shared_ptr<bool> requestRepeated_ {};
    // The TCP port range of the scheduled instance or container. The value is in the ${from}-$-{to} format. Example: 80-88.
    shared_ptr<string> tcpPorts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
