// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSCMOUNTPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DescribeVscMountPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVscMountPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountPoints, mountPoints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVscMountPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPoints, mountPoints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVscMountPointsResponseBody() = default ;
    DescribeVscMountPointsResponseBody(const DescribeVscMountPointsResponseBody &) = default ;
    DescribeVscMountPointsResponseBody(DescribeVscMountPointsResponseBody &&) = default ;
    DescribeVscMountPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVscMountPointsResponseBody() = default ;
    DescribeVscMountPointsResponseBody& operator=(const DescribeVscMountPointsResponseBody &) = default ;
    DescribeVscMountPointsResponseBody& operator=(DescribeVscMountPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MountPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountPoints& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceTotalCount, instanceTotalCount_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(MountPointAlias, mountPointAlias_);
        DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      };
      friend void from_json(const Darabonba::Json& j, MountPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceTotalCount, instanceTotalCount_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(MountPointAlias, mountPointAlias_);
        DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      };
      MountPoints() = default ;
      MountPoints(const MountPoints &) = default ;
      MountPoints(MountPoints &&) = default ;
      MountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountPoints() = default ;
      MountPoints& operator=(const MountPoints &) = default ;
      MountPoints& operator=(MountPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Vscs, vscs_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Vscs, vscs_);
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
        class Vscs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Vscs& obj) { 
            DARABONBA_PTR_TO_JSON(VscId, vscId_);
            DARABONBA_PTR_TO_JSON(VscName, vscName_);
            DARABONBA_PTR_TO_JSON(VscStatus, vscStatus_);
            DARABONBA_PTR_TO_JSON(VscType, vscType_);
          };
          friend void from_json(const Darabonba::Json& j, Vscs& obj) { 
            DARABONBA_PTR_FROM_JSON(VscId, vscId_);
            DARABONBA_PTR_FROM_JSON(VscName, vscName_);
            DARABONBA_PTR_FROM_JSON(VscStatus, vscStatus_);
            DARABONBA_PTR_FROM_JSON(VscType, vscType_);
          };
          Vscs() = default ;
          Vscs(const Vscs &) = default ;
          Vscs(Vscs &&) = default ;
          Vscs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Vscs() = default ;
          Vscs& operator=(const Vscs &) = default ;
          Vscs& operator=(Vscs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->vscId_ == nullptr
        && this->vscName_ == nullptr && this->vscStatus_ == nullptr && this->vscType_ == nullptr; };
          // vscId Field Functions 
          bool hasVscId() const { return this->vscId_ != nullptr;};
          void deleteVscId() { this->vscId_ = nullptr;};
          inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
          inline Vscs& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


          // vscName Field Functions 
          bool hasVscName() const { return this->vscName_ != nullptr;};
          void deleteVscName() { this->vscName_ = nullptr;};
          inline string getVscName() const { DARABONBA_PTR_GET_DEFAULT(vscName_, "") };
          inline Vscs& setVscName(string vscName) { DARABONBA_PTR_SET_VALUE(vscName_, vscName) };


          // vscStatus Field Functions 
          bool hasVscStatus() const { return this->vscStatus_ != nullptr;};
          void deleteVscStatus() { this->vscStatus_ = nullptr;};
          inline string getVscStatus() const { DARABONBA_PTR_GET_DEFAULT(vscStatus_, "") };
          inline Vscs& setVscStatus(string vscStatus) { DARABONBA_PTR_SET_VALUE(vscStatus_, vscStatus) };


          // vscType Field Functions 
          bool hasVscType() const { return this->vscType_ != nullptr;};
          void deleteVscType() { this->vscType_ = nullptr;};
          inline string getVscType() const { DARABONBA_PTR_GET_DEFAULT(vscType_, "") };
          inline Vscs& setVscType(string vscType) { DARABONBA_PTR_SET_VALUE(vscType_, vscType) };


        protected:
          shared_ptr<string> vscId_ {};
          shared_ptr<string> vscName_ {};
          shared_ptr<string> vscStatus_ {};
          shared_ptr<string> vscType_ {};
        };

        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->status_ == nullptr && this->vscs_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vscs Field Functions 
        bool hasVscs() const { return this->vscs_ != nullptr;};
        void deleteVscs() { this->vscs_ = nullptr;};
        inline const vector<Instances::Vscs> & getVscs() const { DARABONBA_PTR_GET_CONST(vscs_, vector<Instances::Vscs>) };
        inline vector<Instances::Vscs> getVscs() { DARABONBA_PTR_GET(vscs_, vector<Instances::Vscs>) };
        inline Instances& setVscs(const vector<Instances::Vscs> & vscs) { DARABONBA_PTR_SET_VALUE(vscs_, vscs) };
        inline Instances& setVscs(vector<Instances::Vscs> && vscs) { DARABONBA_PTR_SET_RVALUE(vscs_, vscs) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<vector<Instances::Vscs>> vscs_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->instanceTotalCount_ == nullptr && this->instances_ == nullptr && this->mountPointAlias_ == nullptr && this->mountPointId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MountPoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceTotalCount Field Functions 
      bool hasInstanceTotalCount() const { return this->instanceTotalCount_ != nullptr;};
      void deleteInstanceTotalCount() { this->instanceTotalCount_ = nullptr;};
      inline int32_t getInstanceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(instanceTotalCount_, 0) };
      inline MountPoints& setInstanceTotalCount(int32_t instanceTotalCount) { DARABONBA_PTR_SET_VALUE(instanceTotalCount_, instanceTotalCount) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<MountPoints::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<MountPoints::Instances>) };
      inline vector<MountPoints::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<MountPoints::Instances>) };
      inline MountPoints& setInstances(const vector<MountPoints::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline MountPoints& setInstances(vector<MountPoints::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // mountPointAlias Field Functions 
      bool hasMountPointAlias() const { return this->mountPointAlias_ != nullptr;};
      void deleteMountPointAlias() { this->mountPointAlias_ = nullptr;};
      inline string getMountPointAlias() const { DARABONBA_PTR_GET_DEFAULT(mountPointAlias_, "") };
      inline MountPoints& setMountPointAlias(string mountPointAlias) { DARABONBA_PTR_SET_VALUE(mountPointAlias_, mountPointAlias) };


      // mountPointId Field Functions 
      bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
      void deleteMountPointId() { this->mountPointId_ = nullptr;};
      inline string getMountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
      inline MountPoints& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> instanceTotalCount_ {};
      shared_ptr<vector<MountPoints::Instances>> instances_ {};
      shared_ptr<string> mountPointAlias_ {};
      shared_ptr<string> mountPointId_ {};
    };

    virtual bool empty() const override { return this->mountPoints_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<DescribeVscMountPointsResponseBody::MountPoints> & getMountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<DescribeVscMountPointsResponseBody::MountPoints>) };
    inline vector<DescribeVscMountPointsResponseBody::MountPoints> getMountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<DescribeVscMountPointsResponseBody::MountPoints>) };
    inline DescribeVscMountPointsResponseBody& setMountPoints(const vector<DescribeVscMountPointsResponseBody::MountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline DescribeVscMountPointsResponseBody& setMountPoints(vector<DescribeVscMountPointsResponseBody::MountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVscMountPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVscMountPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeVscMountPointsResponseBody::MountPoints>> mountPoints_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
