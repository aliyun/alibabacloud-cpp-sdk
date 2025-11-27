// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHADIAGNOSECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHADIAGNOSECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeHADiagnoseConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHADiagnoseConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TcpConnectionType, tcpConnectionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHADiagnoseConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TcpConnectionType, tcpConnectionType_);
    };
    DescribeHADiagnoseConfigResponseBody() = default ;
    DescribeHADiagnoseConfigResponseBody(const DescribeHADiagnoseConfigResponseBody &) = default ;
    DescribeHADiagnoseConfigResponseBody(DescribeHADiagnoseConfigResponseBody &&) = default ;
    DescribeHADiagnoseConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHADiagnoseConfigResponseBody() = default ;
    DescribeHADiagnoseConfigResponseBody& operator=(const DescribeHADiagnoseConfigResponseBody &) = default ;
    DescribeHADiagnoseConfigResponseBody& operator=(DescribeHADiagnoseConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->tcpConnectionType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHADiagnoseConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tcpConnectionType Field Functions 
    bool hasTcpConnectionType() const { return this->tcpConnectionType_ != nullptr;};
    void deleteTcpConnectionType() { this->tcpConnectionType_ = nullptr;};
    inline string tcpConnectionType() const { DARABONBA_PTR_GET_DEFAULT(tcpConnectionType_, "") };
    inline DescribeHADiagnoseConfigResponseBody& setTcpConnectionType(string tcpConnectionType) { DARABONBA_PTR_SET_VALUE(tcpConnectionType_, tcpConnectionType) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The availability check method of the instance. Valid values:
    // 
    // *   **LONG**: Alibaba Cloud uses persistent connections to check the availability of the instance.
    // *   **SHORT**: Alibaba Cloud uses short-lived connections to check the availability of the instance.
    std::shared_ptr<string> tcpConnectionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
