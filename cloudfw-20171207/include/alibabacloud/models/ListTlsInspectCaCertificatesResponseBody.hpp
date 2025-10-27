// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSINSPECTCACERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSINSPECTCACERTIFICATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTlsInspectCACertificatesResponseBodyCertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListTlsInspectCACertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTlsInspectCACertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificates, certificates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTlsInspectCACertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTlsInspectCACertificatesResponseBody() = default ;
    ListTlsInspectCACertificatesResponseBody(const ListTlsInspectCACertificatesResponseBody &) = default ;
    ListTlsInspectCACertificatesResponseBody(ListTlsInspectCACertificatesResponseBody &&) = default ;
    ListTlsInspectCACertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTlsInspectCACertificatesResponseBody() = default ;
    ListTlsInspectCACertificatesResponseBody& operator=(const ListTlsInspectCACertificatesResponseBody &) = default ;
    ListTlsInspectCACertificatesResponseBody& operator=(ListTlsInspectCACertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificates_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // certificates Field Functions 
    bool hasCertificates() const { return this->certificates_ != nullptr;};
    void deleteCertificates() { this->certificates_ = nullptr;};
    inline const vector<ListTlsInspectCACertificatesResponseBodyCertificates> & certificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<ListTlsInspectCACertificatesResponseBodyCertificates>) };
    inline vector<ListTlsInspectCACertificatesResponseBodyCertificates> certificates() { DARABONBA_PTR_GET(certificates_, vector<ListTlsInspectCACertificatesResponseBodyCertificates>) };
    inline ListTlsInspectCACertificatesResponseBody& setCertificates(const vector<ListTlsInspectCACertificatesResponseBodyCertificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
    inline ListTlsInspectCACertificatesResponseBody& setCertificates(vector<ListTlsInspectCACertificatesResponseBodyCertificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTlsInspectCACertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTlsInspectCACertificatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListTlsInspectCACertificatesResponseBodyCertificates>> certificates_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
