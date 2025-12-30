// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENOTRAINPICAVATARRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENOTRAINPICAVATARRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateNoTrainPicAvatarResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNoTrainPicAvatarResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNoTrainPicAvatarResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateNoTrainPicAvatarResponseBody() = default ;
    CreateNoTrainPicAvatarResponseBody(const CreateNoTrainPicAvatarResponseBody &) = default ;
    CreateNoTrainPicAvatarResponseBody(CreateNoTrainPicAvatarResponseBody &&) = default ;
    CreateNoTrainPicAvatarResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNoTrainPicAvatarResponseBody() = default ;
    CreateNoTrainPicAvatarResponseBody& operator=(const CreateNoTrainPicAvatarResponseBody &) = default ;
    CreateNoTrainPicAvatarResponseBody& operator=(CreateNoTrainPicAvatarResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(avatarId, avatarId_);
        DARABONBA_PTR_TO_JSON(pass, pass_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(avatarId, avatarId_);
        DARABONBA_PTR_FROM_JSON(pass, pass_);
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
      virtual bool empty() const override { return this->avatarId_ == nullptr
        && this->pass_ == nullptr; };
      // avatarId Field Functions 
      bool hasAvatarId() const { return this->avatarId_ != nullptr;};
      void deleteAvatarId() { this->avatarId_ = nullptr;};
      inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
      inline Data& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


      // pass Field Functions 
      bool hasPass() const { return this->pass_ != nullptr;};
      void deletePass() { this->pass_ = nullptr;};
      inline bool getPass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
      inline Data& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


    protected:
      shared_ptr<string> avatarId_ {};
      shared_ptr<bool> pass_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateNoTrainPicAvatarResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateNoTrainPicAvatarResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateNoTrainPicAvatarResponseBody::Data) };
    inline CreateNoTrainPicAvatarResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateNoTrainPicAvatarResponseBody::Data) };
    inline CreateNoTrainPicAvatarResponseBody& setData(const CreateNoTrainPicAvatarResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateNoTrainPicAvatarResponseBody& setData(CreateNoTrainPicAvatarResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateNoTrainPicAvatarResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateNoTrainPicAvatarResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNoTrainPicAvatarResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateNoTrainPicAvatarResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateNoTrainPicAvatarResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
