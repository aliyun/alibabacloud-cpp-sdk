// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPANIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPANIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCompaniesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompaniesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyId, companyId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompaniesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyId, companyId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
    };
    ListCompaniesRequest() = default ;
    ListCompaniesRequest(const ListCompaniesRequest &) = default ;
    ListCompaniesRequest(ListCompaniesRequest &&) = default ;
    ListCompaniesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompaniesRequest() = default ;
    ListCompaniesRequest& operator=(const ListCompaniesRequest &) = default ;
    ListCompaniesRequest& operator=(ListCompaniesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->currentPage_ == nullptr && this->keyword_ == nullptr && this->showSize_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ListCompaniesRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCompaniesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListCompaniesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline ListCompaniesRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


  protected:
    // The company ID.
    shared_ptr<int64_t> companyId_ {};
    // The page number of the current page. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The search keyword. For example, a keyword for the company name, province, country code, or city.
    shared_ptr<string> keyword_ {};
    // The number of contacts to display per page in a paged query.
    shared_ptr<int32_t> showSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
