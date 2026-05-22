// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETESTCASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETESTCASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceTestCasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTestCasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTestCasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceTestCasesResponseBody() = default ;
    ListServiceTestCasesResponseBody(const ListServiceTestCasesResponseBody &) = default ;
    ListServiceTestCasesResponseBody(ListServiceTestCasesResponseBody &&) = default ;
    ListServiceTestCasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTestCasesResponseBody() = default ;
    ListServiceTestCasesResponseBody& operator=(const ListServiceTestCasesResponseBody &) = default ;
    ListServiceTestCasesResponseBody& operator=(ListServiceTestCasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TestCaseId, testCaseId_);
        DARABONBA_PTR_TO_JSON(TestCaseName, testCaseName_);
        DARABONBA_PTR_TO_JSON(TestConfig, testConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TestCaseId, testCaseId_);
        DARABONBA_PTR_FROM_JSON(TestCaseName, testCaseName_);
        DARABONBA_PTR_FROM_JSON(TestConfig, testConfig_);
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
      virtual bool empty() const override { return this->templateName_ == nullptr
        && this->testCaseId_ == nullptr && this->testCaseName_ == nullptr && this->testConfig_ == nullptr; };
      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // testCaseId Field Functions 
      bool hasTestCaseId() const { return this->testCaseId_ != nullptr;};
      void deleteTestCaseId() { this->testCaseId_ = nullptr;};
      inline string getTestCaseId() const { DARABONBA_PTR_GET_DEFAULT(testCaseId_, "") };
      inline Data& setTestCaseId(string testCaseId) { DARABONBA_PTR_SET_VALUE(testCaseId_, testCaseId) };


      // testCaseName Field Functions 
      bool hasTestCaseName() const { return this->testCaseName_ != nullptr;};
      void deleteTestCaseName() { this->testCaseName_ = nullptr;};
      inline string getTestCaseName() const { DARABONBA_PTR_GET_DEFAULT(testCaseName_, "") };
      inline Data& setTestCaseName(string testCaseName) { DARABONBA_PTR_SET_VALUE(testCaseName_, testCaseName) };


      // testConfig Field Functions 
      bool hasTestConfig() const { return this->testConfig_ != nullptr;};
      void deleteTestConfig() { this->testConfig_ = nullptr;};
      inline string getTestConfig() const { DARABONBA_PTR_GET_DEFAULT(testConfig_, "") };
      inline Data& setTestConfig(string testConfig) { DARABONBA_PTR_SET_VALUE(testConfig_, testConfig) };


    protected:
      // The template name.
      shared_ptr<string> templateName_ {};
      // The service test case id.
      shared_ptr<string> testCaseId_ {};
      // The service test case name.
      shared_ptr<string> testCaseName_ {};
      // The service test config.
      shared_ptr<string> testConfig_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListServiceTestCasesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListServiceTestCasesResponseBody::Data>) };
    inline vector<ListServiceTestCasesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListServiceTestCasesResponseBody::Data>) };
    inline ListServiceTestCasesResponseBody& setData(const vector<ListServiceTestCasesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListServiceTestCasesResponseBody& setData(vector<ListServiceTestCasesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceTestCasesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceTestCasesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceTestCasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceTestCasesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data returned.
    shared_ptr<vector<ListServiceTestCasesResponseBody::Data>> data_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
