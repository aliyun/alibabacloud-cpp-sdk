// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTRUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTRUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class DeleteInstructionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstructionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstructionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteInstructionRequest() = default ;
    DeleteInstructionRequest(const DeleteInstructionRequest &) = default ;
    DeleteInstructionRequest(DeleteInstructionRequest &&) = default ;
    DeleteInstructionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstructionRequest() = default ;
    DeleteInstructionRequest& operator=(const DeleteInstructionRequest &) = default ;
    DeleteInstructionRequest& operator=(DeleteInstructionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteInstructionRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteInstructionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
