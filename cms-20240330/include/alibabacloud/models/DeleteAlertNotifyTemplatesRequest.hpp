// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTNOTIFYTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTNOTIFYTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteAlertNotifyTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertNotifyTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateIds, alertNotifyTemplateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertNotifyTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateIds, alertNotifyTemplateIds_);
    };
    DeleteAlertNotifyTemplatesRequest() = default ;
    DeleteAlertNotifyTemplatesRequest(const DeleteAlertNotifyTemplatesRequest &) = default ;
    DeleteAlertNotifyTemplatesRequest(DeleteAlertNotifyTemplatesRequest &&) = default ;
    DeleteAlertNotifyTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertNotifyTemplatesRequest() = default ;
    DeleteAlertNotifyTemplatesRequest& operator=(const DeleteAlertNotifyTemplatesRequest &) = default ;
    DeleteAlertNotifyTemplatesRequest& operator=(DeleteAlertNotifyTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertNotifyTemplateIds_ == nullptr; };
    // alertNotifyTemplateIds Field Functions 
    bool hasAlertNotifyTemplateIds() const { return this->alertNotifyTemplateIds_ != nullptr;};
    void deleteAlertNotifyTemplateIds() { this->alertNotifyTemplateIds_ = nullptr;};
    inline const vector<string> & getAlertNotifyTemplateIds() const { DARABONBA_PTR_GET_CONST(alertNotifyTemplateIds_, vector<string>) };
    inline vector<string> getAlertNotifyTemplateIds() { DARABONBA_PTR_GET(alertNotifyTemplateIds_, vector<string>) };
    inline DeleteAlertNotifyTemplatesRequest& setAlertNotifyTemplateIds(const vector<string> & alertNotifyTemplateIds) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateIds_, alertNotifyTemplateIds) };
    inline DeleteAlertNotifyTemplatesRequest& setAlertNotifyTemplateIds(vector<string> && alertNotifyTemplateIds) { DARABONBA_PTR_SET_RVALUE(alertNotifyTemplateIds_, alertNotifyTemplateIds) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> alertNotifyTemplateIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
