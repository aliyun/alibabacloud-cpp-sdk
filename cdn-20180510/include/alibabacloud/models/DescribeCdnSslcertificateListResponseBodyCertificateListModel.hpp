// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSSLCERTIFICATELISTRESPONSEBODYCERTIFICATELISTMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSSLCertificateListResponseBodyCertificateListModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSSLCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSSLCertificateListResponseBodyCertificateListModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeCdnSSLCertificateListResponseBodyCertificateListModel() = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModel(const DescribeCdnSSLCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModel(DescribeCdnSSLCertificateListResponseBodyCertificateListModel &&) = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSSLCertificateListResponseBodyCertificateListModel() = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModel& operator=(const DescribeCdnSSLCertificateListResponseBodyCertificateListModel &) = default ;
    DescribeCdnSSLCertificateListResponseBodyCertificateListModel& operator=(DescribeCdnSSLCertificateListResponseBodyCertificateListModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certList_ != nullptr
        && this->count_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList & certList() const { DARABONBA_PTR_GET_CONST(certList_, Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList) };
    inline Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList certList() { DARABONBA_PTR_GET(certList_, Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList) };
    inline DescribeCdnSSLCertificateListResponseBodyCertificateListModel& setCertList(const Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribeCdnSSLCertificateListResponseBodyCertificateListModel& setCertList(Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeCdnSSLCertificateListResponseBodyCertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeCdnSSLCertificateListResponseBodyCertificateListModel& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeCdnSSLCertificateListResponseBodyCertificateListModel& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Details about each certificate.
    std::shared_ptr<Models::DescribeCdnSSLCertificateListResponseBodyCertificateListModelCertList> certList_ = nullptr;
    // The number of certificates.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: an integer from 1 to 1000.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
