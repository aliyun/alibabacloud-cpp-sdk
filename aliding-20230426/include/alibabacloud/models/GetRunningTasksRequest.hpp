// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNNINGTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUNNINGTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRunningTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunningTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ProcessCodes, processCodes_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunningTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ProcessCodes, processCodes_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    GetRunningTasksRequest() = default ;
    GetRunningTasksRequest(const GetRunningTasksRequest &) = default ;
    GetRunningTasksRequest(GetRunningTasksRequest &&) = default ;
    GetRunningTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunningTasksRequest() = default ;
    GetRunningTasksRequest& operator=(const GetRunningTasksRequest &) = default ;
    GetRunningTasksRequest& operator=(GetRunningTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->language_ == nullptr && return this->processCodes_ == nullptr && return this->processInstanceId_ == nullptr && return this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetRunningTasksRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetRunningTasksRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // processCodes Field Functions 
    bool hasProcessCodes() const { return this->processCodes_ != nullptr;};
    void deleteProcessCodes() { this->processCodes_ = nullptr;};
    inline string processCodes() const { DARABONBA_PTR_GET_DEFAULT(processCodes_, "") };
    inline GetRunningTasksRequest& setProcessCodes(string processCodes) { DARABONBA_PTR_SET_VALUE(processCodes_, processCodes) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetRunningTasksRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline GetRunningTasksRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> processCodes_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
