// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECEXAMPLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECEXAMPLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecExamplesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecExamplesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Examples, examples_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecExamplesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Examples, examples_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisecExamplesResponseBody() = default ;
    DescribeApisecExamplesResponseBody(const DescribeApisecExamplesResponseBody &) = default ;
    DescribeApisecExamplesResponseBody(DescribeApisecExamplesResponseBody &&) = default ;
    DescribeApisecExamplesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecExamplesResponseBody() = default ;
    DescribeApisecExamplesResponseBody& operator=(const DescribeApisecExamplesResponseBody &) = default ;
    DescribeApisecExamplesResponseBody& operator=(DescribeApisecExamplesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Examples : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Examples& obj) { 
        DARABONBA_PTR_TO_JSON(ApiUrl, apiUrl_);
        DARABONBA_PTR_TO_JSON(PocPayload, pocPayload_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Request, request_);
        DARABONBA_PTR_TO_JSON(RequestSensitiveData, requestSensitiveData_);
        DARABONBA_PTR_TO_JSON(Response, response_);
        DARABONBA_PTR_TO_JSON(ResponseSensitiveData, responseSensitiveData_);
      };
      friend void from_json(const Darabonba::Json& j, Examples& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiUrl, apiUrl_);
        DARABONBA_PTR_FROM_JSON(PocPayload, pocPayload_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Request, request_);
        DARABONBA_PTR_FROM_JSON(RequestSensitiveData, requestSensitiveData_);
        DARABONBA_PTR_FROM_JSON(Response, response_);
        DARABONBA_PTR_FROM_JSON(ResponseSensitiveData, responseSensitiveData_);
      };
      Examples() = default ;
      Examples(const Examples &) = default ;
      Examples(Examples &&) = default ;
      Examples(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Examples() = default ;
      Examples& operator=(const Examples &) = default ;
      Examples& operator=(Examples &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResponseSensitiveData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseSensitiveData& obj) { 
          DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
          DARABONBA_PTR_TO_JSON(SensitiveDataList, sensitiveDataList_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseSensitiveData& obj) { 
          DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
          DARABONBA_PTR_FROM_JSON(SensitiveDataList, sensitiveDataList_);
        };
        ResponseSensitiveData() = default ;
        ResponseSensitiveData(const ResponseSensitiveData &) = default ;
        ResponseSensitiveData(ResponseSensitiveData &&) = default ;
        ResponseSensitiveData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseSensitiveData() = default ;
        ResponseSensitiveData& operator=(const ResponseSensitiveData &) = default ;
        ResponseSensitiveData& operator=(ResponseSensitiveData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sensitiveCode_ == nullptr
        && this->sensitiveDataList_ == nullptr; };
        // sensitiveCode Field Functions 
        bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
        void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
        inline string getSensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, "") };
        inline ResponseSensitiveData& setSensitiveCode(string sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


        // sensitiveDataList Field Functions 
        bool hasSensitiveDataList() const { return this->sensitiveDataList_ != nullptr;};
        void deleteSensitiveDataList() { this->sensitiveDataList_ = nullptr;};
        inline const vector<string> & getSensitiveDataList() const { DARABONBA_PTR_GET_CONST(sensitiveDataList_, vector<string>) };
        inline vector<string> getSensitiveDataList() { DARABONBA_PTR_GET(sensitiveDataList_, vector<string>) };
        inline ResponseSensitiveData& setSensitiveDataList(const vector<string> & sensitiveDataList) { DARABONBA_PTR_SET_VALUE(sensitiveDataList_, sensitiveDataList) };
        inline ResponseSensitiveData& setSensitiveDataList(vector<string> && sensitiveDataList) { DARABONBA_PTR_SET_RVALUE(sensitiveDataList_, sensitiveDataList) };


      protected:
        shared_ptr<string> sensitiveCode_ {};
        shared_ptr<vector<string>> sensitiveDataList_ {};
      };

      class RequestSensitiveData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestSensitiveData& obj) { 
          DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
          DARABONBA_PTR_TO_JSON(SensitiveDataList, sensitiveDataList_);
        };
        friend void from_json(const Darabonba::Json& j, RequestSensitiveData& obj) { 
          DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
          DARABONBA_PTR_FROM_JSON(SensitiveDataList, sensitiveDataList_);
        };
        RequestSensitiveData() = default ;
        RequestSensitiveData(const RequestSensitiveData &) = default ;
        RequestSensitiveData(RequestSensitiveData &&) = default ;
        RequestSensitiveData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RequestSensitiveData() = default ;
        RequestSensitiveData& operator=(const RequestSensitiveData &) = default ;
        RequestSensitiveData& operator=(RequestSensitiveData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sensitiveCode_ == nullptr
        && this->sensitiveDataList_ == nullptr; };
        // sensitiveCode Field Functions 
        bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
        void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
        inline string getSensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, "") };
        inline RequestSensitiveData& setSensitiveCode(string sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


        // sensitiveDataList Field Functions 
        bool hasSensitiveDataList() const { return this->sensitiveDataList_ != nullptr;};
        void deleteSensitiveDataList() { this->sensitiveDataList_ = nullptr;};
        inline const vector<string> & getSensitiveDataList() const { DARABONBA_PTR_GET_CONST(sensitiveDataList_, vector<string>) };
        inline vector<string> getSensitiveDataList() { DARABONBA_PTR_GET(sensitiveDataList_, vector<string>) };
        inline RequestSensitiveData& setSensitiveDataList(const vector<string> & sensitiveDataList) { DARABONBA_PTR_SET_VALUE(sensitiveDataList_, sensitiveDataList) };
        inline RequestSensitiveData& setSensitiveDataList(vector<string> && sensitiveDataList) { DARABONBA_PTR_SET_RVALUE(sensitiveDataList_, sensitiveDataList) };


      protected:
        shared_ptr<string> sensitiveCode_ {};
        shared_ptr<vector<string>> sensitiveDataList_ {};
      };

      virtual bool empty() const override { return this->apiUrl_ == nullptr
        && this->pocPayload_ == nullptr && this->protocol_ == nullptr && this->request_ == nullptr && this->requestSensitiveData_ == nullptr && this->response_ == nullptr
        && this->responseSensitiveData_ == nullptr; };
      // apiUrl Field Functions 
      bool hasApiUrl() const { return this->apiUrl_ != nullptr;};
      void deleteApiUrl() { this->apiUrl_ = nullptr;};
      inline string getApiUrl() const { DARABONBA_PTR_GET_DEFAULT(apiUrl_, "") };
      inline Examples& setApiUrl(string apiUrl) { DARABONBA_PTR_SET_VALUE(apiUrl_, apiUrl) };


      // pocPayload Field Functions 
      bool hasPocPayload() const { return this->pocPayload_ != nullptr;};
      void deletePocPayload() { this->pocPayload_ = nullptr;};
      inline string getPocPayload() const { DARABONBA_PTR_GET_DEFAULT(pocPayload_, "") };
      inline Examples& setPocPayload(string pocPayload) { DARABONBA_PTR_SET_VALUE(pocPayload_, pocPayload) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Examples& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // request Field Functions 
      bool hasRequest() const { return this->request_ != nullptr;};
      void deleteRequest() { this->request_ = nullptr;};
      inline string getRequest() const { DARABONBA_PTR_GET_DEFAULT(request_, "") };
      inline Examples& setRequest(string request) { DARABONBA_PTR_SET_VALUE(request_, request) };


      // requestSensitiveData Field Functions 
      bool hasRequestSensitiveData() const { return this->requestSensitiveData_ != nullptr;};
      void deleteRequestSensitiveData() { this->requestSensitiveData_ = nullptr;};
      inline const vector<Examples::RequestSensitiveData> & getRequestSensitiveData() const { DARABONBA_PTR_GET_CONST(requestSensitiveData_, vector<Examples::RequestSensitiveData>) };
      inline vector<Examples::RequestSensitiveData> getRequestSensitiveData() { DARABONBA_PTR_GET(requestSensitiveData_, vector<Examples::RequestSensitiveData>) };
      inline Examples& setRequestSensitiveData(const vector<Examples::RequestSensitiveData> & requestSensitiveData) { DARABONBA_PTR_SET_VALUE(requestSensitiveData_, requestSensitiveData) };
      inline Examples& setRequestSensitiveData(vector<Examples::RequestSensitiveData> && requestSensitiveData) { DARABONBA_PTR_SET_RVALUE(requestSensitiveData_, requestSensitiveData) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline string getResponse() const { DARABONBA_PTR_GET_DEFAULT(response_, "") };
      inline Examples& setResponse(string response) { DARABONBA_PTR_SET_VALUE(response_, response) };


      // responseSensitiveData Field Functions 
      bool hasResponseSensitiveData() const { return this->responseSensitiveData_ != nullptr;};
      void deleteResponseSensitiveData() { this->responseSensitiveData_ = nullptr;};
      inline const vector<Examples::ResponseSensitiveData> & getResponseSensitiveData() const { DARABONBA_PTR_GET_CONST(responseSensitiveData_, vector<Examples::ResponseSensitiveData>) };
      inline vector<Examples::ResponseSensitiveData> getResponseSensitiveData() { DARABONBA_PTR_GET(responseSensitiveData_, vector<Examples::ResponseSensitiveData>) };
      inline Examples& setResponseSensitiveData(const vector<Examples::ResponseSensitiveData> & responseSensitiveData) { DARABONBA_PTR_SET_VALUE(responseSensitiveData_, responseSensitiveData) };
      inline Examples& setResponseSensitiveData(vector<Examples::ResponseSensitiveData> && responseSensitiveData) { DARABONBA_PTR_SET_RVALUE(responseSensitiveData_, responseSensitiveData) };


    protected:
      shared_ptr<string> apiUrl_ {};
      shared_ptr<string> pocPayload_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> request_ {};
      shared_ptr<vector<Examples::RequestSensitiveData>> requestSensitiveData_ {};
      shared_ptr<string> response_ {};
      shared_ptr<vector<Examples::ResponseSensitiveData>> responseSensitiveData_ {};
    };

    virtual bool empty() const override { return this->examples_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<DescribeApisecExamplesResponseBody::Examples> & getExamples() const { DARABONBA_PTR_GET_CONST(examples_, vector<DescribeApisecExamplesResponseBody::Examples>) };
    inline vector<DescribeApisecExamplesResponseBody::Examples> getExamples() { DARABONBA_PTR_GET(examples_, vector<DescribeApisecExamplesResponseBody::Examples>) };
    inline DescribeApisecExamplesResponseBody& setExamples(const vector<DescribeApisecExamplesResponseBody::Examples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline DescribeApisecExamplesResponseBody& setExamples(vector<DescribeApisecExamplesResponseBody::Examples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeApisecExamplesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeApisecExamplesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecExamplesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisecExamplesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeApisecExamplesResponseBody::Examples>> examples_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
