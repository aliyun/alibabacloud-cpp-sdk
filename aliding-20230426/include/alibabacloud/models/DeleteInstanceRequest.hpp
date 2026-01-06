// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    DeleteInstanceRequest() = default ;
    DeleteInstanceRequest(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest(DeleteInstanceRequest &&) = default ;
    DeleteInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceRequest() = default ;
    DeleteInstanceRequest& operator=(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest& operator=(DeleteInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->language_ == nullptr && this->processInstanceId_ == nullptr && this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline DeleteInstanceRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DeleteInstanceRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline DeleteInstanceRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline DeleteInstanceRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    shared_ptr<string> appType_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> processInstanceId_ {};
    shared_ptr<string> systemToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
