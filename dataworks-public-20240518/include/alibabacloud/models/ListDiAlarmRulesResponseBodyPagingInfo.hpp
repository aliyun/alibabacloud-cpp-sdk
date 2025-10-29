// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIAlarmRulesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIAlarmRulesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobAlarmRules, DIJobAlarmRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIAlarmRulesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobAlarmRules, DIJobAlarmRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDIAlarmRulesResponseBodyPagingInfo() = default ;
    ListDIAlarmRulesResponseBodyPagingInfo(const ListDIAlarmRulesResponseBodyPagingInfo &) = default ;
    ListDIAlarmRulesResponseBodyPagingInfo(ListDIAlarmRulesResponseBodyPagingInfo &&) = default ;
    ListDIAlarmRulesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIAlarmRulesResponseBodyPagingInfo() = default ;
    ListDIAlarmRulesResponseBodyPagingInfo& operator=(const ListDIAlarmRulesResponseBodyPagingInfo &) = default ;
    ListDIAlarmRulesResponseBodyPagingInfo& operator=(ListDIAlarmRulesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DIJobAlarmRules_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // DIJobAlarmRules Field Functions 
    bool hasDIJobAlarmRules() const { return this->DIJobAlarmRules_ != nullptr;};
    void deleteDIJobAlarmRules() { this->DIJobAlarmRules_ = nullptr;};
    inline const vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules> & DIJobAlarmRules() const { DARABONBA_PTR_GET_CONST(DIJobAlarmRules_, vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules>) };
    inline vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules> DIJobAlarmRules() { DARABONBA_PTR_GET(DIJobAlarmRules_, vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules>) };
    inline ListDIAlarmRulesResponseBodyPagingInfo& setDIJobAlarmRules(const vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules> & DIJobAlarmRules) { DARABONBA_PTR_SET_VALUE(DIJobAlarmRules_, DIJobAlarmRules) };
    inline ListDIAlarmRulesResponseBodyPagingInfo& setDIJobAlarmRules(vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules> && DIJobAlarmRules) { DARABONBA_PTR_SET_RVALUE(DIJobAlarmRules_, DIJobAlarmRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDIAlarmRulesResponseBodyPagingInfo& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDIAlarmRulesResponseBodyPagingInfo& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDIAlarmRulesResponseBodyPagingInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The alert rules.
    std::shared_ptr<vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules>> DIJobAlarmRules_ = nullptr;
    // The page number. Pages start from page 1.
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
