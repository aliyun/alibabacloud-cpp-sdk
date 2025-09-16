// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListModelsResponseBodyResultContentRequest.hpp>
#include <alibabacloud/models/ListModelsResponseBodyResultContentResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListModelsResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(request, request_);
      DARABONBA_PTR_TO_JSON(response, response_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(request, request_);
      DARABONBA_PTR_FROM_JSON(response, response_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListModelsResponseBodyResultContent() = default ;
    ListModelsResponseBodyResultContent(const ListModelsResponseBodyResultContent &) = default ;
    ListModelsResponseBodyResultContent(ListModelsResponseBodyResultContent &&) = default ;
    ListModelsResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsResponseBodyResultContent() = default ;
    ListModelsResponseBodyResultContent& operator=(const ListModelsResponseBodyResultContent &) = default ;
    ListModelsResponseBodyResultContent& operator=(ListModelsResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->method_ != nullptr
        && this->modelName_ != nullptr && this->modelType_ != nullptr && this->request_ != nullptr && this->response_ != nullptr && this->url_ != nullptr; };
    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ListModelsResponseBodyResultContent& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListModelsResponseBodyResultContent& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListModelsResponseBodyResultContent& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const Models::ListModelsResponseBodyResultContentRequest & request() const { DARABONBA_PTR_GET_CONST(request_, Models::ListModelsResponseBodyResultContentRequest) };
    inline Models::ListModelsResponseBodyResultContentRequest request() { DARABONBA_PTR_GET(request_, Models::ListModelsResponseBodyResultContentRequest) };
    inline ListModelsResponseBodyResultContent& setRequest(const Models::ListModelsResponseBodyResultContentRequest & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline ListModelsResponseBodyResultContent& setRequest(Models::ListModelsResponseBodyResultContentRequest && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::ListModelsResponseBodyResultContentResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::ListModelsResponseBodyResultContentResponse) };
    inline Models::ListModelsResponseBodyResultContentResponse response() { DARABONBA_PTR_GET(response_, Models::ListModelsResponseBodyResultContentResponse) };
    inline ListModelsResponseBodyResultContent& setResponse(const Models::ListModelsResponseBodyResultContentResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline ListModelsResponseBodyResultContent& setResponse(Models::ListModelsResponseBodyResultContentResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListModelsResponseBodyResultContent& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> modelType_ = nullptr;
    std::shared_ptr<Models::ListModelsResponseBodyResultContentRequest> request_ = nullptr;
    std::shared_ptr<Models::ListModelsResponseBodyResultContentResponse> response_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
