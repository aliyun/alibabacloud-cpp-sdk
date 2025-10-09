// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScanRunsResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScanRunsResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityScanRuns, dataQualityScanRuns_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScanRunsResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityScanRuns, dataQualityScanRuns_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityScanRunsResponseBodyPageInfo() = default ;
    ListDataQualityScanRunsResponseBodyPageInfo(const ListDataQualityScanRunsResponseBodyPageInfo &) = default ;
    ListDataQualityScanRunsResponseBodyPageInfo(ListDataQualityScanRunsResponseBodyPageInfo &&) = default ;
    ListDataQualityScanRunsResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScanRunsResponseBodyPageInfo() = default ;
    ListDataQualityScanRunsResponseBodyPageInfo& operator=(const ListDataQualityScanRunsResponseBodyPageInfo &) = default ;
    ListDataQualityScanRunsResponseBodyPageInfo& operator=(ListDataQualityScanRunsResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityScanRuns_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataQualityScanRuns Field Functions 
    bool hasDataQualityScanRuns() const { return this->dataQualityScanRuns_ != nullptr;};
    void deleteDataQualityScanRuns() { this->dataQualityScanRuns_ = nullptr;};
    inline const vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns> & dataQualityScanRuns() const { DARABONBA_PTR_GET_CONST(dataQualityScanRuns_, vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns>) };
    inline vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns> dataQualityScanRuns() { DARABONBA_PTR_GET(dataQualityScanRuns_, vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns>) };
    inline ListDataQualityScanRunsResponseBodyPageInfo& setDataQualityScanRuns(const vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns> & dataQualityScanRuns) { DARABONBA_PTR_SET_VALUE(dataQualityScanRuns_, dataQualityScanRuns) };
    inline ListDataQualityScanRunsResponseBodyPageInfo& setDataQualityScanRuns(vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns> && dataQualityScanRuns) { DARABONBA_PTR_SET_RVALUE(dataQualityScanRuns_, dataQualityScanRuns) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityScanRunsResponseBodyPageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityScanRunsResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataQualityScanRunsResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of data quality monitor run records.
    std::shared_ptr<vector<Models::ListDataQualityScanRunsResponseBodyPageInfoDataQualityScanRuns>> dataQualityScanRuns_ = nullptr;
    // The page number of the results. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of records per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of records returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
