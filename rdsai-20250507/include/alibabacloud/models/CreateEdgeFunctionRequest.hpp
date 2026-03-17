// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateEdgeFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomConfig, customConfig_);
      DARABONBA_PTR_TO_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomConfig, customConfig_);
      DARABONBA_PTR_FROM_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateEdgeFunctionRequest() = default ;
    CreateEdgeFunctionRequest(const CreateEdgeFunctionRequest &) = default ;
    CreateEdgeFunctionRequest(CreateEdgeFunctionRequest &&) = default ;
    CreateEdgeFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeFunctionRequest() = default ;
    CreateEdgeFunctionRequest& operator=(const CreateEdgeFunctionRequest &) = default ;
    CreateEdgeFunctionRequest& operator=(CreateEdgeFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Code : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Code& obj) { 
        DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
        DARABONBA_PTR_TO_JSON(OssObjectName, ossObjectName_);
        DARABONBA_PTR_TO_JSON(OssType, ossType_);
      };
      friend void from_json(const Darabonba::Json& j, Code& obj) { 
        DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
        DARABONBA_PTR_FROM_JSON(OssObjectName, ossObjectName_);
        DARABONBA_PTR_FROM_JSON(OssType, ossType_);
      };
      Code() = default ;
      Code(const Code &) = default ;
      Code(Code &&) = default ;
      Code(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Code() = default ;
      Code& operator=(const Code &) = default ;
      Code& operator=(Code &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ossBucketName_ == nullptr
        && this->ossObjectName_ == nullptr && this->ossType_ == nullptr; };
      // ossBucketName Field Functions 
      bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
      void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
      inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
      inline Code& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


      // ossObjectName Field Functions 
      bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
      void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
      inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
      inline Code& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


      // ossType Field Functions 
      bool hasOssType() const { return this->ossType_ != nullptr;};
      void deleteOssType() { this->ossType_ = nullptr;};
      inline string getOssType() const { DARABONBA_PTR_GET_DEFAULT(ossType_, "") };
      inline Code& setOssType(string ossType) { DARABONBA_PTR_SET_VALUE(ossType_, ossType) };


    protected:
      shared_ptr<string> ossBucketName_ {};
      shared_ptr<string> ossObjectName_ {};
      shared_ptr<string> ossType_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->code_ == nullptr && this->customConfig_ == nullptr && this->edgeFunctionName_ == nullptr && this->envs_ == nullptr && this->instanceName_ == nullptr
        && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEdgeFunctionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline const CreateEdgeFunctionRequest::Code & getCode() const { DARABONBA_PTR_GET_CONST(code_, CreateEdgeFunctionRequest::Code) };
    inline CreateEdgeFunctionRequest::Code getCode() { DARABONBA_PTR_GET(code_, CreateEdgeFunctionRequest::Code) };
    inline CreateEdgeFunctionRequest& setCode(const CreateEdgeFunctionRequest::Code & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
    inline CreateEdgeFunctionRequest& setCode(CreateEdgeFunctionRequest::Code && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline const map<string, int32_t> & getCustomConfig() const { DARABONBA_PTR_GET_CONST(customConfig_, map<string, int32_t>) };
    inline map<string, int32_t> getCustomConfig() { DARABONBA_PTR_GET(customConfig_, map<string, int32_t>) };
    inline CreateEdgeFunctionRequest& setCustomConfig(const map<string, int32_t> & customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };
    inline CreateEdgeFunctionRequest& setCustomConfig(map<string, int32_t> && customConfig) { DARABONBA_PTR_SET_RVALUE(customConfig_, customConfig) };


    // edgeFunctionName Field Functions 
    bool hasEdgeFunctionName() const { return this->edgeFunctionName_ != nullptr;};
    void deleteEdgeFunctionName() { this->edgeFunctionName_ = nullptr;};
    inline string getEdgeFunctionName() const { DARABONBA_PTR_GET_DEFAULT(edgeFunctionName_, "") };
    inline CreateEdgeFunctionRequest& setEdgeFunctionName(string edgeFunctionName) { DARABONBA_PTR_SET_VALUE(edgeFunctionName_, edgeFunctionName) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> getEnvs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline CreateEdgeFunctionRequest& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline CreateEdgeFunctionRequest& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateEdgeFunctionRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEdgeFunctionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<CreateEdgeFunctionRequest::Code> code_ {};
    shared_ptr<map<string, int32_t>> customConfig_ {};
    shared_ptr<string> edgeFunctionName_ {};
    shared_ptr<map<string, string>> envs_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
