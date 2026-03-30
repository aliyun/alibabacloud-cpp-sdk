// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLONEVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLONEVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class UpdateCloneVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloneVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloneVoiceId, cloneVoiceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloneVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloneVoiceId, cloneVoiceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateCloneVoiceRequest() = default ;
    UpdateCloneVoiceRequest(const UpdateCloneVoiceRequest &) = default ;
    UpdateCloneVoiceRequest(UpdateCloneVoiceRequest &&) = default ;
    UpdateCloneVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloneVoiceRequest() = default ;
    UpdateCloneVoiceRequest& operator=(const UpdateCloneVoiceRequest &) = default ;
    UpdateCloneVoiceRequest& operator=(UpdateCloneVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloneVoiceId_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr; };
    // cloneVoiceId Field Functions 
    bool hasCloneVoiceId() const { return this->cloneVoiceId_ != nullptr;};
    void deleteCloneVoiceId() { this->cloneVoiceId_ = nullptr;};
    inline string getCloneVoiceId() const { DARABONBA_PTR_GET_DEFAULT(cloneVoiceId_, "") };
    inline UpdateCloneVoiceRequest& setCloneVoiceId(string cloneVoiceId) { DARABONBA_PTR_SET_VALUE(cloneVoiceId_, cloneVoiceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCloneVoiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCloneVoiceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> cloneVoiceId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
