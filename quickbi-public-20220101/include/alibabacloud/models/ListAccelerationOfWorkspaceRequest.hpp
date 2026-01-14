// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCELERATIONOFWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCELERATIONOFWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListAccelerationOfWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccelerationOfWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccelerationOfWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListAccelerationOfWorkspaceRequest() = default ;
    ListAccelerationOfWorkspaceRequest(const ListAccelerationOfWorkspaceRequest &) = default ;
    ListAccelerationOfWorkspaceRequest(ListAccelerationOfWorkspaceRequest &&) = default ;
    ListAccelerationOfWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccelerationOfWorkspaceRequest() = default ;
    ListAccelerationOfWorkspaceRequest& operator=(const ListAccelerationOfWorkspaceRequest &) = default ;
    ListAccelerationOfWorkspaceRequest& operator=(ListAccelerationOfWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->cubeName_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->workspaceId_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListAccelerationOfWorkspaceRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // cubeName Field Functions 
    bool hasCubeName() const { return this->cubeName_ != nullptr;};
    void deleteCubeName() { this->cubeName_ = nullptr;};
    inline string getCubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
    inline ListAccelerationOfWorkspaceRequest& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListAccelerationOfWorkspaceRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAccelerationOfWorkspaceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListAccelerationOfWorkspaceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> creatorId_ {};
    shared_ptr<string> cubeName_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
