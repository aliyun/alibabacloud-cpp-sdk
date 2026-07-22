// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSLSDISPATCHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSLSDISPATCHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifySlsDispatchConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySlsDispatchConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DetailConfig, detailConfig_);
      DARABONBA_PTR_TO_JSON(LogVersion, logVersion_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySlsDispatchConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailConfig, detailConfig_);
      DARABONBA_PTR_FROM_JSON(LogVersion, logVersion_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
    };
    ModifySlsDispatchConfigRequest() = default ;
    ModifySlsDispatchConfigRequest(const ModifySlsDispatchConfigRequest &) = default ;
    ModifySlsDispatchConfigRequest(ModifySlsDispatchConfigRequest &&) = default ;
    ModifySlsDispatchConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySlsDispatchConfigRequest() = default ;
    ModifySlsDispatchConfigRequest& operator=(const ModifySlsDispatchConfigRequest &) = default ;
    ModifySlsDispatchConfigRequest& operator=(ModifySlsDispatchConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailConfig_ == nullptr
        && this->logVersion_ == nullptr && this->modifyType_ == nullptr; };
    // detailConfig Field Functions 
    bool hasDetailConfig() const { return this->detailConfig_ != nullptr;};
    void deleteDetailConfig() { this->detailConfig_ = nullptr;};
    inline string getDetailConfig() const { DARABONBA_PTR_GET_DEFAULT(detailConfig_, "") };
    inline ModifySlsDispatchConfigRequest& setDetailConfig(string detailConfig) { DARABONBA_PTR_SET_VALUE(detailConfig_, detailConfig) };


    // logVersion Field Functions 
    bool hasLogVersion() const { return this->logVersion_ != nullptr;};
    void deleteLogVersion() { this->logVersion_ = nullptr;};
    inline int32_t getLogVersion() const { DARABONBA_PTR_GET_DEFAULT(logVersion_, 0) };
    inline ModifySlsDispatchConfigRequest& setLogVersion(int32_t logVersion) { DARABONBA_PTR_SET_VALUE(logVersion_, logVersion) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline string getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, "") };
    inline ModifySlsDispatchConfigRequest& setModifyType(string modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


  protected:
    // The detailed configuration to modify.
    // <details>
    // <summary>Format for version 1</summary>
    // {"global":{"slsRegionId":"ap-southeast-1","logTime":180,"logStorage":1000}}
    // </details>
    // 
    // <details>
    // <summary>Format for version 2</summary>
    // {"cn":{"slsRegionId":"ap-southeast-1","logTime":180,"logStorage":3000},"intl":{"slsRegionId":"ap-southeast-1","logTime":180,"logStorage":2000}}
    // </details>
    // The fields are described as follows:
    // 
    // - slsRegionId: The region ID to which logs are delivered.
    // - logTime: The storage duration of logs. Unit: days.
    // - logStorage: The log storage capacity. Unit: GB. The total capacity specified must not exceed the total capacity purchased by the user.
    shared_ptr<string> detailConfig_ {};
    // The log version. A value of 1 indicates one Logstore. A value of 2 indicates two Logstores.
    // 
    // 
    // >Notice: If ModifyType is set to version, set LogVersion to the target version. If ModifyType is set to config, set LogVersion to the current version of the user.
    shared_ptr<int32_t> logVersion_ {};
    // The modification type. Valid values:
    // 
    // - version: The version is changed. For example, the version is changed from 1 (logs are delivered to one Logstore) to 2 (logs are delivered to two Logstores).
    // 
    // - config: The configuration is changed. For example, the log delivery region or the storage duration of logs is modified.
    shared_ptr<string> modifyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
