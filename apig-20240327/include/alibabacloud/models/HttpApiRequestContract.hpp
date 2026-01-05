// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIREQUESTCONTRACT_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIREQUESTCONTRACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiRequestContract : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiRequestContract& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(headerParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(pathParameters, pathParameters_);
      DARABONBA_PTR_TO_JSON(queryParameters, queryParameters_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiRequestContract& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(headerParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(pathParameters, pathParameters_);
      DARABONBA_PTR_FROM_JSON(queryParameters, queryParameters_);
    };
    HttpApiRequestContract() = default ;
    HttpApiRequestContract(const HttpApiRequestContract &) = default ;
    HttpApiRequestContract(HttpApiRequestContract &&) = default ;
    HttpApiRequestContract(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiRequestContract() = default ;
    HttpApiRequestContract& operator=(const HttpApiRequestContract &) = default ;
    HttpApiRequestContract& operator=(HttpApiRequestContract &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(contentType, contentType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(example, example_);
        DARABONBA_PTR_TO_JSON(jsonSchema, jsonSchema_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(contentType, contentType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(example, example_);
        DARABONBA_PTR_FROM_JSON(jsonSchema, jsonSchema_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->description_ == nullptr && this->example_ == nullptr && this->jsonSchema_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Body& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // example Field Functions 
      bool hasExample() const { return this->example_ != nullptr;};
      void deleteExample() { this->example_ = nullptr;};
      inline string getExample() const { DARABONBA_PTR_GET_DEFAULT(example_, "") };
      inline Body& setExample(string example) { DARABONBA_PTR_SET_VALUE(example_, example) };


      // jsonSchema Field Functions 
      bool hasJsonSchema() const { return this->jsonSchema_ != nullptr;};
      void deleteJsonSchema() { this->jsonSchema_ = nullptr;};
      inline string getJsonSchema() const { DARABONBA_PTR_GET_DEFAULT(jsonSchema_, "") };
      inline Body& setJsonSchema(string jsonSchema) { DARABONBA_PTR_SET_VALUE(jsonSchema_, jsonSchema) };


    protected:
      shared_ptr<string> contentType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> example_ {};
      shared_ptr<string> jsonSchema_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->headerParameters_ == nullptr && this->pathParameters_ == nullptr && this->queryParameters_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const HttpApiRequestContract::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, HttpApiRequestContract::Body) };
    inline HttpApiRequestContract::Body getBody() { DARABONBA_PTR_GET(body_, HttpApiRequestContract::Body) };
    inline HttpApiRequestContract& setBody(const HttpApiRequestContract::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline HttpApiRequestContract& setBody(HttpApiRequestContract::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const vector<HttpApiParameter> & getHeaderParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, vector<HttpApiParameter>) };
    inline vector<HttpApiParameter> getHeaderParameters() { DARABONBA_PTR_GET(headerParameters_, vector<HttpApiParameter>) };
    inline HttpApiRequestContract& setHeaderParameters(const vector<HttpApiParameter> & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline HttpApiRequestContract& setHeaderParameters(vector<HttpApiParameter> && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // pathParameters Field Functions 
    bool hasPathParameters() const { return this->pathParameters_ != nullptr;};
    void deletePathParameters() { this->pathParameters_ = nullptr;};
    inline const vector<HttpApiParameter> & getPathParameters() const { DARABONBA_PTR_GET_CONST(pathParameters_, vector<HttpApiParameter>) };
    inline vector<HttpApiParameter> getPathParameters() { DARABONBA_PTR_GET(pathParameters_, vector<HttpApiParameter>) };
    inline HttpApiRequestContract& setPathParameters(const vector<HttpApiParameter> & pathParameters) { DARABONBA_PTR_SET_VALUE(pathParameters_, pathParameters) };
    inline HttpApiRequestContract& setPathParameters(vector<HttpApiParameter> && pathParameters) { DARABONBA_PTR_SET_RVALUE(pathParameters_, pathParameters) };


    // queryParameters Field Functions 
    bool hasQueryParameters() const { return this->queryParameters_ != nullptr;};
    void deleteQueryParameters() { this->queryParameters_ = nullptr;};
    inline const vector<HttpApiParameter> & getQueryParameters() const { DARABONBA_PTR_GET_CONST(queryParameters_, vector<HttpApiParameter>) };
    inline vector<HttpApiParameter> getQueryParameters() { DARABONBA_PTR_GET(queryParameters_, vector<HttpApiParameter>) };
    inline HttpApiRequestContract& setQueryParameters(const vector<HttpApiParameter> & queryParameters) { DARABONBA_PTR_SET_VALUE(queryParameters_, queryParameters) };
    inline HttpApiRequestContract& setQueryParameters(vector<HttpApiParameter> && queryParameters) { DARABONBA_PTR_SET_RVALUE(queryParameters_, queryParameters) };


  protected:
    shared_ptr<HttpApiRequestContract::Body> body_ {};
    shared_ptr<vector<HttpApiParameter>> headerParameters_ {};
    shared_ptr<vector<HttpApiParameter>> pathParameters_ {};
    shared_ptr<vector<HttpApiParameter>> queryParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
