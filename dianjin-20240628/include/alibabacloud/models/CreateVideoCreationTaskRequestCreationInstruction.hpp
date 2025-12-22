// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKREQUESTCREATIONINSTRUCTION_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKREQUESTCREATIONINSTRUCTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateVideoCreationTaskRequestCreationInstruction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoCreationTaskRequestCreationInstruction& obj) { 
      DARABONBA_PTR_TO_JSON(instruction, instruction_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoCreationTaskRequestCreationInstruction& obj) { 
      DARABONBA_PTR_FROM_JSON(instruction, instruction_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    CreateVideoCreationTaskRequestCreationInstruction() = default ;
    CreateVideoCreationTaskRequestCreationInstruction(const CreateVideoCreationTaskRequestCreationInstruction &) = default ;
    CreateVideoCreationTaskRequestCreationInstruction(CreateVideoCreationTaskRequestCreationInstruction &&) = default ;
    CreateVideoCreationTaskRequestCreationInstruction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoCreationTaskRequestCreationInstruction() = default ;
    CreateVideoCreationTaskRequestCreationInstruction& operator=(const CreateVideoCreationTaskRequestCreationInstruction &) = default ;
    CreateVideoCreationTaskRequestCreationInstruction& operator=(CreateVideoCreationTaskRequestCreationInstruction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instruction_ == nullptr
        && return this->templateId_ == nullptr; };
    // instruction Field Functions 
    bool hasInstruction() const { return this->instruction_ != nullptr;};
    void deleteInstruction() { this->instruction_ = nullptr;};
    inline string instruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
    inline CreateVideoCreationTaskRequestCreationInstruction& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateVideoCreationTaskRequestCreationInstruction& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> instruction_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
