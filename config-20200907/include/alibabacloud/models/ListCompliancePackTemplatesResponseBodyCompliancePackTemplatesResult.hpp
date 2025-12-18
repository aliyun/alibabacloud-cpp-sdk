// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKTEMPLATESRESPONSEBODYCOMPLIANCEPACKTEMPLATESRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKTEMPLATESRESPONSEBODYCOMPLIANCEPACKTEMPLATESRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackTemplates, compliancePackTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackTemplates, compliancePackTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult() = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult(const ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult &) = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult(ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult &&) = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult() = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& operator=(const ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult &) = default ;
    ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& operator=(ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackTemplates_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // compliancePackTemplates Field Functions 
    bool hasCompliancePackTemplates() const { return this->compliancePackTemplates_ != nullptr;};
    void deleteCompliancePackTemplates() { this->compliancePackTemplates_ = nullptr;};
    inline const vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates> & compliancePackTemplates() const { DARABONBA_PTR_GET_CONST(compliancePackTemplates_, vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates>) };
    inline vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates> compliancePackTemplates() { DARABONBA_PTR_GET(compliancePackTemplates_, vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates>) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& setCompliancePackTemplates(const vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates> & compliancePackTemplates) { DARABONBA_PTR_SET_VALUE(compliancePackTemplates_, compliancePackTemplates) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& setCompliancePackTemplates(vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates> && compliancePackTemplates) { DARABONBA_PTR_SET_RVALUE(compliancePackTemplates_, compliancePackTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The compliance package templates.
    std::shared_ptr<vector<Models::ListCompliancePackTemplatesResponseBodyCompliancePackTemplatesResultCompliancePackTemplates>> compliancePackTemplates_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of the compliance package templates returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
