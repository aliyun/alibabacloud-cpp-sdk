// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVESNAPSHOTTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveSnapshotTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveSnapshotTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKeyWord, searchKeyWord_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveSnapshotTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKeyWord, searchKeyWord_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLiveSnapshotTemplatesRequest() = default ;
    ListLiveSnapshotTemplatesRequest(const ListLiveSnapshotTemplatesRequest &) = default ;
    ListLiveSnapshotTemplatesRequest(ListLiveSnapshotTemplatesRequest &&) = default ;
    ListLiveSnapshotTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveSnapshotTemplatesRequest() = default ;
    ListLiveSnapshotTemplatesRequest& operator=(const ListLiveSnapshotTemplatesRequest &) = default ;
    ListLiveSnapshotTemplatesRequest& operator=(ListLiveSnapshotTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->searchKeyWord_ != nullptr && this->sortBy_ != nullptr && this->templateIds_ != nullptr && this->type_ != nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListLiveSnapshotTemplatesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveSnapshotTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKeyWord Field Functions 
    bool hasSearchKeyWord() const { return this->searchKeyWord_ != nullptr;};
    void deleteSearchKeyWord() { this->searchKeyWord_ = nullptr;};
    inline string searchKeyWord() const { DARABONBA_PTR_GET_DEFAULT(searchKeyWord_, "") };
    inline ListLiveSnapshotTemplatesRequest& setSearchKeyWord(string searchKeyWord) { DARABONBA_PTR_SET_VALUE(searchKeyWord_, searchKeyWord) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveSnapshotTemplatesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<string> & templateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<string>) };
    inline vector<string> templateIds() { DARABONBA_PTR_GET(templateIds_, vector<string>) };
    inline ListLiveSnapshotTemplatesRequest& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline ListLiveSnapshotTemplatesRequest& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLiveSnapshotTemplatesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The page number. Valid values: [1,n). Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The search keyword. You can use the template ID or name as the keyword to search for templates. If you search for templates by name, fuzzy match is supported.
    // 
    // *   It cannot exceed 128 characters in length.
    std::shared_ptr<string> searchKeyWord_ = nullptr;
    // The sorting order. By default, the query results are sorted by creation time in descending order.
    // 
    // Valid values:
    // 
    // *   asc: sorts the query results by creation time in ascending order.
    // *   desc: sorts the query results by creation time in descending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The template IDs.
    // 
    // *   If you specify the SearchKeyWord parameter, this condition does not take effect.
    // *   The maximum length of the array is 200.
    std::shared_ptr<vector<string>> templateIds_ = nullptr;
    // The type of the template. By default, all types are queried.
    // 
    // Valid values:
    // 
    // *   system
    // *   custom
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
