// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRULETEMPLATESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityRuleTemplatesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityRuleTemplatesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRuleTemplates, dataQualityRuleTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityRuleTemplatesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRuleTemplates, dataQualityRuleTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityRuleTemplatesResponseBodyPagingInfo() = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfo(const ListDataQualityRuleTemplatesResponseBodyPagingInfo &) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfo(ListDataQualityRuleTemplatesResponseBodyPagingInfo &&) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityRuleTemplatesResponseBodyPagingInfo() = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfo& operator=(const ListDataQualityRuleTemplatesResponseBodyPagingInfo &) = default ;
    ListDataQualityRuleTemplatesResponseBodyPagingInfo& operator=(ListDataQualityRuleTemplatesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityRuleTemplates_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataQualityRuleTemplates Field Functions 
    bool hasDataQualityRuleTemplates() const { return this->dataQualityRuleTemplates_ != nullptr;};
    void deleteDataQualityRuleTemplates() { this->dataQualityRuleTemplates_ = nullptr;};
    inline const vector<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates> & dataQualityRuleTemplates() const { DARABONBA_PTR_GET_CONST(dataQualityRuleTemplates_, vector<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates>) };
    inline vector<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates> dataQualityRuleTemplates() { DARABONBA_PTR_GET(dataQualityRuleTemplates_, vector<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates>) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfo& setDataQualityRuleTemplates(const vector<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates> & dataQualityRuleTemplates) { DARABONBA_PTR_SET_VALUE(dataQualityRuleTemplates_, dataQualityRuleTemplates) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfo& setDataQualityRuleTemplates(vector<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates> && dataQualityRuleTemplates) { DARABONBA_PTR_SET_RVALUE(dataQualityRuleTemplates_, dataQualityRuleTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataQualityRuleTemplatesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The templates.
    std::shared_ptr<vector<Models::ListDataQualityRuleTemplatesResponseBodyPagingInfoDataQualityRuleTemplates>> dataQualityRuleTemplates_ = nullptr;
    // Page number
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Total number of entries
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
