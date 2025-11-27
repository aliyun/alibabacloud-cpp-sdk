// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllWhitelistTemplateResponseBodyDataTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAllWhitelistTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrPageNumbers, currPageNumbers_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(HasPrev, hasPrev_);
      DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalPageNumbers, totalPageNumbers_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrPageNumbers, currPageNumbers_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(HasPrev, hasPrev_);
      DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalPageNumbers, totalPageNumbers_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeAllWhitelistTemplateResponseBodyData() = default ;
    DescribeAllWhitelistTemplateResponseBodyData(const DescribeAllWhitelistTemplateResponseBodyData &) = default ;
    DescribeAllWhitelistTemplateResponseBodyData(DescribeAllWhitelistTemplateResponseBodyData &&) = default ;
    DescribeAllWhitelistTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllWhitelistTemplateResponseBodyData() = default ;
    DescribeAllWhitelistTemplateResponseBodyData& operator=(const DescribeAllWhitelistTemplateResponseBodyData &) = default ;
    DescribeAllWhitelistTemplateResponseBodyData& operator=(DescribeAllWhitelistTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currPageNumbers_ == nullptr
        && return this->hasNext_ == nullptr && return this->hasPrev_ == nullptr && return this->maxRecordsPerPage_ == nullptr && return this->templates_ == nullptr && return this->totalPageNumbers_ == nullptr
        && return this->totalRecords_ == nullptr; };
    // currPageNumbers Field Functions 
    bool hasCurrPageNumbers() const { return this->currPageNumbers_ != nullptr;};
    void deleteCurrPageNumbers() { this->currPageNumbers_ = nullptr;};
    inline int32_t currPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(currPageNumbers_, 0) };
    inline DescribeAllWhitelistTemplateResponseBodyData& setCurrPageNumbers(int32_t currPageNumbers) { DARABONBA_PTR_SET_VALUE(currPageNumbers_, currPageNumbers) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline DescribeAllWhitelistTemplateResponseBodyData& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // hasPrev Field Functions 
    bool hasHasPrev() const { return this->hasPrev_ != nullptr;};
    void deleteHasPrev() { this->hasPrev_ = nullptr;};
    inline bool hasPrev() const { DARABONBA_PTR_GET_DEFAULT(hasPrev_, false) };
    inline DescribeAllWhitelistTemplateResponseBodyData& setHasPrev(bool hasPrev) { DARABONBA_PTR_SET_VALUE(hasPrev_, hasPrev) };


    // maxRecordsPerPage Field Functions 
    bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
    void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
    inline int32_t maxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
    inline DescribeAllWhitelistTemplateResponseBodyData& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<Models::DescribeAllWhitelistTemplateResponseBodyDataTemplates> & templates() const { DARABONBA_PTR_GET_CONST(templates_, vector<Models::DescribeAllWhitelistTemplateResponseBodyDataTemplates>) };
    inline vector<Models::DescribeAllWhitelistTemplateResponseBodyDataTemplates> templates() { DARABONBA_PTR_GET(templates_, vector<Models::DescribeAllWhitelistTemplateResponseBodyDataTemplates>) };
    inline DescribeAllWhitelistTemplateResponseBodyData& setTemplates(const vector<Models::DescribeAllWhitelistTemplateResponseBodyDataTemplates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeAllWhitelistTemplateResponseBodyData& setTemplates(vector<Models::DescribeAllWhitelistTemplateResponseBodyDataTemplates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalPageNumbers Field Functions 
    bool hasTotalPageNumbers() const { return this->totalPageNumbers_ != nullptr;};
    void deleteTotalPageNumbers() { this->totalPageNumbers_ = nullptr;};
    inline int32_t totalPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(totalPageNumbers_, 0) };
    inline DescribeAllWhitelistTemplateResponseBodyData& setTotalPageNumbers(int32_t totalPageNumbers) { DARABONBA_PTR_SET_VALUE(totalPageNumbers_, totalPageNumbers) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int32_t totalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0) };
    inline DescribeAllWhitelistTemplateResponseBodyData& setTotalRecords(int32_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> currPageNumbers_ = nullptr;
    // Indicates whether the data that meets the conditions is displayed on the next page. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasNext_ = nullptr;
    // Indicates whether the data that meets the conditions is displayed on the previous page. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasPrev_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> maxRecordsPerPage_ = nullptr;
    // The information about whitelist templates that are returned by page.
    std::shared_ptr<vector<Models::DescribeAllWhitelistTemplateResponseBodyDataTemplates>> templates_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> totalPageNumbers_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
