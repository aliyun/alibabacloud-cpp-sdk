// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPGATEWAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPGATEWAYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEipGatewayInfoResponseBodyEipInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipGatewayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipGatewayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EipInfos, eipInfos_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipGatewayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EipInfos, eipInfos_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEipGatewayInfoResponseBody() = default ;
    DescribeEipGatewayInfoResponseBody(const DescribeEipGatewayInfoResponseBody &) = default ;
    DescribeEipGatewayInfoResponseBody(DescribeEipGatewayInfoResponseBody &&) = default ;
    DescribeEipGatewayInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipGatewayInfoResponseBody() = default ;
    DescribeEipGatewayInfoResponseBody& operator=(const DescribeEipGatewayInfoResponseBody &) = default ;
    DescribeEipGatewayInfoResponseBody& operator=(DescribeEipGatewayInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->eipInfos_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEipGatewayInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // eipInfos Field Functions 
    bool hasEipInfos() const { return this->eipInfos_ != nullptr;};
    void deleteEipInfos() { this->eipInfos_ = nullptr;};
    inline const DescribeEipGatewayInfoResponseBodyEipInfos & eipInfos() const { DARABONBA_PTR_GET_CONST(eipInfos_, DescribeEipGatewayInfoResponseBodyEipInfos) };
    inline DescribeEipGatewayInfoResponseBodyEipInfos eipInfos() { DARABONBA_PTR_GET(eipInfos_, DescribeEipGatewayInfoResponseBodyEipInfos) };
    inline DescribeEipGatewayInfoResponseBody& setEipInfos(const DescribeEipGatewayInfoResponseBodyEipInfos & eipInfos) { DARABONBA_PTR_SET_VALUE(eipInfos_, eipInfos) };
    inline DescribeEipGatewayInfoResponseBody& setEipInfos(DescribeEipGatewayInfoResponseBodyEipInfos && eipInfos) { DARABONBA_PTR_SET_RVALUE(eipInfos_, eipInfos) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEipGatewayInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipGatewayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code of the operation.
    std::shared_ptr<string> code_ = nullptr;
    // The detailed information about the EIP.
    std::shared_ptr<DescribeEipGatewayInfoResponseBodyEipInfos> eipInfos_ = nullptr;
    // The result of the operation.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
