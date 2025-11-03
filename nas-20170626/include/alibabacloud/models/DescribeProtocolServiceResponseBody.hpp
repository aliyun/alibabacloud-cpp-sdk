// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProtocolServiceResponseBodyProtocolServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeProtocolServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProtocolServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtocolServices, protocolServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProtocolServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtocolServices, protocolServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProtocolServiceResponseBody() = default ;
    DescribeProtocolServiceResponseBody(const DescribeProtocolServiceResponseBody &) = default ;
    DescribeProtocolServiceResponseBody(DescribeProtocolServiceResponseBody &&) = default ;
    DescribeProtocolServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProtocolServiceResponseBody() = default ;
    DescribeProtocolServiceResponseBody& operator=(const DescribeProtocolServiceResponseBody &) = default ;
    DescribeProtocolServiceResponseBody& operator=(DescribeProtocolServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->protocolServices_ == nullptr && return this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProtocolServiceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocolServices Field Functions 
    bool hasProtocolServices() const { return this->protocolServices_ != nullptr;};
    void deleteProtocolServices() { this->protocolServices_ = nullptr;};
    inline const vector<DescribeProtocolServiceResponseBodyProtocolServices> & protocolServices() const { DARABONBA_PTR_GET_CONST(protocolServices_, vector<DescribeProtocolServiceResponseBodyProtocolServices>) };
    inline vector<DescribeProtocolServiceResponseBodyProtocolServices> protocolServices() { DARABONBA_PTR_GET(protocolServices_, vector<DescribeProtocolServiceResponseBodyProtocolServices>) };
    inline DescribeProtocolServiceResponseBody& setProtocolServices(const vector<DescribeProtocolServiceResponseBodyProtocolServices> & protocolServices) { DARABONBA_PTR_SET_VALUE(protocolServices_, protocolServices) };
    inline DescribeProtocolServiceResponseBody& setProtocolServices(vector<DescribeProtocolServiceResponseBodyProtocolServices> && protocolServices) { DARABONBA_PTR_SET_RVALUE(protocolServices_, protocolServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProtocolServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about protocol services.
    std::shared_ptr<vector<DescribeProtocolServiceResponseBodyProtocolServices>> protocolServices_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
