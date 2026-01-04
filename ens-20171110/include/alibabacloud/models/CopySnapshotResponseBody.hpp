// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYSNAPSHOTRESPONSEBODY_HPP_
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
  class CopySnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnAllocationId, unAllocationId_);
    };
    friend void from_json(const Darabonba::Json& j, CopySnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnAllocationId, unAllocationId_);
    };
    CopySnapshotResponseBody() = default ;
    CopySnapshotResponseBody(const CopySnapshotResponseBody &) = default ;
    CopySnapshotResponseBody(CopySnapshotResponseBody &&) = default ;
    CopySnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySnapshotResponseBody() = default ;
    CopySnapshotResponseBody& operator=(const CopySnapshotResponseBody &) = default ;
    CopySnapshotResponseBody& operator=(CopySnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnAllocationId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnAllocationId& obj) { 
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      };
      friend void from_json(const Darabonba::Json& j, UnAllocationId& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      };
      UnAllocationId() = default ;
      UnAllocationId(const UnAllocationId &) = default ;
      UnAllocationId(UnAllocationId &&) = default ;
      UnAllocationId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnAllocationId() = default ;
      UnAllocationId& operator=(const UnAllocationId &) = default ;
      UnAllocationId& operator=(UnAllocationId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ensRegionId_ == nullptr; };
      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline UnAllocationId& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    protected:
      // The ID of the node.
      shared_ptr<string> ensRegionId_ {};
    };

    class AllocationId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AllocationId& obj) { 
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, AllocationId& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      AllocationId() = default ;
      AllocationId(const AllocationId &) = default ;
      AllocationId(AllocationId &&) = default ;
      AllocationId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AllocationId() = default ;
      AllocationId& operator=(const AllocationId &) = default ;
      AllocationId& operator=(AllocationId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && this->instanceId_ == nullptr; };
      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline AllocationId& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
      inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
      inline AllocationId& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
      inline AllocationId& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    protected:
      // The ID of the node.
      shared_ptr<string> ensRegionId_ {};
      // The IDs of the instances.
      shared_ptr<vector<string>> instanceId_ {};
    };

    virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->bizStatusCode_ == nullptr && this->requestId_ == nullptr && this->unAllocationId_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline const vector<CopySnapshotResponseBody::AllocationId> & getAllocationId() const { DARABONBA_PTR_GET_CONST(allocationId_, vector<CopySnapshotResponseBody::AllocationId>) };
    inline vector<CopySnapshotResponseBody::AllocationId> getAllocationId() { DARABONBA_PTR_GET(allocationId_, vector<CopySnapshotResponseBody::AllocationId>) };
    inline CopySnapshotResponseBody& setAllocationId(const vector<CopySnapshotResponseBody::AllocationId> & allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };
    inline CopySnapshotResponseBody& setAllocationId(vector<CopySnapshotResponseBody::AllocationId> && allocationId) { DARABONBA_PTR_SET_RVALUE(allocationId_, allocationId) };


    // bizStatusCode Field Functions 
    bool hasBizStatusCode() const { return this->bizStatusCode_ != nullptr;};
    void deleteBizStatusCode() { this->bizStatusCode_ = nullptr;};
    inline string getBizStatusCode() const { DARABONBA_PTR_GET_DEFAULT(bizStatusCode_, "") };
    inline CopySnapshotResponseBody& setBizStatusCode(string bizStatusCode) { DARABONBA_PTR_SET_VALUE(bizStatusCode_, bizStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopySnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unAllocationId Field Functions 
    bool hasUnAllocationId() const { return this->unAllocationId_ != nullptr;};
    void deleteUnAllocationId() { this->unAllocationId_ = nullptr;};
    inline const vector<CopySnapshotResponseBody::UnAllocationId> & getUnAllocationId() const { DARABONBA_PTR_GET_CONST(unAllocationId_, vector<CopySnapshotResponseBody::UnAllocationId>) };
    inline vector<CopySnapshotResponseBody::UnAllocationId> getUnAllocationId() { DARABONBA_PTR_GET(unAllocationId_, vector<CopySnapshotResponseBody::UnAllocationId>) };
    inline CopySnapshotResponseBody& setUnAllocationId(const vector<CopySnapshotResponseBody::UnAllocationId> & unAllocationId) { DARABONBA_PTR_SET_VALUE(unAllocationId_, unAllocationId) };
    inline CopySnapshotResponseBody& setUnAllocationId(vector<CopySnapshotResponseBody::UnAllocationId> && unAllocationId) { DARABONBA_PTR_SET_RVALUE(unAllocationId_, unAllocationId) };


  protected:
    // The list of created snapshots.
    shared_ptr<vector<CopySnapshotResponseBody::AllocationId>> allocationId_ {};
    // The success status code.
    // 
    // *   **PartSuccess**: partially succeeded.
    // *   **AllSuccess**: all succeeded.
    shared_ptr<string> bizStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of nodes that are not created.
    shared_ptr<vector<CopySnapshotResponseBody::UnAllocationId>> unAllocationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
