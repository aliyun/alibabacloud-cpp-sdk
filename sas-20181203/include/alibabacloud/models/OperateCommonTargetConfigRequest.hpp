// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATECOMMONTARGETCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATECOMMONTARGETCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateCommonTargetConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateCommonTargetConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TargetOperations, targetOperations_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OperateCommonTargetConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TargetOperations, targetOperations_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OperateCommonTargetConfigRequest() = default ;
    OperateCommonTargetConfigRequest(const OperateCommonTargetConfigRequest &) = default ;
    OperateCommonTargetConfigRequest(OperateCommonTargetConfigRequest &&) = default ;
    OperateCommonTargetConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateCommonTargetConfigRequest() = default ;
    OperateCommonTargetConfigRequest& operator=(const OperateCommonTargetConfigRequest &) = default ;
    OperateCommonTargetConfigRequest& operator=(OperateCommonTargetConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldName_ != nullptr
        && this->fieldValue_ != nullptr && this->sourceIp_ != nullptr && this->targetOperations_ != nullptr && this->targetType_ != nullptr && this->type_ != nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline OperateCommonTargetConfigRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline OperateCommonTargetConfigRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline OperateCommonTargetConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // targetOperations Field Functions 
    bool hasTargetOperations() const { return this->targetOperations_ != nullptr;};
    void deleteTargetOperations() { this->targetOperations_ = nullptr;};
    inline string targetOperations() const { DARABONBA_PTR_GET_DEFAULT(targetOperations_, "") };
    inline OperateCommonTargetConfigRequest& setTargetOperations(string targetOperations) { DARABONBA_PTR_SET_VALUE(targetOperations_, targetOperations) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline OperateCommonTargetConfigRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateCommonTargetConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the image. Valid values:
    // 
    // *   **repoName**: the name of the image repository
    // *   **repoNamespace**: the namespace of the image repository
    std::shared_ptr<string> fieldName_ = nullptr;
    // The name of the image repository or the namespace of the image repository.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The configuration of proactive defense for your server. The value includes the following fields:
    // 
    // *   **targetType**: specifies the dimension from which you manage proactive defense. UUIDs are supported. Set the value to **uuid**.
    // *   **target**: specifies the UUID of the server for which you want to configure proactive defense.
    // *   **flag**: specifies whether to enable or disable proactive defense for your server. Valid values are **add** and **del**. The value add indicates that proactive defense will be enabled for your server. The value del indicates that proactive defense will be disabled for your server.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetOperations_ = nullptr;
    // The dimension based on which the asset is selected. Valid values:
    // 
    // *   **uuid**: the UUID of the server
    // *   **Cluster**: the ID of the cluster
    // *   **image_repo**: the name of the image repository
    std::shared_ptr<string> targetType_ = nullptr;
    // The type of the feature. Valid values:
    // 
    // *   **alidetect-scan-enable**: local file detection
    // *   **ACTION-TRIAL-PERMISSION**: data delivery to ActionTrail
    // *   **alidetect**: local file detection engine
    // *   **container_prevent_escape**: container escape prevention
    // *   **image_repo**: repository image scan
    // *   **proc_filter_switch**: log filtering
    // *   **agentless**: agentless detection
    // *   **rasp**: application protection
    // *   **sensitiveFile**: sensitive file detection
    // *   **aliscriptengine**: in-depth detection engine
    // *   **containerNetwork**: container network visualization
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
