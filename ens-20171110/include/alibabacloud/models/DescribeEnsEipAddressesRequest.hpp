// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESREQUEST_HPP_
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
  class DescribeEnsEipAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsEipAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(AssociatedInstanceId, associatedInstanceId_);
      DARABONBA_PTR_TO_JSON(AssociatedInstanceType, associatedInstanceType_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EipName, eipName_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Standby, standby_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsEipAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstanceId, associatedInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstanceType, associatedInstanceType_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EipName, eipName_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Standby, standby_);
    };
    DescribeEnsEipAddressesRequest() = default ;
    DescribeEnsEipAddressesRequest(const DescribeEnsEipAddressesRequest &) = default ;
    DescribeEnsEipAddressesRequest(DescribeEnsEipAddressesRequest &&) = default ;
    DescribeEnsEipAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsEipAddressesRequest() = default ;
    DescribeEnsEipAddressesRequest& operator=(const DescribeEnsEipAddressesRequest &) = default ;
    DescribeEnsEipAddressesRequest& operator=(DescribeEnsEipAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->associatedInstanceId_ == nullptr && this->associatedInstanceType_ == nullptr && this->eipAddress_ == nullptr && this->eipName_ == nullptr && this->ensRegionId_ == nullptr
        && this->ensRegionIds_ == nullptr && this->icmpReplyEnabled_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->standby_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline DescribeEnsEipAddressesRequest& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // associatedInstanceId Field Functions 
    bool hasAssociatedInstanceId() const { return this->associatedInstanceId_ != nullptr;};
    void deleteAssociatedInstanceId() { this->associatedInstanceId_ = nullptr;};
    inline string getAssociatedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceId_, "") };
    inline DescribeEnsEipAddressesRequest& setAssociatedInstanceId(string associatedInstanceId) { DARABONBA_PTR_SET_VALUE(associatedInstanceId_, associatedInstanceId) };


    // associatedInstanceType Field Functions 
    bool hasAssociatedInstanceType() const { return this->associatedInstanceType_ != nullptr;};
    void deleteAssociatedInstanceType() { this->associatedInstanceType_ = nullptr;};
    inline string getAssociatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceType_, "") };
    inline DescribeEnsEipAddressesRequest& setAssociatedInstanceType(string associatedInstanceType) { DARABONBA_PTR_SET_VALUE(associatedInstanceType_, associatedInstanceType) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline string getEipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
    inline DescribeEnsEipAddressesRequest& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


    // eipName Field Functions 
    bool hasEipName() const { return this->eipName_ != nullptr;};
    void deleteEipName() { this->eipName_ = nullptr;};
    inline string getEipName() const { DARABONBA_PTR_GET_DEFAULT(eipName_, "") };
    inline DescribeEnsEipAddressesRequest& setEipName(string eipName) { DARABONBA_PTR_SET_VALUE(eipName_, eipName) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsEipAddressesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline const vector<string> & getEnsRegionIds() const { DARABONBA_PTR_GET_CONST(ensRegionIds_, vector<string>) };
    inline vector<string> getEnsRegionIds() { DARABONBA_PTR_GET(ensRegionIds_, vector<string>) };
    inline DescribeEnsEipAddressesRequest& setEnsRegionIds(const vector<string> & ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };
    inline DescribeEnsEipAddressesRequest& setEnsRegionIds(vector<string> && ensRegionIds) { DARABONBA_PTR_SET_RVALUE(ensRegionIds_, ensRegionIds) };


    // icmpReplyEnabled Field Functions 
    bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
    void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
    inline bool getIcmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
    inline DescribeEnsEipAddressesRequest& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsEipAddressesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnsEipAddressesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // standby Field Functions 
    bool hasStandby() const { return this->standby_ != nullptr;};
    void deleteStandby() { this->standby_ = nullptr;};
    inline string getStandby() const { DARABONBA_PTR_GET_DEFAULT(standby_, "") };
    inline DescribeEnsEipAddressesRequest& setStandby(string standby) { DARABONBA_PTR_SET_VALUE(standby_, standby) };


  protected:
    // The ID of the EIP that you want to query. You can specify up to 50 EIP IDs. Separate multiple IDs with commas (,).
    shared_ptr<string> allocationId_ {};
    // The ID of the instance with which you want to associate the EIP.
    shared_ptr<string> associatedInstanceId_ {};
    // The type of the instance that is associated with the EIP. Valid values:
    // 
    // *   **EnsInstance**: ENS instance in a VPC
    // *   **SlbInstance**: SLB instance
    shared_ptr<string> associatedInstanceType_ {};
    // The EIP that you want to query. You can specify up to 50 EIPs. Separate multiple EIPs with commas (,).
    shared_ptr<string> eipAddress_ {};
    // The name of the EIP.
    shared_ptr<string> eipName_ {};
    // The ID of the Edge Node Service (ENS) node.
    shared_ptr<string> ensRegionId_ {};
    // The IDs of edge nodes. You can specify 1 to 100 IDs.
    shared_ptr<vector<string>> ensRegionIds_ {};
    shared_ptr<bool> icmpReplyEnabled_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether the EIP is a secondary EIP. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> standby_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
