// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResponseBodyDataAdminList.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataChatbotBusinessUnit.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyDataNumberList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AdminList, adminList_);
      DARABONBA_PTR_TO_JSON(AgentType, agentType_);
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(ChatbotBusinessUnit, chatbotBusinessUnit_);
      DARABONBA_PTR_TO_JSON(ConsoleUrl, consoleUrl_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
      DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(ChatbotBusinessUnit, chatbotBusinessUnit_);
      DARABONBA_PTR_FROM_JSON(ConsoleUrl, consoleUrl_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetInstanceResponseBodyData() = default ;
    GetInstanceResponseBodyData(const GetInstanceResponseBodyData &) = default ;
    GetInstanceResponseBodyData(GetInstanceResponseBodyData &&) = default ;
    GetInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyData() = default ;
    GetInstanceResponseBodyData& operator=(const GetInstanceResponseBodyData &) = default ;
    GetInstanceResponseBodyData& operator=(GetInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminList_ == nullptr
        && return this->agentType_ == nullptr && return this->aliyunUid_ == nullptr && return this->chatbotBusinessUnit_ == nullptr && return this->consoleUrl_ == nullptr && return this->description_ == nullptr
        && return this->domainName_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->numberList_ == nullptr && return this->status_ == nullptr; };
    // adminList Field Functions 
    bool hasAdminList() const { return this->adminList_ != nullptr;};
    void deleteAdminList() { this->adminList_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyDataAdminList> & adminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<Models::GetInstanceResponseBodyDataAdminList>) };
    inline vector<Models::GetInstanceResponseBodyDataAdminList> adminList() { DARABONBA_PTR_GET(adminList_, vector<Models::GetInstanceResponseBodyDataAdminList>) };
    inline GetInstanceResponseBodyData& setAdminList(const vector<Models::GetInstanceResponseBodyDataAdminList> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
    inline GetInstanceResponseBodyData& setAdminList(vector<Models::GetInstanceResponseBodyDataAdminList> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


    // agentType Field Functions 
    bool hasAgentType() const { return this->agentType_ != nullptr;};
    void deleteAgentType() { this->agentType_ = nullptr;};
    inline string agentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
    inline GetInstanceResponseBodyData& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline GetInstanceResponseBodyData& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // chatbotBusinessUnit Field Functions 
    bool hasChatbotBusinessUnit() const { return this->chatbotBusinessUnit_ != nullptr;};
    void deleteChatbotBusinessUnit() { this->chatbotBusinessUnit_ = nullptr;};
    inline const Models::GetInstanceResponseBodyDataChatbotBusinessUnit & chatbotBusinessUnit() const { DARABONBA_PTR_GET_CONST(chatbotBusinessUnit_, Models::GetInstanceResponseBodyDataChatbotBusinessUnit) };
    inline Models::GetInstanceResponseBodyDataChatbotBusinessUnit chatbotBusinessUnit() { DARABONBA_PTR_GET(chatbotBusinessUnit_, Models::GetInstanceResponseBodyDataChatbotBusinessUnit) };
    inline GetInstanceResponseBodyData& setChatbotBusinessUnit(const Models::GetInstanceResponseBodyDataChatbotBusinessUnit & chatbotBusinessUnit) { DARABONBA_PTR_SET_VALUE(chatbotBusinessUnit_, chatbotBusinessUnit) };
    inline GetInstanceResponseBodyData& setChatbotBusinessUnit(Models::GetInstanceResponseBodyDataChatbotBusinessUnit && chatbotBusinessUnit) { DARABONBA_PTR_SET_RVALUE(chatbotBusinessUnit_, chatbotBusinessUnit) };


    // consoleUrl Field Functions 
    bool hasConsoleUrl() const { return this->consoleUrl_ != nullptr;};
    void deleteConsoleUrl() { this->consoleUrl_ = nullptr;};
    inline string consoleUrl() const { DARABONBA_PTR_GET_DEFAULT(consoleUrl_, "") };
    inline GetInstanceResponseBodyData& setConsoleUrl(string consoleUrl) { DARABONBA_PTR_SET_VALUE(consoleUrl_, consoleUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetInstanceResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetInstanceResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetInstanceResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetInstanceResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyDataNumberList> & numberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<Models::GetInstanceResponseBodyDataNumberList>) };
    inline vector<Models::GetInstanceResponseBodyDataNumberList> numberList() { DARABONBA_PTR_GET(numberList_, vector<Models::GetInstanceResponseBodyDataNumberList>) };
    inline GetInstanceResponseBodyData& setNumberList(const vector<Models::GetInstanceResponseBodyDataNumberList> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
    inline GetInstanceResponseBodyData& setNumberList(vector<Models::GetInstanceResponseBodyDataNumberList> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::GetInstanceResponseBodyDataAdminList>> adminList_ = nullptr;
    std::shared_ptr<string> agentType_ = nullptr;
    std::shared_ptr<string> aliyunUid_ = nullptr;
    std::shared_ptr<Models::GetInstanceResponseBodyDataChatbotBusinessUnit> chatbotBusinessUnit_ = nullptr;
    std::shared_ptr<string> consoleUrl_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::GetInstanceResponseBodyDataNumberList>> numberList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
