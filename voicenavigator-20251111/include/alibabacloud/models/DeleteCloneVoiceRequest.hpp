// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLONEVOICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLONEVOICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class DeleteCloneVoiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloneVoiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloneVoiceId, cloneVoiceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloneVoiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloneVoiceId, cloneVoiceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteCloneVoiceRequest() = default ;
    DeleteCloneVoiceRequest(const DeleteCloneVoiceRequest &) = default ;
    DeleteCloneVoiceRequest(DeleteCloneVoiceRequest &&) = default ;
    DeleteCloneVoiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloneVoiceRequest() = default ;
    DeleteCloneVoiceRequest& operator=(const DeleteCloneVoiceRequest &) = default ;
    DeleteCloneVoiceRequest& operator=(DeleteCloneVoiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloneVoiceId_ == nullptr
        && this->instanceId_ == nullptr; };
    // cloneVoiceId Field Functions 
    bool hasCloneVoiceId() const { return this->cloneVoiceId_ != nullptr;};
    void deleteCloneVoiceId() { this->cloneVoiceId_ = nullptr;};
    inline string getCloneVoiceId() const { DARABONBA_PTR_GET_DEFAULT(cloneVoiceId_, "") };
    inline DeleteCloneVoiceRequest& setCloneVoiceId(string cloneVoiceId) { DARABONBA_PTR_SET_VALUE(cloneVoiceId_, cloneVoiceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteCloneVoiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> cloneVoiceId_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
