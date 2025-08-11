// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListApiDatasourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDatasourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDatasourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListApiDatasourceRequest() = default ;
    ListApiDatasourceRequest(const ListApiDatasourceRequest &) = default ;
    ListApiDatasourceRequest(ListApiDatasourceRequest &&) = default ;
    ListApiDatasourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDatasourceRequest() = default ;
    ListApiDatasourceRequest& operator=(const ListApiDatasourceRequest &) = default ;
    ListApiDatasourceRequest& operator=(ListApiDatasourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyWord_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->workspaceId_ != nullptr; };
    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string keyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline ListApiDatasourceRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListApiDatasourceRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApiDatasourceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListApiDatasourceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The keyword of the API data source name.
    std::shared_ptr<string> keyWord_ = nullptr;
    // Current page number for API data source list:
    // 
    // *   Pages start from page 1.
    // *   Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of rows per page in a paged query.
    // 
    // *   Default value: 10.
    // *   Valid values: 1 to 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
