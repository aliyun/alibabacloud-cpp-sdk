// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeStorageGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeStorageGatewayRequest() = default ;
    DescribeStorageGatewayRequest(const DescribeStorageGatewayRequest &) = default ;
    DescribeStorageGatewayRequest(DescribeStorageGatewayRequest &&) = default ;
    DescribeStorageGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageGatewayRequest() = default ;
    DescribeStorageGatewayRequest& operator=(const DescribeStorageGatewayRequest &) = default ;
    DescribeStorageGatewayRequest& operator=(DescribeStorageGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensRegionId_ == nullptr
        && return this->gatewayId_ == nullptr && return this->gatewayType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->vpcId_ == nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeStorageGatewayRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline DescribeStorageGatewayRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline DescribeStorageGatewayRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeStorageGatewayRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeStorageGatewayRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeStorageGatewayRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<string> gatewayId_ = nullptr;
    // The type of the gateway. Set this parameter to **1**. **1** indicates iSCSI.
    std::shared_ptr<string> gatewayType_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
