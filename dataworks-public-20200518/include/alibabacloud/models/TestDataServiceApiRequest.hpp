// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TestDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(BodyContent, bodyContent_);
      DARABONBA_PTR_TO_JSON(BodyParams, bodyParams_);
      DARABONBA_PTR_TO_JSON(HeadParams, headParams_);
      DARABONBA_PTR_TO_JSON(PathParams, pathParams_);
      DARABONBA_PTR_TO_JSON(QueryParam, queryParam_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(BodyContent, bodyContent_);
      DARABONBA_PTR_FROM_JSON(BodyParams, bodyParams_);
      DARABONBA_PTR_FROM_JSON(HeadParams, headParams_);
      DARABONBA_PTR_FROM_JSON(PathParams, pathParams_);
      DARABONBA_PTR_FROM_JSON(QueryParam, queryParam_);
    };
    TestDataServiceApiRequest() = default ;
    TestDataServiceApiRequest(const TestDataServiceApiRequest &) = default ;
    TestDataServiceApiRequest(TestDataServiceApiRequest &&) = default ;
    TestDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataServiceApiRequest() = default ;
    TestDataServiceApiRequest& operator=(const TestDataServiceApiRequest &) = default ;
    TestDataServiceApiRequest& operator=(TestDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryParam& obj) { 
        DARABONBA_PTR_TO_JSON(ParamKey, paramKey_);
        DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
      };
      friend void from_json(const Darabonba::Json& j, QueryParam& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamKey, paramKey_);
        DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
      };
      QueryParam() = default ;
      QueryParam(const QueryParam &) = default ;
      QueryParam(QueryParam &&) = default ;
      QueryParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryParam() = default ;
      QueryParam& operator=(const QueryParam &) = default ;
      QueryParam& operator=(QueryParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramKey_ == nullptr
        && this->paramValue_ == nullptr; };
      // paramKey Field Functions 
      bool hasParamKey() const { return this->paramKey_ != nullptr;};
      void deleteParamKey() { this->paramKey_ = nullptr;};
      inline string getParamKey() const { DARABONBA_PTR_GET_DEFAULT(paramKey_, "") };
      inline QueryParam& setParamKey(string paramKey) { DARABONBA_PTR_SET_VALUE(paramKey_, paramKey) };


      // paramValue Field Functions 
      bool hasParamValue() const { return this->paramValue_ != nullptr;};
      void deleteParamValue() { this->paramValue_ = nullptr;};
      inline string getParamValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
      inline QueryParam& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


    protected:
      // The name of the parameter.
      shared_ptr<string> paramKey_ {};
      // The value of the parameter.
      shared_ptr<string> paramValue_ {};
    };

    class PathParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PathParams& obj) { 
        DARABONBA_PTR_TO_JSON(ParamKey, paramKey_);
        DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
      };
      friend void from_json(const Darabonba::Json& j, PathParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamKey, paramKey_);
        DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
      };
      PathParams() = default ;
      PathParams(const PathParams &) = default ;
      PathParams(PathParams &&) = default ;
      PathParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PathParams() = default ;
      PathParams& operator=(const PathParams &) = default ;
      PathParams& operator=(PathParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramKey_ == nullptr
        && this->paramValue_ == nullptr; };
      // paramKey Field Functions 
      bool hasParamKey() const { return this->paramKey_ != nullptr;};
      void deleteParamKey() { this->paramKey_ = nullptr;};
      inline string getParamKey() const { DARABONBA_PTR_GET_DEFAULT(paramKey_, "") };
      inline PathParams& setParamKey(string paramKey) { DARABONBA_PTR_SET_VALUE(paramKey_, paramKey) };


      // paramValue Field Functions 
      bool hasParamValue() const { return this->paramValue_ != nullptr;};
      void deleteParamValue() { this->paramValue_ = nullptr;};
      inline string getParamValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
      inline PathParams& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


    protected:
      // The name of the parameter.
      shared_ptr<string> paramKey_ {};
      // The value of the parameter.
      shared_ptr<string> paramValue_ {};
    };

    class HeadParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HeadParams& obj) { 
        DARABONBA_PTR_TO_JSON(ParamKey, paramKey_);
        DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
      };
      friend void from_json(const Darabonba::Json& j, HeadParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamKey, paramKey_);
        DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
      };
      HeadParams() = default ;
      HeadParams(const HeadParams &) = default ;
      HeadParams(HeadParams &&) = default ;
      HeadParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HeadParams() = default ;
      HeadParams& operator=(const HeadParams &) = default ;
      HeadParams& operator=(HeadParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramKey_ == nullptr
        && this->paramValue_ == nullptr; };
      // paramKey Field Functions 
      bool hasParamKey() const { return this->paramKey_ != nullptr;};
      void deleteParamKey() { this->paramKey_ = nullptr;};
      inline string getParamKey() const { DARABONBA_PTR_GET_DEFAULT(paramKey_, "") };
      inline HeadParams& setParamKey(string paramKey) { DARABONBA_PTR_SET_VALUE(paramKey_, paramKey) };


      // paramValue Field Functions 
      bool hasParamValue() const { return this->paramValue_ != nullptr;};
      void deleteParamValue() { this->paramValue_ = nullptr;};
      inline string getParamValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
      inline HeadParams& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


    protected:
      // The name of the parameter.
      shared_ptr<string> paramKey_ {};
      // The value of the parameter.
      shared_ptr<string> paramValue_ {};
    };

    class BodyParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BodyParams& obj) { 
        DARABONBA_PTR_TO_JSON(ParamKey, paramKey_);
        DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
      };
      friend void from_json(const Darabonba::Json& j, BodyParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamKey, paramKey_);
        DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
      };
      BodyParams() = default ;
      BodyParams(const BodyParams &) = default ;
      BodyParams(BodyParams &&) = default ;
      BodyParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BodyParams() = default ;
      BodyParams& operator=(const BodyParams &) = default ;
      BodyParams& operator=(BodyParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramKey_ == nullptr
        && this->paramValue_ == nullptr; };
      // paramKey Field Functions 
      bool hasParamKey() const { return this->paramKey_ != nullptr;};
      void deleteParamKey() { this->paramKey_ = nullptr;};
      inline string getParamKey() const { DARABONBA_PTR_GET_DEFAULT(paramKey_, "") };
      inline BodyParams& setParamKey(string paramKey) { DARABONBA_PTR_SET_VALUE(paramKey_, paramKey) };


      // paramValue Field Functions 
      bool hasParamValue() const { return this->paramValue_ != nullptr;};
      void deleteParamValue() { this->paramValue_ = nullptr;};
      inline string getParamValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
      inline BodyParams& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


    protected:
      // The name of the parameter.
      shared_ptr<string> paramKey_ {};
      // The value of the parameter.
      shared_ptr<string> paramValue_ {};
    };

    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->bodyContent_ == nullptr && this->bodyParams_ == nullptr && this->headParams_ == nullptr && this->pathParams_ == nullptr && this->queryParam_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline TestDataServiceApiRequest& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // bodyContent Field Functions 
    bool hasBodyContent() const { return this->bodyContent_ != nullptr;};
    void deleteBodyContent() { this->bodyContent_ = nullptr;};
    inline string getBodyContent() const { DARABONBA_PTR_GET_DEFAULT(bodyContent_, "") };
    inline TestDataServiceApiRequest& setBodyContent(string bodyContent) { DARABONBA_PTR_SET_VALUE(bodyContent_, bodyContent) };


    // bodyParams Field Functions 
    bool hasBodyParams() const { return this->bodyParams_ != nullptr;};
    void deleteBodyParams() { this->bodyParams_ = nullptr;};
    inline const vector<TestDataServiceApiRequest::BodyParams> & getBodyParams() const { DARABONBA_PTR_GET_CONST(bodyParams_, vector<TestDataServiceApiRequest::BodyParams>) };
    inline vector<TestDataServiceApiRequest::BodyParams> getBodyParams() { DARABONBA_PTR_GET(bodyParams_, vector<TestDataServiceApiRequest::BodyParams>) };
    inline TestDataServiceApiRequest& setBodyParams(const vector<TestDataServiceApiRequest::BodyParams> & bodyParams) { DARABONBA_PTR_SET_VALUE(bodyParams_, bodyParams) };
    inline TestDataServiceApiRequest& setBodyParams(vector<TestDataServiceApiRequest::BodyParams> && bodyParams) { DARABONBA_PTR_SET_RVALUE(bodyParams_, bodyParams) };


    // headParams Field Functions 
    bool hasHeadParams() const { return this->headParams_ != nullptr;};
    void deleteHeadParams() { this->headParams_ = nullptr;};
    inline const vector<TestDataServiceApiRequest::HeadParams> & getHeadParams() const { DARABONBA_PTR_GET_CONST(headParams_, vector<TestDataServiceApiRequest::HeadParams>) };
    inline vector<TestDataServiceApiRequest::HeadParams> getHeadParams() { DARABONBA_PTR_GET(headParams_, vector<TestDataServiceApiRequest::HeadParams>) };
    inline TestDataServiceApiRequest& setHeadParams(const vector<TestDataServiceApiRequest::HeadParams> & headParams) { DARABONBA_PTR_SET_VALUE(headParams_, headParams) };
    inline TestDataServiceApiRequest& setHeadParams(vector<TestDataServiceApiRequest::HeadParams> && headParams) { DARABONBA_PTR_SET_RVALUE(headParams_, headParams) };


    // pathParams Field Functions 
    bool hasPathParams() const { return this->pathParams_ != nullptr;};
    void deletePathParams() { this->pathParams_ = nullptr;};
    inline const vector<TestDataServiceApiRequest::PathParams> & getPathParams() const { DARABONBA_PTR_GET_CONST(pathParams_, vector<TestDataServiceApiRequest::PathParams>) };
    inline vector<TestDataServiceApiRequest::PathParams> getPathParams() { DARABONBA_PTR_GET(pathParams_, vector<TestDataServiceApiRequest::PathParams>) };
    inline TestDataServiceApiRequest& setPathParams(const vector<TestDataServiceApiRequest::PathParams> & pathParams) { DARABONBA_PTR_SET_VALUE(pathParams_, pathParams) };
    inline TestDataServiceApiRequest& setPathParams(vector<TestDataServiceApiRequest::PathParams> && pathParams) { DARABONBA_PTR_SET_RVALUE(pathParams_, pathParams) };


    // queryParam Field Functions 
    bool hasQueryParam() const { return this->queryParam_ != nullptr;};
    void deleteQueryParam() { this->queryParam_ = nullptr;};
    inline const vector<TestDataServiceApiRequest::QueryParam> & getQueryParam() const { DARABONBA_PTR_GET_CONST(queryParam_, vector<TestDataServiceApiRequest::QueryParam>) };
    inline vector<TestDataServiceApiRequest::QueryParam> getQueryParam() { DARABONBA_PTR_GET(queryParam_, vector<TestDataServiceApiRequest::QueryParam>) };
    inline TestDataServiceApiRequest& setQueryParam(const vector<TestDataServiceApiRequest::QueryParam> & queryParam) { DARABONBA_PTR_SET_VALUE(queryParam_, queryParam) };
    inline TestDataServiceApiRequest& setQueryParam(vector<TestDataServiceApiRequest::QueryParam> && queryParam) { DARABONBA_PTR_SET_RVALUE(queryParam_, queryParam) };


  protected:
    // The ID of the DataService Studio API on which the test is performed.
    // 
    // This parameter is required.
    shared_ptr<int64_t> apiId_ {};
    // The data of the request body.
    shared_ptr<string> bodyContent_ {};
    // The request parameters that are contained in the request body.
    shared_ptr<vector<TestDataServiceApiRequest::BodyParams>> bodyParams_ {};
    // The request parameters that are contained in the request header.
    shared_ptr<vector<TestDataServiceApiRequest::HeadParams>> headParams_ {};
    // The request parameters that are contained in the request path.
    shared_ptr<vector<TestDataServiceApiRequest::PathParams>> pathParams_ {};
    // The request parameters that are contained in the query.
    shared_ptr<vector<TestDataServiceApiRequest::QueryParam>> queryParam_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
