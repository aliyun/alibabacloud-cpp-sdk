// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHBINDTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHBINDTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchBindTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchBindTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyAll, applyAll_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Replace, replace_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchBindTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyAll, applyAll_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Replace, replace_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    BatchBindTemplatesRequest() = default ;
    BatchBindTemplatesRequest(const BatchBindTemplatesRequest &) = default ;
    BatchBindTemplatesRequest(BatchBindTemplatesRequest &&) = default ;
    BatchBindTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchBindTemplatesRequest() = default ;
    BatchBindTemplatesRequest& operator=(const BatchBindTemplatesRequest &) = default ;
    BatchBindTemplatesRequest& operator=(BatchBindTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyAll_ != nullptr
        && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->ownerId_ != nullptr && this->replace_ != nullptr && this->templateId_ != nullptr
        && this->templateType_ != nullptr; };
    // applyAll Field Functions 
    bool hasApplyAll() const { return this->applyAll_ != nullptr;};
    void deleteApplyAll() { this->applyAll_ = nullptr;};
    inline bool applyAll() const { DARABONBA_PTR_GET_DEFAULT(applyAll_, false) };
    inline BatchBindTemplatesRequest& setApplyAll(bool applyAll) { DARABONBA_PTR_SET_VALUE(applyAll_, applyAll) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchBindTemplatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline BatchBindTemplatesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchBindTemplatesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // replace Field Functions 
    bool hasReplace() const { return this->replace_ != nullptr;};
    void deleteReplace() { this->replace_ = nullptr;};
    inline bool replace() const { DARABONBA_PTR_GET_DEFAULT(replace_, false) };
    inline BatchBindTemplatesRequest& setReplace(bool replace) { DARABONBA_PTR_SET_VALUE(replace_, replace) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline BatchBindTemplatesRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline BatchBindTemplatesRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    std::shared_ptr<bool> applyAll_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<bool> replace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
