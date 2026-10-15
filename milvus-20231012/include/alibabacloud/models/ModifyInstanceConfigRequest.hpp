// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ModifyInstanceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(UserConfig, userConfig_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(UserConfig, userConfig_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ModifyInstanceConfigRequest() = default ;
    ModifyInstanceConfigRequest(const ModifyInstanceConfigRequest &) = default ;
    ModifyInstanceConfigRequest(ModifyInstanceConfigRequest &&) = default ;
    ModifyInstanceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceConfigRequest() = default ;
    ModifyInstanceConfigRequest& operator=(const ModifyInstanceConfigRequest &) = default ;
    ModifyInstanceConfigRequest& operator=(ModifyInstanceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(userConfig, userConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(userConfig, userConfig_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userConfig_ == nullptr; };
      // userConfig Field Functions 
      bool hasUserConfig() const { return this->userConfig_ != nullptr;};
      void deleteUserConfig() { this->userConfig_ = nullptr;};
      inline string getUserConfig() const { DARABONBA_PTR_GET_DEFAULT(userConfig_, "") };
      inline Body& setUserConfig(string userConfig) { DARABONBA_PTR_SET_VALUE(userConfig_, userConfig) };


    protected:
      // The configuration content to write to the instance, formatted as a YAML string.
      shared_ptr<string> userConfig_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->reason_ == nullptr && this->userConfig_ == nullptr && this->body_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyInstanceConfigRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // userConfig Field Functions 
    bool hasUserConfig() const { return this->userConfig_ != nullptr;};
    void deleteUserConfig() { this->userConfig_ = nullptr;};
    inline string getUserConfig() const { DARABONBA_PTR_GET_DEFAULT(userConfig_, "") };
    inline ModifyInstanceConfigRequest& setUserConfig(string userConfig) { DARABONBA_PTR_SET_VALUE(userConfig_, userConfig) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ModifyInstanceConfigRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, ModifyInstanceConfigRequest::Body) };
    inline ModifyInstanceConfigRequest::Body getBody() { DARABONBA_PTR_GET(body_, ModifyInstanceConfigRequest::Body) };
    inline ModifyInstanceConfigRequest& setBody(const ModifyInstanceConfigRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ModifyInstanceConfigRequest& setBody(ModifyInstanceConfigRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The reason for the update.
    // 
    // This parameter is required.
    shared_ptr<string> reason_ {};
    // The custom configuration.
    shared_ptr<string> userConfig_ {};
    // Submits the instance configurations to be updated as a JSON object.
    shared_ptr<ModifyInstanceConfigRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
