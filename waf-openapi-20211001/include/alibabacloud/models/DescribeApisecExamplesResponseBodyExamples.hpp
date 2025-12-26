// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEXAMPLESRESPONSEBODYEXAMPLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEXAMPLESRESPONSEBODYEXAMPLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData.hpp>
#include <alibabacloud/models/DescribeApisecExamplesResponseBodyExamplesResponseSensitiveData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecExamplesResponseBodyExamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecExamplesResponseBodyExamples& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUrl, apiUrl_);
      DARABONBA_PTR_TO_JSON(PocPayload, pocPayload_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(RequestSensitiveData, requestSensitiveData_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(ResponseSensitiveData, responseSensitiveData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecExamplesResponseBodyExamples& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUrl, apiUrl_);
      DARABONBA_PTR_FROM_JSON(PocPayload, pocPayload_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(RequestSensitiveData, requestSensitiveData_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(ResponseSensitiveData, responseSensitiveData_);
    };
    DescribeApisecExamplesResponseBodyExamples() = default ;
    DescribeApisecExamplesResponseBodyExamples(const DescribeApisecExamplesResponseBodyExamples &) = default ;
    DescribeApisecExamplesResponseBodyExamples(DescribeApisecExamplesResponseBodyExamples &&) = default ;
    DescribeApisecExamplesResponseBodyExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecExamplesResponseBodyExamples() = default ;
    DescribeApisecExamplesResponseBodyExamples& operator=(const DescribeApisecExamplesResponseBodyExamples &) = default ;
    DescribeApisecExamplesResponseBodyExamples& operator=(DescribeApisecExamplesResponseBodyExamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiUrl_ == nullptr
        && return this->pocPayload_ == nullptr && return this->protocol_ == nullptr && return this->request_ == nullptr && return this->requestSensitiveData_ == nullptr && return this->response_ == nullptr
        && return this->responseSensitiveData_ == nullptr; };
    // apiUrl Field Functions 
    bool hasApiUrl() const { return this->apiUrl_ != nullptr;};
    void deleteApiUrl() { this->apiUrl_ = nullptr;};
    inline string apiUrl() const { DARABONBA_PTR_GET_DEFAULT(apiUrl_, "") };
    inline DescribeApisecExamplesResponseBodyExamples& setApiUrl(string apiUrl) { DARABONBA_PTR_SET_VALUE(apiUrl_, apiUrl) };


    // pocPayload Field Functions 
    bool hasPocPayload() const { return this->pocPayload_ != nullptr;};
    void deletePocPayload() { this->pocPayload_ = nullptr;};
    inline string pocPayload() const { DARABONBA_PTR_GET_DEFAULT(pocPayload_, "") };
    inline DescribeApisecExamplesResponseBodyExamples& setPocPayload(string pocPayload) { DARABONBA_PTR_SET_VALUE(pocPayload_, pocPayload) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeApisecExamplesResponseBodyExamples& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline string request() const { DARABONBA_PTR_GET_DEFAULT(request_, "") };
    inline DescribeApisecExamplesResponseBodyExamples& setRequest(string request) { DARABONBA_PTR_SET_VALUE(request_, request) };


    // requestSensitiveData Field Functions 
    bool hasRequestSensitiveData() const { return this->requestSensitiveData_ != nullptr;};
    void deleteRequestSensitiveData() { this->requestSensitiveData_ = nullptr;};
    inline const vector<Models::DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData> & requestSensitiveData() const { DARABONBA_PTR_GET_CONST(requestSensitiveData_, vector<Models::DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData>) };
    inline vector<Models::DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData> requestSensitiveData() { DARABONBA_PTR_GET(requestSensitiveData_, vector<Models::DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData>) };
    inline DescribeApisecExamplesResponseBodyExamples& setRequestSensitiveData(const vector<Models::DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData> & requestSensitiveData) { DARABONBA_PTR_SET_VALUE(requestSensitiveData_, requestSensitiveData) };
    inline DescribeApisecExamplesResponseBodyExamples& setRequestSensitiveData(vector<Models::DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData> && requestSensitiveData) { DARABONBA_PTR_SET_RVALUE(requestSensitiveData_, requestSensitiveData) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline string response() const { DARABONBA_PTR_GET_DEFAULT(response_, "") };
    inline DescribeApisecExamplesResponseBodyExamples& setResponse(string response) { DARABONBA_PTR_SET_VALUE(response_, response) };


    // responseSensitiveData Field Functions 
    bool hasResponseSensitiveData() const { return this->responseSensitiveData_ != nullptr;};
    void deleteResponseSensitiveData() { this->responseSensitiveData_ = nullptr;};
    inline const vector<Models::DescribeApisecExamplesResponseBodyExamplesResponseSensitiveData> & responseSensitiveData() const { DARABONBA_PTR_GET_CONST(responseSensitiveData_, vector<Models::DescribeApisecExamplesResponseBodyExamplesResponseSensitiveData>) };
    inline vector<Models::DescribeApisecExamplesResponseBodyExamplesResponseSensitiveData> responseSensitiveData() { DARABONBA_PTR_GET(responseSensitiveData_, vector<Models::DescribeApisecExamplesResponseBodyExamplesResponseSensitiveData>) };
    inline DescribeApisecExamplesResponseBodyExamples& setResponseSensitiveData(const vector<Models::DescribeApisecExamplesResponseBodyExamplesResponseSensitiveData> & responseSensitiveData) { DARABONBA_PTR_SET_VALUE(responseSensitiveData_, responseSensitiveData) };
    inline DescribeApisecExamplesResponseBodyExamples& setResponseSensitiveData(vector<Models::DescribeApisecExamplesResponseBodyExamplesResponseSensitiveData> && responseSensitiveData) { DARABONBA_PTR_SET_RVALUE(responseSensitiveData_, responseSensitiveData) };


  protected:
    std::shared_ptr<string> apiUrl_ = nullptr;
    std::shared_ptr<string> pocPayload_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> request_ = nullptr;
    std::shared_ptr<vector<Models::DescribeApisecExamplesResponseBodyExamplesRequestSensitiveData>> requestSensitiveData_ = nullptr;
    std::shared_ptr<string> response_ = nullptr;
    std::shared_ptr<vector<Models::DescribeApisecExamplesResponseBodyExamplesResponseSensitiveData>> responseSensitiveData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
