// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATERELAYPOLLERSCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATERELAYPOLLERSCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class GenerateRelayPollerScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateRelayPollerScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateRelayPollerScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    GenerateRelayPollerScriptRequest() = default ;
    GenerateRelayPollerScriptRequest(const GenerateRelayPollerScriptRequest &) = default ;
    GenerateRelayPollerScriptRequest(GenerateRelayPollerScriptRequest &&) = default ;
    GenerateRelayPollerScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateRelayPollerScriptRequest() = default ;
    GenerateRelayPollerScriptRequest& operator=(const GenerateRelayPollerScriptRequest &) = default ;
    GenerateRelayPollerScriptRequest& operator=(GenerateRelayPollerScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->platform_ == nullptr
        && this->targetId_ == nullptr; };
    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GenerateRelayPollerScriptRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GenerateRelayPollerScriptRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The target platform in the "operating system-architecture" format. Only linux-amd64 and linux-arm64 are supported. Compatible architecture values include amd64, x86_64, x86, arm64, and aarch64. If only the architecture is specified, the operating system defaults to linux. Other operating systems such as macOS and Windows return HTTP status code 400. If this parameter is not specified, the default value is linux-amd64.
    shared_ptr<string> platform_ {};
    // The unique identifier of the scan target. The target must use the enterprise_relay connection method (see CreateAttackTarget). Otherwise, HTTP status code 400 is returned. If the target does not exist or belongs to another tenant, HTTP status code 400 is returned without exposing whether the resource exists. This parameter is registered as optional but is required in practice.
    shared_ptr<string> targetId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
