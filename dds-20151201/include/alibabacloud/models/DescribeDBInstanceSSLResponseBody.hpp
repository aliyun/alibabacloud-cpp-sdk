// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(ForceEncryption, forceEncryption_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SSLExpiredTime, SSLExpiredTime_);
      DARABONBA_PTR_TO_JSON(SSLStatus, SSLStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(ForceEncryption, forceEncryption_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SSLExpiredTime, SSLExpiredTime_);
      DARABONBA_PTR_FROM_JSON(SSLStatus, SSLStatus_);
    };
    DescribeDBInstanceSSLResponseBody() = default ;
    DescribeDBInstanceSSLResponseBody(const DescribeDBInstanceSSLResponseBody &) = default ;
    DescribeDBInstanceSSLResponseBody(DescribeDBInstanceSSLResponseBody &&) = default ;
    DescribeDBInstanceSSLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSSLResponseBody() = default ;
    DescribeDBInstanceSSLResponseBody& operator=(const DescribeDBInstanceSSLResponseBody &) = default ;
    DescribeDBInstanceSSLResponseBody& operator=(DescribeDBInstanceSSLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certCommonName_ == nullptr
        && this->forceEncryption_ == nullptr && this->requestId_ == nullptr && this->SSLExpiredTime_ == nullptr && this->SSLStatus_ == nullptr; };
    // certCommonName Field Functions 
    bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
    void deleteCertCommonName() { this->certCommonName_ = nullptr;};
    inline string getCertCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
    inline DescribeDBInstanceSSLResponseBody& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // forceEncryption Field Functions 
    bool hasForceEncryption() const { return this->forceEncryption_ != nullptr;};
    void deleteForceEncryption() { this->forceEncryption_ = nullptr;};
    inline string getForceEncryption() const { DARABONBA_PTR_GET_DEFAULT(forceEncryption_, "") };
    inline DescribeDBInstanceSSLResponseBody& setForceEncryption(string forceEncryption) { DARABONBA_PTR_SET_VALUE(forceEncryption_, forceEncryption) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSLExpiredTime Field Functions 
    bool hasSSLExpiredTime() const { return this->SSLExpiredTime_ != nullptr;};
    void deleteSSLExpiredTime() { this->SSLExpiredTime_ = nullptr;};
    inline string getSSLExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(SSLExpiredTime_, "") };
    inline DescribeDBInstanceSSLResponseBody& setSSLExpiredTime(string SSLExpiredTime) { DARABONBA_PTR_SET_VALUE(SSLExpiredTime_, SSLExpiredTime) };


    // SSLStatus Field Functions 
    bool hasSSLStatus() const { return this->SSLStatus_ != nullptr;};
    void deleteSSLStatus() { this->SSLStatus_ = nullptr;};
    inline string getSSLStatus() const { DARABONBA_PTR_GET_DEFAULT(SSLStatus_, "") };
    inline DescribeDBInstanceSSLResponseBody& setSSLStatus(string SSLStatus) { DARABONBA_PTR_SET_VALUE(SSLStatus_, SSLStatus) };


  protected:
    // The name of the SSL certificate.
    shared_ptr<string> certCommonName_ {};
    shared_ptr<string> forceEncryption_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The time when the SSL certificate expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in Coordinated Universal Time (UTC).
    shared_ptr<string> SSLExpiredTime_ {};
    // The status of the SSL feature. Valid values:
    // 
    // *   **Open**: The SSL feature is enabled.
    // *   **Closed**: The SSL feature is disabled.
    shared_ptr<string> SSLStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
