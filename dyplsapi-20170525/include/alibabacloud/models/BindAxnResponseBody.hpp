// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDAXNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxnResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxnResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretBindDTO, secretBindDTO_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxnResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretBindDTO, secretBindDTO_);
    };
    BindAxnResponseBody() = default ;
    BindAxnResponseBody(const BindAxnResponseBody &) = default ;
    BindAxnResponseBody(BindAxnResponseBody &&) = default ;
    BindAxnResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxnResponseBody() = default ;
    BindAxnResponseBody& operator=(const BindAxnResponseBody &) = default ;
    BindAxnResponseBody& operator=(BindAxnResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecretBindDTO : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecretBindDTO& obj) { 
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
        DARABONBA_PTR_TO_JSON(SubsId, subsId_);
      };
      friend void from_json(const Darabonba::Json& j, SecretBindDTO& obj) { 
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
        DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
      };
      SecretBindDTO() = default ;
      SecretBindDTO(const SecretBindDTO &) = default ;
      SecretBindDTO(SecretBindDTO &&) = default ;
      SecretBindDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecretBindDTO() = default ;
      SecretBindDTO& operator=(const SecretBindDTO &) = default ;
      SecretBindDTO& operator=(SecretBindDTO &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extension_ == nullptr
        && this->secretNo_ == nullptr && this->subsId_ == nullptr; };
      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline SecretBindDTO& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // secretNo Field Functions 
      bool hasSecretNo() const { return this->secretNo_ != nullptr;};
      void deleteSecretNo() { this->secretNo_ = nullptr;};
      inline string getSecretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
      inline SecretBindDTO& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


      // subsId Field Functions 
      bool hasSubsId() const { return this->subsId_ != nullptr;};
      void deleteSubsId() { this->subsId_ = nullptr;};
      inline string getSubsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, "") };
      inline SecretBindDTO& setSubsId(string subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


    protected:
      // The extension number.
      // 
      // > The BindAxn operation does not involve extension numbers. Ignore this parameter.
      shared_ptr<string> extension_ {};
      // The privacy number, which is Number X.
      shared_ptr<string> secretNo_ {};
      // The ID of the binding relationship.
      shared_ptr<string> subsId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->secretBindDTO_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindAxnResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindAxnResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindAxnResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretBindDTO Field Functions 
    bool hasSecretBindDTO() const { return this->secretBindDTO_ != nullptr;};
    void deleteSecretBindDTO() { this->secretBindDTO_ = nullptr;};
    inline const BindAxnResponseBody::SecretBindDTO & getSecretBindDTO() const { DARABONBA_PTR_GET_CONST(secretBindDTO_, BindAxnResponseBody::SecretBindDTO) };
    inline BindAxnResponseBody::SecretBindDTO getSecretBindDTO() { DARABONBA_PTR_GET(secretBindDTO_, BindAxnResponseBody::SecretBindDTO) };
    inline BindAxnResponseBody& setSecretBindDTO(const BindAxnResponseBody::SecretBindDTO & secretBindDTO) { DARABONBA_PTR_SET_VALUE(secretBindDTO_, secretBindDTO) };
    inline BindAxnResponseBody& setSecretBindDTO(BindAxnResponseBody::SecretBindDTO && secretBindDTO) { DARABONBA_PTR_SET_RVALUE(secretBindDTO_, secretBindDTO) };


  protected:
    // The status code of the request.
    // * A value of OK indicates that the request is successful.
    // * For other error codes, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The struct returned after the number is successfully bound.
    shared_ptr<BindAxnResponseBody::SecretBindDTO> secretBindDTO_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
