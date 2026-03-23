// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYNACOSPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYNACOSPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryNacosProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryNacosProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryNacosProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelRouterQueryNacosProvidersResponseBody() = default ;
    ModelRouterQueryNacosProvidersResponseBody(const ModelRouterQueryNacosProvidersResponseBody &) = default ;
    ModelRouterQueryNacosProvidersResponseBody(ModelRouterQueryNacosProvidersResponseBody &&) = default ;
    ModelRouterQueryNacosProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryNacosProvidersResponseBody() = default ;
    ModelRouterQueryNacosProvidersResponseBody& operator=(const ModelRouterQueryNacosProvidersResponseBody &) = default ;
    ModelRouterQueryNacosProvidersResponseBody& operator=(ModelRouterQueryNacosProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
        DARABONBA_PTR_TO_JSON(models, models_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(symbol, symbol_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
        DARABONBA_PTR_FROM_JSON(models, models_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(symbol, symbol_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Models : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Models& obj) { 
          DARABONBA_PTR_TO_JSON(identifier, identifier_);
          DARABONBA_PTR_TO_JSON(inputToken, inputToken_);
          DARABONBA_PTR_TO_JSON(outputToken, outputToken_);
        };
        friend void from_json(const Darabonba::Json& j, Models& obj) { 
          DARABONBA_PTR_FROM_JSON(identifier, identifier_);
          DARABONBA_PTR_FROM_JSON(inputToken, inputToken_);
          DARABONBA_PTR_FROM_JSON(outputToken, outputToken_);
        };
        Models() = default ;
        Models(const Models &) = default ;
        Models(Models &&) = default ;
        Models(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Models() = default ;
        Models& operator=(const Models &) = default ;
        Models& operator=(Models &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->identifier_ == nullptr
        && this->inputToken_ == nullptr && this->outputToken_ == nullptr; };
        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline Models& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


        // inputToken Field Functions 
        bool hasInputToken() const { return this->inputToken_ != nullptr;};
        void deleteInputToken() { this->inputToken_ = nullptr;};
        inline string getInputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, "") };
        inline Models& setInputToken(string inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


        // outputToken Field Functions 
        bool hasOutputToken() const { return this->outputToken_ != nullptr;};
        void deleteOutputToken() { this->outputToken_ = nullptr;};
        inline string getOutputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, "") };
        inline Models& setOutputToken(string outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


      protected:
        shared_ptr<string> identifier_ {};
        shared_ptr<string> inputToken_ {};
        shared_ptr<string> outputToken_ {};
      };

      virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->models_ == nullptr && this->name_ == nullptr && this->symbol_ == nullptr; };
      // baseUrl Field Functions 
      bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
      void deleteBaseUrl() { this->baseUrl_ = nullptr;};
      inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
      inline Data& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


      // models Field Functions 
      bool hasModels() const { return this->models_ != nullptr;};
      void deleteModels() { this->models_ = nullptr;};
      inline const vector<Data::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<Data::Models>) };
      inline vector<Data::Models> getModels() { DARABONBA_PTR_GET(models_, vector<Data::Models>) };
      inline Data& setModels(const vector<Data::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
      inline Data& setModels(vector<Data::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // symbol Field Functions 
      bool hasSymbol() const { return this->symbol_ != nullptr;};
      void deleteSymbol() { this->symbol_ = nullptr;};
      inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
      inline Data& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    protected:
      shared_ptr<string> baseUrl_ {};
      shared_ptr<vector<Data::Models>> models_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> symbol_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ModelRouterQueryNacosProvidersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ModelRouterQueryNacosProvidersResponseBody::Data>) };
    inline vector<ModelRouterQueryNacosProvidersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ModelRouterQueryNacosProvidersResponseBody::Data>) };
    inline ModelRouterQueryNacosProvidersResponseBody& setData(const vector<ModelRouterQueryNacosProvidersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelRouterQueryNacosProvidersResponseBody& setData(vector<ModelRouterQueryNacosProvidersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelRouterQueryNacosProvidersResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModelRouterQueryNacosProvidersResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelRouterQueryNacosProvidersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterQueryNacosProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelRouterQueryNacosProvidersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ModelRouterQueryNacosProvidersResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
