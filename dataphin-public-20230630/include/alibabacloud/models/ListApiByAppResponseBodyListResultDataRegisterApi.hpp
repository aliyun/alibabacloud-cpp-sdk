// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULTDATAREGISTERAPI_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULTDATAREGISTERAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppResponseBodyListResultDataRegisterApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppResponseBodyListResultDataRegisterApi& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AuthenticationMode, authenticationMode_);
      DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(FailExample, failExample_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SuccessExample, successExample_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppResponseBodyListResultDataRegisterApi& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AuthenticationMode, authenticationMode_);
      DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(FailExample, failExample_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SuccessExample, successExample_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListApiByAppResponseBodyListResultDataRegisterApi() = default ;
    ListApiByAppResponseBodyListResultDataRegisterApi(const ListApiByAppResponseBodyListResultDataRegisterApi &) = default ;
    ListApiByAppResponseBodyListResultDataRegisterApi(ListApiByAppResponseBodyListResultDataRegisterApi &&) = default ;
    ListApiByAppResponseBodyListResultDataRegisterApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppResponseBodyListResultDataRegisterApi() = default ;
    ListApiByAppResponseBodyListResultDataRegisterApi& operator=(const ListApiByAppResponseBodyListResultDataRegisterApi &) = default ;
    ListApiByAppResponseBodyListResultDataRegisterApi& operator=(ListApiByAppResponseBodyListResultDataRegisterApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->authenticationMode_ == nullptr && return this->datasourceId_ == nullptr && return this->datasourceName_ == nullptr && return this->failExample_ == nullptr && return this->httpMethod_ == nullptr
        && return this->modelType_ == nullptr && return this->path_ == nullptr && return this->protocol_ == nullptr && return this->successExample_ == nullptr && return this->timeout_ == nullptr
        && return this->url_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // authenticationMode Field Functions 
    bool hasAuthenticationMode() const { return this->authenticationMode_ != nullptr;};
    void deleteAuthenticationMode() { this->authenticationMode_ = nullptr;};
    inline string authenticationMode() const { DARABONBA_PTR_GET_DEFAULT(authenticationMode_, "") };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setAuthenticationMode(string authenticationMode) { DARABONBA_PTR_SET_VALUE(authenticationMode_, authenticationMode) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // failExample Field Functions 
    bool hasFailExample() const { return this->failExample_ != nullptr;};
    void deleteFailExample() { this->failExample_ = nullptr;};
    inline string failExample() const { DARABONBA_PTR_GET_DEFAULT(failExample_, "") };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setFailExample(string failExample) { DARABONBA_PTR_SET_VALUE(failExample_, failExample) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline int64_t httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, 0L) };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setHttpMethod(int64_t httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline int64_t modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, 0L) };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setModelType(int64_t modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // successExample Field Functions 
    bool hasSuccessExample() const { return this->successExample_ != nullptr;};
    void deleteSuccessExample() { this->successExample_ = nullptr;};
    inline string successExample() const { DARABONBA_PTR_GET_DEFAULT(successExample_, "") };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setSuccessExample(string successExample) { DARABONBA_PTR_SET_VALUE(successExample_, successExample) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListApiByAppResponseBodyListResultDataRegisterApi& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<string> authenticationMode_ = nullptr;
    std::shared_ptr<string> datasourceId_ = nullptr;
    std::shared_ptr<string> datasourceName_ = nullptr;
    std::shared_ptr<string> failExample_ = nullptr;
    std::shared_ptr<int64_t> httpMethod_ = nullptr;
    std::shared_ptr<int64_t> modelType_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> successExample_ = nullptr;
    std::shared_ptr<int64_t> timeout_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
