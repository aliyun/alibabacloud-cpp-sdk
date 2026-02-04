// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeInstanceSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(CertDownloadURL, certDownloadURL_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(SSLExpiredTime, SSLExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(CertDownloadURL, certDownloadURL_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(SSLExpiredTime, SSLExpiredTime_);
    };
    DescribeInstanceSSLResponseBody() = default ;
    DescribeInstanceSSLResponseBody(const DescribeInstanceSSLResponseBody &) = default ;
    DescribeInstanceSSLResponseBody(DescribeInstanceSSLResponseBody &&) = default ;
    DescribeInstanceSSLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSSLResponseBody() = default ;
    DescribeInstanceSSLResponseBody& operator=(const DescribeInstanceSSLResponseBody &) = default ;
    DescribeInstanceSSLResponseBody& operator=(DescribeInstanceSSLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certCommonName_ == nullptr
        && this->certDownloadURL_ == nullptr && this->instanceId_ == nullptr && this->requestId_ == nullptr && this->SSLEnabled_ == nullptr && this->SSLExpiredTime_ == nullptr; };
    // certCommonName Field Functions 
    bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
    void deleteCertCommonName() { this->certCommonName_ = nullptr;};
    inline string getCertCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
    inline DescribeInstanceSSLResponseBody& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // certDownloadURL Field Functions 
    bool hasCertDownloadURL() const { return this->certDownloadURL_ != nullptr;};
    void deleteCertDownloadURL() { this->certDownloadURL_ = nullptr;};
    inline string getCertDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(certDownloadURL_, "") };
    inline DescribeInstanceSSLResponseBody& setCertDownloadURL(string certDownloadURL) { DARABONBA_PTR_SET_VALUE(certDownloadURL_, certDownloadURL) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceSSLResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline string getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
    inline DescribeInstanceSSLResponseBody& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // SSLExpiredTime Field Functions 
    bool hasSSLExpiredTime() const { return this->SSLExpiredTime_ != nullptr;};
    void deleteSSLExpiredTime() { this->SSLExpiredTime_ = nullptr;};
    inline string getSSLExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(SSLExpiredTime_, "") };
    inline DescribeInstanceSSLResponseBody& setSSLExpiredTime(string SSLExpiredTime) { DARABONBA_PTR_SET_VALUE(SSLExpiredTime_, SSLExpiredTime) };


  protected:
    // The common name of the CA certificate. The default value is the internal endpoint of the instance.
    shared_ptr<string> certCommonName_ {};
    // The download URL of the CA certificate.
    shared_ptr<string> certDownloadURL_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the TLS (SSL) encryption feature. Valid values:
    // 
    // *   **Enable**: SSL encryption is enabled.
    // *   **Disable**: SSL encryption is disabled.
    shared_ptr<string> SSLEnabled_ {};
    // The time when the CA certificate expires.
    shared_ptr<string> SSLExpiredTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
