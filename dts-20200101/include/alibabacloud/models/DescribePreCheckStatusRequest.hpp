// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(JobCode, jobCode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StructPhase, structPhase_);
      DARABONBA_PTR_TO_JSON(StructType, structType_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(JobCode, jobCode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StructPhase, structPhase_);
      DARABONBA_PTR_FROM_JSON(StructType, structType_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    DescribePreCheckStatusRequest() = default ;
    DescribePreCheckStatusRequest(const DescribePreCheckStatusRequest &) = default ;
    DescribePreCheckStatusRequest(DescribePreCheckStatusRequest &&) = default ;
    DescribePreCheckStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusRequest() = default ;
    DescribePreCheckStatusRequest& operator=(const DescribePreCheckStatusRequest &) = default ;
    DescribePreCheckStatusRequest& operator=(DescribePreCheckStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsJobId_ == nullptr
        && return this->jobCode_ == nullptr && return this->name_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->structPhase_ == nullptr && return this->structType_ == nullptr && return this->zeroEtlJob_ == nullptr; };
    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline DescribePreCheckStatusRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // jobCode Field Functions 
    bool hasJobCode() const { return this->jobCode_ != nullptr;};
    void deleteJobCode() { this->jobCode_ = nullptr;};
    inline string jobCode() const { DARABONBA_PTR_GET_DEFAULT(jobCode_, "") };
    inline DescribePreCheckStatusRequest& setJobCode(string jobCode) { DARABONBA_PTR_SET_VALUE(jobCode_, jobCode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePreCheckStatusRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline DescribePreCheckStatusRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribePreCheckStatusRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePreCheckStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribePreCheckStatusRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // structPhase Field Functions 
    bool hasStructPhase() const { return this->structPhase_ != nullptr;};
    void deleteStructPhase() { this->structPhase_ = nullptr;};
    inline string structPhase() const { DARABONBA_PTR_GET_DEFAULT(structPhase_, "") };
    inline DescribePreCheckStatusRequest& setStructPhase(string structPhase) { DARABONBA_PTR_SET_VALUE(structPhase_, structPhase) };


    // structType Field Functions 
    bool hasStructType() const { return this->structType_ != nullptr;};
    void deleteStructType() { this->structType_ = nullptr;};
    inline string structType() const { DARABONBA_PTR_GET_DEFAULT(structType_, "") };
    inline DescribePreCheckStatusRequest& setStructType(string structType) { DARABONBA_PTR_SET_VALUE(structType_, structType) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline DescribePreCheckStatusRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The ID of the data migration, data synchronization, or change tracking task.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The task code that specifies the type of the DTS subtask. Valid values:
    // 
    // *   **01**: precheck.
    // *   **02**: schema migration or initial schema synchronization.
    // *   **03**: full data migration or initial full data synchronization.
    // *   **04**: incremental data migration or synchronization.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobCode_ = nullptr;
    // The filter item used to filter tables in fuzzy match.
    std::shared_ptr<string> name_ = nullptr;
    // The page number. Pages start from page 1. Default value: **1**.
    std::shared_ptr<string> pageNo_ = nullptr;
    // The number of entries per page. Default value: **20**.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The ID of the region in which the DTS instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The filter item used to filter tables, views, and functions during schema migration.
    std::shared_ptr<string> structPhase_ = nullptr;
    // The type of schema definition. Valid values:
    // 
    // *   **before**: schema migration or initial schema synchronization.
    // *   **after**: DDL operations performed during incremental data migration or synchronization.
    std::shared_ptr<string> structType_ = nullptr;
    // Whether it is a seamless integration (Zero-ETL) task, the value can be:
    // - **false**: No. - **true**: Yes.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
