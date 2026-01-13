// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVYCOMPUTETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVYCOMPUTETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateLivyComputeTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivyComputeTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivyComputeTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateLivyComputeTokenResponseBody() = default ;
    CreateLivyComputeTokenResponseBody(const CreateLivyComputeTokenResponseBody &) = default ;
    CreateLivyComputeTokenResponseBody(CreateLivyComputeTokenResponseBody &&) = default ;
    CreateLivyComputeTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivyComputeTokenResponseBody() = default ;
    CreateLivyComputeTokenResponseBody& operator=(const CreateLivyComputeTokenResponseBody &) = default ;
    CreateLivyComputeTokenResponseBody& operator=(CreateLivyComputeTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(tokenId, tokenId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(tokenId, tokenId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tokenId_ == nullptr; };
      // tokenId Field Functions 
      bool hasTokenId() const { return this->tokenId_ != nullptr;};
      void deleteTokenId() { this->tokenId_ = nullptr;};
      inline string getTokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
      inline Data& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


    protected:
      // Token ID。
      shared_ptr<string> tokenId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateLivyComputeTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateLivyComputeTokenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateLivyComputeTokenResponseBody::Data) };
    inline CreateLivyComputeTokenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateLivyComputeTokenResponseBody::Data) };
    inline CreateLivyComputeTokenResponseBody& setData(const CreateLivyComputeTokenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateLivyComputeTokenResponseBody& setData(CreateLivyComputeTokenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateLivyComputeTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLivyComputeTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateLivyComputeTokenResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
