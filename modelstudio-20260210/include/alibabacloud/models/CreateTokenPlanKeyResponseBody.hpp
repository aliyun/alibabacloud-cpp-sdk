// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENPLANKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENPLANKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class CreateTokenPlanKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenPlanKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenPlanKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateTokenPlanKeyResponseBody() = default ;
    CreateTokenPlanKeyResponseBody(const CreateTokenPlanKeyResponseBody &) = default ;
    CreateTokenPlanKeyResponseBody(CreateTokenPlanKeyResponseBody &&) = default ;
    CreateTokenPlanKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenPlanKeyResponseBody() = default ;
    CreateTokenPlanKeyResponseBody& operator=(const CreateTokenPlanKeyResponseBody &) = default ;
    CreateTokenPlanKeyResponseBody& operator=(CreateTokenPlanKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKeyId, apiKeyId_);
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MaskedApiKey, maskedApiKey_);
        DARABONBA_PTR_TO_JSON(PlainApiKey, plainApiKey_);
        DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKeyId, apiKeyId_);
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MaskedApiKey, maskedApiKey_);
        DARABONBA_PTR_FROM_JSON(PlainApiKey, plainApiKey_);
        DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
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
      virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->createdAt_ == nullptr && this->description_ == nullptr && this->maskedApiKey_ == nullptr && this->plainApiKey_ == nullptr && this->sourceId_ == nullptr; };
      // apiKeyId Field Functions 
      bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
      void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
      inline string getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, "") };
      inline Data& setApiKeyId(string apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maskedApiKey Field Functions 
      bool hasMaskedApiKey() const { return this->maskedApiKey_ != nullptr;};
      void deleteMaskedApiKey() { this->maskedApiKey_ = nullptr;};
      inline string getMaskedApiKey() const { DARABONBA_PTR_GET_DEFAULT(maskedApiKey_, "") };
      inline Data& setMaskedApiKey(string maskedApiKey) { DARABONBA_PTR_SET_VALUE(maskedApiKey_, maskedApiKey) };


      // plainApiKey Field Functions 
      bool hasPlainApiKey() const { return this->plainApiKey_ != nullptr;};
      void deletePlainApiKey() { this->plainApiKey_ = nullptr;};
      inline string getPlainApiKey() const { DARABONBA_PTR_GET_DEFAULT(plainApiKey_, "") };
      inline Data& setPlainApiKey(string plainApiKey) { DARABONBA_PTR_SET_VALUE(plainApiKey_, plainApiKey) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline Data& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    protected:
      // The API key ID, which is generated by the system.
      shared_ptr<string> apiKeyId_ {};
      // The time when the key was created.
      shared_ptr<string> createdAt_ {};
      // The description of the key.
      shared_ptr<string> description_ {};
      // The masked_api_key returned by BaiLian, such as sk_***cdef.
      shared_ptr<string> maskedApiKey_ {};
      // The plaintext API key returned by BaiLian. This value is returned only once when the key is created.
      shared_ptr<string> plainApiKey_ {};
      // The source_id returned by BaiLian.
      shared_ptr<string> sourceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTokenPlanKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateTokenPlanKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateTokenPlanKeyResponseBody::Data) };
    inline CreateTokenPlanKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateTokenPlanKeyResponseBody::Data) };
    inline CreateTokenPlanKeyResponseBody& setData(const CreateTokenPlanKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateTokenPlanKeyResponseBody& setData(CreateTokenPlanKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTokenPlanKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateTokenPlanKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This parameter is empty if the request is successful.
    shared_ptr<string> code_ {};
    // The business data.
    shared_ptr<CreateTokenPlanKeyResponseBody::Data> data_ {};
    // The error message. This parameter is empty if the request is successful.
    shared_ptr<string> message_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
