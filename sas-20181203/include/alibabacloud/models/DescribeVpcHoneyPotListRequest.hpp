// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcHoneyPotListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcHoneyPotListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HoneyPotExistence, honeyPotExistence_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcHoneyPotListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HoneyPotExistence, honeyPotExistence_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
    };
    DescribeVpcHoneyPotListRequest() = default ;
    DescribeVpcHoneyPotListRequest(const DescribeVpcHoneyPotListRequest &) = default ;
    DescribeVpcHoneyPotListRequest(DescribeVpcHoneyPotListRequest &&) = default ;
    DescribeVpcHoneyPotListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcHoneyPotListRequest() = default ;
    DescribeVpcHoneyPotListRequest& operator=(const DescribeVpcHoneyPotListRequest &) = default ;
    DescribeVpcHoneyPotListRequest& operator=(DescribeVpcHoneyPotListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->honeyPotExistence_ == nullptr && this->pageSize_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr && this->vpcRegionId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVpcHoneyPotListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // honeyPotExistence Field Functions 
    bool hasHoneyPotExistence() const { return this->honeyPotExistence_ != nullptr;};
    void deleteHoneyPotExistence() { this->honeyPotExistence_ = nullptr;};
    inline bool getHoneyPotExistence() const { DARABONBA_PTR_GET_DEFAULT(honeyPotExistence_, false) };
    inline DescribeVpcHoneyPotListRequest& setHoneyPotExistence(bool honeyPotExistence) { DARABONBA_PTR_SET_VALUE(honeyPotExistence_, honeyPotExistence) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpcHoneyPotListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcHoneyPotListRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcHoneyPotListRequest& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline DescribeVpcHoneyPotListRequest& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


  protected:
    // The page number. Pages start from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether the VPCs to query have cloud honeypot enabled. Valid values:
    // - **true**: enabled
    // - **false**: disabled
    shared_ptr<bool> honeyPotExistence_ {};
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned per page.
    // > We recommend that you specify this parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the VPC in which the honeypot instance that you want to query resides.
    // > You can call the [DescribeVpcList](~~DescribeVpcList~~) operation to obtain the VPC ID.
    shared_ptr<string> vpcId_ {};
    // The name of the VPC in which the honeypot instance that you want to query resides.
    // > You can call the [DescribeVpcList](~~DescribeVpcList~~) operation to obtain the VPC name.
    shared_ptr<string> vpcName_ {};
    // The region ID of the VPC in which the honeypot instance that you want to query resides.
    // > You can call the [DescribeVpcList](~~DescribeVpcList~~) operation to obtain the region ID of the VPC.
    shared_ptr<string> vpcRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
