// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVpcEndpointResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateVpcEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CreateVpcEndpointResponseBody() = default ;
    CreateVpcEndpointResponseBody(const CreateVpcEndpointResponseBody &) = default ;
    CreateVpcEndpointResponseBody(CreateVpcEndpointResponseBody &&) = default ;
    CreateVpcEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcEndpointResponseBody() = default ;
    CreateVpcEndpointResponseBody& operator=(const CreateVpcEndpointResponseBody &) = default ;
    CreateVpcEndpointResponseBody& operator=(CreateVpcEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpcEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateVpcEndpointResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CreateVpcEndpointResponseBodyResult) };
    inline CreateVpcEndpointResponseBodyResult result() { DARABONBA_PTR_GET(result_, CreateVpcEndpointResponseBodyResult) };
    inline CreateVpcEndpointResponseBody& setResult(const CreateVpcEndpointResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateVpcEndpointResponseBody& setResult(CreateVpcEndpointResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The endpoint domain name, which is used to configure the connection.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the endpoint on the service VPC side.
    std::shared_ptr<CreateVpcEndpointResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
