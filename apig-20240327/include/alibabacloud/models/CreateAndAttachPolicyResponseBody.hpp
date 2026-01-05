// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDATTACHPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDATTACHPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Attachment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateAndAttachPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndAttachPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndAttachPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateAndAttachPolicyResponseBody() = default ;
    CreateAndAttachPolicyResponseBody(const CreateAndAttachPolicyResponseBody &) = default ;
    CreateAndAttachPolicyResponseBody(CreateAndAttachPolicyResponseBody &&) = default ;
    CreateAndAttachPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndAttachPolicyResponseBody() = default ;
    CreateAndAttachPolicyResponseBody& operator=(const CreateAndAttachPolicyResponseBody &) = default ;
    CreateAndAttachPolicyResponseBody& operator=(CreateAndAttachPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(attachment, attachment_);
        DARABONBA_PTR_TO_JSON(policyId, policyId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(attachment, attachment_);
        DARABONBA_PTR_FROM_JSON(policyId, policyId_);
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
      virtual bool empty() const override { return this->attachment_ == nullptr
        && this->policyId_ == nullptr; };
      // attachment Field Functions 
      bool hasAttachment() const { return this->attachment_ != nullptr;};
      void deleteAttachment() { this->attachment_ = nullptr;};
      inline const Attachment & getAttachment() const { DARABONBA_PTR_GET_CONST(attachment_, Attachment) };
      inline Attachment getAttachment() { DARABONBA_PTR_GET(attachment_, Attachment) };
      inline Data& setAttachment(const Attachment & attachment) { DARABONBA_PTR_SET_VALUE(attachment_, attachment) };
      inline Data& setAttachment(Attachment && attachment) { DARABONBA_PTR_SET_RVALUE(attachment_, attachment) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Data& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    protected:
      // The association information of the policy.
      shared_ptr<Attachment> attachment_ {};
      // The policy ID.
      shared_ptr<string> policyId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateAndAttachPolicyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAndAttachPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateAndAttachPolicyResponseBody::Data) };
    inline CreateAndAttachPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateAndAttachPolicyResponseBody::Data) };
    inline CreateAndAttachPolicyResponseBody& setData(const CreateAndAttachPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAndAttachPolicyResponseBody& setData(CreateAndAttachPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAndAttachPolicyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAndAttachPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<CreateAndAttachPolicyResponseBody::Data> data_ {};
    // The response message returned.
    shared_ptr<string> message_ {};
    // The request ID, which is used to trace the call link.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
