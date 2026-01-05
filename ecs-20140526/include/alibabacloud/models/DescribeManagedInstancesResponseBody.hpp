// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMANAGEDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMANAGEDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeManagedInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeManagedInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeManagedInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeManagedInstancesResponseBody() = default ;
    DescribeManagedInstancesResponseBody(const DescribeManagedInstancesResponseBody &) = default ;
    DescribeManagedInstancesResponseBody(DescribeManagedInstancesResponseBody &&) = default ;
    DescribeManagedInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeManagedInstancesResponseBody() = default ;
    DescribeManagedInstancesResponseBody& operator=(const DescribeManagedInstancesResponseBody &) = default ;
    DescribeManagedInstancesResponseBody& operator=(DescribeManagedInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(ActivationId, activationId_);
        DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_TO_JSON(Connected, connected_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(InvocationCount, invocationCount_);
        DARABONBA_PTR_TO_JSON(LastInvokedTime, lastInvokedTime_);
        DARABONBA_PTR_TO_JSON(MachineId, machineId_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
        DARABONBA_PTR_TO_JSON(RegistrationTime, registrationTime_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivationId, activationId_);
        DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
        DARABONBA_PTR_FROM_JSON(Connected, connected_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(InvocationCount, invocationCount_);
        DARABONBA_PTR_FROM_JSON(LastInvokedTime, lastInvokedTime_);
        DARABONBA_PTR_FROM_JSON(MachineId, machineId_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
        DARABONBA_PTR_FROM_JSON(RegistrationTime, registrationTime_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The key of tag N of the managed instance. Valid values of N: 1 to 20. The tag key cannot be an empty string.
        // 
        // If a single tag is specified to query resources, up to 1,000 resources that have this tag added are returned. If multiple tags are specified to query resources, up to 1,000 resources that have all these tags added are returned. To query more than 1,000 resources that have the specified tags, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
        // 
        // The tag key can be up to 64 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
        shared_ptr<string> tagKey_ {};
        // The value of tag N of the managed instance. Valid values of N: 1 to 20. The tag value can be an empty string.
        // 
        // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->activationId_ == nullptr
        && this->agentVersion_ == nullptr && this->connected_ == nullptr && this->hostname_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->invocationCount_ == nullptr && this->lastInvokedTime_ == nullptr && this->machineId_ == nullptr
        && this->osType_ == nullptr && this->osVersion_ == nullptr && this->registrationTime_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
      // activationId Field Functions 
      bool hasActivationId() const { return this->activationId_ != nullptr;};
      void deleteActivationId() { this->activationId_ = nullptr;};
      inline string getActivationId() const { DARABONBA_PTR_GET_DEFAULT(activationId_, "") };
      inline Instances& setActivationId(string activationId) { DARABONBA_PTR_SET_VALUE(activationId_, activationId) };


      // agentVersion Field Functions 
      bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
      void deleteAgentVersion() { this->agentVersion_ = nullptr;};
      inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
      inline Instances& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


      // connected Field Functions 
      bool hasConnected() const { return this->connected_ != nullptr;};
      void deleteConnected() { this->connected_ = nullptr;};
      inline bool getConnected() const { DARABONBA_PTR_GET_DEFAULT(connected_, false) };
      inline Instances& setConnected(bool connected) { DARABONBA_PTR_SET_VALUE(connected_, connected) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Instances& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Instances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Instances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // invocationCount Field Functions 
      bool hasInvocationCount() const { return this->invocationCount_ != nullptr;};
      void deleteInvocationCount() { this->invocationCount_ = nullptr;};
      inline int64_t getInvocationCount() const { DARABONBA_PTR_GET_DEFAULT(invocationCount_, 0L) };
      inline Instances& setInvocationCount(int64_t invocationCount) { DARABONBA_PTR_SET_VALUE(invocationCount_, invocationCount) };


      // lastInvokedTime Field Functions 
      bool hasLastInvokedTime() const { return this->lastInvokedTime_ != nullptr;};
      void deleteLastInvokedTime() { this->lastInvokedTime_ = nullptr;};
      inline string getLastInvokedTime() const { DARABONBA_PTR_GET_DEFAULT(lastInvokedTime_, "") };
      inline Instances& setLastInvokedTime(string lastInvokedTime) { DARABONBA_PTR_SET_VALUE(lastInvokedTime_, lastInvokedTime) };


      // machineId Field Functions 
      bool hasMachineId() const { return this->machineId_ != nullptr;};
      void deleteMachineId() { this->machineId_ = nullptr;};
      inline string getMachineId() const { DARABONBA_PTR_GET_DEFAULT(machineId_, "") };
      inline Instances& setMachineId(string machineId) { DARABONBA_PTR_SET_VALUE(machineId_, machineId) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Instances& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // osVersion Field Functions 
      bool hasOsVersion() const { return this->osVersion_ != nullptr;};
      void deleteOsVersion() { this->osVersion_ = nullptr;};
      inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
      inline Instances& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


      // registrationTime Field Functions 
      bool hasRegistrationTime() const { return this->registrationTime_ != nullptr;};
      void deleteRegistrationTime() { this->registrationTime_ = nullptr;};
      inline string getRegistrationTime() const { DARABONBA_PTR_GET_DEFAULT(registrationTime_, "") };
      inline Instances& setRegistrationTime(string registrationTime) { DARABONBA_PTR_SET_VALUE(registrationTime_, registrationTime) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Instances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Instances::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Instances::Tags>) };
      inline vector<Instances::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Instances::Tags>) };
      inline Instances& setTags(const vector<Instances::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Instances& setTags(vector<Instances::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the activation code.
      shared_ptr<string> activationId_ {};
      // The version number of Cloud Assistant Agent.
      shared_ptr<string> agentVersion_ {};
      // Indicates whether the managed instance is connected. Valid values:
      // 
      // *   true: The managed instance is connected. You can manage the instance by using Cloud Assistant.
      // *   false: The managed instance is not connected. The managed instance may be down or Cloud Assistant Agent may be incorrectly installed.
      shared_ptr<bool> connected_ {};
      // The hostname of the managed instance.
      shared_ptr<string> hostname_ {};
      // The ID of the managed instance.
      shared_ptr<string> instanceId_ {};
      // The name of the managed instance.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the managed instance.
      shared_ptr<string> internetIp_ {};
      // The internal IP address of the managed instance.
      shared_ptr<string> intranetIp_ {};
      // The number of times that Cloud Assistant tasks were executed on the managed instance.
      shared_ptr<int64_t> invocationCount_ {};
      // The time when the last Cloud Assistant task was executed.
      shared_ptr<string> lastInvokedTime_ {};
      // The machine code of the managed instance.
      shared_ptr<string> machineId_ {};
      // The operating system type of the managed instance.
      shared_ptr<string> osType_ {};
      // The version information of the operating system.
      shared_ptr<string> osVersion_ {};
      // The time when the managed instance was registered.
      shared_ptr<string> registrationTime_ {};
      // The ID of the resource group to which the managed instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The tags of the managed instance.
      shared_ptr<vector<Instances::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeManagedInstancesResponseBody::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeManagedInstancesResponseBody::Instances>) };
    inline vector<DescribeManagedInstancesResponseBody::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeManagedInstancesResponseBody::Instances>) };
    inline DescribeManagedInstancesResponseBody& setInstances(const vector<DescribeManagedInstancesResponseBody::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeManagedInstancesResponseBody& setInstances(vector<DescribeManagedInstancesResponseBody::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeManagedInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeManagedInstancesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeManagedInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeManagedInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeManagedInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried managed instances.
    shared_ptr<vector<DescribeManagedInstancesResponseBody::Instances>> instances_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of queried managed instances.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
