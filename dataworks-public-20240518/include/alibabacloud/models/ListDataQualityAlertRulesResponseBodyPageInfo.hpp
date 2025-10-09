// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityAlertRulesResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityAlertRulesResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityAlertRules, dataQualityAlertRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityAlertRulesResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityAlertRules, dataQualityAlertRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityAlertRulesResponseBodyPageInfo() = default ;
    ListDataQualityAlertRulesResponseBodyPageInfo(const ListDataQualityAlertRulesResponseBodyPageInfo &) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfo(ListDataQualityAlertRulesResponseBodyPageInfo &&) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityAlertRulesResponseBodyPageInfo() = default ;
    ListDataQualityAlertRulesResponseBodyPageInfo& operator=(const ListDataQualityAlertRulesResponseBodyPageInfo &) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfo& operator=(ListDataQualityAlertRulesResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityAlertRules_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataQualityAlertRules Field Functions 
    bool hasDataQualityAlertRules() const { return this->dataQualityAlertRules_ != nullptr;};
    void deleteDataQualityAlertRules() { this->dataQualityAlertRules_ = nullptr;};
    inline const vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules> & dataQualityAlertRules() const { DARABONBA_PTR_GET_CONST(dataQualityAlertRules_, vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules>) };
    inline vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules> dataQualityAlertRules() { DARABONBA_PTR_GET(dataQualityAlertRules_, vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules>) };
    inline ListDataQualityAlertRulesResponseBodyPageInfo& setDataQualityAlertRules(const vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules> & dataQualityAlertRules) { DARABONBA_PTR_SET_VALUE(dataQualityAlertRules_, dataQualityAlertRules) };
    inline ListDataQualityAlertRulesResponseBodyPageInfo& setDataQualityAlertRules(vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules> && dataQualityAlertRules) { DARABONBA_PTR_SET_RVALUE(dataQualityAlertRules_, dataQualityAlertRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityAlertRulesResponseBodyPageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityAlertRulesResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataQualityAlertRulesResponseBodyPageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of alert rule configurations.
    std::shared_ptr<vector<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules>> dataQualityAlertRules_ = nullptr;
    // The current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of records per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
