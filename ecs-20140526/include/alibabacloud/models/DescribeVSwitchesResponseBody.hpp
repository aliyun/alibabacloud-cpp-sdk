// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHESRESPONSEBODY_HPP_
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
  class DescribeVSwitchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    DescribeVSwitchesResponseBody() = default ;
    DescribeVSwitchesResponseBody(const DescribeVSwitchesResponseBody &) = default ;
    DescribeVSwitchesResponseBody(DescribeVSwitchesResponseBody &&) = default ;
    DescribeVSwitchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchesResponseBody() = default ;
    DescribeVSwitchesResponseBody& operator=(const DescribeVSwitchesResponseBody &) = default ;
    DescribeVSwitchesResponseBody& operator=(DescribeVSwitchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VSwitches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitch, vSwitch_);
      };
      friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitch, vSwitch_);
      };
      VSwitches() = default ;
      VSwitches(const VSwitches &) = default ;
      VSwitches(VSwitches &&) = default ;
      VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VSwitches() = default ;
      VSwitches& operator=(const VSwitches &) = default ;
      VSwitches& operator=(VSwitches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VSwitch : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitch& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitch& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableIpAddressCount, availableIpAddressCount_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        VSwitch() = default ;
        VSwitch(const VSwitch &) = default ;
        VSwitch(VSwitch &&) = default ;
        VSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitch() = default ;
        VSwitch& operator=(const VSwitch &) = default ;
        VSwitch& operator=(VSwitch &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableIpAddressCount_ == nullptr
        && this->cidrBlock_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->isDefault_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // availableIpAddressCount Field Functions 
        bool hasAvailableIpAddressCount() const { return this->availableIpAddressCount_ != nullptr;};
        void deleteAvailableIpAddressCount() { this->availableIpAddressCount_ = nullptr;};
        inline int64_t getAvailableIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(availableIpAddressCount_, 0L) };
        inline VSwitch& setAvailableIpAddressCount(int64_t availableIpAddressCount) { DARABONBA_PTR_SET_VALUE(availableIpAddressCount_, availableIpAddressCount) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline VSwitch& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline VSwitch& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline VSwitch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline VSwitch& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline VSwitch& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VSwitch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline VSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vSwitchName Field Functions 
        bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
        void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
        inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
        inline VSwitch& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline VSwitch& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline VSwitch& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<int64_t> availableIpAddressCount_ {};
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vSwitchName_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->vSwitch_ == nullptr; };
      // vSwitch Field Functions 
      bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
      void deleteVSwitch() { this->vSwitch_ = nullptr;};
      inline const vector<VSwitches::VSwitch> & getVSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, vector<VSwitches::VSwitch>) };
      inline vector<VSwitches::VSwitch> getVSwitch() { DARABONBA_PTR_GET(vSwitch_, vector<VSwitches::VSwitch>) };
      inline VSwitches& setVSwitch(const vector<VSwitches::VSwitch> & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
      inline VSwitches& setVSwitch(vector<VSwitches::VSwitch> && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


    protected:
      shared_ptr<vector<VSwitches::VSwitch>> vSwitch_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vSwitches_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVSwitchesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVSwitchesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVSwitchesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const DescribeVSwitchesResponseBody::VSwitches & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, DescribeVSwitchesResponseBody::VSwitches) };
    inline DescribeVSwitchesResponseBody::VSwitches getVSwitches() { DARABONBA_PTR_GET(vSwitches_, DescribeVSwitchesResponseBody::VSwitches) };
    inline DescribeVSwitchesResponseBody& setVSwitches(const DescribeVSwitchesResponseBody::VSwitches & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeVSwitchesResponseBody& setVSwitches(DescribeVSwitchesResponseBody::VSwitches && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<DescribeVSwitchesResponseBody::VSwitches> vSwitches_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
