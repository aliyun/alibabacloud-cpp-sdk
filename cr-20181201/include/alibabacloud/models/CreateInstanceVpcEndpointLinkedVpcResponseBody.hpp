// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEVPCENDPOINTLINKEDVPCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEVPCENDPOINTLINKEDVPCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateInstanceVpcEndpointLinkedVpcResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceVpcEndpointLinkedVpcResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceVpcEndpointLinkedVpcResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateInstanceVpcEndpointLinkedVpcResponseBody() = default ;
    CreateInstanceVpcEndpointLinkedVpcResponseBody(const CreateInstanceVpcEndpointLinkedVpcResponseBody &) = default ;
    CreateInstanceVpcEndpointLinkedVpcResponseBody(CreateInstanceVpcEndpointLinkedVpcResponseBody &&) = default ;
    CreateInstanceVpcEndpointLinkedVpcResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceVpcEndpointLinkedVpcResponseBody() = default ;
    CreateInstanceVpcEndpointLinkedVpcResponseBody& operator=(const CreateInstanceVpcEndpointLinkedVpcResponseBody &) = default ;
    CreateInstanceVpcEndpointLinkedVpcResponseBody& operator=(CreateInstanceVpcEndpointLinkedVpcResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->isSuccess_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateInstanceVpcEndpointLinkedVpcResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline CreateInstanceVpcEndpointLinkedVpcResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceVpcEndpointLinkedVpcResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // Indicates whether the request is successful.
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
