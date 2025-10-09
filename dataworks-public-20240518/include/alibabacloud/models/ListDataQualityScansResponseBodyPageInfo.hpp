// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityScansResponseBodyPageInfoDataQualityScans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScansResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScansResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityScans, dataQualityScans_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScansResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityScans, dataQualityScans_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityScansResponseBodyPageInfo() = default ;
    ListDataQualityScansResponseBodyPageInfo(const ListDataQualityScansResponseBodyPageInfo &) = default ;
    ListDataQualityScansResponseBodyPageInfo(ListDataQualityScansResponseBodyPageInfo &&) = default ;
    ListDataQualityScansResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScansResponseBodyPageInfo() = default ;
    ListDataQualityScansResponseBodyPageInfo& operator=(const ListDataQualityScansResponseBodyPageInfo &) = default ;
    ListDataQualityScansResponseBodyPageInfo& operator=(ListDataQualityScansResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityScans_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataQualityScans Field Functions 
    bool hasDataQualityScans() const { return this->dataQualityScans_ != nullptr;};
    void deleteDataQualityScans() { this->dataQualityScans_ = nullptr;};
    inline const vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScans> & dataQualityScans() const { DARABONBA_PTR_GET_CONST(dataQualityScans_, vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScans>) };
    inline vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScans> dataQualityScans() { DARABONBA_PTR_GET(dataQualityScans_, vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScans>) };
    inline ListDataQualityScansResponseBodyPageInfo& setDataQualityScans(const vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScans> & dataQualityScans) { DARABONBA_PTR_SET_VALUE(dataQualityScans_, dataQualityScans) };
    inline ListDataQualityScansResponseBodyPageInfo& setDataQualityScans(vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScans> && dataQualityScans) { DARABONBA_PTR_SET_RVALUE(dataQualityScans_, dataQualityScans) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityScansResponseBodyPageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityScansResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataQualityScansResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of data quality monitors.
    std::shared_ptr<vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScans>> dataQualityScans_ = nullptr;
    // The page number.
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
