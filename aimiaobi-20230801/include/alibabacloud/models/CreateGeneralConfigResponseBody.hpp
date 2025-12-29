// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGENERALCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGENERALCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateGeneralConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGeneralConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGeneralConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateGeneralConfigResponseBody() = default ;
    CreateGeneralConfigResponseBody(const CreateGeneralConfigResponseBody &) = default ;
    CreateGeneralConfigResponseBody(CreateGeneralConfigResponseBody &&) = default ;
    CreateGeneralConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGeneralConfigResponseBody() = default ;
    CreateGeneralConfigResponseBody& operator=(const CreateGeneralConfigResponseBody &) = default ;
    CreateGeneralConfigResponseBody& operator=(CreateGeneralConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigDesc, configDesc_);
        DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_TO_JSON(ConfigValueType, configValueType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigDesc, configDesc_);
        DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
        DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_FROM_JSON(ConfigValueType, configValueType_);
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
      virtual bool empty() const override { return this->configDesc_ == nullptr
        && this->configKey_ == nullptr && this->configValue_ == nullptr && this->configValueType_ == nullptr; };
      // configDesc Field Functions 
      bool hasConfigDesc() const { return this->configDesc_ != nullptr;};
      void deleteConfigDesc() { this->configDesc_ = nullptr;};
      inline string getConfigDesc() const { DARABONBA_PTR_GET_DEFAULT(configDesc_, "") };
      inline Data& setConfigDesc(string configDesc) { DARABONBA_PTR_SET_VALUE(configDesc_, configDesc) };


      // configKey Field Functions 
      bool hasConfigKey() const { return this->configKey_ != nullptr;};
      void deleteConfigKey() { this->configKey_ = nullptr;};
      inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
      inline Data& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


      // configValue Field Functions 
      bool hasConfigValue() const { return this->configValue_ != nullptr;};
      void deleteConfigValue() { this->configValue_ = nullptr;};
      inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
      inline Data& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


      // configValueType Field Functions 
      bool hasConfigValueType() const { return this->configValueType_ != nullptr;};
      void deleteConfigValueType() { this->configValueType_ = nullptr;};
      inline string getConfigValueType() const { DARABONBA_PTR_GET_DEFAULT(configValueType_, "") };
      inline Data& setConfigValueType(string configValueType) { DARABONBA_PTR_SET_VALUE(configValueType_, configValueType) };


    protected:
      shared_ptr<string> configDesc_ {};
      shared_ptr<string> configKey_ {};
      shared_ptr<string> configValue_ {};
      shared_ptr<string> configValueType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateGeneralConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateGeneralConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateGeneralConfigResponseBody::Data) };
    inline CreateGeneralConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateGeneralConfigResponseBody::Data) };
    inline CreateGeneralConfigResponseBody& setData(const CreateGeneralConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateGeneralConfigResponseBody& setData(CreateGeneralConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateGeneralConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateGeneralConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGeneralConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateGeneralConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateGeneralConfigResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
