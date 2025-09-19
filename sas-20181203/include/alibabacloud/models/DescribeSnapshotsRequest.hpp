// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IsAliYunEcs, isAliYunEcs_);
      DARABONBA_PTR_TO_JSON(MachineRegion, machineRegion_);
      DARABONBA_PTR_TO_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IsAliYunEcs, isAliYunEcs_);
      DARABONBA_PTR_FROM_JSON(MachineRegion, machineRegion_);
      DARABONBA_PTR_FROM_JSON(MachineRemark, machineRemark_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeSnapshotsRequest() = default ;
    DescribeSnapshotsRequest(const DescribeSnapshotsRequest &) = default ;
    DescribeSnapshotsRequest(DescribeSnapshotsRequest &&) = default ;
    DescribeSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsRequest() = default ;
    DescribeSnapshotsRequest& operator=(const DescribeSnapshotsRequest &) = default ;
    DescribeSnapshotsRequest& operator=(DescribeSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiVersion_ != nullptr
        && this->currentPage_ != nullptr && this->isAliYunEcs_ != nullptr && this->machineRegion_ != nullptr && this->machineRemark_ != nullptr && this->nextToken_ != nullptr
        && this->pageSize_ != nullptr && this->statusList_ != nullptr && this->uuid_ != nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline DescribeSnapshotsRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSnapshotsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // isAliYunEcs Field Functions 
    bool hasIsAliYunEcs() const { return this->isAliYunEcs_ != nullptr;};
    void deleteIsAliYunEcs() { this->isAliYunEcs_ = nullptr;};
    inline string isAliYunEcs() const { DARABONBA_PTR_GET_DEFAULT(isAliYunEcs_, "") };
    inline DescribeSnapshotsRequest& setIsAliYunEcs(string isAliYunEcs) { DARABONBA_PTR_SET_VALUE(isAliYunEcs_, isAliYunEcs) };


    // machineRegion Field Functions 
    bool hasMachineRegion() const { return this->machineRegion_ != nullptr;};
    void deleteMachineRegion() { this->machineRegion_ = nullptr;};
    inline string machineRegion() const { DARABONBA_PTR_GET_DEFAULT(machineRegion_, "") };
    inline DescribeSnapshotsRequest& setMachineRegion(string machineRegion) { DARABONBA_PTR_SET_VALUE(machineRegion_, machineRegion) };


    // machineRemark Field Functions 
    bool hasMachineRemark() const { return this->machineRemark_ != nullptr;};
    void deleteMachineRemark() { this->machineRemark_ = nullptr;};
    inline string machineRemark() const { DARABONBA_PTR_GET_DEFAULT(machineRemark_, "") };
    inline DescribeSnapshotsRequest& setMachineRemark(string machineRemark) { DARABONBA_PTR_SET_VALUE(machineRemark_, machineRemark) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnapshotsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnapshotsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline string statusList() const { DARABONBA_PTR_GET_DEFAULT(statusList_, "") };
    inline DescribeSnapshotsRequest& setStatusList(string statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSnapshotsRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The version of the anti-ransomware policy. Valid values:
    // 
    // *   **1.0.0**
    // *   **2.0.0**
    // 
    // This parameter is required.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether the server is an Elastic Compute Service (ECS) instance. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> isAliYunEcs_ = nullptr;
    // The region in which the server resides.
    // 
    // >  If the Uuid parameter is not specified, this parameter is required.
    std::shared_ptr<string> machineRegion_ = nullptr;
    // The name or IP address of the server.
    std::shared_ptr<string> machineRemark_ = nullptr;
    // The starting position of the query. If this parameter is left empty, the query starts from the beginning.
    // 
    // >  If you call the operation for the first time, you do not need to specify the parameter. The response to the first call contains the token that can be used for the second call. Each subsequent response contains the token that can be used for the next call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The status of backup snapshots from which data can be restored. Valid values:
    // 
    // *   **COMPLETE**: complete
    // *   **PARTIAL_COMPLETE**: partial complete
    std::shared_ptr<string> statusList_ = nullptr;
    // The UUID of the server.
    // 
    // >  You can call the [DescribeBackupPolicy](~~DescribeBackupPolicy~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
