// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateContextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_ANY_TO_JSON(experience, experience_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
      DARABONBA_ANY_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(triggerCondition, triggerCondition_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_ANY_FROM_JSON(experience, experience_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
      DARABONBA_ANY_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(triggerCondition, triggerCondition_);
    };
    UpdateContextRequest() = default ;
    UpdateContextRequest(const UpdateContextRequest &) = default ;
    UpdateContextRequest(UpdateContextRequest &&) = default ;
    UpdateContextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextRequest() = default ;
    UpdateContextRequest& operator=(const UpdateContextRequest &) = default ;
    UpdateContextRequest& operator=(UpdateContextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->experience_ == nullptr && this->metadata_ == nullptr && this->payload_ == nullptr && this->triggerCondition_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateContextRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // experience Field Functions 
    bool hasExperience() const { return this->experience_ != nullptr;};
    void deleteExperience() { this->experience_ = nullptr;};
    inline     const Darabonba::Json & getExperience() const { DARABONBA_GET(experience_) };
    Darabonba::Json & getExperience() { DARABONBA_GET(experience_) };
    inline UpdateContextRequest& setExperience(const Darabonba::Json & experience) { DARABONBA_SET_VALUE(experience_, experience) };
    inline UpdateContextRequest& setExperience(Darabonba::Json && experience) { DARABONBA_SET_RVALUE(experience_, experience) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline UpdateContextRequest& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline UpdateContextRequest& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline     const Darabonba::Json & getPayload() const { DARABONBA_GET(payload_) };
    Darabonba::Json & getPayload() { DARABONBA_GET(payload_) };
    inline UpdateContextRequest& setPayload(const Darabonba::Json & payload) { DARABONBA_SET_VALUE(payload_, payload) };
    inline UpdateContextRequest& setPayload(Darabonba::Json && payload) { DARABONBA_SET_RVALUE(payload_, payload) };


    // triggerCondition Field Functions 
    bool hasTriggerCondition() const { return this->triggerCondition_ != nullptr;};
    void deleteTriggerCondition() { this->triggerCondition_ = nullptr;};
    inline string getTriggerCondition() const { DARABONBA_PTR_GET_DEFAULT(triggerCondition_, "") };
    inline UpdateContextRequest& setTriggerCondition(string triggerCondition) { DARABONBA_PTR_SET_VALUE(triggerCondition_, triggerCondition) };


  protected:
    shared_ptr<string> content_ {};
    Darabonba::Json experience_ {};
    Darabonba::Json metadata_ {};
    Darabonba::Json payload_ {};
    shared_ptr<string> triggerCondition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
