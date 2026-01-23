// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECHAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateChainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChainId, chainId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateChainResponseBody() = default ;
    CreateChainResponseBody(const CreateChainResponseBody &) = default ;
    CreateChainResponseBody(CreateChainResponseBody &&) = default ;
    CreateChainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChainResponseBody() = default ;
    CreateChainResponseBody& operator=(const CreateChainResponseBody &) = default ;
    CreateChainResponseBody& operator=(CreateChainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chainId_ == nullptr
        && this->code_ == nullptr && this->isSuccess_ == nullptr && this->requestId_ == nullptr; };
    // chainId Field Functions 
    bool hasChainId() const { return this->chainId_ != nullptr;};
    void deleteChainId() { this->chainId_ = nullptr;};
    inline string getChainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
    inline CreateChainResponseBody& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateChainResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline CreateChainResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateChainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the delivery chain.
    shared_ptr<string> chainId_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> isSuccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
