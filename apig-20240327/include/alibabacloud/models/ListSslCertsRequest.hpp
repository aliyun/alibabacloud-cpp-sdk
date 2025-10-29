// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSSLCERTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSSLCERTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListSslCertsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSslCertsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(certNameLike, certNameLike_);
      DARABONBA_PTR_TO_JSON(domainName, domainName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListSslCertsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(certNameLike, certNameLike_);
      DARABONBA_PTR_FROM_JSON(domainName, domainName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListSslCertsRequest() = default ;
    ListSslCertsRequest(const ListSslCertsRequest &) = default ;
    ListSslCertsRequest(ListSslCertsRequest &&) = default ;
    ListSslCertsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSslCertsRequest() = default ;
    ListSslCertsRequest& operator=(const ListSslCertsRequest &) = default ;
    ListSslCertsRequest& operator=(ListSslCertsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certNameLike_ == nullptr
        && return this->domainName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // certNameLike Field Functions 
    bool hasCertNameLike() const { return this->certNameLike_ != nullptr;};
    void deleteCertNameLike() { this->certNameLike_ = nullptr;};
    inline string certNameLike() const { DARABONBA_PTR_GET_DEFAULT(certNameLike_, "") };
    inline ListSslCertsRequest& setCertNameLike(string certNameLike) { DARABONBA_PTR_SET_VALUE(certNameLike_, certNameLike) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListSslCertsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSslCertsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSslCertsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Name matching keyword.
    std::shared_ptr<string> certNameLike_ = nullptr;
    // Domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // Page number, default is 1
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size, default is 10
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
