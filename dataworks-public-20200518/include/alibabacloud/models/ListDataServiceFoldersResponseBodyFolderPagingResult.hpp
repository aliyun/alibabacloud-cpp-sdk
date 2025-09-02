// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEFOLDERSRESPONSEBODYFOLDERPAGINGRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEFOLDERSRESPONSEBODYFOLDERPAGINGRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceFoldersResponseBodyFolderPagingResultFolders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceFoldersResponseBodyFolderPagingResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceFoldersResponseBodyFolderPagingResult& obj) { 
      DARABONBA_PTR_TO_JSON(Folders, folders_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceFoldersResponseBodyFolderPagingResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Folders, folders_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceFoldersResponseBodyFolderPagingResult() = default ;
    ListDataServiceFoldersResponseBodyFolderPagingResult(const ListDataServiceFoldersResponseBodyFolderPagingResult &) = default ;
    ListDataServiceFoldersResponseBodyFolderPagingResult(ListDataServiceFoldersResponseBodyFolderPagingResult &&) = default ;
    ListDataServiceFoldersResponseBodyFolderPagingResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceFoldersResponseBodyFolderPagingResult() = default ;
    ListDataServiceFoldersResponseBodyFolderPagingResult& operator=(const ListDataServiceFoldersResponseBodyFolderPagingResult &) = default ;
    ListDataServiceFoldersResponseBodyFolderPagingResult& operator=(ListDataServiceFoldersResponseBodyFolderPagingResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->folders_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // folders Field Functions 
    bool hasFolders() const { return this->folders_ != nullptr;};
    void deleteFolders() { this->folders_ = nullptr;};
    inline const vector<Models::ListDataServiceFoldersResponseBodyFolderPagingResultFolders> & folders() const { DARABONBA_PTR_GET_CONST(folders_, vector<Models::ListDataServiceFoldersResponseBodyFolderPagingResultFolders>) };
    inline vector<Models::ListDataServiceFoldersResponseBodyFolderPagingResultFolders> folders() { DARABONBA_PTR_GET(folders_, vector<Models::ListDataServiceFoldersResponseBodyFolderPagingResultFolders>) };
    inline ListDataServiceFoldersResponseBodyFolderPagingResult& setFolders(const vector<Models::ListDataServiceFoldersResponseBodyFolderPagingResultFolders> & folders) { DARABONBA_PTR_SET_VALUE(folders_, folders) };
    inline ListDataServiceFoldersResponseBodyFolderPagingResult& setFolders(vector<Models::ListDataServiceFoldersResponseBodyFolderPagingResultFolders> && folders) { DARABONBA_PTR_SET_RVALUE(folders_, folders) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataServiceFoldersResponseBodyFolderPagingResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceFoldersResponseBodyFolderPagingResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceFoldersResponseBodyFolderPagingResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The folders.
    std::shared_ptr<vector<Models::ListDataServiceFoldersResponseBodyFolderPagingResultFolders>> folders_ = nullptr;
    // The page number. The value of this parameter is the same as that of the PageNumber parameter in the request.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
