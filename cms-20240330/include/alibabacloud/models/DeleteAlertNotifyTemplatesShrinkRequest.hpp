// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTNOTIFYTEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTNOTIFYTEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAlertNotifyTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertNotifyTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateIds, alertNotifyTemplateIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertNotifyTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateIds, alertNotifyTemplateIdsShrink_);
    };
    DeleteAlertNotifyTemplatesShrinkRequest() = default ;
    DeleteAlertNotifyTemplatesShrinkRequest(const DeleteAlertNotifyTemplatesShrinkRequest &) = default ;
    DeleteAlertNotifyTemplatesShrinkRequest(DeleteAlertNotifyTemplatesShrinkRequest &&) = default ;
    DeleteAlertNotifyTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertNotifyTemplatesShrinkRequest() = default ;
    DeleteAlertNotifyTemplatesShrinkRequest& operator=(const DeleteAlertNotifyTemplatesShrinkRequest &) = default ;
    DeleteAlertNotifyTemplatesShrinkRequest& operator=(DeleteAlertNotifyTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertNotifyTemplateIdsShrink_ == nullptr; };
    // alertNotifyTemplateIdsShrink Field Functions 
    bool hasAlertNotifyTemplateIdsShrink() const { return this->alertNotifyTemplateIdsShrink_ != nullptr;};
    void deleteAlertNotifyTemplateIdsShrink() { this->alertNotifyTemplateIdsShrink_ = nullptr;};
    inline string getAlertNotifyTemplateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateIdsShrink_, "") };
    inline DeleteAlertNotifyTemplatesShrinkRequest& setAlertNotifyTemplateIdsShrink(string alertNotifyTemplateIdsShrink) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateIdsShrink_, alertNotifyTemplateIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> alertNotifyTemplateIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
