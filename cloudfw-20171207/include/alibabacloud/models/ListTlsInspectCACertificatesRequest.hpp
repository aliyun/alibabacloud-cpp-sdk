// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSINSPECTCACERTIFICATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSINSPECTCACERTIFICATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListTlsInspectCACertificatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTlsInspectCACertificatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertId, caCertId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListTlsInspectCACertificatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertId, caCertId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListTlsInspectCACertificatesRequest() = default ;
    ListTlsInspectCACertificatesRequest(const ListTlsInspectCACertificatesRequest &) = default ;
    ListTlsInspectCACertificatesRequest(ListTlsInspectCACertificatesRequest &&) = default ;
    ListTlsInspectCACertificatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTlsInspectCACertificatesRequest() = default ;
    ListTlsInspectCACertificatesRequest& operator=(const ListTlsInspectCACertificatesRequest &) = default ;
    ListTlsInspectCACertificatesRequest& operator=(ListTlsInspectCACertificatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCertId_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr; };
    // caCertId Field Functions 
    bool hasCaCertId() const { return this->caCertId_ != nullptr;};
    void deleteCaCertId() { this->caCertId_ = nullptr;};
    inline string getCaCertId() const { DARABONBA_PTR_GET_DEFAULT(caCertId_, "") };
    inline ListTlsInspectCACertificatesRequest& setCaCertId(string caCertId) { DARABONBA_PTR_SET_VALUE(caCertId_, caCertId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListTlsInspectCACertificatesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTlsInspectCACertificatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> caCertId_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
