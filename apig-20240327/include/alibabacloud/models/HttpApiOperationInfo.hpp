// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIOPERATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIOPERATIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/APIG20240327.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiOperationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiOperationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(mock, mock_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(operationId, operationId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(request, request_);
      DARABONBA_PTR_TO_JSON(response, response_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiOperationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(mock, mock_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(operationId, operationId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(request, request_);
      DARABONBA_PTR_FROM_JSON(response, response_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    HttpApiOperationInfo() = default ;
    HttpApiOperationInfo(const HttpApiOperationInfo &) = default ;
    HttpApiOperationInfo(HttpApiOperationInfo &&) = default ;
    HttpApiOperationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiOperationInfo() = default ;
    HttpApiOperationInfo& operator=(const HttpApiOperationInfo &) = default ;
    HttpApiOperationInfo& operator=(HttpApiOperationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authConfig_ != nullptr
        && this->createTimestamp_ != nullptr && this->deployConfigs_ != nullptr && this->description_ != nullptr && this->enableAuth_ != nullptr && this->method_ != nullptr
        && this->mock_ != nullptr && this->name_ != nullptr && this->operationId_ != nullptr && this->path_ != nullptr && this->request_ != nullptr
        && this->response_ != nullptr && this->status_ != nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const AuthConfig & authConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, AuthConfig) };
    inline AuthConfig authConfig() { DARABONBA_PTR_GET(authConfig_, AuthConfig) };
    inline HttpApiOperationInfo& setAuthConfig(const AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline HttpApiOperationInfo& setAuthConfig(AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline HttpApiOperationInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & deployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> deployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline HttpApiOperationInfo& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline HttpApiOperationInfo& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HttpApiOperationInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool enableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline HttpApiOperationInfo& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline HttpApiOperationInfo& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // mock Field Functions 
    bool hasMock() const { return this->mock_ != nullptr;};
    void deleteMock() { this->mock_ = nullptr;};
    inline const HttpApiMockContract & mock() const { DARABONBA_PTR_GET_CONST(mock_, HttpApiMockContract) };
    inline HttpApiMockContract mock() { DARABONBA_PTR_GET(mock_, HttpApiMockContract) };
    inline HttpApiOperationInfo& setMock(const HttpApiMockContract & mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };
    inline HttpApiOperationInfo& setMock(HttpApiMockContract && mock) { DARABONBA_PTR_SET_RVALUE(mock_, mock) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiOperationInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline HttpApiOperationInfo& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline HttpApiOperationInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const HttpApiRequestContract & request() const { DARABONBA_PTR_GET_CONST(request_, HttpApiRequestContract) };
    inline HttpApiRequestContract request() { DARABONBA_PTR_GET(request_, HttpApiRequestContract) };
    inline HttpApiOperationInfo& setRequest(const HttpApiRequestContract & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline HttpApiOperationInfo& setRequest(HttpApiRequestContract && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const HttpApiResponseContract & response() const { DARABONBA_PTR_GET_CONST(response_, HttpApiResponseContract) };
    inline HttpApiResponseContract response() { DARABONBA_PTR_GET(response_, HttpApiResponseContract) };
    inline HttpApiOperationInfo& setResponse(const HttpApiResponseContract & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline HttpApiOperationInfo& setResponse(HttpApiResponseContract && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline HttpApiOperationInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<AuthConfig> authConfig_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableAuth_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<HttpApiMockContract> mock_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operationId_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<HttpApiRequestContract> request_ = nullptr;
    std::shared_ptr<HttpApiResponseContract> response_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
