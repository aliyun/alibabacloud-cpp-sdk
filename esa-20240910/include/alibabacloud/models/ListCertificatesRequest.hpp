// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListCertificatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(ValidOnly, validOnly_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(ValidOnly, validOnly_);
    };
    ListCertificatesRequest() = default ;
    ListCertificatesRequest(const ListCertificatesRequest &) = default ;
    ListCertificatesRequest(ListCertificatesRequest &&) = default ;
    ListCertificatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesRequest() = default ;
    ListCertificatesRequest& operator=(const ListCertificatesRequest &) = default ;
    ListCertificatesRequest& operator=(ListCertificatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->siteId_ == nullptr && return this->validOnly_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListCertificatesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCertificatesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCertificatesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListCertificatesRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // validOnly Field Functions 
    bool hasValidOnly() const { return this->validOnly_ != nullptr;};
    void deleteValidOnly() { this->validOnly_ = nullptr;};
    inline bool validOnly() const { DARABONBA_PTR_GET_DEFAULT(validOnly_, false) };
    inline ListCertificatesRequest& setValidOnly(bool validOnly) { DARABONBA_PTR_SET_VALUE(validOnly_, validOnly) };


  protected:
    // The keyword that is used for the search.
    std::shared_ptr<string> keyword_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](~~ListSites~~) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Specifies whether to return only valid certificates.
    std::shared_ptr<bool> validOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
