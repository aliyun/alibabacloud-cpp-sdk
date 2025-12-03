// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURESBYAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURESBYAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSignaturesByApiResponseBodySignatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSignaturesByApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignaturesByApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signatures, signatures_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignaturesByApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signatures, signatures_);
    };
    DescribeSignaturesByApiResponseBody() = default ;
    DescribeSignaturesByApiResponseBody(const DescribeSignaturesByApiResponseBody &) = default ;
    DescribeSignaturesByApiResponseBody(DescribeSignaturesByApiResponseBody &&) = default ;
    DescribeSignaturesByApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignaturesByApiResponseBody() = default ;
    DescribeSignaturesByApiResponseBody& operator=(const DescribeSignaturesByApiResponseBody &) = default ;
    DescribeSignaturesByApiResponseBody& operator=(DescribeSignaturesByApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->signatures_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSignaturesByApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signatures Field Functions 
    bool hasSignatures() const { return this->signatures_ != nullptr;};
    void deleteSignatures() { this->signatures_ = nullptr;};
    inline const DescribeSignaturesByApiResponseBodySignatures & signatures() const { DARABONBA_PTR_GET_CONST(signatures_, DescribeSignaturesByApiResponseBodySignatures) };
    inline DescribeSignaturesByApiResponseBodySignatures signatures() { DARABONBA_PTR_GET(signatures_, DescribeSignaturesByApiResponseBodySignatures) };
    inline DescribeSignaturesByApiResponseBody& setSignatures(const DescribeSignaturesByApiResponseBodySignatures & signatures) { DARABONBA_PTR_SET_VALUE(signatures_, signatures) };
    inline DescribeSignaturesByApiResponseBody& setSignatures(DescribeSignaturesByApiResponseBodySignatures && signatures) { DARABONBA_PTR_SET_RVALUE(signatures_, signatures) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned signature key information. It is an array consisting of SignatureItem data.
    std::shared_ptr<DescribeSignaturesByApiResponseBodySignatures> signatures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
