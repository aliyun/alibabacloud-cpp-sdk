// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMSCENEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMSCENEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateCustomScenePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomScenePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Objects, objects_);
      DARABONBA_PTR_TO_JSON(SiteIds, siteIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomScenePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Objects, objects_);
      DARABONBA_PTR_FROM_JSON(SiteIds, siteIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    CreateCustomScenePolicyRequest() = default ;
    CreateCustomScenePolicyRequest(const CreateCustomScenePolicyRequest &) = default ;
    CreateCustomScenePolicyRequest(CreateCustomScenePolicyRequest &&) = default ;
    CreateCustomScenePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomScenePolicyRequest() = default ;
    CreateCustomScenePolicyRequest& operator=(const CreateCustomScenePolicyRequest &) = default ;
    CreateCustomScenePolicyRequest& operator=(CreateCustomScenePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->name_ != nullptr && this->objects_ != nullptr && this->siteIds_ != nullptr && this->startTime_ != nullptr && this->template_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateCustomScenePolicyRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCustomScenePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objects Field Functions 
    bool hasObjects() const { return this->objects_ != nullptr;};
    void deleteObjects() { this->objects_ = nullptr;};
    inline string objects() const { DARABONBA_PTR_GET_DEFAULT(objects_, "") };
    inline CreateCustomScenePolicyRequest& setObjects(string objects) { DARABONBA_PTR_SET_VALUE(objects_, objects) };


    // siteIds Field Functions 
    bool hasSiteIds() const { return this->siteIds_ != nullptr;};
    void deleteSiteIds() { this->siteIds_ = nullptr;};
    inline string siteIds() const { DARABONBA_PTR_GET_DEFAULT(siteIds_, "") };
    inline CreateCustomScenePolicyRequest& setSiteIds(string siteIds) { DARABONBA_PTR_SET_VALUE(siteIds_, siteIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateCustomScenePolicyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline CreateCustomScenePolicyRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The time when the policy expires.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The policy name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of the websites that you want to associate with the policy. Separate multiple IDs with commas (,).
    std::shared_ptr<string> objects_ = nullptr;
    std::shared_ptr<string> siteIds_ = nullptr;
    // The time when the policy takes effect.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the policy template. Valid value:
    // 
    // *   **promotion**: major events.
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
