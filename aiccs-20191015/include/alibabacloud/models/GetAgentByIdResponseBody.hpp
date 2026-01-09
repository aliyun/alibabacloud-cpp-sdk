// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAgentByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAgentByIdResponseBody() = default ;
    GetAgentByIdResponseBody(const GetAgentByIdResponseBody &) = default ;
    GetAgentByIdResponseBody(GetAgentByIdResponseBody &&) = default ;
    GetAgentByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentByIdResponseBody() = default ;
    GetAgentByIdResponseBody& operator=(const GetAgentByIdResponseBody &) = default ;
    GetAgentByIdResponseBody& operator=(GetAgentByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(ForeignKey, foreignKey_);
        DARABONBA_PTR_TO_JSON(ForeignNick, foreignNick_);
        DARABONBA_PTR_TO_JSON(RealName, realName_);
        DARABONBA_PTR_TO_JSON(ServicerType, servicerType_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(ForeignKey, foreignKey_);
        DARABONBA_PTR_FROM_JSON(ForeignNick, foreignNick_);
        DARABONBA_PTR_FROM_JSON(RealName, realName_);
        DARABONBA_PTR_FROM_JSON(ServicerType, servicerType_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
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
      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->createUserName_ == nullptr && this->foreignKey_ == nullptr && this->foreignNick_ == nullptr && this->realName_ == nullptr && this->servicerType_ == nullptr
        && this->showName_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline int32_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0) };
      inline Data& setAgentId(int32_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline Data& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // foreignKey Field Functions 
      bool hasForeignKey() const { return this->foreignKey_ != nullptr;};
      void deleteForeignKey() { this->foreignKey_ = nullptr;};
      inline string getForeignKey() const { DARABONBA_PTR_GET_DEFAULT(foreignKey_, "") };
      inline Data& setForeignKey(string foreignKey) { DARABONBA_PTR_SET_VALUE(foreignKey_, foreignKey) };


      // foreignNick Field Functions 
      bool hasForeignNick() const { return this->foreignNick_ != nullptr;};
      void deleteForeignNick() { this->foreignNick_ = nullptr;};
      inline string getForeignNick() const { DARABONBA_PTR_GET_DEFAULT(foreignNick_, "") };
      inline Data& setForeignNick(string foreignNick) { DARABONBA_PTR_SET_VALUE(foreignNick_, foreignNick) };


      // realName Field Functions 
      bool hasRealName() const { return this->realName_ != nullptr;};
      void deleteRealName() { this->realName_ = nullptr;};
      inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
      inline Data& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


      // servicerType Field Functions 
      bool hasServicerType() const { return this->servicerType_ != nullptr;};
      void deleteServicerType() { this->servicerType_ = nullptr;};
      inline int32_t getServicerType() const { DARABONBA_PTR_GET_DEFAULT(servicerType_, 0) };
      inline Data& setServicerType(int32_t servicerType) { DARABONBA_PTR_SET_VALUE(servicerType_, servicerType) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Data& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    protected:
      shared_ptr<int32_t> agentId_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<string> foreignKey_ {};
      shared_ptr<string> foreignNick_ {};
      shared_ptr<string> realName_ {};
      shared_ptr<int32_t> servicerType_ {};
      shared_ptr<string> showName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgentByIdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentByIdResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgentByIdResponseBody::Data) };
    inline GetAgentByIdResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgentByIdResponseBody::Data) };
    inline GetAgentByIdResponseBody& setData(const GetAgentByIdResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentByIdResponseBody& setData(GetAgentByIdResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentByIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgentByIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAgentByIdResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
