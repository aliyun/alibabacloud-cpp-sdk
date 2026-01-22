// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHBINDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHBINDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchBindTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchBindTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyAll, applyAll_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Replace, replace_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchBindTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyAll, applyAll_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Replace, replace_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    BatchBindTemplateRequest() = default ;
    BatchBindTemplateRequest(const BatchBindTemplateRequest &) = default ;
    BatchBindTemplateRequest(BatchBindTemplateRequest &&) = default ;
    BatchBindTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchBindTemplateRequest() = default ;
    BatchBindTemplateRequest& operator=(const BatchBindTemplateRequest &) = default ;
    BatchBindTemplateRequest& operator=(BatchBindTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyAll_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->ownerId_ == nullptr && this->replace_ == nullptr && this->templateId_ == nullptr; };
    // applyAll Field Functions 
    bool hasApplyAll() const { return this->applyAll_ != nullptr;};
    void deleteApplyAll() { this->applyAll_ = nullptr;};
    inline bool getApplyAll() const { DARABONBA_PTR_GET_DEFAULT(applyAll_, false) };
    inline BatchBindTemplateRequest& setApplyAll(bool applyAll) { DARABONBA_PTR_SET_VALUE(applyAll_, applyAll) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BatchBindTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline BatchBindTemplateRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchBindTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // replace Field Functions 
    bool hasReplace() const { return this->replace_ != nullptr;};
    void deleteReplace() { this->replace_ = nullptr;};
    inline bool getReplace() const { DARABONBA_PTR_GET_DEFAULT(replace_, false) };
    inline BatchBindTemplateRequest& setReplace(bool replace) { DARABONBA_PTR_SET_VALUE(replace_, replace) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline BatchBindTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<bool> applyAll_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<bool> replace_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
