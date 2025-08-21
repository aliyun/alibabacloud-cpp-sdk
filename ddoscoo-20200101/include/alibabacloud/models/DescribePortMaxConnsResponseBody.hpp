// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTMAXCONNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTMAXCONNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortMaxConnsResponseBodyPortMaxConns.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortMaxConnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortMaxConnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortMaxConns, portMaxConns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortMaxConnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortMaxConns, portMaxConns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePortMaxConnsResponseBody() = default ;
    DescribePortMaxConnsResponseBody(const DescribePortMaxConnsResponseBody &) = default ;
    DescribePortMaxConnsResponseBody(DescribePortMaxConnsResponseBody &&) = default ;
    DescribePortMaxConnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortMaxConnsResponseBody() = default ;
    DescribePortMaxConnsResponseBody& operator=(const DescribePortMaxConnsResponseBody &) = default ;
    DescribePortMaxConnsResponseBody& operator=(DescribePortMaxConnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->portMaxConns_ != nullptr
        && this->requestId_ != nullptr; };
    // portMaxConns Field Functions 
    bool hasPortMaxConns() const { return this->portMaxConns_ != nullptr;};
    void deletePortMaxConns() { this->portMaxConns_ = nullptr;};
    inline const vector<DescribePortMaxConnsResponseBodyPortMaxConns> & portMaxConns() const { DARABONBA_PTR_GET_CONST(portMaxConns_, vector<DescribePortMaxConnsResponseBodyPortMaxConns>) };
    inline vector<DescribePortMaxConnsResponseBodyPortMaxConns> portMaxConns() { DARABONBA_PTR_GET(portMaxConns_, vector<DescribePortMaxConnsResponseBodyPortMaxConns>) };
    inline DescribePortMaxConnsResponseBody& setPortMaxConns(const vector<DescribePortMaxConnsResponseBodyPortMaxConns> & portMaxConns) { DARABONBA_PTR_SET_VALUE(portMaxConns_, portMaxConns) };
    inline DescribePortMaxConnsResponseBody& setPortMaxConns(vector<DescribePortMaxConnsResponseBodyPortMaxConns> && portMaxConns) { DARABONBA_PTR_SET_RVALUE(portMaxConns_, portMaxConns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortMaxConnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the maximum number of connections that can be established over a port of the instance.
    std::shared_ptr<vector<DescribePortMaxConnsResponseBodyPortMaxConns>> portMaxConns_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
