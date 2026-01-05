// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUNASSIGNEDMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUNASSIGNEDMACHINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudUnassignedMachinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudUnassignedMachinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UnassignedMachines, unassignedMachines_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudUnassignedMachinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UnassignedMachines, unassignedMachines_);
    };
    DescribeHybridCloudUnassignedMachinesResponseBody() = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody(const DescribeHybridCloudUnassignedMachinesResponseBody &) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody(DescribeHybridCloudUnassignedMachinesResponseBody &&) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudUnassignedMachinesResponseBody() = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody& operator=(const DescribeHybridCloudUnassignedMachinesResponseBody &) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBody& operator=(DescribeHybridCloudUnassignedMachinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnassignedMachines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnassignedMachines& obj) { 
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CustomName, customName_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(Mid, mid_);
      };
      friend void from_json(const Darabonba::Json& j, UnassignedMachines& obj) { 
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CustomName, customName_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(Mid, mid_);
      };
      UnassignedMachines() = default ;
      UnassignedMachines(const UnassignedMachines &) = default ;
      UnassignedMachines(UnassignedMachines &&) = default ;
      UnassignedMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnassignedMachines() = default ;
      UnassignedMachines& operator=(const UnassignedMachines &) = default ;
      UnassignedMachines& operator=(UnassignedMachines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpu_ == nullptr
        && this->customName_ == nullptr && this->hostName_ == nullptr && this->ip_ == nullptr && this->mac_ == nullptr && this->memory_ == nullptr
        && this->mid_ == nullptr; };
      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
      inline UnassignedMachines& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // customName Field Functions 
      bool hasCustomName() const { return this->customName_ != nullptr;};
      void deleteCustomName() { this->customName_ = nullptr;};
      inline string getCustomName() const { DARABONBA_PTR_GET_DEFAULT(customName_, "") };
      inline UnassignedMachines& setCustomName(string customName) { DARABONBA_PTR_SET_VALUE(customName_, customName) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline UnassignedMachines& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline UnassignedMachines& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline UnassignedMachines& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline UnassignedMachines& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // mid Field Functions 
      bool hasMid() const { return this->mid_ != nullptr;};
      void deleteMid() { this->mid_ = nullptr;};
      inline string getMid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
      inline UnassignedMachines& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


    protected:
      // The number of CPU cores.
      shared_ptr<int64_t> cpu_ {};
      // The name of the node.
      shared_ptr<string> customName_ {};
      // The host name.
      shared_ptr<string> hostName_ {};
      // The IP address of the server.
      shared_ptr<string> ip_ {};
      // The media access control (MAC) address of the device.
      shared_ptr<string> mac_ {};
      // The memory size. Unit: KB. A conversion factor of 1,000 is used.
      shared_ptr<int64_t> memory_ {};
      // The ID of the node.
      shared_ptr<string> mid_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->unassignedMachines_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudUnassignedMachinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeHybridCloudUnassignedMachinesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unassignedMachines Field Functions 
    bool hasUnassignedMachines() const { return this->unassignedMachines_ != nullptr;};
    void deleteUnassignedMachines() { this->unassignedMachines_ = nullptr;};
    inline const vector<DescribeHybridCloudUnassignedMachinesResponseBody::UnassignedMachines> & getUnassignedMachines() const { DARABONBA_PTR_GET_CONST(unassignedMachines_, vector<DescribeHybridCloudUnassignedMachinesResponseBody::UnassignedMachines>) };
    inline vector<DescribeHybridCloudUnassignedMachinesResponseBody::UnassignedMachines> getUnassignedMachines() { DARABONBA_PTR_GET(unassignedMachines_, vector<DescribeHybridCloudUnassignedMachinesResponseBody::UnassignedMachines>) };
    inline DescribeHybridCloudUnassignedMachinesResponseBody& setUnassignedMachines(const vector<DescribeHybridCloudUnassignedMachinesResponseBody::UnassignedMachines> & unassignedMachines) { DARABONBA_PTR_SET_VALUE(unassignedMachines_, unassignedMachines) };
    inline DescribeHybridCloudUnassignedMachinesResponseBody& setUnassignedMachines(vector<DescribeHybridCloudUnassignedMachinesResponseBody::UnassignedMachines> && unassignedMachines) { DARABONBA_PTR_SET_RVALUE(unassignedMachines_, unassignedMachines) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // The servers that are not assigned to the hybrid cloud cluster.
    shared_ptr<vector<DescribeHybridCloudUnassignedMachinesResponseBody::UnassignedMachines>> unassignedMachines_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
