// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETVERSIONSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETVERSIONSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDatasetVersionsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetVersionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetVersions, datasetVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetVersionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetVersions, datasetVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatasetVersionsResponseBodyPagingInfo() = default ;
    ListDatasetVersionsResponseBodyPagingInfo(const ListDatasetVersionsResponseBodyPagingInfo &) = default ;
    ListDatasetVersionsResponseBodyPagingInfo(ListDatasetVersionsResponseBodyPagingInfo &&) = default ;
    ListDatasetVersionsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetVersionsResponseBodyPagingInfo() = default ;
    ListDatasetVersionsResponseBodyPagingInfo& operator=(const ListDatasetVersionsResponseBodyPagingInfo &) = default ;
    ListDatasetVersionsResponseBodyPagingInfo& operator=(ListDatasetVersionsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetVersions_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // datasetVersions Field Functions 
    bool hasDatasetVersions() const { return this->datasetVersions_ != nullptr;};
    void deleteDatasetVersions() { this->datasetVersions_ = nullptr;};
    inline const vector<Models::DatasetVersion> & datasetVersions() const { DARABONBA_PTR_GET_CONST(datasetVersions_, vector<Models::DatasetVersion>) };
    inline vector<Models::DatasetVersion> datasetVersions() { DARABONBA_PTR_GET(datasetVersions_, vector<Models::DatasetVersion>) };
    inline ListDatasetVersionsResponseBodyPagingInfo& setDatasetVersions(const vector<Models::DatasetVersion> & datasetVersions) { DARABONBA_PTR_SET_VALUE(datasetVersions_, datasetVersions) };
    inline ListDatasetVersionsResponseBodyPagingInfo& setDatasetVersions(vector<Models::DatasetVersion> && datasetVersions) { DARABONBA_PTR_SET_RVALUE(datasetVersions_, datasetVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetVersionsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetVersionsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatasetVersionsResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::DatasetVersion>> datasetVersions_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
