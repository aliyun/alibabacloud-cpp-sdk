// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFCTRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFCTRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class UpdateFCTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFCTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionARN, functionARN_);
      DARABONBA_PTR_TO_JSON(Notes, notes_);
      DARABONBA_PTR_TO_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_TO_JSON(SourceARN, sourceARN_);
      DARABONBA_PTR_TO_JSON(TriggerARN, triggerARN_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFCTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionARN, functionARN_);
      DARABONBA_PTR_FROM_JSON(Notes, notes_);
      DARABONBA_PTR_FROM_JSON(RoleARN, roleARN_);
      DARABONBA_PTR_FROM_JSON(SourceARN, sourceARN_);
      DARABONBA_PTR_FROM_JSON(TriggerARN, triggerARN_);
    };
    UpdateFCTriggerRequest() = default ;
    UpdateFCTriggerRequest(const UpdateFCTriggerRequest &) = default ;
    UpdateFCTriggerRequest(UpdateFCTriggerRequest &&) = default ;
    UpdateFCTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFCTriggerRequest() = default ;
    UpdateFCTriggerRequest& operator=(const UpdateFCTriggerRequest &) = default ;
    UpdateFCTriggerRequest& operator=(UpdateFCTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionARN_ != nullptr
        && this->notes_ != nullptr && this->roleARN_ != nullptr && this->sourceARN_ != nullptr && this->triggerARN_ != nullptr; };
    // functionARN Field Functions 
    bool hasFunctionARN() const { return this->functionARN_ != nullptr;};
    void deleteFunctionARN() { this->functionARN_ = nullptr;};
    inline string functionARN() const { DARABONBA_PTR_GET_DEFAULT(functionARN_, "") };
    inline UpdateFCTriggerRequest& setFunctionARN(string functionARN) { DARABONBA_PTR_SET_VALUE(functionARN_, functionARN) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string notes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline UpdateFCTriggerRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // roleARN Field Functions 
    bool hasRoleARN() const { return this->roleARN_ != nullptr;};
    void deleteRoleARN() { this->roleARN_ = nullptr;};
    inline string roleARN() const { DARABONBA_PTR_GET_DEFAULT(roleARN_, "") };
    inline UpdateFCTriggerRequest& setRoleARN(string roleARN) { DARABONBA_PTR_SET_VALUE(roleARN_, roleARN) };


    // sourceARN Field Functions 
    bool hasSourceARN() const { return this->sourceARN_ != nullptr;};
    void deleteSourceARN() { this->sourceARN_ = nullptr;};
    inline string sourceARN() const { DARABONBA_PTR_GET_DEFAULT(sourceARN_, "") };
    inline UpdateFCTriggerRequest& setSourceARN(string sourceARN) { DARABONBA_PTR_SET_VALUE(sourceARN_, sourceARN) };


    // triggerARN Field Functions 
    bool hasTriggerARN() const { return this->triggerARN_ != nullptr;};
    void deleteTriggerARN() { this->triggerARN_ = nullptr;};
    inline string triggerARN() const { DARABONBA_PTR_GET_DEFAULT(triggerARN_, "") };
    inline UpdateFCTriggerRequest& setTriggerARN(string triggerARN) { DARABONBA_PTR_SET_VALUE(triggerARN_, triggerARN) };


  protected:
    // The feature trigger.
    std::shared_ptr<string> functionARN_ = nullptr;
    // The remarks.
    std::shared_ptr<string> notes_ = nullptr;
    // The assigned RAM role.
    std::shared_ptr<string> roleARN_ = nullptr;
    // The resources and filters for event listening.
    std::shared_ptr<string> sourceARN_ = nullptr;
    // The trigger that corresponds to the Function Compute service.
    // 
    // This parameter is required.
    std::shared_ptr<string> triggerARN_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
