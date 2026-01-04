// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMRESPONSEBODY_HPP_
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
  class CreateFileSystemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(AllocationIds, allocationIds_);
      DARABONBA_PTR_TO_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnAllocationId, unAllocationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(AllocationIds, allocationIds_);
      DARABONBA_PTR_FROM_JSON(BizStatusCode, bizStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnAllocationId, unAllocationId_);
    };
    CreateFileSystemResponseBody() = default ;
    CreateFileSystemResponseBody(const CreateFileSystemResponseBody &) = default ;
    CreateFileSystemResponseBody(CreateFileSystemResponseBody &&) = default ;
    CreateFileSystemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemResponseBody() = default ;
    CreateFileSystemResponseBody& operator=(const CreateFileSystemResponseBody &) = default ;
    CreateFileSystemResponseBody& operator=(CreateFileSystemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AllocationIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AllocationIds& obj) { 
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, AllocationIds& obj) { 
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      AllocationIds() = default ;
      AllocationIds(const AllocationIds &) = default ;
      AllocationIds(AllocationIds &&) = default ;
      AllocationIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AllocationIds() = default ;
      AllocationIds& operator=(const AllocationIds &) = default ;
      AllocationIds& operator=(AllocationIds &&) = default ;
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
      inline AllocationIds& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AllocationIds& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      shared_ptr<string> ensRegionId_ {};
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->allocationIds_ == nullptr && this->bizStatusCode_ == nullptr && this->requestId_ == nullptr && this->unAllocationId_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline const vector<string> & getAllocationId() const { DARABONBA_PTR_GET_CONST(allocationId_, vector<string>) };
    inline vector<string> getAllocationId() { DARABONBA_PTR_GET(allocationId_, vector<string>) };
    inline CreateFileSystemResponseBody& setAllocationId(const vector<string> & allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };
    inline CreateFileSystemResponseBody& setAllocationId(vector<string> && allocationId) { DARABONBA_PTR_SET_RVALUE(allocationId_, allocationId) };


    // allocationIds Field Functions 
    bool hasAllocationIds() const { return this->allocationIds_ != nullptr;};
    void deleteAllocationIds() { this->allocationIds_ = nullptr;};
    inline const vector<CreateFileSystemResponseBody::AllocationIds> & getAllocationIds() const { DARABONBA_PTR_GET_CONST(allocationIds_, vector<CreateFileSystemResponseBody::AllocationIds>) };
    inline vector<CreateFileSystemResponseBody::AllocationIds> getAllocationIds() { DARABONBA_PTR_GET(allocationIds_, vector<CreateFileSystemResponseBody::AllocationIds>) };
    inline CreateFileSystemResponseBody& setAllocationIds(const vector<CreateFileSystemResponseBody::AllocationIds> & allocationIds) { DARABONBA_PTR_SET_VALUE(allocationIds_, allocationIds) };
    inline CreateFileSystemResponseBody& setAllocationIds(vector<CreateFileSystemResponseBody::AllocationIds> && allocationIds) { DARABONBA_PTR_SET_RVALUE(allocationIds_, allocationIds) };


    // bizStatusCode Field Functions 
    bool hasBizStatusCode() const { return this->bizStatusCode_ != nullptr;};
    void deleteBizStatusCode() { this->bizStatusCode_ = nullptr;};
    inline string getBizStatusCode() const { DARABONBA_PTR_GET_DEFAULT(bizStatusCode_, "") };
    inline CreateFileSystemResponseBody& setBizStatusCode(string bizStatusCode) { DARABONBA_PTR_SET_VALUE(bizStatusCode_, bizStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFileSystemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unAllocationId Field Functions 
    bool hasUnAllocationId() const { return this->unAllocationId_ != nullptr;};
    void deleteUnAllocationId() { this->unAllocationId_ = nullptr;};
    inline const vector<string> & getUnAllocationId() const { DARABONBA_PTR_GET_CONST(unAllocationId_, vector<string>) };
    inline vector<string> getUnAllocationId() { DARABONBA_PTR_GET(unAllocationId_, vector<string>) };
    inline CreateFileSystemResponseBody& setUnAllocationId(const vector<string> & unAllocationId) { DARABONBA_PTR_SET_VALUE(unAllocationId_, unAllocationId) };
    inline CreateFileSystemResponseBody& setUnAllocationId(vector<string> && unAllocationId) { DARABONBA_PTR_SET_RVALUE(unAllocationId_, unAllocationId) };


  protected:
    // The information about the file system that was created.
    shared_ptr<vector<string>> allocationId_ {};
    shared_ptr<vector<CreateFileSystemResponseBody::AllocationIds>> allocationIds_ {};
    // The status code for successful operations. Valid values:
    // 
    // *   PartSuccess: The operation is partially successful.
    // *   AllSuccess: The operation is successful.
    shared_ptr<string> bizStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the file system that failed to be created.
    shared_ptr<vector<string>> unAllocationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
