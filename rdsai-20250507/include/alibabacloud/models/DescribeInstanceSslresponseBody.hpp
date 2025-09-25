// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CAType, CAType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_TO_JSON(ServerKey, serverKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CAType, CAType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_FROM_JSON(ServerKey, serverKey_);
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
    virtual bool empty() const override { this->CAType_ != nullptr
        && this->instanceName_ != nullptr && this->requestId_ != nullptr && this->SSLEnabled_ != nullptr && this->serverCert_ != nullptr && this->serverKey_ != nullptr; };
    // CAType Field Functions 
    bool hasCAType() const { return this->CAType_ != nullptr;};
    void deleteCAType() { this->CAType_ = nullptr;};
    inline string CAType() const { DARABONBA_PTR_GET_DEFAULT(CAType_, "") };
    inline DescribeInstanceSSLResponseBody& setCAType(string CAType) { DARABONBA_PTR_SET_VALUE(CAType_, CAType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceSSLResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline string SSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
    inline DescribeInstanceSSLResponseBody& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // serverCert Field Functions 
    bool hasServerCert() const { return this->serverCert_ != nullptr;};
    void deleteServerCert() { this->serverCert_ = nullptr;};
    inline string serverCert() const { DARABONBA_PTR_GET_DEFAULT(serverCert_, "") };
    inline DescribeInstanceSSLResponseBody& setServerCert(string serverCert) { DARABONBA_PTR_SET_VALUE(serverCert_, serverCert) };


    // serverKey Field Functions 
    bool hasServerKey() const { return this->serverKey_ != nullptr;};
    void deleteServerKey() { this->serverKey_ = nullptr;};
    inline string serverKey() const { DARABONBA_PTR_GET_DEFAULT(serverKey_, "") };
    inline DescribeInstanceSSLResponseBody& setServerKey(string serverKey) { DARABONBA_PTR_SET_VALUE(serverKey_, serverKey) };


  protected:
    std::shared_ptr<string> CAType_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> SSLEnabled_ = nullptr;
    std::shared_ptr<string> serverCert_ = nullptr;
    std::shared_ptr<string> serverKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
