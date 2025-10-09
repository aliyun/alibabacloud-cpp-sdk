// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourcesResponseBodyPagingInfoDataSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataSourcesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataSourcesResponseBodyPagingInfo() = default ;
    ListDataSourcesResponseBodyPagingInfo(const ListDataSourcesResponseBodyPagingInfo &) = default ;
    ListDataSourcesResponseBodyPagingInfo(ListDataSourcesResponseBodyPagingInfo &&) = default ;
    ListDataSourcesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBodyPagingInfo() = default ;
    ListDataSourcesResponseBodyPagingInfo& operator=(const ListDataSourcesResponseBodyPagingInfo &) = default ;
    ListDataSourcesResponseBodyPagingInfo& operator=(ListDataSourcesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSources_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<Models::ListDataSourcesResponseBodyPagingInfoDataSources> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<Models::ListDataSourcesResponseBodyPagingInfoDataSources>) };
    inline vector<Models::ListDataSourcesResponseBodyPagingInfoDataSources> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<Models::ListDataSourcesResponseBodyPagingInfoDataSources>) };
    inline ListDataSourcesResponseBodyPagingInfo& setDataSources(const vector<Models::ListDataSourcesResponseBodyPagingInfoDataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline ListDataSourcesResponseBodyPagingInfo& setDataSources(vector<Models::ListDataSourcesResponseBodyPagingInfoDataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDataSourcesResponseBodyPagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDataSourcesResponseBodyPagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDataSourcesResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data source groups. Each element in the array indicates a data source group. Each data source group contains data sources in the development environment (if any) and the production environment.
    std::shared_ptr<vector<Models::ListDataSourcesResponseBodyPagingInfoDataSources>> dataSources_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
