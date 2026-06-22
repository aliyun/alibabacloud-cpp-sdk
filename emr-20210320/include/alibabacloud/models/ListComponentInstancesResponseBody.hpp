// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListComponentInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentInstances, componentInstances_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentInstances, componentInstances_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListComponentInstancesResponseBody() = default ;
    ListComponentInstancesResponseBody(const ListComponentInstancesResponseBody &) = default ;
    ListComponentInstancesResponseBody(ListComponentInstancesResponseBody &&) = default ;
    ListComponentInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentInstancesResponseBody() = default ;
    ListComponentInstancesResponseBody& operator=(const ListComponentInstancesResponseBody &) = default ;
    ListComponentInstancesResponseBody& operator=(ListComponentInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComponentInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComponentInstances& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(BizState, bizState_);
        DARABONBA_PTR_TO_JSON(CommissionState, commissionState_);
        DARABONBA_PTR_TO_JSON(ComponentInstanceState, componentInstanceState_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DesiredState, desiredState_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ComponentInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(BizState, bizState_);
        DARABONBA_PTR_FROM_JSON(CommissionState, commissionState_);
        DARABONBA_PTR_FROM_JSON(ComponentInstanceState, componentInstanceState_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DesiredState, desiredState_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ComponentInstances() = default ;
      ComponentInstances(const ComponentInstances &) = default ;
      ComponentInstances(ComponentInstances &&) = default ;
      ComponentInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComponentInstances() = default ;
      ComponentInstances& operator=(const ComponentInstances &) = default ;
      ComponentInstances& operator=(ComponentInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->bizState_ == nullptr && this->commissionState_ == nullptr && this->componentInstanceState_ == nullptr && this->componentName_ == nullptr && this->createTime_ == nullptr
        && this->desiredState_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->zoneId_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline ComponentInstances& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // bizState Field Functions 
      bool hasBizState() const { return this->bizState_ != nullptr;};
      void deleteBizState() { this->bizState_ = nullptr;};
      inline string getBizState() const { DARABONBA_PTR_GET_DEFAULT(bizState_, "") };
      inline ComponentInstances& setBizState(string bizState) { DARABONBA_PTR_SET_VALUE(bizState_, bizState) };


      // commissionState Field Functions 
      bool hasCommissionState() const { return this->commissionState_ != nullptr;};
      void deleteCommissionState() { this->commissionState_ = nullptr;};
      inline string getCommissionState() const { DARABONBA_PTR_GET_DEFAULT(commissionState_, "") };
      inline ComponentInstances& setCommissionState(string commissionState) { DARABONBA_PTR_SET_VALUE(commissionState_, commissionState) };


      // componentInstanceState Field Functions 
      bool hasComponentInstanceState() const { return this->componentInstanceState_ != nullptr;};
      void deleteComponentInstanceState() { this->componentInstanceState_ = nullptr;};
      inline string getComponentInstanceState() const { DARABONBA_PTR_GET_DEFAULT(componentInstanceState_, "") };
      inline ComponentInstances& setComponentInstanceState(string componentInstanceState) { DARABONBA_PTR_SET_VALUE(componentInstanceState_, componentInstanceState) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline ComponentInstances& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ComponentInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // desiredState Field Functions 
      bool hasDesiredState() const { return this->desiredState_ != nullptr;};
      void deleteDesiredState() { this->desiredState_ = nullptr;};
      inline string getDesiredState() const { DARABONBA_PTR_GET_DEFAULT(desiredState_, "") };
      inline ComponentInstances& setDesiredState(string desiredState) { DARABONBA_PTR_SET_VALUE(desiredState_, desiredState) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline ComponentInstances& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline ComponentInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ComponentInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The status of the component service. Valid values:
      // 
      // *   active: the primary service.
      // *   standby: the standby service.
      shared_ptr<string> bizState_ {};
      // The status of the Commission. Valid values:
      // 
      // *   COMMISSIONED
      // *   COMMISSIONING
      // *   DECOMMISSIONED
      // *   DECOMMISSIONINPROGRESS
      // *   DECOMMISSIONFAILED
      // *   INSERVICE
      // *   UNKNOWN
      shared_ptr<string> commissionState_ {};
      // The status of the component. Valid values:
      // 
      // *   WAITING
      // *   INSTALLING
      // *   INSTALLED
      // *   INSTALL_FAILED
      // *   STARTING
      // *   STARTED
      // *   START_FAILED
      // *   STOPPING
      // *   STOPPED
      // *   STOP_FAILED
      shared_ptr<string> componentInstanceState_ {};
      // The component name.
      shared_ptr<string> componentName_ {};
      // The timestamp of the installation.
      shared_ptr<int64_t> createTime_ {};
      // Valid values:
      // 
      // *   WAITING
      // *   INSTALLING
      // *   INSTALLED
      // *   INSTALL_FAILED
      // *   STARTING
      // *   STARTED
      // *   START_FAILED
      // *   STOPPING
      // *   STOPPED
      // *   STOP_FAILED
      shared_ptr<string> desiredState_ {};
      // The instance ID.
      shared_ptr<string> nodeId_ {};
      // The instance name.
      shared_ptr<string> nodeName_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->componentInstances_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // componentInstances Field Functions 
    bool hasComponentInstances() const { return this->componentInstances_ != nullptr;};
    void deleteComponentInstances() { this->componentInstances_ = nullptr;};
    inline const vector<ListComponentInstancesResponseBody::ComponentInstances> & getComponentInstances() const { DARABONBA_PTR_GET_CONST(componentInstances_, vector<ListComponentInstancesResponseBody::ComponentInstances>) };
    inline vector<ListComponentInstancesResponseBody::ComponentInstances> getComponentInstances() { DARABONBA_PTR_GET(componentInstances_, vector<ListComponentInstancesResponseBody::ComponentInstances>) };
    inline ListComponentInstancesResponseBody& setComponentInstances(const vector<ListComponentInstancesResponseBody::ComponentInstances> & componentInstances) { DARABONBA_PTR_SET_VALUE(componentInstances_, componentInstances) };
    inline ListComponentInstancesResponseBody& setComponentInstances(vector<ListComponentInstancesResponseBody::ComponentInstances> && componentInstances) { DARABONBA_PTR_SET_RVALUE(componentInstances_, componentInstances) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComponentInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComponentInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListComponentInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of instance component installation information.
    shared_ptr<vector<ListComponentInstancesResponseBody::ComponentInstances>> componentInstances_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
