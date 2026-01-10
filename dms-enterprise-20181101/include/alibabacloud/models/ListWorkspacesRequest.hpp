// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkspacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlreadyJoined, alreadyJoined_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(ServiceAccountId, serviceAccountId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlreadyJoined, alreadyJoined_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(ServiceAccountId, serviceAccountId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListWorkspacesRequest() = default ;
    ListWorkspacesRequest(const ListWorkspacesRequest &) = default ;
    ListWorkspacesRequest(ListWorkspacesRequest &&) = default ;
    ListWorkspacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesRequest() = default ;
    ListWorkspacesRequest& operator=(const ListWorkspacesRequest &) = default ;
    ListWorkspacesRequest& operator=(ListWorkspacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alreadyJoined_ == nullptr
        && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr && this->searchKey_ == nullptr
        && this->serviceAccountId_ == nullptr && this->vpcId_ == nullptr && this->workspaceId_ == nullptr; };
    // alreadyJoined Field Functions 
    bool hasAlreadyJoined() const { return this->alreadyJoined_ != nullptr;};
    void deleteAlreadyJoined() { this->alreadyJoined_ = nullptr;};
    inline bool getAlreadyJoined() const { DARABONBA_PTR_GET_DEFAULT(alreadyJoined_, false) };
    inline ListWorkspacesRequest& setAlreadyJoined(bool alreadyJoined) { DARABONBA_PTR_SET_VALUE(alreadyJoined_, alreadyJoined) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListWorkspacesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWorkspacesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWorkspacesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListWorkspacesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListWorkspacesRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // serviceAccountId Field Functions 
    bool hasServiceAccountId() const { return this->serviceAccountId_ != nullptr;};
    void deleteServiceAccountId() { this->serviceAccountId_ = nullptr;};
    inline int64_t getServiceAccountId() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountId_, 0L) };
    inline ListWorkspacesRequest& setServiceAccountId(int64_t serviceAccountId) { DARABONBA_PTR_SET_VALUE(serviceAccountId_, serviceAccountId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListWorkspacesRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline ListWorkspacesRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Specifies whether the current user has joined the workspace.
    shared_ptr<bool> alreadyJoined_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region in which the bucket is located.
    shared_ptr<string> region_ {};
    // The search keyword. Fuzzy match is supported.
    shared_ptr<string> searchKey_ {};
    // The service account ID.
    shared_ptr<int64_t> serviceAccountId_ {};
    // The virtual private cloud (VPC) ID.
    // 
    // > This parameter cannot be used as a filter.
    shared_ptr<string> vpcId_ {};
    // The workspace ID.
    shared_ptr<int64_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
