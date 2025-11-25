// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCertsResponseBodyCerts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certs, certs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certs, certs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCertsResponseBody() = default ;
    DescribeCertsResponseBody(const DescribeCertsResponseBody &) = default ;
    DescribeCertsResponseBody(DescribeCertsResponseBody &&) = default ;
    DescribeCertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertsResponseBody() = default ;
    DescribeCertsResponseBody& operator=(const DescribeCertsResponseBody &) = default ;
    DescribeCertsResponseBody& operator=(DescribeCertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certs_ == nullptr
        && return this->requestId_ == nullptr; };
    // certs Field Functions 
    bool hasCerts() const { return this->certs_ != nullptr;};
    void deleteCerts() { this->certs_ = nullptr;};
    inline const vector<DescribeCertsResponseBodyCerts> & certs() const { DARABONBA_PTR_GET_CONST(certs_, vector<DescribeCertsResponseBodyCerts>) };
    inline vector<DescribeCertsResponseBodyCerts> certs() { DARABONBA_PTR_GET(certs_, vector<DescribeCertsResponseBodyCerts>) };
    inline DescribeCertsResponseBody& setCerts(const vector<DescribeCertsResponseBodyCerts> & certs) { DARABONBA_PTR_SET_VALUE(certs_, certs) };
    inline DescribeCertsResponseBody& setCerts(vector<DescribeCertsResponseBodyCerts> && certs) { DARABONBA_PTR_SET_RVALUE(certs_, certs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The certificate information about the website.
    std::shared_ptr<vector<DescribeCertsResponseBodyCerts>> certs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
