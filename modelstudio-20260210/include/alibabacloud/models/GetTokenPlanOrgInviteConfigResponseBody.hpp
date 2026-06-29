// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENPLANORGINVITECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENPLANORGINVITECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetTokenPlanOrgInviteConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenPlanOrgInviteConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenPlanOrgInviteConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTokenPlanOrgInviteConfigResponseBody() = default ;
    GetTokenPlanOrgInviteConfigResponseBody(const GetTokenPlanOrgInviteConfigResponseBody &) = default ;
    GetTokenPlanOrgInviteConfigResponseBody(GetTokenPlanOrgInviteConfigResponseBody &&) = default ;
    GetTokenPlanOrgInviteConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenPlanOrgInviteConfigResponseBody() = default ;
    GetTokenPlanOrgInviteConfigResponseBody& operator=(const GetTokenPlanOrgInviteConfigResponseBody &) = default ;
    GetTokenPlanOrgInviteConfigResponseBody& operator=(GetTokenPlanOrgInviteConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultRoleId, defaultRoleId_);
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(SeatAssignStrategy, seatAssignStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultRoleId, defaultRoleId_);
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(SeatAssignStrategy, seatAssignStrategy_);
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
      virtual bool empty() const override { return this->defaultRoleId_ == nullptr
        && this->orgId_ == nullptr && this->seatAssignStrategy_ == nullptr; };
      // defaultRoleId Field Functions 
      bool hasDefaultRoleId() const { return this->defaultRoleId_ != nullptr;};
      void deleteDefaultRoleId() { this->defaultRoleId_ = nullptr;};
      inline string getDefaultRoleId() const { DARABONBA_PTR_GET_DEFAULT(defaultRoleId_, "") };
      inline Data& setDefaultRoleId(string defaultRoleId) { DARABONBA_PTR_SET_VALUE(defaultRoleId_, defaultRoleId) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline Data& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // seatAssignStrategy Field Functions 
      bool hasSeatAssignStrategy() const { return this->seatAssignStrategy_ != nullptr;};
      void deleteSeatAssignStrategy() { this->seatAssignStrategy_ = nullptr;};
      inline string getSeatAssignStrategy() const { DARABONBA_PTR_GET_DEFAULT(seatAssignStrategy_, "") };
      inline Data& setSeatAssignStrategy(string seatAssignStrategy) { DARABONBA_PTR_SET_VALUE(seatAssignStrategy_, seatAssignStrategy) };


    protected:
      // The default organization role ID to assign. Valid values:
      // 
      // - SYSTEM_ROLE_ORG_ADMIN
      // - SYSTEM_ROLE_ORG_MEMBER
      shared_ptr<string> defaultRoleId_ {};
      // The organization ID.
      shared_ptr<string> orgId_ {};
      // The default seat allocation strategy. Valid values:
      // 
      // - HIGH_TO_LOW
      // - LOW_TO_HIGH 
      // - NONE
      shared_ptr<string> seatAssignStrategy_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTokenPlanOrgInviteConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTokenPlanOrgInviteConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTokenPlanOrgInviteConfigResponseBody::Data) };
    inline GetTokenPlanOrgInviteConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTokenPlanOrgInviteConfigResponseBody::Data) };
    inline GetTokenPlanOrgInviteConfigResponseBody& setData(const GetTokenPlanOrgInviteConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTokenPlanOrgInviteConfigResponseBody& setData(GetTokenPlanOrgInviteConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTokenPlanOrgInviteConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTokenPlanOrgInviteConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The data result of the current category statistics.
    shared_ptr<GetTokenPlanOrgInviteConfigResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the API call is successful. Valid values:
    // 
    // - true: Successful.
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
