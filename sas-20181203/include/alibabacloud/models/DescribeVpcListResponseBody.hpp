// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    DescribeVpcListResponseBody() = default ;
    DescribeVpcListResponseBody(const DescribeVpcListResponseBody &) = default ;
    DescribeVpcListResponseBody(DescribeVpcListResponseBody &&) = default ;
    DescribeVpcListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcListResponseBody() = default ;
    DescribeVpcListResponseBody& operator=(const DescribeVpcListResponseBody &) = default ;
    DescribeVpcListResponseBody& operator=(DescribeVpcListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcList& obj) { 
        DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
        DARABONBA_PTR_TO_JSON(InstanceDesc, instanceDesc_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, VpcList& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
        DARABONBA_PTR_FROM_JSON(InstanceDesc, instanceDesc_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      VpcList() = default ;
      VpcList(const VpcList &) = default ;
      VpcList(VpcList &&) = default ;
      VpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcList() = default ;
      VpcList& operator=(const VpcList &) = default ;
      VpcList& operator=(VpcList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ecsCount_ == nullptr
        && this->instanceDesc_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
      // ecsCount Field Functions 
      bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
      void deleteEcsCount() { this->ecsCount_ = nullptr;};
      inline int32_t getEcsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
      inline VpcList& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


      // instanceDesc Field Functions 
      bool hasInstanceDesc() const { return this->instanceDesc_ != nullptr;};
      void deleteInstanceDesc() { this->instanceDesc_ = nullptr;};
      inline string getInstanceDesc() const { DARABONBA_PTR_GET_DEFAULT(instanceDesc_, "") };
      inline VpcList& setInstanceDesc(string instanceDesc) { DARABONBA_PTR_SET_VALUE(instanceDesc_, instanceDesc) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline VpcList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline VpcList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline VpcList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The number of Elastic Compute Service (ECS) instances.
      shared_ptr<int32_t> ecsCount_ {};
      // The information about the virtual private cloud (VPC).
      shared_ptr<string> instanceDesc_ {};
      // The ID of the ECS instance.
      shared_ptr<string> instanceId_ {};
      // The name of the VPC.
      shared_ptr<string> instanceName_ {};
      // The region in which the server resides.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->requestId_ == nullptr && this->vpcList_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeVpcListResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const vector<DescribeVpcListResponseBody::VpcList> & getVpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<DescribeVpcListResponseBody::VpcList>) };
    inline vector<DescribeVpcListResponseBody::VpcList> getVpcList() { DARABONBA_PTR_GET(vpcList_, vector<DescribeVpcListResponseBody::VpcList>) };
    inline DescribeVpcListResponseBody& setVpcList(const vector<DescribeVpcListResponseBody::VpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline DescribeVpcListResponseBody& setVpcList(vector<DescribeVpcListResponseBody::VpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of VPCs.
    shared_ptr<vector<DescribeVpcListResponseBody::VpcList>> vpcList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
