// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCENEDEFENSEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCENEDEFENSEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class CreateSceneDefensePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSceneDefensePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSceneDefensePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    CreateSceneDefensePolicyRequest() = default ;
    CreateSceneDefensePolicyRequest(const CreateSceneDefensePolicyRequest &) = default ;
    CreateSceneDefensePolicyRequest(CreateSceneDefensePolicyRequest &&) = default ;
    CreateSceneDefensePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSceneDefensePolicyRequest() = default ;
    CreateSceneDefensePolicyRequest& operator=(const CreateSceneDefensePolicyRequest &) = default ;
    CreateSceneDefensePolicyRequest& operator=(CreateSceneDefensePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->name_ != nullptr && this->startTime_ != nullptr && this->template_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateSceneDefensePolicyRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSceneDefensePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateSceneDefensePolicyRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline CreateSceneDefensePolicyRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The end time of the policy. This value is a UNIX timestamp. Units: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The name of the policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The start time of the policy. This value is a UNIX timestamp. Units: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The template of the policy. Valid values:
    // 
    // *   **promotion**: important activity.
    // *   **bypass**: all traffic forwarded.
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
