// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOLDERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFOLDERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFoldersResponseBodyDataFolders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFoldersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoldersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Folders, folders_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoldersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Folders, folders_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFoldersResponseBodyData() = default ;
    ListFoldersResponseBodyData(const ListFoldersResponseBodyData &) = default ;
    ListFoldersResponseBodyData(ListFoldersResponseBodyData &&) = default ;
    ListFoldersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoldersResponseBodyData() = default ;
    ListFoldersResponseBodyData& operator=(const ListFoldersResponseBodyData &) = default ;
    ListFoldersResponseBodyData& operator=(ListFoldersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folders_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // folders Field Functions 
    bool hasFolders() const { return this->folders_ != nullptr;};
    void deleteFolders() { this->folders_ = nullptr;};
    inline const vector<Models::ListFoldersResponseBodyDataFolders> & folders() const { DARABONBA_PTR_GET_CONST(folders_, vector<Models::ListFoldersResponseBodyDataFolders>) };
    inline vector<Models::ListFoldersResponseBodyDataFolders> folders() { DARABONBA_PTR_GET(folders_, vector<Models::ListFoldersResponseBodyDataFolders>) };
    inline ListFoldersResponseBodyData& setFolders(const vector<Models::ListFoldersResponseBodyDataFolders> & folders) { DARABONBA_PTR_SET_VALUE(folders_, folders) };
    inline ListFoldersResponseBodyData& setFolders(vector<Models::ListFoldersResponseBodyDataFolders> && folders) { DARABONBA_PTR_SET_RVALUE(folders_, folders) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFoldersResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFoldersResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFoldersResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of folders.
    std::shared_ptr<vector<Models::ListFoldersResponseBodyDataFolders>> folders_ = nullptr;
    // The current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of records on the current page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of records that meet the query conditions.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
