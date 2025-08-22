// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchRetcodeAppByPageResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRetcodeAppByPageResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RetcodeApps, retcodeApps_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRetcodeAppByPageResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RetcodeApps, retcodeApps_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchRetcodeAppByPageResponseBodyPageBean() = default ;
    SearchRetcodeAppByPageResponseBodyPageBean(const SearchRetcodeAppByPageResponseBodyPageBean &) = default ;
    SearchRetcodeAppByPageResponseBodyPageBean(SearchRetcodeAppByPageResponseBodyPageBean &&) = default ;
    SearchRetcodeAppByPageResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRetcodeAppByPageResponseBodyPageBean() = default ;
    SearchRetcodeAppByPageResponseBodyPageBean& operator=(const SearchRetcodeAppByPageResponseBodyPageBean &) = default ;
    SearchRetcodeAppByPageResponseBodyPageBean& operator=(SearchRetcodeAppByPageResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->retcodeApps_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchRetcodeAppByPageResponseBodyPageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchRetcodeAppByPageResponseBodyPageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // retcodeApps Field Functions 
    bool hasRetcodeApps() const { return this->retcodeApps_ != nullptr;};
    void deleteRetcodeApps() { this->retcodeApps_ = nullptr;};
    inline const vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps> & retcodeApps() const { DARABONBA_PTR_GET_CONST(retcodeApps_, vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps>) };
    inline vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps> retcodeApps() { DARABONBA_PTR_GET(retcodeApps_, vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps>) };
    inline SearchRetcodeAppByPageResponseBodyPageBean& setRetcodeApps(const vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps> & retcodeApps) { DARABONBA_PTR_SET_VALUE(retcodeApps_, retcodeApps) };
    inline SearchRetcodeAppByPageResponseBodyPageBean& setRetcodeApps(vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps> && retcodeApps) { DARABONBA_PTR_SET_RVALUE(retcodeApps_, retcodeApps) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchRetcodeAppByPageResponseBodyPageBean& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The browser monitoring tasks that are returned.
    std::shared_ptr<vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps>> retcodeApps_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
