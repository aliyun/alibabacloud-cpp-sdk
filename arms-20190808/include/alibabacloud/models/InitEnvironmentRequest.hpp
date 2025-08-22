// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITENVIRONMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITENVIRONMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class InitEnvironmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitEnvironmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(CreateAuthToken, createAuthToken_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(ManagedType, managedType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, InitEnvironmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(CreateAuthToken, createAuthToken_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(ManagedType, managedType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    InitEnvironmentRequest() = default ;
    InitEnvironmentRequest(const InitEnvironmentRequest &) = default ;
    InitEnvironmentRequest(InitEnvironmentRequest &&) = default ;
    InitEnvironmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitEnvironmentRequest() = default ;
    InitEnvironmentRequest& operator=(const InitEnvironmentRequest &) = default ;
    InitEnvironmentRequest& operator=(InitEnvironmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunLang_ != nullptr
        && this->createAuthToken_ != nullptr && this->environmentId_ != nullptr && this->managedType_ != nullptr && this->regionId_ != nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string aliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline InitEnvironmentRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // createAuthToken Field Functions 
    bool hasCreateAuthToken() const { return this->createAuthToken_ != nullptr;};
    void deleteCreateAuthToken() { this->createAuthToken_ = nullptr;};
    inline bool createAuthToken() const { DARABONBA_PTR_GET_DEFAULT(createAuthToken_, false) };
    inline InitEnvironmentRequest& setCreateAuthToken(bool createAuthToken) { DARABONBA_PTR_SET_VALUE(createAuthToken_, createAuthToken) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline InitEnvironmentRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // managedType Field Functions 
    bool hasManagedType() const { return this->managedType_ != nullptr;};
    void deleteManagedType() { this->managedType_ = nullptr;};
    inline string managedType() const { DARABONBA_PTR_GET_DEFAULT(managedType_, "") };
    inline InitEnvironmentRequest& setManagedType(string managedType) { DARABONBA_PTR_SET_VALUE(managedType_, managedType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InitEnvironmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The language. Valid values: zh and en. Default value: zh.
    std::shared_ptr<string> aliyunLang_ = nullptr;
    // Specifies whether to create a token to improve data security.
    std::shared_ptr<bool> createAuthToken_ = nullptr;
    // The ID of the environment instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // Whether agents or exporters are managed. Valid values:
    // 
    // *   none: No. By default, no managed agents or exporters are provided for ACK clusters.
    // *   agent: Agents are managed. By default, managed agents are provided for ASK clusters, ACS clusters, and ACK One clusters.
    // *   agent-exproter: Agents and exporters are managed. By default, managed agents and exporters are provided for cloud services.
    std::shared_ptr<string> managedType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
