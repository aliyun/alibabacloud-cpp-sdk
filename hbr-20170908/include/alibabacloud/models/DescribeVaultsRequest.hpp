// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(Replication, replication_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      DARABONBA_PTR_TO_JSON(VaultName, vaultName_);
      DARABONBA_PTR_TO_JSON(VaultOwnerId, vaultOwnerId_);
      DARABONBA_PTR_TO_JSON(VaultRegionId, vaultRegionId_);
      DARABONBA_PTR_TO_JSON(VaultType, vaultType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Replication, replication_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      DARABONBA_PTR_FROM_JSON(VaultName, vaultName_);
      DARABONBA_PTR_FROM_JSON(VaultOwnerId, vaultOwnerId_);
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The Value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->replication_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr
        && this->vaultId_ == nullptr && this->vaultName_ == nullptr && this->vaultOwnerId_ == nullptr && this->vaultRegionId_ == nullptr && this->vaultType_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVaultsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVaultsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // replication Field Functions 
    bool hasReplication() const { return this->replication_ != nullptr;};
    void deleteReplication() { this->replication_ = nullptr;};
    inline bool getReplication() const { DARABONBA_PTR_GET_DEFAULT(replication_, false) };
    inline DescribeVaultsRequest& setReplication(bool replication) { DARABONBA_PTR_SET_VALUE(replication_, replication) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVaultsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVaultsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeVaultsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeVaultsRequest::Tag>) };
    inline vector<DescribeVaultsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeVaultsRequest::Tag>) };
    inline DescribeVaultsRequest& setTag(const vector<DescribeVaultsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVaultsRequest& setTag(vector<DescribeVaultsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeVaultsRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    // vaultName Field Functions 
    bool hasVaultName() const { return this->vaultName_ != nullptr;};
    void deleteVaultName() { this->vaultName_ = nullptr;};
    inline string getVaultName() const { DARABONBA_PTR_GET_DEFAULT(vaultName_, "") };
    inline DescribeVaultsRequest& setVaultName(string vaultName) { DARABONBA_PTR_SET_VALUE(vaultName_, vaultName) };


    // vaultOwnerId Field Functions 
    bool hasVaultOwnerId() const { return this->vaultOwnerId_ != nullptr;};
    void deleteVaultOwnerId() { this->vaultOwnerId_ = nullptr;};
    inline int64_t getVaultOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vaultOwnerId_, 0L) };
    inline DescribeVaultsRequest& setVaultOwnerId(int64_t vaultOwnerId) { DARABONBA_PTR_SET_VALUE(vaultOwnerId_, vaultOwnerId) };


    // vaultRegionId Field Functions 
    bool hasVaultRegionId() const { return this->vaultRegionId_ != nullptr;};
    void deleteVaultRegionId() { this->vaultRegionId_ = nullptr;};
    inline string getVaultRegionId() const { DARABONBA_PTR_GET_DEFAULT(vaultRegionId_, "") };
    inline DescribeVaultsRequest& setVaultRegionId(string vaultRegionId) { DARABONBA_PTR_SET_VALUE(vaultRegionId_, vaultRegionId) };


    // vaultType Field Functions 
    bool hasVaultType() const { return this->vaultType_ != nullptr;};
    void deleteVaultType() { this->vaultType_ = nullptr;};
    inline string getVaultType() const { DARABONBA_PTR_GET_DEFAULT(vaultType_, "") };
    inline DescribeVaultsRequest& setVaultType(string vaultType) { DARABONBA_PTR_SET_VALUE(vaultType_, vaultType) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> replication_ {};
    // Resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the backup vault. Valid values:
    // 
    // *   **UNKNOWN**: The backup vault is in an unknown state.
    // *   **INITIALIZING**: The backup vault is being initialized.
    // *   **CREATED**: The backup vault is created.
    // *   **ERROR**: An error occurs on the backup vault.
    shared_ptr<string> status_ {};
    // Tag information. Supports up to 20 tags.
    shared_ptr<vector<DescribeVaultsRequest::Tag>> tag_ {};
    // Backup vault ID.
    shared_ptr<string> vaultId_ {};
    // The name of the backup vault. The name must be 1 to 64 characters in length.
    shared_ptr<string> vaultName_ {};
    shared_ptr<int64_t> vaultOwnerId_ {};
    // The region ID to which the backup vault belongs.
    shared_ptr<string> vaultRegionId_ {};
    // Backup repository type. The values are as follows: 
    // - **STANDARD**: Represents a standard repository, which can be used for ECS file backups, OSS backups, NAS backups, etc. 
    // - **OTS_BACKUP**: Represents a TableStore repository, which is only used for TableStore backups, and TableStore must use this type of repository.
    shared_ptr<string> vaultType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
