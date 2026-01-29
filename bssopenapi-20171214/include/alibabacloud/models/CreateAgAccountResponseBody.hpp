// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateAgAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgRelationDto, agRelationDto_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgRelationDto, agRelationDto_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateAgAccountResponseBody() = default ;
    CreateAgAccountResponseBody(const CreateAgAccountResponseBody &) = default ;
    CreateAgAccountResponseBody(CreateAgAccountResponseBody &&) = default ;
    CreateAgAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgAccountResponseBody() = default ;
    CreateAgAccountResponseBody& operator=(const CreateAgAccountResponseBody &) = default ;
    CreateAgAccountResponseBody& operator=(CreateAgAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgRelationDto : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgRelationDto& obj) { 
        DARABONBA_PTR_TO_JSON(Mpk, mpk_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(RamAdminRoleName, ramAdminRoleName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AgRelationDto& obj) { 
        DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
        DARABONBA_PTR_FROM_JSON(RamAdminRoleName, ramAdminRoleName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AgRelationDto() = default ;
      AgRelationDto(const AgRelationDto &) = default ;
      AgRelationDto(AgRelationDto &&) = default ;
      AgRelationDto(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgRelationDto() = default ;
      AgRelationDto& operator=(const AgRelationDto &) = default ;
      AgRelationDto& operator=(AgRelationDto &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mpk_ == nullptr
        && this->pk_ == nullptr && this->ramAdminRoleName_ == nullptr && this->type_ == nullptr; };
      // mpk Field Functions 
      bool hasMpk() const { return this->mpk_ != nullptr;};
      void deleteMpk() { this->mpk_ = nullptr;};
      inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
      inline AgRelationDto& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline AgRelationDto& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


      // ramAdminRoleName Field Functions 
      bool hasRamAdminRoleName() const { return this->ramAdminRoleName_ != nullptr;};
      void deleteRamAdminRoleName() { this->ramAdminRoleName_ = nullptr;};
      inline string getRamAdminRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramAdminRoleName_, "") };
      inline AgRelationDto& setRamAdminRoleName(string ramAdminRoleName) { DARABONBA_PTR_SET_VALUE(ramAdminRoleName_, ramAdminRoleName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AgRelationDto& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the account that is used to call the CreateAgAccount operation.
      shared_ptr<string> mpk_ {};
      // The ID of the account that is created.
      shared_ptr<string> pk_ {};
      // The role of the account that is created.
      shared_ptr<string> ramAdminRoleName_ {};
      // The type of the relationship.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->agRelationDto_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // agRelationDto Field Functions 
    bool hasAgRelationDto() const { return this->agRelationDto_ != nullptr;};
    void deleteAgRelationDto() { this->agRelationDto_ = nullptr;};
    inline const CreateAgAccountResponseBody::AgRelationDto & getAgRelationDto() const { DARABONBA_PTR_GET_CONST(agRelationDto_, CreateAgAccountResponseBody::AgRelationDto) };
    inline CreateAgAccountResponseBody::AgRelationDto getAgRelationDto() { DARABONBA_PTR_GET(agRelationDto_, CreateAgAccountResponseBody::AgRelationDto) };
    inline CreateAgAccountResponseBody& setAgRelationDto(const CreateAgAccountResponseBody::AgRelationDto & agRelationDto) { DARABONBA_PTR_SET_VALUE(agRelationDto_, agRelationDto) };
    inline CreateAgAccountResponseBody& setAgRelationDto(CreateAgAccountResponseBody::AgRelationDto && agRelationDto) { DARABONBA_PTR_SET_RVALUE(agRelationDto_, agRelationDto) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateAgAccountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateAgAccountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateAgAccountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The relationship between the account that is used to call the CreateAgAccount operation and the account that is created.
    shared_ptr<CreateAgAccountResponseBody::AgRelationDto> agRelationDto_ {};
    // The status code returned.
    shared_ptr<string> code_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
