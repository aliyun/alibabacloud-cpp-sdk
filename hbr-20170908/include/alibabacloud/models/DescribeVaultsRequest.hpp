// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVaultsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      DARABONBA_PTR_TO_JSON(VaultName, vaultName_);
      DARABONBA_PTR_TO_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_TO_JSON(VaultType, vaultType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      DARABONBA_PTR_FROM_JSON(VaultName, vaultName_);
      DARABONBA_PTR_FROM_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_FROM_JSON(VaultType, vaultType_);
    };
    DescribeVaultsRequest() = default ;
    DescribeVaultsRequest(const DescribeVaultsRequest &) = default ;
    DescribeVaultsRequest(DescribeVaultsRequest &&) = default ;
    DescribeVaultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsRequest() = default ;
    DescribeVaultsRequest& operator=(const DescribeVaultsRequest &) = default ;
    DescribeVaultsRequest& operator=(DescribeVaultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tag_ != nullptr && this->vaultId_ != nullptr
        && this->vaultName_ != nullptr && this->vaultRegionId_ != nullptr && this->vaultType_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVaultsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVaultsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVaultsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVaultsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeVaultsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeVaultsRequestTag>) };
    inline vector<DescribeVaultsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeVaultsRequestTag>) };
    inline DescribeVaultsRequest& setTag(const vector<DescribeVaultsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVaultsRequest& setTag(vector<DescribeVaultsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeVaultsRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    // vaultName Field Functions 
    bool hasVaultName() const { return this->vaultName_ != nullptr;};
    void deleteVaultName() { this->vaultName_ = nullptr;};
    inline string vaultName() const { DARABONBA_PTR_GET_DEFAULT(vaultName_, "") };
    inline DescribeVaultsRequest& setVaultName(string vaultName) { DARABONBA_PTR_SET_VALUE(vaultName_, vaultName) };


    // vaultRegionId Field Functions 
    bool hasVaultRegionId() const { return this->vaultRegionId_ != nullptr;};
    void deleteVaultRegionId() { this->vaultRegionId_ = nullptr;};
    inline string vaultRegionId() const { DARABONBA_PTR_GET_DEFAULT(vaultRegionId_, "") };
    inline DescribeVaultsRequest& setVaultRegionId(string vaultRegionId) { DARABONBA_PTR_SET_VALUE(vaultRegionId_, vaultRegionId) };


    // vaultType Field Functions 
    bool hasVaultType() const { return this->vaultType_ != nullptr;};
    void deleteVaultType() { this->vaultType_ = nullptr;};
    inline string vaultType() const { DARABONBA_PTR_GET_DEFAULT(vaultType_, "") };
    inline DescribeVaultsRequest& setVaultType(string vaultType) { DARABONBA_PTR_SET_VALUE(vaultType_, vaultType) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the backup vault. Valid values:
    // 
    // *   **UNKNOWN**: The backup vault is in an unknown state.
    // *   **INITIALIZING**: The backup vault is being initialized.
    // *   **CREATED**: The backup vault is created.
    // *   **ERROR**: An error occurs on the backup vault.
    std::shared_ptr<string> status_ = nullptr;
    // Tag information. Supports up to 20 tags.
    std::shared_ptr<vector<DescribeVaultsRequestTag>> tag_ = nullptr;
    // Backup vault ID.
    std::shared_ptr<string> vaultId_ = nullptr;
    // The name of the backup vault. The name must be 1 to 64 characters in length.
    std::shared_ptr<string> vaultName_ = nullptr;
    // The region ID to which the backup vault belongs.
    std::shared_ptr<string> vaultRegionId_ = nullptr;
    // Backup repository type. The values are as follows: 
    // - **STANDARD**: Represents a standard repository, which can be used for ECS file backups, OSS backups, NAS backups, etc. 
    // - **OTS_BACKUP**: Represents a TableStore repository, which is only used for TableStore backups, and TableStore must use this type of repository.
    std::shared_ptr<string> vaultType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
