// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIPATHFIELDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIPATHFIELDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DataPathConfigsFieldPathsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetApiPathFieldConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiPathFieldConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiPathFieldConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetApiPathFieldConfigResponseBody() = default ;
    GetApiPathFieldConfigResponseBody(const GetApiPathFieldConfigResponseBody &) = default ;
    GetApiPathFieldConfigResponseBody(GetApiPathFieldConfigResponseBody &&) = default ;
    GetApiPathFieldConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiPathFieldConfigResponseBody() = default ;
    GetApiPathFieldConfigResponseBody& operator=(const GetApiPathFieldConfigResponseBody &) = default ;
    GetApiPathFieldConfigResponseBody& operator=(GetApiPathFieldConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(apiId, apiId_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(pathConfigs, pathConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(apiId, apiId_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(pathConfigs, pathConfigs_);
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
      class PathConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PathConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(fieldPaths, fieldPaths_);
          DARABONBA_PTR_TO_JSON(path, path_);
        };
        friend void from_json(const Darabonba::Json& j, PathConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(fieldPaths, fieldPaths_);
          DARABONBA_PTR_FROM_JSON(path, path_);
        };
        PathConfigs() = default ;
        PathConfigs(const PathConfigs &) = default ;
        PathConfigs(PathConfigs &&) = default ;
        PathConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PathConfigs() = default ;
        PathConfigs& operator=(const PathConfigs &) = default ;
        PathConfigs& operator=(PathConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldPaths_ == nullptr
        && this->path_ == nullptr; };
        // fieldPaths Field Functions 
        bool hasFieldPaths() const { return this->fieldPaths_ != nullptr;};
        void deleteFieldPaths() { this->fieldPaths_ = nullptr;};
        inline const map<string, vector<DataPathConfigsFieldPathsValue>> & getFieldPaths() const { DARABONBA_PTR_GET_CONST(fieldPaths_, map<string, vector<DataPathConfigsFieldPathsValue>>) };
        inline map<string, vector<DataPathConfigsFieldPathsValue>> getFieldPaths() { DARABONBA_PTR_GET(fieldPaths_, map<string, vector<DataPathConfigsFieldPathsValue>>) };
        inline PathConfigs& setFieldPaths(const map<string, vector<DataPathConfigsFieldPathsValue>> & fieldPaths) { DARABONBA_PTR_SET_VALUE(fieldPaths_, fieldPaths) };
        inline PathConfigs& setFieldPaths(map<string, vector<DataPathConfigsFieldPathsValue>> && fieldPaths) { DARABONBA_PTR_SET_RVALUE(fieldPaths_, fieldPaths) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline PathConfigs& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        // The collection of field configurations under the path, grouped by mapping key, where each group represents a set of field configuration items.
        shared_ptr<map<string, vector<DataPathConfigsFieldPathsValue>>> fieldPaths_ {};
        // The request path of the API.
        shared_ptr<string> path_ {};
      };

      virtual bool empty() const override { return this->apiId_ == nullptr
        && this->gatewayId_ == nullptr && this->pathConfigs_ == nullptr; };
      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
      inline Data& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // pathConfigs Field Functions 
      bool hasPathConfigs() const { return this->pathConfigs_ != nullptr;};
      void deletePathConfigs() { this->pathConfigs_ = nullptr;};
      inline const vector<Data::PathConfigs> & getPathConfigs() const { DARABONBA_PTR_GET_CONST(pathConfigs_, vector<Data::PathConfigs>) };
      inline vector<Data::PathConfigs> getPathConfigs() { DARABONBA_PTR_GET(pathConfigs_, vector<Data::PathConfigs>) };
      inline Data& setPathConfigs(const vector<Data::PathConfigs> & pathConfigs) { DARABONBA_PTR_SET_VALUE(pathConfigs_, pathConfigs) };
      inline Data& setPathConfigs(vector<Data::PathConfigs> && pathConfigs) { DARABONBA_PTR_SET_RVALUE(pathConfigs_, pathConfigs) };


    protected:
      // The ID of the HTTP API.
      shared_ptr<string> apiId_ {};
      // The ID of the cloud-native API gateway.
      shared_ptr<string> gatewayId_ {};
      // The list of field configurations grouped by API request path.
      shared_ptr<vector<Data::PathConfigs>> pathConfigs_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetApiPathFieldConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetApiPathFieldConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetApiPathFieldConfigResponseBody::Data) };
    inline GetApiPathFieldConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetApiPathFieldConfigResponseBody::Data) };
    inline GetApiPathFieldConfigResponseBody& setData(const GetApiPathFieldConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetApiPathFieldConfigResponseBody& setData(GetApiPathFieldConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApiPathFieldConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiPathFieldConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetApiPathFieldConfigResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
