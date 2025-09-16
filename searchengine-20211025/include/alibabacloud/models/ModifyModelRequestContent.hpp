// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMODELREQUESTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMODELREQUESTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyModelRequestContentRequest.hpp>
#include <alibabacloud/models/ModifyModelRequestContentResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyModelRequestContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyModelRequestContent& obj) { 
      DARABONBA_PTR_TO_JSON(dimension, dimension_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(request, request_);
      DARABONBA_PTR_TO_JSON(response, response_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyModelRequestContent& obj) { 
      DARABONBA_PTR_FROM_JSON(dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(request, request_);
      DARABONBA_PTR_FROM_JSON(response, response_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ModifyModelRequestContent() = default ;
    ModifyModelRequestContent(const ModifyModelRequestContent &) = default ;
    ModifyModelRequestContent(ModifyModelRequestContent &&) = default ;
    ModifyModelRequestContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyModelRequestContent() = default ;
    ModifyModelRequestContent& operator=(const ModifyModelRequestContent &) = default ;
    ModifyModelRequestContent& operator=(ModifyModelRequestContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimension_ != nullptr
        && this->method_ != nullptr && this->modelType_ != nullptr && this->request_ != nullptr && this->response_ != nullptr && this->url_ != nullptr; };
    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline int32_t dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, 0) };
    inline ModifyModelRequestContent& setDimension(int32_t dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline ModifyModelRequestContent& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModifyModelRequestContent& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const Models::ModifyModelRequestContentRequest & request() const { DARABONBA_PTR_GET_CONST(request_, Models::ModifyModelRequestContentRequest) };
    inline Models::ModifyModelRequestContentRequest request() { DARABONBA_PTR_GET(request_, Models::ModifyModelRequestContentRequest) };
    inline ModifyModelRequestContent& setRequest(const Models::ModifyModelRequestContentRequest & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline ModifyModelRequestContent& setRequest(Models::ModifyModelRequestContentRequest && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::ModifyModelRequestContentResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::ModifyModelRequestContentResponse) };
    inline Models::ModifyModelRequestContentResponse response() { DARABONBA_PTR_GET(response_, Models::ModifyModelRequestContentResponse) };
    inline ModifyModelRequestContent& setResponse(const Models::ModifyModelRequestContentResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline ModifyModelRequestContent& setResponse(Models::ModifyModelRequestContentResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ModifyModelRequestContent& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int32_t> dimension_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> modelType_ = nullptr;
    std::shared_ptr<Models::ModifyModelRequestContentRequest> request_ = nullptr;
    std::shared_ptr<Models::ModifyModelRequestContentResponse> response_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
