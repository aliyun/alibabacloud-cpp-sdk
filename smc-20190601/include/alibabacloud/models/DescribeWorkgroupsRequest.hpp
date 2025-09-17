// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWorkgroupsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeWorkgroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkgroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(WorkgroupId, workgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkgroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(WorkgroupId, workgroupId_);
    };
    DescribeWorkgroupsRequest() = default ;
    DescribeWorkgroupsRequest(const DescribeWorkgroupsRequest &) = default ;
    DescribeWorkgroupsRequest(DescribeWorkgroupsRequest &&) = default ;
    DescribeWorkgroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkgroupsRequest() = default ;
    DescribeWorkgroupsRequest& operator=(const DescribeWorkgroupsRequest &) = default ;
    DescribeWorkgroupsRequest& operator=(DescribeWorkgroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->status_ != nullptr
        && this->tag_ != nullptr && this->workgroupId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeWorkgroupsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeWorkgroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeWorkgroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWorkgroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeWorkgroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeWorkgroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeWorkgroupsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeWorkgroupsRequestTag>) };
    inline vector<DescribeWorkgroupsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeWorkgroupsRequestTag>) };
    inline DescribeWorkgroupsRequest& setTag(const vector<DescribeWorkgroupsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeWorkgroupsRequest& setTag(vector<DescribeWorkgroupsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // workgroupId Field Functions 
    bool hasWorkgroupId() const { return this->workgroupId_ != nullptr;};
    void deleteWorkgroupId() { this->workgroupId_ = nullptr;};
    inline const vector<string> & workgroupId() const { DARABONBA_PTR_GET_CONST(workgroupId_, vector<string>) };
    inline vector<string> workgroupId() { DARABONBA_PTR_GET(workgroupId_, vector<string>) };
    inline DescribeWorkgroupsRequest& setWorkgroupId(const vector<string> & workgroupId) { DARABONBA_PTR_SET_VALUE(workgroupId_, workgroupId) };
    inline DescribeWorkgroupsRequest& setWorkgroupId(vector<string> && workgroupId) { DARABONBA_PTR_SET_RVALUE(workgroupId_, workgroupId) };


  protected:
    // The name of the workgroup.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Minimum value: 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The state of the workgroup. Valid values:
    // 
    // *   NotStarted
    // *   InProgress
    // *   Cutover
    // *   Completed
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the reserved instance. You can specify up to 20 tags. If you specify multiple tags, the tag keys cannot be duplicated.
    std::shared_ptr<vector<DescribeWorkgroupsRequestTag>> tag_ = nullptr;
    // The workgroup IDs. You can specify up to 50 workgroup IDs.
    std::shared_ptr<vector<string>> workgroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
