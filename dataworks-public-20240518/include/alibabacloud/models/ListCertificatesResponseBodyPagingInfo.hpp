// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCertificatesResponseBodyPagingInfoCertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCertificatesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertificatesResponseBodyPagingInfo() = default ;
    ListCertificatesResponseBodyPagingInfo(const ListCertificatesResponseBodyPagingInfo &) = default ;
    ListCertificatesResponseBodyPagingInfo(ListCertificatesResponseBodyPagingInfo &&) = default ;
    ListCertificatesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesResponseBodyPagingInfo() = default ;
    ListCertificatesResponseBodyPagingInfo& operator=(const ListCertificatesResponseBodyPagingInfo &) = default ;
    ListCertificatesResponseBodyPagingInfo& operator=(ListCertificatesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificates_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<Models::ListCertificatesResponseBodyPagingInfoCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Models::ListCertificatesResponseBodyPagingInfoCertificates>) };
    inline vector<Models::ListCertificatesResponseBodyPagingInfoCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<Models::ListCertificatesResponseBodyPagingInfoCertificates>) };
    inline ListCertificatesResponseBodyPagingInfo& setCertificates(const vector<Models::ListCertificatesResponseBodyPagingInfoCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline ListCertificatesResponseBodyPagingInfo& setCertificates(vector<Models::ListCertificatesResponseBodyPagingInfoCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCertificatesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCertificatesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCertificatesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The certificate files.
    std::shared_ptr<vector<Models::ListCertificatesResponseBodyPagingInfoCertificates>> certificates_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
