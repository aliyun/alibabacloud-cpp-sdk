// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetProcessDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(NameSpace, nameSpace_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
    };
    GetProcessDefinitionRequest() = default ;
    GetProcessDefinitionRequest(const GetProcessDefinitionRequest &) = default ;
    GetProcessDefinitionRequest(GetProcessDefinitionRequest &&) = default ;
    GetProcessDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessDefinitionRequest() = default ;
    GetProcessDefinitionRequest& operator=(const GetProcessDefinitionRequest &) = default ;
    GetProcessDefinitionRequest& operator=(GetProcessDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->corpId_ != nullptr && this->groupId_ != nullptr && this->language_ != nullptr && this->nameSpace_ != nullptr && this->orderNumber_ != nullptr
        && this->processInstanceId_ != nullptr && this->systemToken_ != nullptr && this->systemType_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetProcessDefinitionRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GetProcessDefinitionRequest& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetProcessDefinitionRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetProcessDefinitionRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // nameSpace Field Functions 
    bool hasNameSpace() const { return this->nameSpace_ != nullptr;};
    void deleteNameSpace() { this->nameSpace_ = nullptr;};
    inline string _nameSpace() const { DARABONBA_PTR_GET_DEFAULT(nameSpace_, "") };
    inline GetProcessDefinitionRequest& setNameSpace(string _nameSpace) { DARABONBA_PTR_SET_VALUE(nameSpace_, _nameSpace) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline string orderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, "") };
    inline GetProcessDefinitionRequest& setOrderNumber(string orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetProcessDefinitionRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline GetProcessDefinitionRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string systemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline GetProcessDefinitionRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> nameSpace_ = nullptr;
    std::shared_ptr<string> orderNumber_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> systemToken_ = nullptr;
    std::shared_ptr<string> systemType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
