// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSourceServersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RelatedJobType, relatedJobType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(WorkgroupId, workgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RelatedJobType, relatedJobType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(WorkgroupId, workgroupId_);
    };
    DescribeSourceServersRequest() = default ;
    DescribeSourceServersRequest(const DescribeSourceServersRequest &) = default ;
    DescribeSourceServersRequest(DescribeSourceServersRequest &&) = default ;
    DescribeSourceServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersRequest() = default ;
    DescribeSourceServersRequest& operator=(const DescribeSourceServersRequest &) = default ;
    DescribeSourceServersRequest& operator=(DescribeSourceServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->name_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->relatedJobType_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->sourceId_ != nullptr && this->state_ != nullptr && this->tag_ != nullptr
        && this->workgroupId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeSourceServersRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSourceServersRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSourceServersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSourceServersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSourceServersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relatedJobType Field Functions 
    bool hasRelatedJobType() const { return this->relatedJobType_ != nullptr;};
    void deleteRelatedJobType() { this->relatedJobType_ = nullptr;};
    inline const vector<string> & relatedJobType() const { DARABONBA_PTR_GET_CONST(relatedJobType_, vector<string>) };
    inline vector<string> relatedJobType() { DARABONBA_PTR_GET(relatedJobType_, vector<string>) };
    inline DescribeSourceServersRequest& setRelatedJobType(const vector<string> & relatedJobType) { DARABONBA_PTR_SET_VALUE(relatedJobType_, relatedJobType) };
    inline DescribeSourceServersRequest& setRelatedJobType(vector<string> && relatedJobType) { DARABONBA_PTR_SET_RVALUE(relatedJobType_, relatedJobType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSourceServersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSourceServersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline const vector<string> & sourceId() const { DARABONBA_PTR_GET_CONST(sourceId_, vector<string>) };
    inline vector<string> sourceId() { DARABONBA_PTR_GET(sourceId_, vector<string>) };
    inline DescribeSourceServersRequest& setSourceId(const vector<string> & sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };
    inline DescribeSourceServersRequest& setSourceId(vector<string> && sourceId) { DARABONBA_PTR_SET_RVALUE(sourceId_, sourceId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSourceServersRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeSourceServersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeSourceServersRequestTag>) };
    inline vector<DescribeSourceServersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeSourceServersRequestTag>) };
    inline DescribeSourceServersRequest& setTag(const vector<DescribeSourceServersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeSourceServersRequest& setTag(vector<DescribeSourceServersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // workgroupId Field Functions 
    bool hasWorkgroupId() const { return this->workgroupId_ != nullptr;};
    void deleteWorkgroupId() { this->workgroupId_ = nullptr;};
    inline string workgroupId() const { DARABONBA_PTR_GET_DEFAULT(workgroupId_, "") };
    inline DescribeSourceServersRequest& setWorkgroupId(string workgroupId) { DARABONBA_PTR_SET_VALUE(workgroupId_, workgroupId) };


  protected:
    // The ID of the migration job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the migration source. The name must be 2 to 128 characters in length. It must start with a letter but cannot start with http:// or https://. It can contain digits, colons (:), underscores (_), and hyphens (-).
    // 
    // This parameter is empty by default.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Minimum value: 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 50.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of migration job that is associated with the migration source.
    std::shared_ptr<vector<string>> relatedJobType_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The migration source ID. You can specify multiple IDs.
    std::shared_ptr<vector<string>> sourceId_ = nullptr;
    // The state of the migration source. Valid values:
    // 
    // *   Unavailable: The migration source is inactive, or an error occurs in the migration source.
    // *   Available: The migration source is active.
    // *   InUse: The migration source is being migrated.
    // *   Deleting: The migration source is being deleted from Server Migration Center (SMC).
    std::shared_ptr<string> state_ = nullptr;
    // The tag.
    std::shared_ptr<vector<DescribeSourceServersRequestTag>> tag_ = nullptr;
    // The workgroup ID.
    std::shared_ptr<string> workgroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
