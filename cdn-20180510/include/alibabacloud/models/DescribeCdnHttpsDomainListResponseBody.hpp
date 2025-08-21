// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNHTTPSDOMAINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNHTTPSDOMAINLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnHttpsDomainListResponseBodyCertInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnHttpsDomainListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnHttpsDomainListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnHttpsDomainListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCdnHttpsDomainListResponseBody() = default ;
    DescribeCdnHttpsDomainListResponseBody(const DescribeCdnHttpsDomainListResponseBody &) = default ;
    DescribeCdnHttpsDomainListResponseBody(DescribeCdnHttpsDomainListResponseBody &&) = default ;
    DescribeCdnHttpsDomainListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnHttpsDomainListResponseBody() = default ;
    DescribeCdnHttpsDomainListResponseBody& operator=(const DescribeCdnHttpsDomainListResponseBody &) = default ;
    DescribeCdnHttpsDomainListResponseBody& operator=(DescribeCdnHttpsDomainListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certInfos_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // certInfos Field Functions 
    bool hasCertInfos() const { return this->certInfos_ != nullptr;};
    void deleteCertInfos() { this->certInfos_ = nullptr;};
    inline const DescribeCdnHttpsDomainListResponseBodyCertInfos & certInfos() const { DARABONBA_PTR_GET_CONST(certInfos_, DescribeCdnHttpsDomainListResponseBodyCertInfos) };
    inline DescribeCdnHttpsDomainListResponseBodyCertInfos certInfos() { DARABONBA_PTR_GET(certInfos_, DescribeCdnHttpsDomainListResponseBodyCertInfos) };
    inline DescribeCdnHttpsDomainListResponseBody& setCertInfos(const DescribeCdnHttpsDomainListResponseBodyCertInfos & certInfos) { DARABONBA_PTR_SET_VALUE(certInfos_, certInfos) };
    inline DescribeCdnHttpsDomainListResponseBody& setCertInfos(DescribeCdnHttpsDomainListResponseBodyCertInfos && certInfos) { DARABONBA_PTR_SET_RVALUE(certInfos_, certInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnHttpsDomainListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCdnHttpsDomainListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the certificate.
    std::shared_ptr<DescribeCdnHttpsDomainListResponseBodyCertInfos> certInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
