// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TestDataServiceApiRequestBodyParams.hpp>
#include <alibabacloud/models/TestDataServiceApiRequestHeadParams.hpp>
#include <alibabacloud/models/TestDataServiceApiRequestPathParams.hpp>
#include <alibabacloud/models/TestDataServiceApiRequestQueryParam.hpp>
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
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->bodyContent_ != nullptr && this->bodyParams_ != nullptr && this->headParams_ != nullptr && this->pathParams_ != nullptr && this->queryParam_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline TestDataServiceApiRequest& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // bodyContent Field Functions 
    bool hasBodyContent() const { return this->bodyContent_ != nullptr;};
    void deleteBodyContent() { this->bodyContent_ = nullptr;};
    inline string bodyContent() const { DARABONBA_PTR_GET_DEFAULT(bodyContent_, "") };
    inline TestDataServiceApiRequest& setBodyContent(string bodyContent) { DARABONBA_PTR_SET_VALUE(bodyContent_, bodyContent) };


    // bodyParams Field Functions 
    bool hasBodyParams() const { return this->bodyParams_ != nullptr;};
    void deleteBodyParams() { this->bodyParams_ = nullptr;};
    inline const vector<TestDataServiceApiRequestBodyParams> & bodyParams() const { DARABONBA_PTR_GET_CONST(bodyParams_, vector<TestDataServiceApiRequestBodyParams>) };
    inline vector<TestDataServiceApiRequestBodyParams> bodyParams() { DARABONBA_PTR_GET(bodyParams_, vector<TestDataServiceApiRequestBodyParams>) };
    inline TestDataServiceApiRequest& setBodyParams(const vector<TestDataServiceApiRequestBodyParams> & bodyParams) { DARABONBA_PTR_SET_VALUE(bodyParams_, bodyParams) };
    inline TestDataServiceApiRequest& setBodyParams(vector<TestDataServiceApiRequestBodyParams> && bodyParams) { DARABONBA_PTR_SET_RVALUE(bodyParams_, bodyParams) };


    // headParams Field Functions 
    bool hasHeadParams() const { return this->headParams_ != nullptr;};
    void deleteHeadParams() { this->headParams_ = nullptr;};
    inline const vector<TestDataServiceApiRequestHeadParams> & headParams() const { DARABONBA_PTR_GET_CONST(headParams_, vector<TestDataServiceApiRequestHeadParams>) };
    inline vector<TestDataServiceApiRequestHeadParams> headParams() { DARABONBA_PTR_GET(headParams_, vector<TestDataServiceApiRequestHeadParams>) };
    inline TestDataServiceApiRequest& setHeadParams(const vector<TestDataServiceApiRequestHeadParams> & headParams) { DARABONBA_PTR_SET_VALUE(headParams_, headParams) };
    inline TestDataServiceApiRequest& setHeadParams(vector<TestDataServiceApiRequestHeadParams> && headParams) { DARABONBA_PTR_SET_RVALUE(headParams_, headParams) };


    // pathParams Field Functions 
    bool hasPathParams() const { return this->pathParams_ != nullptr;};
    void deletePathParams() { this->pathParams_ = nullptr;};
    inline const vector<TestDataServiceApiRequestPathParams> & pathParams() const { DARABONBA_PTR_GET_CONST(pathParams_, vector<TestDataServiceApiRequestPathParams>) };
    inline vector<TestDataServiceApiRequestPathParams> pathParams() { DARABONBA_PTR_GET(pathParams_, vector<TestDataServiceApiRequestPathParams>) };
    inline TestDataServiceApiRequest& setPathParams(const vector<TestDataServiceApiRequestPathParams> & pathParams) { DARABONBA_PTR_SET_VALUE(pathParams_, pathParams) };
    inline TestDataServiceApiRequest& setPathParams(vector<TestDataServiceApiRequestPathParams> && pathParams) { DARABONBA_PTR_SET_RVALUE(pathParams_, pathParams) };


    // queryParam Field Functions 
    bool hasQueryParam() const { return this->queryParam_ != nullptr;};
    void deleteQueryParam() { this->queryParam_ = nullptr;};
    inline const vector<TestDataServiceApiRequestQueryParam> & queryParam() const { DARABONBA_PTR_GET_CONST(queryParam_, vector<TestDataServiceApiRequestQueryParam>) };
    inline vector<TestDataServiceApiRequestQueryParam> queryParam() { DARABONBA_PTR_GET(queryParam_, vector<TestDataServiceApiRequestQueryParam>) };
    inline TestDataServiceApiRequest& setQueryParam(const vector<TestDataServiceApiRequestQueryParam> & queryParam) { DARABONBA_PTR_SET_VALUE(queryParam_, queryParam) };
    inline TestDataServiceApiRequest& setQueryParam(vector<TestDataServiceApiRequestQueryParam> && queryParam) { DARABONBA_PTR_SET_RVALUE(queryParam_, queryParam) };


  protected:
    // The ID of the DataService Studio API on which the test is performed.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // The data of the request body.
    std::shared_ptr<string> bodyContent_ = nullptr;
    // The request parameters that are contained in the request body.
    std::shared_ptr<vector<TestDataServiceApiRequestBodyParams>> bodyParams_ = nullptr;
    // The request parameters that are contained in the request header.
    std::shared_ptr<vector<TestDataServiceApiRequestHeadParams>> headParams_ = nullptr;
    // The request parameters that are contained in the request path.
    std::shared_ptr<vector<TestDataServiceApiRequestPathParams>> pathParams_ = nullptr;
    // The request parameters that are contained in the query.
    std::shared_ptr<vector<TestDataServiceApiRequestQueryParam>> queryParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
