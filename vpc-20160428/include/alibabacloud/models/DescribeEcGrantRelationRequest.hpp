// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECGRANTRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECGRANTRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEcGrantRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEcGrantRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(VbrRegionNo, vbrRegionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEcGrantRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(VbrRegionNo, vbrRegionNo_);
    };
    DescribeEcGrantRelationRequest() = default ;
    DescribeEcGrantRelationRequest(const DescribeEcGrantRelationRequest &) = default ;
    DescribeEcGrantRelationRequest(DescribeEcGrantRelationRequest &&) = default ;
    DescribeEcGrantRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEcGrantRelationRequest() = default ;
    DescribeEcGrantRelationRequest& operator=(const DescribeEcGrantRelationRequest &) = default ;
    DescribeEcGrantRelationRequest& operator=(DescribeEcGrantRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceType_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->vbrRegionNo_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeEcGrantRelationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeEcGrantRelationRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeEcGrantRelationRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeEcGrantRelationRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // vbrRegionNo Field Functions 
    bool hasVbrRegionNo() const { return this->vbrRegionNo_ != nullptr;};
    void deleteVbrRegionNo() { this->vbrRegionNo_ = nullptr;};
    inline string vbrRegionNo() const { DARABONBA_PTR_GET_DEFAULT(vbrRegionNo_, "") };
    inline DescribeEcGrantRelationRequest& setVbrRegionNo(string vbrRegionNo) { DARABONBA_PTR_SET_VALUE(vbrRegionNo_, vbrRegionNo) };


  protected:
    // The ID of the instance.
    // 
    // *   If you set **InstanceType** to **VBR**, specify a VBR ID.
    // *   If you set **InstanceType** to **VPC**, specify a VPC ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of instance. Valid values:
    // 
    // *   **VBR**: queries the permissions that are granted to a VBR.
    // *   **VPC**: queries the permissions that are granted from a VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the region where the instance is deployed.
    // 
    // *   If **InstanceType** is set to **VBR**, this parameter is required.
    // *   If **InstanceType** is set to **VPC**, you can ignore this parameter.
    std::shared_ptr<string> vbrRegionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
