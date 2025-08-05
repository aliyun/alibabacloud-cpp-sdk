// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupClientsRequestFilters.hpp>
#include <alibabacloud/models/DescribeBackupClientsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupClientsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupClientsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupClientsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeBackupClientsRequest() = default ;
    DescribeBackupClientsRequest(const DescribeBackupClientsRequest &) = default ;
    DescribeBackupClientsRequest(DescribeBackupClientsRequest &&) = default ;
    DescribeBackupClientsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupClientsRequest() = default ;
    DescribeBackupClientsRequest& operator=(const DescribeBackupClientsRequest &) = default ;
    DescribeBackupClientsRequest& operator=(DescribeBackupClientsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIds_ != nullptr
        && this->clientType_ != nullptr && this->clusterId_ != nullptr && this->crossAccountRoleName_ != nullptr && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr
        && this->filters_ != nullptr && this->instanceIds_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->tag_ != nullptr; };
    // clientIds Field Functions 
    bool hasClientIds() const { return this->clientIds_ != nullptr;};
    void deleteClientIds() { this->clientIds_ = nullptr;};
    inline const vector<string> & clientIds() const { DARABONBA_PTR_GET_CONST(clientIds_, vector<string>) };
    inline vector<string> clientIds() { DARABONBA_PTR_GET(clientIds_, vector<string>) };
    inline DescribeBackupClientsRequest& setClientIds(const vector<string> & clientIds) { DARABONBA_PTR_SET_VALUE(clientIds_, clientIds) };
    inline DescribeBackupClientsRequest& setClientIds(vector<string> && clientIds) { DARABONBA_PTR_SET_RVALUE(clientIds_, clientIds) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string clientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline DescribeBackupClientsRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeBackupClientsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DescribeBackupClientsRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline DescribeBackupClientsRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DescribeBackupClientsRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeBackupClientsRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeBackupClientsRequestFilters>) };
    inline vector<DescribeBackupClientsRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<DescribeBackupClientsRequestFilters>) };
    inline DescribeBackupClientsRequest& setFilters(const vector<DescribeBackupClientsRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeBackupClientsRequest& setFilters(vector<DescribeBackupClientsRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeBackupClientsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeBackupClientsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupClientsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupClientsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeBackupClientsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeBackupClientsRequestTag>) };
    inline vector<DescribeBackupClientsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeBackupClientsRequestTag>) };
    inline DescribeBackupClientsRequest& setTag(const vector<DescribeBackupClientsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeBackupClientsRequest& setTag(vector<DescribeBackupClientsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of HBR clients.
    std::shared_ptr<vector<string>> clientIds_ = nullptr;
    // The type of the HBR client. Valid values:
    // 
    // *   **ECS_CLIENT**: HBR client for Elastic Compute Service (ECS) file backup
    // *   **CONTAINER_CLIENT**: HBR client for container backup
    // 
    // This parameter is required.
    std::shared_ptr<string> clientType_ = nullptr;
    // The ID of the cluster for the backup.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    std::shared_ptr<vector<DescribeBackupClientsRequestFilters>> filters_ = nullptr;
    // The IDs of ECS instances.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The tags.
    std::shared_ptr<vector<DescribeBackupClientsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
