// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTBOOKASSISTANTTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTBOOKASSISTANTTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class GetTextbookAssistantTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextbookAssistantTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(model, model_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextbookAssistantTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(model, model_);
    };
    GetTextbookAssistantTokenRequest() = default ;
    GetTextbookAssistantTokenRequest(const GetTextbookAssistantTokenRequest &) = default ;
    GetTextbookAssistantTokenRequest(GetTextbookAssistantTokenRequest &&) = default ;
    GetTextbookAssistantTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextbookAssistantTokenRequest() = default ;
    GetTextbookAssistantTokenRequest& operator=(const GetTextbookAssistantTokenRequest &) = default ;
    GetTextbookAssistantTokenRequest& operator=(GetTextbookAssistantTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->model_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetTextbookAssistantTokenRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline GetTextbookAssistantTokenRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


  protected:
    // This parameter is required.
    shared_ptr<string> deviceId_ {};
    // This parameter is required.
    shared_ptr<string> model_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
