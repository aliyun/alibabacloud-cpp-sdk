// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeGadInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GadInstances, gadInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GadInstances, gadInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGadInstancesResponseBody() = default ;
    DescribeGadInstancesResponseBody(const DescribeGadInstancesResponseBody &) = default ;
    DescribeGadInstancesResponseBody(DescribeGadInstancesResponseBody &&) = default ;
    DescribeGadInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesResponseBody() = default ;
    DescribeGadInstancesResponseBody& operator=(const DescribeGadInstancesResponseBody &) = default ;
    DescribeGadInstancesResponseBody& operator=(DescribeGadInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GadInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GadInstances& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GadInstanceMembers, gadInstanceMembers_);
        DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(Service, service_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, GadInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GadInstanceMembers, gadInstanceMembers_);
        DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      GadInstances() = default ;
      GadInstances(const GadInstances &) = default ;
      GadInstances(GadInstances &&) = default ;
      GadInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GadInstances() = default ;
      GadInstances& operator=(const GadInstances &) = default ;
      GadInstances& operator=(GadInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GadInstanceMembers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GadInstanceMembers& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
          DARABONBA_PTR_TO_JSON(DtsInstance, dtsInstance_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, GadInstanceMembers& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
          DARABONBA_PTR_FROM_JSON(DtsInstance, dtsInstance_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        GadInstanceMembers() = default ;
        GadInstanceMembers(const GadInstanceMembers &) = default ;
        GadInstanceMembers(GadInstanceMembers &&) = default ;
        GadInstanceMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GadInstanceMembers() = default ;
        GadInstanceMembers& operator=(const GadInstanceMembers &) = default ;
        GadInstanceMembers& operator=(GadInstanceMembers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && this->dtsInstance_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->role_ == nullptr && this->status_ == nullptr; };
        // DBInstanceID Field Functions 
        bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
        void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
        inline string getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, "") };
        inline GadInstanceMembers& setDBInstanceID(string DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


        // dtsInstance Field Functions 
        bool hasDtsInstance() const { return this->dtsInstance_ != nullptr;};
        void deleteDtsInstance() { this->dtsInstance_ = nullptr;};
        inline string getDtsInstance() const { DARABONBA_PTR_GET_DEFAULT(dtsInstance_, "") };
        inline GadInstanceMembers& setDtsInstance(string dtsInstance) { DARABONBA_PTR_SET_VALUE(dtsInstance_, dtsInstance) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline GadInstanceMembers& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline GadInstanceMembers& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline GadInstanceMembers& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline GadInstanceMembers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline GadInstanceMembers& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline GadInstanceMembers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the node.
        shared_ptr<string> DBInstanceID_ {};
        // A JSON array that consists of the details about the Data Transmission Service (DTS) synchronization task.
        // 
        // >  Each unit node (secondary node) synchronizes data from the central node (primary node) by using DTS. This parameter contains the synchronization link ID and request ID of DTS.
        shared_ptr<string> dtsInstance_ {};
        // The database engine that is run by the node.
        // 
        // >  The value of this parameter is fixed as **mysql**.
        shared_ptr<string> engine_ {};
        // The database engine version that is run by the node.
        shared_ptr<string> engineVersion_ {};
        // The ID of the region where the node resides.
        shared_ptr<string> regionId_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The type of the node. Valid values:
        // 
        // *   **CENTRAL**: The node is a central node. Each global active database cluster has only one central node. All unit nodes synchronize data from the central node.
        // *   **UNIT**: The node is a unit node. Each global active database cluster can have up to 10 unit nodes. All unit nodes synchronize data from the central node.
        shared_ptr<string> role_ {};
        // The node status. Valid values:
        // 
        // *   **activation**: The node is running.
        // *   **creating**: The node is being created.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->gadInstanceMembers_ == nullptr && this->gadInstanceName_ == nullptr && this->modificationTime_ == nullptr && this->service_ == nullptr
        && this->status_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline GadInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GadInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gadInstanceMembers Field Functions 
      bool hasGadInstanceMembers() const { return this->gadInstanceMembers_ != nullptr;};
      void deleteGadInstanceMembers() { this->gadInstanceMembers_ = nullptr;};
      inline const vector<GadInstances::GadInstanceMembers> & getGadInstanceMembers() const { DARABONBA_PTR_GET_CONST(gadInstanceMembers_, vector<GadInstances::GadInstanceMembers>) };
      inline vector<GadInstances::GadInstanceMembers> getGadInstanceMembers() { DARABONBA_PTR_GET(gadInstanceMembers_, vector<GadInstances::GadInstanceMembers>) };
      inline GadInstances& setGadInstanceMembers(const vector<GadInstances::GadInstanceMembers> & gadInstanceMembers) { DARABONBA_PTR_SET_VALUE(gadInstanceMembers_, gadInstanceMembers) };
      inline GadInstances& setGadInstanceMembers(vector<GadInstances::GadInstanceMembers> && gadInstanceMembers) { DARABONBA_PTR_SET_RVALUE(gadInstanceMembers_, gadInstanceMembers) };


      // gadInstanceName Field Functions 
      bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
      void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
      inline string getGadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
      inline GadInstances& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline GadInstances& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
      inline GadInstances& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline GadInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the global active database cluster was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The name of the cluster.
      shared_ptr<string> description_ {};
      // The information about each node in the cluster.
      shared_ptr<vector<GadInstances::GadInstanceMembers>> gadInstanceMembers_ {};
      // The ID of the global active database cluster.
      shared_ptr<string> gadInstanceName_ {};
      // The time when the most recent modification was made to the global active database cluster. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The database engine that is run by the global active database cluster.
      // 
      // >  The value of this parameter is fixed as **mysql**.
      shared_ptr<string> service_ {};
      // The status of the cluster. Valid values:
      // 
      // *   **activation**: The cluster is running.
      // *   **creating**: The cluster is being created.
      // *   **replica_adding**: Nodes are being added to the cluster.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->gadInstances_ == nullptr
        && this->requestId_ == nullptr; };
    // gadInstances Field Functions 
    bool hasGadInstances() const { return this->gadInstances_ != nullptr;};
    void deleteGadInstances() { this->gadInstances_ = nullptr;};
    inline const vector<DescribeGadInstancesResponseBody::GadInstances> & getGadInstances() const { DARABONBA_PTR_GET_CONST(gadInstances_, vector<DescribeGadInstancesResponseBody::GadInstances>) };
    inline vector<DescribeGadInstancesResponseBody::GadInstances> getGadInstances() { DARABONBA_PTR_GET(gadInstances_, vector<DescribeGadInstancesResponseBody::GadInstances>) };
    inline DescribeGadInstancesResponseBody& setGadInstances(const vector<DescribeGadInstancesResponseBody::GadInstances> & gadInstances) { DARABONBA_PTR_SET_VALUE(gadInstances_, gadInstances) };
    inline DescribeGadInstancesResponseBody& setGadInstances(vector<DescribeGadInstancesResponseBody::GadInstances> && gadInstances) { DARABONBA_PTR_SET_RVALUE(gadInstances_, gadInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGadInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the global active database cluster.
    shared_ptr<vector<DescribeGadInstancesResponseBody::GadInstances>> gadInstances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
