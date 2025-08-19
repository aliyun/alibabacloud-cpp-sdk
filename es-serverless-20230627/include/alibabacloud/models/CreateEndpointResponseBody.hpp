// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEndpointResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateEndpointResponseBody() = default ;
    CreateEndpointResponseBody(const CreateEndpointResponseBody &) = default ;
    CreateEndpointResponseBody(CreateEndpointResponseBody &&) = default ;
    CreateEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEndpointResponseBody() = default ;
    CreateEndpointResponseBody& operator=(const CreateEndpointResponseBody &) = default ;
    CreateEndpointResponseBody& operator=(CreateEndpointResponseBody &&) = default ;
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
    inline CreateEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateEndpointResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CreateEndpointResponseBodyResult) };
    inline CreateEndpointResponseBodyResult result() { DARABONBA_PTR_GET(result_, CreateEndpointResponseBodyResult) };
    inline CreateEndpointResponseBody& setResult(const CreateEndpointResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateEndpointResponseBody& setResult(CreateEndpointResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateEndpointResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
