// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetAgRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgRelationDto, agRelationDto_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgRelationDto, agRelationDto_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAgRelationResponseBody() = default ;
    GetAgRelationResponseBody(const GetAgRelationResponseBody &) = default ;
    GetAgRelationResponseBody(GetAgRelationResponseBody &&) = default ;
    GetAgRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgRelationResponseBody() = default ;
    GetAgRelationResponseBody& operator=(const GetAgRelationResponseBody &) = default ;
    GetAgRelationResponseBody& operator=(GetAgRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgRelationDto : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgRelationDto& obj) { 
        DARABONBA_PTR_TO_JSON(Mpk, mpk_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AgRelationDto& obj) { 
        DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
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
        && this->pk_ == nullptr && this->type_ == nullptr; };
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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AgRelationDto& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> mpk_ {};
      shared_ptr<string> pk_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->agRelationDto_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // agRelationDto Field Functions 
    bool hasAgRelationDto() const { return this->agRelationDto_ != nullptr;};
    void deleteAgRelationDto() { this->agRelationDto_ = nullptr;};
    inline const GetAgRelationResponseBody::AgRelationDto & getAgRelationDto() const { DARABONBA_PTR_GET_CONST(agRelationDto_, GetAgRelationResponseBody::AgRelationDto) };
    inline GetAgRelationResponseBody::AgRelationDto getAgRelationDto() { DARABONBA_PTR_GET(agRelationDto_, GetAgRelationResponseBody::AgRelationDto) };
    inline GetAgRelationResponseBody& setAgRelationDto(const GetAgRelationResponseBody::AgRelationDto & agRelationDto) { DARABONBA_PTR_SET_VALUE(agRelationDto_, agRelationDto) };
    inline GetAgRelationResponseBody& setAgRelationDto(GetAgRelationResponseBody::AgRelationDto && agRelationDto) { DARABONBA_PTR_SET_RVALUE(agRelationDto_, agRelationDto) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgRelationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgRelationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgRelationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetAgRelationResponseBody::AgRelationDto> agRelationDto_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
