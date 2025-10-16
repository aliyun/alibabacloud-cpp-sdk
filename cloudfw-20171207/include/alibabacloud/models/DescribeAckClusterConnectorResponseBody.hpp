// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERCONNECTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKCLUSTERCONNECTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAckClusterConnectorResponseBodyAckClusterConnector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAckClusterConnectorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckClusterConnectorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AckClusterConnector, ackClusterConnector_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckClusterConnectorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AckClusterConnector, ackClusterConnector_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAckClusterConnectorResponseBody() = default ;
    DescribeAckClusterConnectorResponseBody(const DescribeAckClusterConnectorResponseBody &) = default ;
    DescribeAckClusterConnectorResponseBody(DescribeAckClusterConnectorResponseBody &&) = default ;
    DescribeAckClusterConnectorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckClusterConnectorResponseBody() = default ;
    DescribeAckClusterConnectorResponseBody& operator=(const DescribeAckClusterConnectorResponseBody &) = default ;
    DescribeAckClusterConnectorResponseBody& operator=(DescribeAckClusterConnectorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackClusterConnector_ == nullptr
        && return this->requestId_ == nullptr; };
    // ackClusterConnector Field Functions 
    bool hasAckClusterConnector() const { return this->ackClusterConnector_ != nullptr;};
    void deleteAckClusterConnector() { this->ackClusterConnector_ = nullptr;};
    inline const DescribeAckClusterConnectorResponseBodyAckClusterConnector & ackClusterConnector() const { DARABONBA_PTR_GET_CONST(ackClusterConnector_, DescribeAckClusterConnectorResponseBodyAckClusterConnector) };
    inline DescribeAckClusterConnectorResponseBodyAckClusterConnector ackClusterConnector() { DARABONBA_PTR_GET(ackClusterConnector_, DescribeAckClusterConnectorResponseBodyAckClusterConnector) };
    inline DescribeAckClusterConnectorResponseBody& setAckClusterConnector(const DescribeAckClusterConnectorResponseBodyAckClusterConnector & ackClusterConnector) { DARABONBA_PTR_SET_VALUE(ackClusterConnector_, ackClusterConnector) };
    inline DescribeAckClusterConnectorResponseBody& setAckClusterConnector(DescribeAckClusterConnectorResponseBodyAckClusterConnector && ackClusterConnector) { DARABONBA_PTR_SET_RVALUE(ackClusterConnector_, ackClusterConnector) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAckClusterConnectorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeAckClusterConnectorResponseBodyAckClusterConnector> ackClusterConnector_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
