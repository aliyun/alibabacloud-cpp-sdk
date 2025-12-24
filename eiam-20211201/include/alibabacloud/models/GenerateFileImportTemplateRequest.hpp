// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEFILEIMPORTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEFILEIMPORTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateFileImportTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateFileImportTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateFileImportTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GenerateFileImportTemplateRequest() = default ;
    GenerateFileImportTemplateRequest(const GenerateFileImportTemplateRequest &) = default ;
    GenerateFileImportTemplateRequest(GenerateFileImportTemplateRequest &&) = default ;
    GenerateFileImportTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateFileImportTemplateRequest() = default ;
    GenerateFileImportTemplateRequest& operator=(const GenerateFileImportTemplateRequest &) = default ;
    GenerateFileImportTemplateRequest& operator=(GenerateFileImportTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->targetType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateFileImportTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GenerateFileImportTemplateRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 同步目标类型
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
