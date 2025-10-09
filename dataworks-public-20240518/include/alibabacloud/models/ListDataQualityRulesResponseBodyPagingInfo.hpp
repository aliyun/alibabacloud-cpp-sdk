// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRULESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRULESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityRulesResponseBodyPagingInfoDataQualityRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityRulesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityRulesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRules, dataQualityRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityRulesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRules, dataQualityRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityRulesResponseBodyPagingInfo() = default ;
    ListDataQualityRulesResponseBodyPagingInfo(const ListDataQualityRulesResponseBodyPagingInfo &) = default ;
    ListDataQualityRulesResponseBodyPagingInfo(ListDataQualityRulesResponseBodyPagingInfo &&) = default ;
    ListDataQualityRulesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityRulesResponseBodyPagingInfo() = default ;
    ListDataQualityRulesResponseBodyPagingInfo& operator=(const ListDataQualityRulesResponseBodyPagingInfo &) = default ;
    ListDataQualityRulesResponseBodyPagingInfo& operator=(ListDataQualityRulesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityRules_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataQualityRules Field Functions 
    bool hasDataQualityRules() const { return this->dataQualityRules_ != nullptr;};
    void deleteDataQualityRules() { this->dataQualityRules_ = nullptr;};
    inline const vector<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRules> & dataQualityRules() const { DARABONBA_PTR_GET_CONST(dataQualityRules_, vector<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRules>) };
    inline vector<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRules> dataQualityRules() { DARABONBA_PTR_GET(dataQualityRules_, vector<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRules>) };
    inline ListDataQualityRulesResponseBodyPagingInfo& setDataQualityRules(const vector<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRules> & dataQualityRules) { DARABONBA_PTR_SET_VALUE(dataQualityRules_, dataQualityRules) };
    inline ListDataQualityRulesResponseBodyPagingInfo& setDataQualityRules(vector<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRules> && dataQualityRules) { DARABONBA_PTR_SET_RVALUE(dataQualityRules_, dataQualityRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityRulesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityRulesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataQualityRulesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The rules.
    std::shared_ptr<vector<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRules>> dataQualityRules_ = nullptr;
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
