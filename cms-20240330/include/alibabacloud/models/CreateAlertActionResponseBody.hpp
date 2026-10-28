// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTACTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTACTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAlertActionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertActionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionId, alertActionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertActionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionId, alertActionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateAlertActionResponseBody() = default ;
    CreateAlertActionResponseBody(const CreateAlertActionResponseBody &) = default ;
    CreateAlertActionResponseBody(CreateAlertActionResponseBody &&) = default ;
    CreateAlertActionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertActionResponseBody() = default ;
    CreateAlertActionResponseBody& operator=(const CreateAlertActionResponseBody &) = default ;
    CreateAlertActionResponseBody& operator=(CreateAlertActionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertActionId_ == nullptr
        && this->requestId_ == nullptr; };
    // alertActionId Field Functions 
    bool hasAlertActionId() const { return this->alertActionId_ != nullptr;};
    void deleteAlertActionId() { this->alertActionId_ = nullptr;};
    inline string getAlertActionId() const { DARABONBA_PTR_GET_DEFAULT(alertActionId_, "") };
    inline CreateAlertActionResponseBody& setAlertActionId(string alertActionId) { DARABONBA_PTR_SET_VALUE(alertActionId_, alertActionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAlertActionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> alertActionId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
