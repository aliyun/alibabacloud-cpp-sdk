// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServerCertificatesResponseBodyServerCertificates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeServerCertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerCertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerCertificates, serverCertificates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerCertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificates, serverCertificates_);
    };
    DescribeServerCertificatesResponseBody() = default ;
    DescribeServerCertificatesResponseBody(const DescribeServerCertificatesResponseBody &) = default ;
    DescribeServerCertificatesResponseBody(DescribeServerCertificatesResponseBody &&) = default ;
    DescribeServerCertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerCertificatesResponseBody() = default ;
    DescribeServerCertificatesResponseBody& operator=(const DescribeServerCertificatesResponseBody &) = default ;
    DescribeServerCertificatesResponseBody& operator=(DescribeServerCertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serverCertificates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServerCertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverCertificates Field Functions 
    bool hasServerCertificates() const { return this->serverCertificates_ != nullptr;};
    void deleteServerCertificates() { this->serverCertificates_ = nullptr;};
    inline const DescribeServerCertificatesResponseBodyServerCertificates & serverCertificates() const { DARABONBA_PTR_GET_CONST(serverCertificates_, DescribeServerCertificatesResponseBodyServerCertificates) };
    inline DescribeServerCertificatesResponseBodyServerCertificates serverCertificates() { DARABONBA_PTR_GET(serverCertificates_, DescribeServerCertificatesResponseBodyServerCertificates) };
    inline DescribeServerCertificatesResponseBody& setServerCertificates(const DescribeServerCertificatesResponseBodyServerCertificates & serverCertificates) { DARABONBA_PTR_SET_VALUE(serverCertificates_, serverCertificates) };
    inline DescribeServerCertificatesResponseBody& setServerCertificates(DescribeServerCertificatesResponseBodyServerCertificates && serverCertificates) { DARABONBA_PTR_SET_RVALUE(serverCertificates_, serverCertificates) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The server certificates.
    std::shared_ptr<DescribeServerCertificatesResponseBodyServerCertificates> serverCertificates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
