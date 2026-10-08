// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJAVASTARTUPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJAVASTARTUPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetJavaStartUpConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJavaStartUpConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJavaStartUpConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(JavaStartUpConfig, javaStartUpConfig_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetJavaStartUpConfigResponseBody() = default ;
    GetJavaStartUpConfigResponseBody(const GetJavaStartUpConfigResponseBody &) = default ;
    GetJavaStartUpConfigResponseBody(GetJavaStartUpConfigResponseBody &&) = default ;
    GetJavaStartUpConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJavaStartUpConfigResponseBody() = default ;
    GetJavaStartUpConfigResponseBody& operator=(const GetJavaStartUpConfigResponseBody &) = default ;
    GetJavaStartUpConfigResponseBody& operator=(GetJavaStartUpConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JavaStartUpConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JavaStartUpConfig& obj) { 
        DARABONBA_PTR_TO_JSON(OriginalConfigs, originalConfigs_);
        DARABONBA_PTR_TO_JSON(StartUpArgs, startUpArgs_);
      };
      friend void from_json(const Darabonba::Json& j, JavaStartUpConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(OriginalConfigs, originalConfigs_);
        DARABONBA_PTR_FROM_JSON(StartUpArgs, startUpArgs_);
      };
      JavaStartUpConfig() = default ;
      JavaStartUpConfig(const JavaStartUpConfig &) = default ;
      JavaStartUpConfig(JavaStartUpConfig &&) = default ;
      JavaStartUpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JavaStartUpConfig() = default ;
      JavaStartUpConfig& operator=(const JavaStartUpConfig &) = default ;
      JavaStartUpConfig& operator=(JavaStartUpConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->originalConfigs_ == nullptr
        && this->startUpArgs_ == nullptr; };
      // originalConfigs Field Functions 
      bool hasOriginalConfigs() const { return this->originalConfigs_ != nullptr;};
      void deleteOriginalConfigs() { this->originalConfigs_ = nullptr;};
      inline string getOriginalConfigs() const { DARABONBA_PTR_GET_DEFAULT(originalConfigs_, "") };
      inline JavaStartUpConfig& setOriginalConfigs(string originalConfigs) { DARABONBA_PTR_SET_VALUE(originalConfigs_, originalConfigs) };


      // startUpArgs Field Functions 
      bool hasStartUpArgs() const { return this->startUpArgs_ != nullptr;};
      void deleteStartUpArgs() { this->startUpArgs_ = nullptr;};
      inline string getStartUpArgs() const { DARABONBA_PTR_GET_DEFAULT(startUpArgs_, "") };
      inline JavaStartUpConfig& setStartUpArgs(string startUpArgs) { DARABONBA_PTR_SET_VALUE(startUpArgs_, startUpArgs) };


    protected:
      // The displayed startup parameter configuration.
      shared_ptr<string> originalConfigs_ {};
      // The effective startup parameter configuration.
      shared_ptr<string> startUpArgs_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->javaStartUpConfig_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetJavaStartUpConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // javaStartUpConfig Field Functions 
    bool hasJavaStartUpConfig() const { return this->javaStartUpConfig_ != nullptr;};
    void deleteJavaStartUpConfig() { this->javaStartUpConfig_ = nullptr;};
    inline const GetJavaStartUpConfigResponseBody::JavaStartUpConfig & getJavaStartUpConfig() const { DARABONBA_PTR_GET_CONST(javaStartUpConfig_, GetJavaStartUpConfigResponseBody::JavaStartUpConfig) };
    inline GetJavaStartUpConfigResponseBody::JavaStartUpConfig getJavaStartUpConfig() { DARABONBA_PTR_GET(javaStartUpConfig_, GetJavaStartUpConfigResponseBody::JavaStartUpConfig) };
    inline GetJavaStartUpConfigResponseBody& setJavaStartUpConfig(const GetJavaStartUpConfigResponseBody::JavaStartUpConfig & javaStartUpConfig) { DARABONBA_PTR_SET_VALUE(javaStartUpConfig_, javaStartUpConfig) };
    inline GetJavaStartUpConfigResponseBody& setJavaStartUpConfig(GetJavaStartUpConfigResponseBody::JavaStartUpConfig && javaStartUpConfig) { DARABONBA_PTR_SET_RVALUE(javaStartUpConfig_, javaStartUpConfig) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJavaStartUpConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJavaStartUpConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The configuration of Java startup parameters.
    shared_ptr<GetJavaStartUpConfigResponseBody::JavaStartUpConfig> javaStartUpConfig_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
