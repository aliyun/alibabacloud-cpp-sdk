// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCASCERTIFICATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCASCERTIFICATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCasCertificatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCasCertificatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKeyword, searchKeyword_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListCasCertificatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKeyword, searchKeyword_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ListCasCertificatesRequest() = default ;
    ListCasCertificatesRequest(const ListCasCertificatesRequest &) = default ;
    ListCasCertificatesRequest(ListCasCertificatesRequest &&) = default ;
    ListCasCertificatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCasCertificatesRequest() = default ;
    ListCasCertificatesRequest& operator=(const ListCasCertificatesRequest &) = default ;
    ListCasCertificatesRequest& operator=(ListCasCertificatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->searchKeyword_ == nullptr && this->securityToken_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCasCertificatesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCasCertificatesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKeyword Field Functions 
    bool hasSearchKeyword() const { return this->searchKeyword_ != nullptr;};
    void deleteSearchKeyword() { this->searchKeyword_ = nullptr;};
    inline string getSearchKeyword() const { DARABONBA_PTR_GET_DEFAULT(searchKeyword_, "") };
    inline ListCasCertificatesRequest& setSearchKeyword(string searchKeyword) { DARABONBA_PTR_SET_VALUE(searchKeyword_, searchKeyword) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ListCasCertificatesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The current page number. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The page size. Valid values: any integer from 1 to 1000.
    shared_ptr<int64_t> pageSize_ {};
    // The certificate name for fuzzy match.
    shared_ptr<string> searchKeyword_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
