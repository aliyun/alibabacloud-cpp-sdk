// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYTEMPLATESRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYTEMPLATESRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityTemplatesResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityTemplatesResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityTemplates, dataQualityTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityTemplatesResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityTemplates, dataQualityTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityTemplatesResponseBodyPageInfo() = default ;
    ListDataQualityTemplatesResponseBodyPageInfo(const ListDataQualityTemplatesResponseBodyPageInfo &) = default ;
    ListDataQualityTemplatesResponseBodyPageInfo(ListDataQualityTemplatesResponseBodyPageInfo &&) = default ;
    ListDataQualityTemplatesResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityTemplatesResponseBodyPageInfo() = default ;
    ListDataQualityTemplatesResponseBodyPageInfo& operator=(const ListDataQualityTemplatesResponseBodyPageInfo &) = default ;
    ListDataQualityTemplatesResponseBodyPageInfo& operator=(ListDataQualityTemplatesResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityTemplates_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataQualityTemplates Field Functions 
    bool hasDataQualityTemplates() const { return this->dataQualityTemplates_ != nullptr;};
    void deleteDataQualityTemplates() { this->dataQualityTemplates_ = nullptr;};
    inline const vector<Models::ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates> & dataQualityTemplates() const { DARABONBA_PTR_GET_CONST(dataQualityTemplates_, vector<Models::ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates>) };
    inline vector<Models::ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates> dataQualityTemplates() { DARABONBA_PTR_GET(dataQualityTemplates_, vector<Models::ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates>) };
    inline ListDataQualityTemplatesResponseBodyPageInfo& setDataQualityTemplates(const vector<Models::ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates> & dataQualityTemplates) { DARABONBA_PTR_SET_VALUE(dataQualityTemplates_, dataQualityTemplates) };
    inline ListDataQualityTemplatesResponseBodyPageInfo& setDataQualityTemplates(vector<Models::ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates> && dataQualityTemplates) { DARABONBA_PTR_SET_RVALUE(dataQualityTemplates_, dataQualityTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityTemplatesResponseBodyPageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityTemplatesResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataQualityTemplatesResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of rule templates.
    std::shared_ptr<vector<Models::ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates>> dataQualityTemplates_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of pages.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of records.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
