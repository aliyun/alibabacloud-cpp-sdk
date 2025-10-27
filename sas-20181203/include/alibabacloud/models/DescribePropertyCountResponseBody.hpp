// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentlessLlmService, agentlessLlmService_);
      DARABONBA_PTR_TO_JSON(AgentlessScaAiComponent, agentlessScaAiComponent_);
      DARABONBA_PTR_TO_JSON(Autorun, autorun_);
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Lkm, lkm_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sca, sca_);
      DARABONBA_PTR_TO_JSON(Software, software_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Web, web_);
      DARABONBA_PTR_TO_JSON(Webserver, webserver_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentlessLlmService, agentlessLlmService_);
      DARABONBA_PTR_FROM_JSON(AgentlessScaAiComponent, agentlessScaAiComponent_);
      DARABONBA_PTR_FROM_JSON(Autorun, autorun_);
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Lkm, lkm_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sca, sca_);
      DARABONBA_PTR_FROM_JSON(Software, software_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(Web, web_);
      DARABONBA_PTR_FROM_JSON(Webserver, webserver_);
    };
    DescribePropertyCountResponseBody() = default ;
    DescribePropertyCountResponseBody(const DescribePropertyCountResponseBody &) = default ;
    DescribePropertyCountResponseBody(DescribePropertyCountResponseBody &&) = default ;
    DescribePropertyCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyCountResponseBody() = default ;
    DescribePropertyCountResponseBody& operator=(const DescribePropertyCountResponseBody &) = default ;
    DescribePropertyCountResponseBody& operator=(DescribePropertyCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentlessLlmService_ == nullptr
        && return this->agentlessScaAiComponent_ == nullptr && return this->autorun_ == nullptr && return this->cron_ == nullptr && return this->database_ == nullptr && return this->lkm_ == nullptr
        && return this->port_ == nullptr && return this->process_ == nullptr && return this->requestId_ == nullptr && return this->sca_ == nullptr && return this->software_ == nullptr
        && return this->user_ == nullptr && return this->web_ == nullptr && return this->webserver_ == nullptr; };
    // agentlessLlmService Field Functions 
    bool hasAgentlessLlmService() const { return this->agentlessLlmService_ != nullptr;};
    void deleteAgentlessLlmService() { this->agentlessLlmService_ = nullptr;};
    inline int32_t agentlessLlmService() const { DARABONBA_PTR_GET_DEFAULT(agentlessLlmService_, 0) };
    inline DescribePropertyCountResponseBody& setAgentlessLlmService(int32_t agentlessLlmService) { DARABONBA_PTR_SET_VALUE(agentlessLlmService_, agentlessLlmService) };


    // agentlessScaAiComponent Field Functions 
    bool hasAgentlessScaAiComponent() const { return this->agentlessScaAiComponent_ != nullptr;};
    void deleteAgentlessScaAiComponent() { this->agentlessScaAiComponent_ = nullptr;};
    inline int32_t agentlessScaAiComponent() const { DARABONBA_PTR_GET_DEFAULT(agentlessScaAiComponent_, 0) };
    inline DescribePropertyCountResponseBody& setAgentlessScaAiComponent(int32_t agentlessScaAiComponent) { DARABONBA_PTR_SET_VALUE(agentlessScaAiComponent_, agentlessScaAiComponent) };


    // autorun Field Functions 
    bool hasAutorun() const { return this->autorun_ != nullptr;};
    void deleteAutorun() { this->autorun_ = nullptr;};
    inline int32_t autorun() const { DARABONBA_PTR_GET_DEFAULT(autorun_, 0) };
    inline DescribePropertyCountResponseBody& setAutorun(int32_t autorun) { DARABONBA_PTR_SET_VALUE(autorun_, autorun) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline int32_t cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, 0) };
    inline DescribePropertyCountResponseBody& setCron(int32_t cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline int32_t database() const { DARABONBA_PTR_GET_DEFAULT(database_, 0) };
    inline DescribePropertyCountResponseBody& setDatabase(int32_t database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // lkm Field Functions 
    bool hasLkm() const { return this->lkm_ != nullptr;};
    void deleteLkm() { this->lkm_ = nullptr;};
    inline int32_t lkm() const { DARABONBA_PTR_GET_DEFAULT(lkm_, 0) };
    inline DescribePropertyCountResponseBody& setLkm(int32_t lkm) { DARABONBA_PTR_SET_VALUE(lkm_, lkm) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribePropertyCountResponseBody& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline int32_t process() const { DARABONBA_PTR_GET_DEFAULT(process_, 0) };
    inline DescribePropertyCountResponseBody& setProcess(int32_t process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePropertyCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sca Field Functions 
    bool hasSca() const { return this->sca_ != nullptr;};
    void deleteSca() { this->sca_ = nullptr;};
    inline int32_t sca() const { DARABONBA_PTR_GET_DEFAULT(sca_, 0) };
    inline DescribePropertyCountResponseBody& setSca(int32_t sca) { DARABONBA_PTR_SET_VALUE(sca_, sca) };


    // software Field Functions 
    bool hasSoftware() const { return this->software_ != nullptr;};
    void deleteSoftware() { this->software_ = nullptr;};
    inline int32_t software() const { DARABONBA_PTR_GET_DEFAULT(software_, 0) };
    inline DescribePropertyCountResponseBody& setSoftware(int32_t software) { DARABONBA_PTR_SET_VALUE(software_, software) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline int32_t user() const { DARABONBA_PTR_GET_DEFAULT(user_, 0) };
    inline DescribePropertyCountResponseBody& setUser(int32_t user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // web Field Functions 
    bool hasWeb() const { return this->web_ != nullptr;};
    void deleteWeb() { this->web_ = nullptr;};
    inline int32_t web() const { DARABONBA_PTR_GET_DEFAULT(web_, 0) };
    inline DescribePropertyCountResponseBody& setWeb(int32_t web) { DARABONBA_PTR_SET_VALUE(web_, web) };


    // webserver Field Functions 
    bool hasWebserver() const { return this->webserver_ != nullptr;};
    void deleteWebserver() { this->webserver_ = nullptr;};
    inline int32_t webserver() const { DARABONBA_PTR_GET_DEFAULT(webserver_, 0) };
    inline DescribePropertyCountResponseBody& setWebserver(int32_t webserver) { DARABONBA_PTR_SET_VALUE(webserver_, webserver) };


  protected:
    std::shared_ptr<int32_t> agentlessLlmService_ = nullptr;
    std::shared_ptr<int32_t> agentlessScaAiComponent_ = nullptr;
    // The number of startup items.
    std::shared_ptr<int32_t> autorun_ = nullptr;
    // The number of scheduled tasks.
    std::shared_ptr<int32_t> cron_ = nullptr;
    // The number of databases.
    std::shared_ptr<int32_t> database_ = nullptr;
    // The number of kernel modules.
    std::shared_ptr<int32_t> lkm_ = nullptr;
    // The number of ports.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The number of processes.
    std::shared_ptr<int32_t> process_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of middleware assets.
    std::shared_ptr<int32_t> sca_ = nullptr;
    // The number of software assets.
    std::shared_ptr<int32_t> software_ = nullptr;
    // The number of accounts.
    std::shared_ptr<int32_t> user_ = nullptr;
    // The number of websites.
    std::shared_ptr<int32_t> web_ = nullptr;
    // The number of web services.
    std::shared_ptr<int32_t> webserver_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
