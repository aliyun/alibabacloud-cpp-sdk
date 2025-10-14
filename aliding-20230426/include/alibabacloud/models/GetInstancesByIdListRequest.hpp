// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESBYIDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESBYIDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstancesByIdListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancesByIdListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceIds, processInstanceIds_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancesByIdListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceIds, processInstanceIds_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    GetInstancesByIdListRequest() = default ;
    GetInstancesByIdListRequest(const GetInstancesByIdListRequest &) = default ;
    GetInstancesByIdListRequest(GetInstancesByIdListRequest &&) = default ;
    GetInstancesByIdListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancesByIdListRequest() = default ;
    GetInstancesByIdListRequest& operator=(const GetInstancesByIdListRequest &) = default ;
    GetInstancesByIdListRequest& operator=(GetInstancesByIdListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->language_ == nullptr && return this->processInstanceIds_ == nullptr && return this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetInstancesByIdListRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetInstancesByIdListRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // processInstanceIds Field Functions 
    bool hasProcessInstanceIds() const { return this->processInstanceIds_ != nullptr;};
    void deleteProcessInstanceIds() { this->processInstanceIds_ = nullptr;};
    inline string processInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(processInstanceIds_, "") };
    inline GetInstancesByIdListRequest& setProcessInstanceIds(string processInstanceIds) { DARABONBA_PTR_SET_VALUE(processInstanceIds_, processInstanceIds) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline GetInstancesByIdListRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> processInstanceIds_ = nullptr;
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
