// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUNBINDTEMPLATERESPONSEBODYBINDINGS_HPP_
#define ALIBABACLOUD_MODELS_BATCHUNBINDTEMPLATERESPONSEBODYBINDINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchUnbindTemplateResponseBodyBindings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUnbindTemplateResponseBodyBindings& obj) { 
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUnbindTemplateResponseBodyBindings& obj) { 
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    BatchUnbindTemplateResponseBodyBindings() = default ;
    BatchUnbindTemplateResponseBodyBindings(const BatchUnbindTemplateResponseBodyBindings &) = default ;
    BatchUnbindTemplateResponseBodyBindings(BatchUnbindTemplateResponseBodyBindings &&) = default ;
    BatchUnbindTemplateResponseBodyBindings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUnbindTemplateResponseBodyBindings() = default ;
    BatchUnbindTemplateResponseBodyBindings& operator=(const BatchUnbindTemplateResponseBodyBindings &) = default ;
    BatchUnbindTemplateResponseBodyBindings& operator=(BatchUnbindTemplateResponseBodyBindings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->error_ != nullptr
        && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->templateId_ != nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline BatchUnbindTemplateResponseBodyBindings& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchUnbindTemplateResponseBodyBindings& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline BatchUnbindTemplateResponseBodyBindings& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline BatchUnbindTemplateResponseBodyBindings& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
