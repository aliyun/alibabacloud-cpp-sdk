// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCEREQUESTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUESTDATASETCONFIGSEARCHSOURCECONFIGSSEARCHSOURCEREQUESTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders.hpp>
#include <alibabacloud/models/CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(PathParamsEnable, pathParamsEnable_);
      DARABONBA_PTR_TO_JSON(SocketTimeout, socketTimeout_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(PathParamsEnable, pathParamsEnable_);
      DARABONBA_PTR_FROM_JSON(SocketTimeout, socketTimeout_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig() = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig(const CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig &) = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig(CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig &&) = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig() = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& operator=(const CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig &) = default ;
    CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& operator=(CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->connectTimeout_ != nullptr && this->headers_ != nullptr && this->method_ != nullptr && this->params_ != nullptr && this->pathParamsEnable_ != nullptr
        && this->socketTimeout_ != nullptr && this->url_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int32_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0) };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setConnectTimeout(int32_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders>) };
    inline vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders>) };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setHeaders(const vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setHeaders(vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigParams> & params() const { DARABONBA_PTR_GET_CONST(params_, vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigParams>) };
    inline vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigParams> params() { DARABONBA_PTR_GET(params_, vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigParams>) };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setParams(const vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigParams> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setParams(vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigParams> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // pathParamsEnable Field Functions 
    bool hasPathParamsEnable() const { return this->pathParamsEnable_ != nullptr;};
    void deletePathParamsEnable() { this->pathParamsEnable_ = nullptr;};
    inline bool pathParamsEnable() const { DARABONBA_PTR_GET_DEFAULT(pathParamsEnable_, false) };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setPathParamsEnable(bool pathParamsEnable) { DARABONBA_PTR_SET_VALUE(pathParamsEnable_, pathParamsEnable) };


    // socketTimeout Field Functions 
    bool hasSocketTimeout() const { return this->socketTimeout_ != nullptr;};
    void deleteSocketTimeout() { this->socketTimeout_ = nullptr;};
    inline int32_t socketTimeout() const { DARABONBA_PTR_GET_DEFAULT(socketTimeout_, 0) };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setSocketTimeout(int32_t socketTimeout) { DARABONBA_PTR_SET_VALUE(socketTimeout_, socketTimeout) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<int32_t> connectTimeout_ = nullptr;
    std::shared_ptr<vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigHeaders>> headers_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<vector<Models::CreateDatasetRequestDatasetConfigSearchSourceConfigsSearchSourceRequestConfigParams>> params_ = nullptr;
    std::shared_ptr<bool> pathParamsEnable_ = nullptr;
    std::shared_ptr<int32_t> socketTimeout_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
