// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(SSLExpiredTime, SSLExpiredTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertCommonName, certCommonName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(SSLExpiredTime, SSLExpiredTime_);
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
    virtual bool empty() const override { this->certCommonName_ != nullptr
        && this->DBInstanceId_ != nullptr && this->DBInstanceName_ != nullptr && this->requestId_ != nullptr && this->SSLEnabled_ != nullptr && this->SSLExpiredTime_ != nullptr; };
    // certCommonName Field Functions 
    bool hasCertCommonName() const { return this->certCommonName_ != nullptr;};
    void deleteCertCommonName() { this->certCommonName_ = nullptr;};
    inline string certCommonName() const { DARABONBA_PTR_GET_DEFAULT(certCommonName_, "") };
    inline DescribeDBInstanceSSLResponseBody& setCertCommonName(string certCommonName) { DARABONBA_PTR_SET_VALUE(certCommonName_, certCommonName) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceSSLResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceSSLResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline bool SSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, false) };
    inline DescribeDBInstanceSSLResponseBody& setSSLEnabled(bool SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // SSLExpiredTime Field Functions 
    bool hasSSLExpiredTime() const { return this->SSLExpiredTime_ != nullptr;};
    void deleteSSLExpiredTime() { this->SSLExpiredTime_ = nullptr;};
    inline string SSLExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(SSLExpiredTime_, "") };
    inline DescribeDBInstanceSSLResponseBody& setSSLExpiredTime(string SSLExpiredTime) { DARABONBA_PTR_SET_VALUE(SSLExpiredTime_, SSLExpiredTime) };


  protected:
    // The name of the SSL certificate.
    std::shared_ptr<string> certCommonName_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether SSL encryption is enabled.
    std::shared_ptr<bool> SSLEnabled_ = nullptr;
    // The expiration time of the SSL certificate.
    std::shared_ptr<string> SSLExpiredTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
