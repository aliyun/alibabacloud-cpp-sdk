// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateSource, createSource_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateSource, createSource_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTemplatesRequest() = default ;
    ListTemplatesRequest(const ListTemplatesRequest &) = default ;
    ListTemplatesRequest(ListTemplatesRequest &&) = default ;
    ListTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesRequest() = default ;
    ListTemplatesRequest& operator=(const ListTemplatesRequest &) = default ;
    ListTemplatesRequest& operator=(ListTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createSource_ == nullptr
        && return this->keyword_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->sortType_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr; };
    // createSource Field Functions 
    bool hasCreateSource() const { return this->createSource_ != nullptr;};
    void deleteCreateSource() { this->createSource_ = nullptr;};
    inline string createSource() const { DARABONBA_PTR_GET_DEFAULT(createSource_, "") };
    inline ListTemplatesRequest& setCreateSource(string createSource) { DARABONBA_PTR_SET_VALUE(createSource_, createSource) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListTemplatesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListTemplatesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListTemplatesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string sortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline ListTemplatesRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTemplatesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTemplatesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The source from which the template was created.
    // 
    // Valid values:
    // 
    // *   AliyunConsole
    // *   WebSDK
    // *   OpenAPI
    std::shared_ptr<string> createSource_ = nullptr;
    // The search keyword. You can use the template ID or title as the keyword to search for templates.
    std::shared_ptr<string> keyword_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The sorting parameter. By default, the query results are sorted by creation time in descending order.
    // 
    // Valid values:
    // 
    // *   CreationTime:Asc: sorted by creation time in ascending order.
    // *   CreationTime:Desc: sorted by creation time in descending order.
    std::shared_ptr<string> sortType_ = nullptr;
    // The template state.
    // 
    // Valid values:
    // 
    // *   UploadFailed: Failed to upload the video.
    // *   ProcessFailed: Failed to process the advanced template.
    // *   Available: The template is available.
    // *   Uploading: The video is being uploaded.
    // *   Created: The template is created but not ready for use.
    // *   Processing: The advanced template is being processed.
    std::shared_ptr<string> status_ = nullptr;
    // The template type.
    // 
    // Valid values:
    // 
    // *   Timeline
    // *   VETemplate
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
