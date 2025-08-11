// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSBYWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSBYWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorksByWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorksByWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThirdPartAuthFlag, thirdPartAuthFlag_);
      DARABONBA_PTR_TO_JSON(WorksType, worksType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorksByWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThirdPartAuthFlag, thirdPartAuthFlag_);
      DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryWorksByWorkspaceRequest() = default ;
    QueryWorksByWorkspaceRequest(const QueryWorksByWorkspaceRequest &) = default ;
    QueryWorksByWorkspaceRequest(QueryWorksByWorkspaceRequest &&) = default ;
    QueryWorksByWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorksByWorkspaceRequest() = default ;
    QueryWorksByWorkspaceRequest& operator=(const QueryWorksByWorkspaceRequest &) = default ;
    QueryWorksByWorkspaceRequest& operator=(QueryWorksByWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNum_ != nullptr
        && this->pageSize_ != nullptr && this->status_ != nullptr && this->thirdPartAuthFlag_ != nullptr && this->worksType_ != nullptr && this->workspaceId_ != nullptr; };
    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryWorksByWorkspaceRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryWorksByWorkspaceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryWorksByWorkspaceRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartAuthFlag Field Functions 
    bool hasThirdPartAuthFlag() const { return this->thirdPartAuthFlag_ != nullptr;};
    void deleteThirdPartAuthFlag() { this->thirdPartAuthFlag_ = nullptr;};
    inline int32_t thirdPartAuthFlag() const { DARABONBA_PTR_GET_DEFAULT(thirdPartAuthFlag_, 0) };
    inline QueryWorksByWorkspaceRequest& setThirdPartAuthFlag(int32_t thirdPartAuthFlag) { DARABONBA_PTR_SET_VALUE(thirdPartAuthFlag_, thirdPartAuthFlag) };


    // worksType Field Functions 
    bool hasWorksType() const { return this->worksType_ != nullptr;};
    void deleteWorksType() { this->worksType_ = nullptr;};
    inline string worksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
    inline QueryWorksByWorkspaceRequest& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryWorksByWorkspaceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The page number of the returned page.
    // 
    // *   Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    // 
    // *   Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The status of the work. Valid values:
    // 
    // *   0: unpublished
    // *   1: published
    // *   2: modified but not published
    // *   3: unpublished
    std::shared_ptr<int32_t> status_ = nullptr;
    // Third-party embedding status. Valid values:
    // 
    // *   0: The embed service is not enabled.
    // *   1: Embed is enabled.
    std::shared_ptr<int32_t> thirdPartAuthFlag_ = nullptr;
    // The type of the work. Valid values:
    // 
    // *   DATAPRODUCT: BI portal
    // *   PAGE: Dashboard
    // *   FULLPAGE: full-screen dashboards
    // *   REPORT: workbook
    std::shared_ptr<string> worksType_ = nullptr;
    // The ID of the workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
