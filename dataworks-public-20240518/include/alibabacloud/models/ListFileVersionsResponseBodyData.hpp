// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEVERSIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEVERSIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFileVersionsResponseBodyDataFileVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFileVersionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileVersions, fileVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileVersions, fileVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFileVersionsResponseBodyData() = default ;
    ListFileVersionsResponseBodyData(const ListFileVersionsResponseBodyData &) = default ;
    ListFileVersionsResponseBodyData(ListFileVersionsResponseBodyData &&) = default ;
    ListFileVersionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileVersionsResponseBodyData() = default ;
    ListFileVersionsResponseBodyData& operator=(const ListFileVersionsResponseBodyData &) = default ;
    ListFileVersionsResponseBodyData& operator=(ListFileVersionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileVersions_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // fileVersions Field Functions 
    bool hasFileVersions() const { return this->fileVersions_ != nullptr;};
    void deleteFileVersions() { this->fileVersions_ = nullptr;};
    inline const vector<Models::ListFileVersionsResponseBodyDataFileVersions> & fileVersions() const { DARABONBA_PTR_GET_CONST(fileVersions_, vector<Models::ListFileVersionsResponseBodyDataFileVersions>) };
    inline vector<Models::ListFileVersionsResponseBodyDataFileVersions> fileVersions() { DARABONBA_PTR_GET(fileVersions_, vector<Models::ListFileVersionsResponseBodyDataFileVersions>) };
    inline ListFileVersionsResponseBodyData& setFileVersions(const vector<Models::ListFileVersionsResponseBodyDataFileVersions> & fileVersions) { DARABONBA_PTR_SET_VALUE(fileVersions_, fileVersions) };
    inline ListFileVersionsResponseBodyData& setFileVersions(vector<Models::ListFileVersionsResponseBodyDataFileVersions> && fileVersions) { DARABONBA_PTR_SET_RVALUE(fileVersions_, fileVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFileVersionsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFileVersionsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFileVersionsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of file version details.
    std::shared_ptr<vector<Models::ListFileVersionsResponseBodyDataFileVersions>> fileVersions_ = nullptr;
    // The current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries on the current page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
