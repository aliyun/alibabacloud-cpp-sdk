// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEWCUSTOMTEMPLATEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEWCUSTOMTEMPLATEENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForViewCustomTemplateEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForViewCustomTemplateEntries& obj) { 
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForViewCustomTemplateEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
    };
    NotifyStrategyForViewCustomTemplateEntries() = default ;
    NotifyStrategyForViewCustomTemplateEntries(const NotifyStrategyForViewCustomTemplateEntries &) = default ;
    NotifyStrategyForViewCustomTemplateEntries(NotifyStrategyForViewCustomTemplateEntries &&) = default ;
    NotifyStrategyForViewCustomTemplateEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForViewCustomTemplateEntries() = default ;
    NotifyStrategyForViewCustomTemplateEntries& operator=(const NotifyStrategyForViewCustomTemplateEntries &) = default ;
    NotifyStrategyForViewCustomTemplateEntries& operator=(NotifyStrategyForViewCustomTemplateEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetType_ != nullptr
        && this->templateUuid_ != nullptr; };
    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline NotifyStrategyForViewCustomTemplateEntries& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // templateUuid Field Functions 
    bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
    void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
    inline string templateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
    inline NotifyStrategyForViewCustomTemplateEntries& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
