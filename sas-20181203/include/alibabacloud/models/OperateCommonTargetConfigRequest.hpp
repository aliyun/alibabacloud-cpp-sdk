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
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->fieldValue_ == nullptr && this->sourceIp_ == nullptr && this->targetOperations_ == nullptr && this->targetType_ == nullptr && this->type_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline OperateCommonTargetConfigRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline OperateCommonTargetConfigRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline OperateCommonTargetConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // targetOperations Field Functions 
    bool hasTargetOperations() const { return this->targetOperations_ != nullptr;};
    void deleteTargetOperations() { this->targetOperations_ = nullptr;};
    inline string getTargetOperations() const { DARABONBA_PTR_GET_DEFAULT(targetOperations_, "") };
    inline OperateCommonTargetConfigRequest& setTargetOperations(string targetOperations) { DARABONBA_PTR_SET_VALUE(targetOperations_, targetOperations) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline OperateCommonTargetConfigRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline OperateCommonTargetConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The target type of the image switch. Valid values:
    // - **repoName**: repository name.
    // - **repoNamespace**: repository namespace name.
    shared_ptr<string> fieldName_ {};
    // The repository name or repository namespace name.
    shared_ptr<string> fieldValue_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The parameters for configuring proactive defense on servers. The following parameters are included:
    // 
    // - **targetType**: the dimension of the defense configuration. Currently, only the UUID dimension is supported. Fixed value: **uuid**.
    // - **target**: the UUID of the server for which you want to configure proactive defense.
    // - **flag**: specifies whether to enable or disable proactive defense for the server. Valid values: **add** (enable) and **del** (disable).
    // 
    // This parameter is required.
    shared_ptr<string> targetOperations_ {};
    // The Asset Type of the target. Valid values:
    // - **uuid**: server UUID.
    // - **Cluster**: cluster ID.
    // - **image_repo**: image repository name.
    shared_ptr<string> targetType_ {};
    // The switch type. Valid values:
    // - **alidetect-scan-enable**: local file detection that performs detection only locally.
    // - **ACTION-TRIAL-PERMISSION**: ActionTrail data delivery.
    // - **alidetect**: local file detection engine.
    // - **container_prevent_escape**: container escape prevention.
    // - **image_repo**: repository image scanning.
    // - **proc_filter_switch**: log filtering.
    // - **agentless**: agentless detection.
    // - **rasp**: application protection.
    // - **sensitiveFile**: sensitive information scanning.
    // - **aliscriptengine**: deep detection engine.
    // - **containerNetwork**: container visualization.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
