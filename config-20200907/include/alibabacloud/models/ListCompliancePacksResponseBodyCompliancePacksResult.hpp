// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKSRESPONSEBODYCOMPLIANCEPACKSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKSRESPONSEBODYCOMPLIANCEPACKSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListCompliancePacksResponseBodyCompliancePacksResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompliancePacksResponseBodyCompliancePacksResult& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePacks, compliancePacks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompliancePacksResponseBodyCompliancePacksResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePacks, compliancePacks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCompliancePacksResponseBodyCompliancePacksResult() = default ;
    ListCompliancePacksResponseBodyCompliancePacksResult(const ListCompliancePacksResponseBodyCompliancePacksResult &) = default ;
    ListCompliancePacksResponseBodyCompliancePacksResult(ListCompliancePacksResponseBodyCompliancePacksResult &&) = default ;
    ListCompliancePacksResponseBodyCompliancePacksResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompliancePacksResponseBodyCompliancePacksResult() = default ;
    ListCompliancePacksResponseBodyCompliancePacksResult& operator=(const ListCompliancePacksResponseBodyCompliancePacksResult &) = default ;
    ListCompliancePacksResponseBodyCompliancePacksResult& operator=(ListCompliancePacksResponseBodyCompliancePacksResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePacks_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // compliancePacks Field Functions 
    bool hasCompliancePacks() const { return this->compliancePacks_ != nullptr;};
    void deleteCompliancePacks() { this->compliancePacks_ = nullptr;};
    inline const vector<Models::ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks> & compliancePacks() const { DARABONBA_PTR_GET_CONST(compliancePacks_, vector<Models::ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks>) };
    inline vector<Models::ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks> compliancePacks() { DARABONBA_PTR_GET(compliancePacks_, vector<Models::ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks>) };
    inline ListCompliancePacksResponseBodyCompliancePacksResult& setCompliancePacks(const vector<Models::ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks> & compliancePacks) { DARABONBA_PTR_SET_VALUE(compliancePacks_, compliancePacks) };
    inline ListCompliancePacksResponseBodyCompliancePacksResult& setCompliancePacks(vector<Models::ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks> && compliancePacks) { DARABONBA_PTR_SET_RVALUE(compliancePacks_, compliancePacks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCompliancePacksResponseBodyCompliancePacksResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCompliancePacksResponseBodyCompliancePacksResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCompliancePacksResponseBodyCompliancePacksResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The compliance packages.
    std::shared_ptr<vector<Models::ListCompliancePacksResponseBodyCompliancePacksResultCompliancePacks>> compliancePacks_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of compliance packages returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
