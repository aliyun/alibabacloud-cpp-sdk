// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCACertificatesResponseBodyCACertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeCACertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CACertificates, CACertificates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CACertificates, CACertificates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCACertificatesResponseBody() = default ;
    DescribeCACertificatesResponseBody(const DescribeCACertificatesResponseBody &) = default ;
    DescribeCACertificatesResponseBody(DescribeCACertificatesResponseBody &&) = default ;
    DescribeCACertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificatesResponseBody() = default ;
    DescribeCACertificatesResponseBody& operator=(const DescribeCACertificatesResponseBody &) = default ;
    DescribeCACertificatesResponseBody& operator=(DescribeCACertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CACertificates_ == nullptr
        && return this->requestId_ == nullptr; };
    // CACertificates Field Functions 
    bool hasCACertificates() const { return this->CACertificates_ != nullptr;};
    void deleteCACertificates() { this->CACertificates_ = nullptr;};
    inline const DescribeCACertificatesResponseBodyCACertificates & CACertificates() const { DARABONBA_PTR_GET_CONST(CACertificates_, DescribeCACertificatesResponseBodyCACertificates) };
    inline DescribeCACertificatesResponseBodyCACertificates CACertificates() { DARABONBA_PTR_GET(CACertificates_, DescribeCACertificatesResponseBodyCACertificates) };
    inline DescribeCACertificatesResponseBody& setCACertificates(const DescribeCACertificatesResponseBodyCACertificates & CACertificates) { DARABONBA_PTR_SET_VALUE(CACertificates_, CACertificates) };
    inline DescribeCACertificatesResponseBody& setCACertificates(DescribeCACertificatesResponseBodyCACertificates && CACertificates) { DARABONBA_PTR_SET_RVALUE(CACertificates_, CACertificates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCACertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the CA certificate.
    std::shared_ptr<DescribeCACertificatesResponseBodyCACertificates> CACertificates_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
