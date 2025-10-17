// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLICENSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLICENSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class ListLicensesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLicensesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryStr, queryStr_);
    };
    friend void from_json(const Darabonba::Json& j, ListLicensesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryStr, queryStr_);
    };
    ListLicensesRequest() = default ;
    ListLicensesRequest(const ListLicensesRequest &) = default ;
    ListLicensesRequest(ListLicensesRequest &&) = default ;
    ListLicensesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLicensesRequest() = default ;
    ListLicensesRequest& operator=(const ListLicensesRequest &) = default ;
    ListLicensesRequest& operator=(ListLicensesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->queryStr_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListLicensesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLicensesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryStr Field Functions 
    bool hasQueryStr() const { return this->queryStr_ != nullptr;};
    void deleteQueryStr() { this->queryStr_ = nullptr;};
    inline string queryStr() const { DARABONBA_PTR_GET_DEFAULT(queryStr_, "") };
    inline ListLicensesRequest& setQueryStr(string queryStr) { DARABONBA_PTR_SET_VALUE(queryStr_, queryStr) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> queryStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
