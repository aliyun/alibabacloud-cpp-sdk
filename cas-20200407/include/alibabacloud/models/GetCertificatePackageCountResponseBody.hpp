// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATEPACKAGECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATEPACKAGECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetCertificatePackageCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificatePackageCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NoticeCountDetail, noticeCountDetail_);
      DARABONBA_PTR_TO_JSON(ProductCountList, productCountList_);
      DARABONBA_PTR_TO_JSON(ProxyCountDetail, proxyCountDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCountDetail, totalCountDetail_);
      DARABONBA_PTR_TO_JSON(TrusteeCountDetail, trusteeCountDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificatePackageCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NoticeCountDetail, noticeCountDetail_);
      DARABONBA_PTR_FROM_JSON(ProductCountList, productCountList_);
      DARABONBA_PTR_FROM_JSON(ProxyCountDetail, proxyCountDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCountDetail, totalCountDetail_);
      DARABONBA_PTR_FROM_JSON(TrusteeCountDetail, trusteeCountDetail_);
    };
    GetCertificatePackageCountResponseBody() = default ;
    GetCertificatePackageCountResponseBody(const GetCertificatePackageCountResponseBody &) = default ;
    GetCertificatePackageCountResponseBody(GetCertificatePackageCountResponseBody &&) = default ;
    GetCertificatePackageCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificatePackageCountResponseBody() = default ;
    GetCertificatePackageCountResponseBody& operator=(const GetCertificatePackageCountResponseBody &) = default ;
    GetCertificatePackageCountResponseBody& operator=(GetCertificatePackageCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->noticeCountDetail_ == nullptr
        && this->productCountList_ == nullptr && this->proxyCountDetail_ == nullptr && this->requestId_ == nullptr && this->totalCountDetail_ == nullptr && this->trusteeCountDetail_ == nullptr; };
    // noticeCountDetail Field Functions 
    bool hasNoticeCountDetail() const { return this->noticeCountDetail_ != nullptr;};
    void deleteNoticeCountDetail() { this->noticeCountDetail_ = nullptr;};
    inline string getNoticeCountDetail() const { DARABONBA_PTR_GET_DEFAULT(noticeCountDetail_, "") };
    inline GetCertificatePackageCountResponseBody& setNoticeCountDetail(string noticeCountDetail) { DARABONBA_PTR_SET_VALUE(noticeCountDetail_, noticeCountDetail) };


    // productCountList Field Functions 
    bool hasProductCountList() const { return this->productCountList_ != nullptr;};
    void deleteProductCountList() { this->productCountList_ = nullptr;};
    inline string getProductCountList() const { DARABONBA_PTR_GET_DEFAULT(productCountList_, "") };
    inline GetCertificatePackageCountResponseBody& setProductCountList(string productCountList) { DARABONBA_PTR_SET_VALUE(productCountList_, productCountList) };


    // proxyCountDetail Field Functions 
    bool hasProxyCountDetail() const { return this->proxyCountDetail_ != nullptr;};
    void deleteProxyCountDetail() { this->proxyCountDetail_ = nullptr;};
    inline string getProxyCountDetail() const { DARABONBA_PTR_GET_DEFAULT(proxyCountDetail_, "") };
    inline GetCertificatePackageCountResponseBody& setProxyCountDetail(string proxyCountDetail) { DARABONBA_PTR_SET_VALUE(proxyCountDetail_, proxyCountDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificatePackageCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCountDetail Field Functions 
    bool hasTotalCountDetail() const { return this->totalCountDetail_ != nullptr;};
    void deleteTotalCountDetail() { this->totalCountDetail_ = nullptr;};
    inline string getTotalCountDetail() const { DARABONBA_PTR_GET_DEFAULT(totalCountDetail_, "") };
    inline GetCertificatePackageCountResponseBody& setTotalCountDetail(string totalCountDetail) { DARABONBA_PTR_SET_VALUE(totalCountDetail_, totalCountDetail) };


    // trusteeCountDetail Field Functions 
    bool hasTrusteeCountDetail() const { return this->trusteeCountDetail_ != nullptr;};
    void deleteTrusteeCountDetail() { this->trusteeCountDetail_ = nullptr;};
    inline string getTrusteeCountDetail() const { DARABONBA_PTR_GET_DEFAULT(trusteeCountDetail_, "") };
    inline GetCertificatePackageCountResponseBody& setTrusteeCountDetail(string trusteeCountDetail) { DARABONBA_PTR_SET_VALUE(trusteeCountDetail_, trusteeCountDetail) };


  protected:
    shared_ptr<string> noticeCountDetail_ {};
    shared_ptr<string> productCountList_ {};
    shared_ptr<string> proxyCountDetail_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCountDetail_ {};
    shared_ptr<string> trusteeCountDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
