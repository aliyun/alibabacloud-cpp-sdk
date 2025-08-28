// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnClientCertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnClientCertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SslVpnClientCertKeys, sslVpnClientCertKeys_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnClientCertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SslVpnClientCertKeys, sslVpnClientCertKeys_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSslVpnClientCertsResponseBody() = default ;
    DescribeSslVpnClientCertsResponseBody(const DescribeSslVpnClientCertsResponseBody &) = default ;
    DescribeSslVpnClientCertsResponseBody(DescribeSslVpnClientCertsResponseBody &&) = default ;
    DescribeSslVpnClientCertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnClientCertsResponseBody() = default ;
    DescribeSslVpnClientCertsResponseBody& operator=(const DescribeSslVpnClientCertsResponseBody &) = default ;
    DescribeSslVpnClientCertsResponseBody& operator=(DescribeSslVpnClientCertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->sslVpnClientCertKeys_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSslVpnClientCertsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSslVpnClientCertsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSslVpnClientCertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sslVpnClientCertKeys Field Functions 
    bool hasSslVpnClientCertKeys() const { return this->sslVpnClientCertKeys_ != nullptr;};
    void deleteSslVpnClientCertKeys() { this->sslVpnClientCertKeys_ = nullptr;};
    inline const DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys & sslVpnClientCertKeys() const { DARABONBA_PTR_GET_CONST(sslVpnClientCertKeys_, DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys) };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys sslVpnClientCertKeys() { DARABONBA_PTR_GET(sslVpnClientCertKeys_, DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys) };
    inline DescribeSslVpnClientCertsResponseBody& setSslVpnClientCertKeys(const DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys & sslVpnClientCertKeys) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertKeys_, sslVpnClientCertKeys) };
    inline DescribeSslVpnClientCertsResponseBody& setSslVpnClientCertKeys(DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys && sslVpnClientCertKeys) { DARABONBA_PTR_SET_RVALUE(sslVpnClientCertKeys_, sslVpnClientCertKeys) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSslVpnClientCertsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the SSL client certificates.
    std::shared_ptr<DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeys> sslVpnClientCertKeys_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
