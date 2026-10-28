// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTNOTIFYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTNOTIFYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAlertNotifyTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertNotifyTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateId, alertNotifyTemplateId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertNotifyTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateId, alertNotifyTemplateId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateAlertNotifyTemplateResponseBody() = default ;
    CreateAlertNotifyTemplateResponseBody(const CreateAlertNotifyTemplateResponseBody &) = default ;
    CreateAlertNotifyTemplateResponseBody(CreateAlertNotifyTemplateResponseBody &&) = default ;
    CreateAlertNotifyTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertNotifyTemplateResponseBody() = default ;
    CreateAlertNotifyTemplateResponseBody& operator=(const CreateAlertNotifyTemplateResponseBody &) = default ;
    CreateAlertNotifyTemplateResponseBody& operator=(CreateAlertNotifyTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertNotifyTemplateId_ == nullptr
        && this->requestId_ == nullptr; };
    // alertNotifyTemplateId Field Functions 
    bool hasAlertNotifyTemplateId() const { return this->alertNotifyTemplateId_ != nullptr;};
    void deleteAlertNotifyTemplateId() { this->alertNotifyTemplateId_ = nullptr;};
    inline string getAlertNotifyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateId_, "") };
    inline CreateAlertNotifyTemplateResponseBody& setAlertNotifyTemplateId(string alertNotifyTemplateId) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateId_, alertNotifyTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAlertNotifyTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> alertNotifyTemplateId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
