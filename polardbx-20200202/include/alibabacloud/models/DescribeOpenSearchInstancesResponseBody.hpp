// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeOpenSearchInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenSearchInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenSearchInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenSearchInstancesResponseBody() = default ;
    DescribeOpenSearchInstancesResponseBody(const DescribeOpenSearchInstancesResponseBody &) = default ;
    DescribeOpenSearchInstancesResponseBody(DescribeOpenSearchInstancesResponseBody &&) = default ;
    DescribeOpenSearchInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenSearchInstancesResponseBody() = default ;
    DescribeOpenSearchInstancesResponseBody& operator=(const DescribeOpenSearchInstancesResponseBody &) = default ;
    DescribeOpenSearchInstancesResponseBody& operator=(DescribeOpenSearchInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
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
      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataNodeCount, dataNodeCount_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SpecDisplay, specDisplay_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageSizeGB, storageSizeGB_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataNodeCount, dataNodeCount_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SpecDisplay, specDisplay_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageSizeGB, storageSizeGB_);
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
        virtual bool empty() const override { return this->availabilityZone_ == nullptr
        && this->chargeType_ == nullptr && this->cpu_ == nullptr && this->createTime_ == nullptr && this->dataNodeCount_ == nullptr && this->description_ == nullptr
        && this->engineVersion_ == nullptr && this->instanceId_ == nullptr && this->memoryGB_ == nullptr && this->netType_ == nullptr && this->regionId_ == nullptr
        && this->specDisplay_ == nullptr && this->status_ == nullptr && this->storageSizeGB_ == nullptr; };
        // availabilityZone Field Functions 
        bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
        void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
        inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
        inline Instances& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Instances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline Instances& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Instances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataNodeCount Field Functions 
        bool hasDataNodeCount() const { return this->dataNodeCount_ != nullptr;};
        void deleteDataNodeCount() { this->dataNodeCount_ = nullptr;};
        inline int32_t getDataNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dataNodeCount_, 0) };
        inline Instances& setDataNodeCount(int32_t dataNodeCount) { DARABONBA_PTR_SET_VALUE(dataNodeCount_, dataNodeCount) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Instances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline Instances& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline Instances& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline Instances& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // specDisplay Field Functions 
        bool hasSpecDisplay() const { return this->specDisplay_ != nullptr;};
        void deleteSpecDisplay() { this->specDisplay_ = nullptr;};
        inline string getSpecDisplay() const { DARABONBA_PTR_GET_DEFAULT(specDisplay_, "") };
        inline Instances& setSpecDisplay(string specDisplay) { DARABONBA_PTR_SET_VALUE(specDisplay_, specDisplay) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageSizeGB Field Functions 
        bool hasStorageSizeGB() const { return this->storageSizeGB_ != nullptr;};
        void deleteStorageSizeGB() { this->storageSizeGB_ = nullptr;};
        inline int32_t getStorageSizeGB() const { DARABONBA_PTR_GET_DEFAULT(storageSizeGB_, 0) };
        inline Instances& setStorageSizeGB(int32_t storageSizeGB) { DARABONBA_PTR_SET_VALUE(storageSizeGB_, storageSizeGB) };


      protected:
        shared_ptr<string> availabilityZone_ {};
        shared_ptr<string> chargeType_ {};
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int32_t> dataNodeCount_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> engineVersion_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int32_t> memoryGB_ {};
        shared_ptr<string> netType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> specDisplay_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int32_t> storageSizeGB_ {};
      };

      virtual bool empty() const override { return this->instances_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalNumber_ == nullptr; };
      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Data::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Data::Instances>) };
      inline vector<Data::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Data::Instances>) };
      inline Data& setInstances(const vector<Data::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<Data::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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


      // totalNumber Field Functions 
      bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
      void deleteTotalNumber() { this->totalNumber_ = nullptr;};
      inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
      inline Data& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


    protected:
      shared_ptr<vector<Data::Instances>> instances_ {};
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalNumber_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      shared_ptr<string> authAction_ {};
      shared_ptr<string> authPrincipalDisplayName_ {};
      shared_ptr<string> authPrincipalOwnerId_ {};
      shared_ptr<string> authPrincipalType_ {};
      shared_ptr<string> encodedDiagnosticMessage_ {};
      shared_ptr<string> noPermissionType_ {};
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeOpenSearchInstancesResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeOpenSearchInstancesResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchInstancesResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeOpenSearchInstancesResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchInstancesResponseBody& setAccessDeniedDetail(const DescribeOpenSearchInstancesResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeOpenSearchInstancesResponseBody& setAccessDeniedDetail(DescribeOpenSearchInstancesResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenSearchInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenSearchInstancesResponseBody::Data) };
    inline DescribeOpenSearchInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenSearchInstancesResponseBody::Data) };
    inline DescribeOpenSearchInstancesResponseBody& setData(const DescribeOpenSearchInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenSearchInstancesResponseBody& setData(DescribeOpenSearchInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenSearchInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeOpenSearchInstancesResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<DescribeOpenSearchInstancesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
