// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AkSkIdentityConfig.hpp>
#include <alibabacloud/models/ApiKeyIdentityConfig.hpp>
#include <alibabacloud/models/JwtIdentityConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetConsumerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetConsumerResponseBody() = default ;
    GetConsumerResponseBody(const GetConsumerResponseBody &) = default ;
    GetConsumerResponseBody(GetConsumerResponseBody &&) = default ;
    GetConsumerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerResponseBody() = default ;
    GetConsumerResponseBody& operator=(const GetConsumerResponseBody &) = default ;
    GetConsumerResponseBody& operator=(GetConsumerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
        DARABONBA_PTR_TO_JSON(apiKeyIdentityConfig, apiKeyIdentityConfig_);
        DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
        DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(jwtIdentityConfig, jwtIdentityConfig_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(akSkIdentityConfigs, akSkIdentityConfigs_);
        DARABONBA_PTR_FROM_JSON(apiKeyIdentityConfig, apiKeyIdentityConfig_);
        DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
        DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(jwtIdentityConfig, jwtIdentityConfig_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
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
      virtual bool empty() const override { return this->akSkIdentityConfigs_ == nullptr
        && this->apiKeyIdentityConfig_ == nullptr && this->consumerId_ == nullptr && this->createTimestamp_ == nullptr && this->deployStatus_ == nullptr && this->description_ == nullptr
        && this->enable_ == nullptr && this->jwtIdentityConfig_ == nullptr && this->name_ == nullptr && this->updateTimestamp_ == nullptr; };
      // akSkIdentityConfigs Field Functions 
      bool hasAkSkIdentityConfigs() const { return this->akSkIdentityConfigs_ != nullptr;};
      void deleteAkSkIdentityConfigs() { this->akSkIdentityConfigs_ = nullptr;};
      inline const AkSkIdentityConfig & getAkSkIdentityConfigs() const { DARABONBA_PTR_GET_CONST(akSkIdentityConfigs_, AkSkIdentityConfig) };
      inline AkSkIdentityConfig getAkSkIdentityConfigs() { DARABONBA_PTR_GET(akSkIdentityConfigs_, AkSkIdentityConfig) };
      inline Data& setAkSkIdentityConfigs(const AkSkIdentityConfig & akSkIdentityConfigs) { DARABONBA_PTR_SET_VALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };
      inline Data& setAkSkIdentityConfigs(AkSkIdentityConfig && akSkIdentityConfigs) { DARABONBA_PTR_SET_RVALUE(akSkIdentityConfigs_, akSkIdentityConfigs) };


      // apiKeyIdentityConfig Field Functions 
      bool hasApiKeyIdentityConfig() const { return this->apiKeyIdentityConfig_ != nullptr;};
      void deleteApiKeyIdentityConfig() { this->apiKeyIdentityConfig_ = nullptr;};
      inline const ApiKeyIdentityConfig & getApiKeyIdentityConfig() const { DARABONBA_PTR_GET_CONST(apiKeyIdentityConfig_, ApiKeyIdentityConfig) };
      inline ApiKeyIdentityConfig getApiKeyIdentityConfig() { DARABONBA_PTR_GET(apiKeyIdentityConfig_, ApiKeyIdentityConfig) };
      inline Data& setApiKeyIdentityConfig(const ApiKeyIdentityConfig & apiKeyIdentityConfig) { DARABONBA_PTR_SET_VALUE(apiKeyIdentityConfig_, apiKeyIdentityConfig) };
      inline Data& setApiKeyIdentityConfig(ApiKeyIdentityConfig && apiKeyIdentityConfig) { DARABONBA_PTR_SET_RVALUE(apiKeyIdentityConfig_, apiKeyIdentityConfig) };


      // consumerId Field Functions 
      bool hasConsumerId() const { return this->consumerId_ != nullptr;};
      void deleteConsumerId() { this->consumerId_ = nullptr;};
      inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
      inline Data& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Data& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // deployStatus Field Functions 
      bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
      void deleteDeployStatus() { this->deployStatus_ = nullptr;};
      inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
      inline Data& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // jwtIdentityConfig Field Functions 
      bool hasJwtIdentityConfig() const { return this->jwtIdentityConfig_ != nullptr;};
      void deleteJwtIdentityConfig() { this->jwtIdentityConfig_ = nullptr;};
      inline const JwtIdentityConfig & getJwtIdentityConfig() const { DARABONBA_PTR_GET_CONST(jwtIdentityConfig_, JwtIdentityConfig) };
      inline JwtIdentityConfig getJwtIdentityConfig() { DARABONBA_PTR_GET(jwtIdentityConfig_, JwtIdentityConfig) };
      inline Data& setJwtIdentityConfig(const JwtIdentityConfig & jwtIdentityConfig) { DARABONBA_PTR_SET_VALUE(jwtIdentityConfig_, jwtIdentityConfig) };
      inline Data& setJwtIdentityConfig(JwtIdentityConfig && jwtIdentityConfig) { DARABONBA_PTR_SET_RVALUE(jwtIdentityConfig_, jwtIdentityConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline Data& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    protected:
      // The AK/SK authentication configurations.
      shared_ptr<AkSkIdentityConfig> akSkIdentityConfigs_ {};
      // The API key authentication configurations.
      shared_ptr<ApiKeyIdentityConfig> apiKeyIdentityConfig_ {};
      // The consumer ID.
      shared_ptr<string> consumerId_ {};
      // The creation timestamp.
      shared_ptr<int64_t> createTimestamp_ {};
      // The publishing status of the API in the current environment.
      shared_ptr<string> deployStatus_ {};
      // The description.
      shared_ptr<string> description_ {};
      // Indicates if enabled.
      shared_ptr<bool> enable_ {};
      // The JWT authentication configurations.
      shared_ptr<JwtIdentityConfig> jwtIdentityConfig_ {};
      // The consumer name.
      shared_ptr<string> name_ {};
      // The last update timestamp.
      shared_ptr<int64_t> updateTimestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsumerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConsumerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConsumerResponseBody::Data) };
    inline GetConsumerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConsumerResponseBody::Data) };
    inline GetConsumerResponseBody& setData(const GetConsumerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsumerResponseBody& setData(GetConsumerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The response payload.
    shared_ptr<GetConsumerResponseBody::Data> data_ {};
    // The status message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
