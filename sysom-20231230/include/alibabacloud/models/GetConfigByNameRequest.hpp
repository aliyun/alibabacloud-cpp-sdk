// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetConfigByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(X-Debug-Id, xDebugId_);
      DARABONBA_PTR_TO_JSON(configName, configName_);
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(entityId, entityId_);
      DARABONBA_PTR_TO_JSON(useGlobalUid, useGlobalUid_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
      DARABONBA_PTR_TO_JSON(x-sysom-invoke-source, xSysomInvokeSource_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(X-Debug-Id, xDebugId_);
      DARABONBA_PTR_FROM_JSON(configName, configName_);
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(entityId, entityId_);
      DARABONBA_PTR_FROM_JSON(useGlobalUid, useGlobalUid_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
      DARABONBA_PTR_FROM_JSON(x-sysom-invoke-source, xSysomInvokeSource_);
    };
    GetConfigByNameRequest() = default ;
    GetConfigByNameRequest(const GetConfigByNameRequest &) = default ;
    GetConfigByNameRequest(GetConfigByNameRequest &&) = default ;
    GetConfigByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigByNameRequest() = default ;
    GetConfigByNameRequest& operator=(const GetConfigByNameRequest &) = default ;
    GetConfigByNameRequest& operator=(GetConfigByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->xDebugId_ == nullptr
        && this->configName_ == nullptr && this->configType_ == nullptr && this->entityId_ == nullptr && this->useGlobalUid_ == nullptr && this->versionId_ == nullptr
        && this->xSysomInvokeSource_ == nullptr; };
    // xDebugId Field Functions 
    bool hasXDebugId() const { return this->xDebugId_ != nullptr;};
    void deleteXDebugId() { this->xDebugId_ = nullptr;};
    inline string getXDebugId() const { DARABONBA_PTR_GET_DEFAULT(xDebugId_, "") };
    inline GetConfigByNameRequest& setXDebugId(string xDebugId) { DARABONBA_PTR_SET_VALUE(xDebugId_, xDebugId) };


    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline GetConfigByNameRequest& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetConfigByNameRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline GetConfigByNameRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // useGlobalUid Field Functions 
    bool hasUseGlobalUid() const { return this->useGlobalUid_ != nullptr;};
    void deleteUseGlobalUid() { this->useGlobalUid_ = nullptr;};
    inline bool getUseGlobalUid() const { DARABONBA_PTR_GET_DEFAULT(useGlobalUid_, false) };
    inline GetConfigByNameRequest& setUseGlobalUid(bool useGlobalUid) { DARABONBA_PTR_SET_VALUE(useGlobalUid_, useGlobalUid) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int64_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
    inline GetConfigByNameRequest& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    // xSysomInvokeSource Field Functions 
    bool hasXSysomInvokeSource() const { return this->xSysomInvokeSource_ != nullptr;};
    void deleteXSysomInvokeSource() { this->xSysomInvokeSource_ = nullptr;};
    inline string getXSysomInvokeSource() const { DARABONBA_PTR_GET_DEFAULT(xSysomInvokeSource_, "") };
    inline GetConfigByNameRequest& setXSysomInvokeSource(string xSysomInvokeSource) { DARABONBA_PTR_SET_VALUE(xSysomInvokeSource_, xSysomInvokeSource) };


  protected:
    shared_ptr<string> xDebugId_ {};
    // The configuration name.
    // 
    // This parameter is required.
    shared_ptr<string> configName_ {};
    // The type of the configuration parameter.
    // 
    // This parameter is required.
    shared_ptr<string> configType_ {};
    // The entity ID. Default value: "default".
    shared_ptr<string> entityId_ {};
    // Specifies whether to use the global UID.
    shared_ptr<bool> useGlobalUid_ {};
    // The version ID.
    shared_ptr<int64_t> versionId_ {};
    shared_ptr<string> xSysomInvokeSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
