// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLARCLAWCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLARCLAWCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class GetPolarClawConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolarClawConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Hash, hash_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OpenclawVersion, openclawVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolarClawConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Hash, hash_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OpenclawVersion, openclawVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPolarClawConfigResponseBody() = default ;
    GetPolarClawConfigResponseBody(const GetPolarClawConfigResponseBody &) = default ;
    GetPolarClawConfigResponseBody(GetPolarClawConfigResponseBody &&) = default ;
    GetPolarClawConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolarClawConfigResponseBody() = default ;
    GetPolarClawConfigResponseBody& operator=(const GetPolarClawConfigResponseBody &) = default ;
    GetPolarClawConfigResponseBody& operator=(GetPolarClawConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->config_ == nullptr && this->hash_ == nullptr && this->message_ == nullptr && this->openclawVersion_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetPolarClawConfigResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetPolarClawConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline GetPolarClawConfigResponseBody& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline GetPolarClawConfigResponseBody& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // hash Field Functions 
    bool hasHash() const { return this->hash_ != nullptr;};
    void deleteHash() { this->hash_ = nullptr;};
    inline string getHash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
    inline GetPolarClawConfigResponseBody& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPolarClawConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // openclawVersion Field Functions 
    bool hasOpenclawVersion() const { return this->openclawVersion_ != nullptr;};
    void deleteOpenclawVersion() { this->openclawVersion_ = nullptr;};
    inline string getOpenclawVersion() const { DARABONBA_PTR_GET_DEFAULT(openclawVersion_, "") };
    inline GetPolarClawConfigResponseBody& setOpenclawVersion(string openclawVersion) { DARABONBA_PTR_SET_VALUE(openclawVersion_, openclawVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolarClawConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    Darabonba::Json config_ {};
    shared_ptr<string> hash_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> openclawVersion_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
