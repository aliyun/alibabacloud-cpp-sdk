// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATEFORSERIALNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATEFORSERIALNUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClientCertificateForSerialNumberResponseBodyCertificateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeClientCertificateForSerialNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientCertificateForSerialNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateList, certificateList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientCertificateForSerialNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateList, certificateList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClientCertificateForSerialNumberResponseBody() = default ;
    DescribeClientCertificateForSerialNumberResponseBody(const DescribeClientCertificateForSerialNumberResponseBody &) = default ;
    DescribeClientCertificateForSerialNumberResponseBody(DescribeClientCertificateForSerialNumberResponseBody &&) = default ;
    DescribeClientCertificateForSerialNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientCertificateForSerialNumberResponseBody() = default ;
    DescribeClientCertificateForSerialNumberResponseBody& operator=(const DescribeClientCertificateForSerialNumberResponseBody &) = default ;
    DescribeClientCertificateForSerialNumberResponseBody& operator=(DescribeClientCertificateForSerialNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateList_ == nullptr
        && return this->requestId_ == nullptr; };
    // certificateList Field Functions 
    bool hasCertificateList() const { return this->certificateList_ != nullptr;};
    void deleteCertificateList() { this->certificateList_ = nullptr;};
    inline const vector<DescribeClientCertificateForSerialNumberResponseBodyCertificateList> & certificateList() const { DARABONBA_PTR_GET_CONST(certificateList_, vector<DescribeClientCertificateForSerialNumberResponseBodyCertificateList>) };
    inline vector<DescribeClientCertificateForSerialNumberResponseBodyCertificateList> certificateList() { DARABONBA_PTR_GET(certificateList_, vector<DescribeClientCertificateForSerialNumberResponseBodyCertificateList>) };
    inline DescribeClientCertificateForSerialNumberResponseBody& setCertificateList(const vector<DescribeClientCertificateForSerialNumberResponseBodyCertificateList> & certificateList) { DARABONBA_PTR_SET_VALUE(certificateList_, certificateList) };
    inline DescribeClientCertificateForSerialNumberResponseBody& setCertificateList(vector<DescribeClientCertificateForSerialNumberResponseBodyCertificateList> && certificateList) { DARABONBA_PTR_SET_RVALUE(certificateList_, certificateList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientCertificateForSerialNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeClientCertificateForSerialNumberResponseBodyCertificateList>> certificateList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
