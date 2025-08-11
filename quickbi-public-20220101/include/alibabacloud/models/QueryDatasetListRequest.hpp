// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDatasetListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WithChildren, withChildren_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WithChildren, withChildren_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryDatasetListRequest() = default ;
    QueryDatasetListRequest(const QueryDatasetListRequest &) = default ;
    QueryDatasetListRequest(QueryDatasetListRequest &&) = default ;
    QueryDatasetListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetListRequest() = default ;
    QueryDatasetListRequest& operator=(const QueryDatasetListRequest &) = default ;
    QueryDatasetListRequest& operator=(QueryDatasetListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directoryId_ != nullptr
        && this->keyword_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->withChildren_ != nullptr && this->workspaceId_ != nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline QueryDatasetListRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryDatasetListRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryDatasetListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDatasetListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // withChildren Field Functions 
    bool hasWithChildren() const { return this->withChildren_ != nullptr;};
    void deleteWithChildren() { this->withChildren_ = nullptr;};
    inline bool withChildren() const { DARABONBA_PTR_GET_DEFAULT(withChildren_, false) };
    inline QueryDatasetListRequest& setWithChildren(bool withChildren) { DARABONBA_PTR_SET_VALUE(withChildren_, withChildren) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryDatasetListRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> directoryId_ = nullptr;
    // Information about the directory where the dataset is located
    std::shared_ptr<string> keyword_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // Specifies the directory ID.
    // 
    // *   If this field is not empty, all datasets in the directory are obtained.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<bool> withChildren_ = nullptr;
    // The name of the data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
