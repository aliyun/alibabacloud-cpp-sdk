// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityResultsResponseBodyPagingInfoDataQualityResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityResultsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityResultsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityResults, dataQualityResults_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityResultsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityResults, dataQualityResults_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityResultsResponseBodyPagingInfo() = default ;
    ListDataQualityResultsResponseBodyPagingInfo(const ListDataQualityResultsResponseBodyPagingInfo &) = default ;
    ListDataQualityResultsResponseBodyPagingInfo(ListDataQualityResultsResponseBodyPagingInfo &&) = default ;
    ListDataQualityResultsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityResultsResponseBodyPagingInfo() = default ;
    ListDataQualityResultsResponseBodyPagingInfo& operator=(const ListDataQualityResultsResponseBodyPagingInfo &) = default ;
    ListDataQualityResultsResponseBodyPagingInfo& operator=(ListDataQualityResultsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityResults_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // dataQualityResults Field Functions 
    bool hasDataQualityResults() const { return this->dataQualityResults_ != nullptr;};
    void deleteDataQualityResults() { this->dataQualityResults_ = nullptr;};
    inline const vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResults> & dataQualityResults() const { DARABONBA_PTR_GET_CONST(dataQualityResults_, vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResults>) };
    inline vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResults> dataQualityResults() { DARABONBA_PTR_GET(dataQualityResults_, vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResults>) };
    inline ListDataQualityResultsResponseBodyPagingInfo& setDataQualityResults(const vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResults> & dataQualityResults) { DARABONBA_PTR_SET_VALUE(dataQualityResults_, dataQualityResults) };
    inline ListDataQualityResultsResponseBodyPagingInfo& setDataQualityResults(vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResults> && dataQualityResults) { DARABONBA_PTR_SET_RVALUE(dataQualityResults_, dataQualityResults) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityResultsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityResultsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataQualityResultsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data quality check results.
    std::shared_ptr<vector<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResults>> dataQualityResults_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
