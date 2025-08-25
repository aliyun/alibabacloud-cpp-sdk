// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYASSOCIATIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYASSOCIATIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DescribeAutoSnapshotPolicyAssociationsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoSnapshotPolicyAssociationsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyAssociationsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyAssociationsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeAutoSnapshotPolicyAssociationsResponse() = default ;
    DescribeAutoSnapshotPolicyAssociationsResponse(const DescribeAutoSnapshotPolicyAssociationsResponse &) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponse(DescribeAutoSnapshotPolicyAssociationsResponse &&) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyAssociationsResponse() = default ;
    DescribeAutoSnapshotPolicyAssociationsResponse& operator=(const DescribeAutoSnapshotPolicyAssociationsResponse &) = default ;
    DescribeAutoSnapshotPolicyAssociationsResponse& operator=(DescribeAutoSnapshotPolicyAssociationsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribeAutoSnapshotPolicyAssociationsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeAutoSnapshotPolicyAssociationsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeAutoSnapshotPolicyAssociationsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DescribeAutoSnapshotPolicyAssociationsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DescribeAutoSnapshotPolicyAssociationsResponseBody) };
    inline DescribeAutoSnapshotPolicyAssociationsResponseBody body() { DARABONBA_PTR_GET(body_, DescribeAutoSnapshotPolicyAssociationsResponseBody) };
    inline DescribeAutoSnapshotPolicyAssociationsResponse& setBody(const DescribeAutoSnapshotPolicyAssociationsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeAutoSnapshotPolicyAssociationsResponse& setBody(DescribeAutoSnapshotPolicyAssociationsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DescribeAutoSnapshotPolicyAssociationsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
