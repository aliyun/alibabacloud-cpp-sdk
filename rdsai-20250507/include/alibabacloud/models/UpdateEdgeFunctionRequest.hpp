// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEDGEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEDGEFUNCTIONREQUEST_HPP_
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
  class UpdateEdgeFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEdgeFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomConfig, customConfig_);
      DARABONBA_PTR_TO_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_TO_JSON(Envs, envs_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEdgeFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomConfig, customConfig_);
      DARABONBA_PTR_FROM_JSON(EdgeFunctionName, edgeFunctionName_);
      DARABONBA_PTR_FROM_JSON(Envs, envs_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateEdgeFunctionRequest() = default ;
    UpdateEdgeFunctionRequest(const UpdateEdgeFunctionRequest &) = default ;
    UpdateEdgeFunctionRequest(UpdateEdgeFunctionRequest &&) = default ;
    UpdateEdgeFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEdgeFunctionRequest() = default ;
    UpdateEdgeFunctionRequest& operator=(const UpdateEdgeFunctionRequest &) = default ;
    UpdateEdgeFunctionRequest& operator=(UpdateEdgeFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Code : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Code& obj) { 
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
        DARABONBA_PTR_TO_JSON(OssObjectName, ossObjectName_);
        DARABONBA_PTR_TO_JSON(OssType, ossType_);
      };
      friend void from_json(const Darabonba::Json& j, Code& obj) { 
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
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
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->ossBucketName_ == nullptr && this->ossObjectName_ == nullptr && this->ossType_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Code& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


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
      shared_ptr<string> downloadUrl_ {};
      // The name of the OSS bucket.
      shared_ptr<string> ossBucketName_ {};
      // The path of the code file.
      shared_ptr<string> ossObjectName_ {};
      // The storage class of the OSS bucket.
      shared_ptr<string> ossType_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->code_ == nullptr && this->customConfig_ == nullptr && this->edgeFunctionName_ == nullptr && this->envs_ == nullptr && this->instanceName_ == nullptr
        && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEdgeFunctionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline const UpdateEdgeFunctionRequest::Code & getCode() const { DARABONBA_PTR_GET_CONST(code_, UpdateEdgeFunctionRequest::Code) };
    inline UpdateEdgeFunctionRequest::Code getCode() { DARABONBA_PTR_GET(code_, UpdateEdgeFunctionRequest::Code) };
    inline UpdateEdgeFunctionRequest& setCode(const UpdateEdgeFunctionRequest::Code & code) { DARABONBA_PTR_SET_VALUE(code_, code) };
    inline UpdateEdgeFunctionRequest& setCode(UpdateEdgeFunctionRequest::Code && code) { DARABONBA_PTR_SET_RVALUE(code_, code) };


    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline const map<string, string> & getCustomConfig() const { DARABONBA_PTR_GET_CONST(customConfig_, map<string, string>) };
    inline map<string, string> getCustomConfig() { DARABONBA_PTR_GET(customConfig_, map<string, string>) };
    inline UpdateEdgeFunctionRequest& setCustomConfig(const map<string, string> & customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };
    inline UpdateEdgeFunctionRequest& setCustomConfig(map<string, string> && customConfig) { DARABONBA_PTR_SET_RVALUE(customConfig_, customConfig) };


    // edgeFunctionName Field Functions 
    bool hasEdgeFunctionName() const { return this->edgeFunctionName_ != nullptr;};
    void deleteEdgeFunctionName() { this->edgeFunctionName_ = nullptr;};
    inline string getEdgeFunctionName() const { DARABONBA_PTR_GET_DEFAULT(edgeFunctionName_, "") };
    inline UpdateEdgeFunctionRequest& setEdgeFunctionName(string edgeFunctionName) { DARABONBA_PTR_SET_VALUE(edgeFunctionName_, edgeFunctionName) };


    // envs Field Functions 
    bool hasEnvs() const { return this->envs_ != nullptr;};
    void deleteEnvs() { this->envs_ = nullptr;};
    inline const map<string, string> & getEnvs() const { DARABONBA_PTR_GET_CONST(envs_, map<string, string>) };
    inline map<string, string> getEnvs() { DARABONBA_PTR_GET(envs_, map<string, string>) };
    inline UpdateEdgeFunctionRequest& setEnvs(const map<string, string> & envs) { DARABONBA_PTR_SET_VALUE(envs_, envs) };
    inline UpdateEdgeFunctionRequest& setEnvs(map<string, string> && envs) { DARABONBA_PTR_SET_RVALUE(envs_, envs) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateEdgeFunctionRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEdgeFunctionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The error code that is returned if the request failed. For more information, see the "Error codes" section of the topic.
    shared_ptr<UpdateEdgeFunctionRequest::Code> code_ {};
    // The configuration parameters of the edge function.
    shared_ptr<map<string, string>> customConfig_ {};
    // fc-xxxx
    shared_ptr<string> edgeFunctionName_ {};
    // The environment variables of the edge function.
    shared_ptr<map<string, string>> envs_ {};
    // The ID of the RDS Supabase instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
