// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATERELAYPOLLERSCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATERELAYPOLLERSCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class GenerateRelayPollerScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateRelayPollerScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateRelayPollerScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateRelayPollerScriptResponseBody() = default ;
    GenerateRelayPollerScriptResponseBody(const GenerateRelayPollerScriptResponseBody &) = default ;
    GenerateRelayPollerScriptResponseBody(GenerateRelayPollerScriptResponseBody &&) = default ;
    GenerateRelayPollerScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateRelayPollerScriptResponseBody() = default ;
    GenerateRelayPollerScriptResponseBody& operator=(const GenerateRelayPollerScriptResponseBody &) = default ;
    GenerateRelayPollerScriptResponseBody& operator=(GenerateRelayPollerScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Script, script_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
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
      virtual bool empty() const override { return this->platform_ == nullptr
        && this->script_ == nullptr && this->targetId_ == nullptr; };
      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
      inline Data& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Data& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    protected:
      // The normalized target platform in the operating system-architecture format.
      shared_ptr<string> platform_ {};
      // The installation script content (bash). The script contains a one-time access code, a temporary download link for the poller binary (signed and valid for 1 hour), and a checksum. The script does not contain the actual endpoint or credentials of the target, which are interactively entered during installation. The script carries access credential semantics. Transmit it through a trusted channel and re-download the script to obtain a new one after use.
      shared_ptr<string> script_ {};
      // The scan target identifier echoed from the request.
      shared_ptr<string> targetId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateRelayPollerScriptResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GenerateRelayPollerScriptResponseBody::Data) };
    inline GenerateRelayPollerScriptResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GenerateRelayPollerScriptResponseBody::Data) };
    inline GenerateRelayPollerScriptResponseBody& setData(const GenerateRelayPollerScriptResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateRelayPollerScriptResponseBody& setData(GenerateRelayPollerScriptResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateRelayPollerScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The generation result, which contains the target identifier, the normalized platform, and the installation script.
    shared_ptr<GenerateRelayPollerScriptResponseBody::Data> data_ {};
    // The request ID. You can use this ID for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
