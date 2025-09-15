// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WarehouseId, warehouseId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WarehouseId, warehouseId_);
    };
    ListCertRequest() = default ;
    ListCertRequest(const ListCertRequest &) = default ;
    ListCertRequest(ListCertRequest &&) = default ;
    ListCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertRequest() = default ;
    ListCertRequest& operator=(const ListCertRequest &) = default ;
    ListCertRequest& operator=(ListCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certType_ != nullptr
        && this->currentPage_ != nullptr && this->keyWord_ != nullptr && this->showSize_ != nullptr && this->sourceType_ != nullptr && this->status_ != nullptr
        && this->warehouseId_ != nullptr; };
    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline ListCertRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListCertRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string keyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline ListCertRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t showSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListCertRequest& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListCertRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCertRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // warehouseId Field Functions 
    bool hasWarehouseId() const { return this->warehouseId_ != nullptr;};
    void deleteWarehouseId() { this->warehouseId_ = nullptr;};
    inline int64_t warehouseId() const { DARABONBA_PTR_GET_DEFAULT(warehouseId_, 0L) };
    inline ListCertRequest& setWarehouseId(int64_t warehouseId) { DARABONBA_PTR_SET_VALUE(warehouseId_, warehouseId) };


  protected:
    // 证书的类型 。取值：
    // 
    // - **CA**：表示CA证书。
    // - **CERT**：表示签发的证书。
    std::shared_ptr<string> certType_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // The keyword for the query. You can enter a name, domain name, or Subject Alternative Name (SAN) extension. Fuzzy match is supported.
    std::shared_ptr<string> keyWord_ = nullptr;
    // The number of entries to return on each page. Default value: 50.
    std::shared_ptr<int64_t> showSize_ = nullptr;
    // The source of the certificate. Valid values:
    // 
    // *   **upload**: uploaded certificate
    // *   **aliyun**: Alibaba Cloud certificate
    std::shared_ptr<string> sourceType_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   **ISSUE**: issued
    // *   **REVOKE**: revoked
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the certificate repository. You can call the ListCertWarehouse API operation to query the IDs of certificate repositories.
    std::shared_ptr<int64_t> warehouseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
