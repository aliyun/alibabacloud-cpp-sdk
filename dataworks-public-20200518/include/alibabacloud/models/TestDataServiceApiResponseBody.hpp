// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASERVICEAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASERVICEAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TestDataServiceApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataServiceApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataServiceApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TestDataServiceApiResponseBody() = default ;
    TestDataServiceApiResponseBody(const TestDataServiceApiResponseBody &) = default ;
    TestDataServiceApiResponseBody(TestDataServiceApiResponseBody &&) = default ;
    TestDataServiceApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataServiceApiResponseBody() = default ;
    TestDataServiceApiResponseBody& operator=(const TestDataServiceApiResponseBody &) = default ;
    TestDataServiceApiResponseBody& operator=(TestDataServiceApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TestId, testId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TestId, testId_);
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
      virtual bool empty() const override { return this->testId_ == nullptr; };
      // testId Field Functions 
      bool hasTestId() const { return this->testId_ != nullptr;};
      void deleteTestId() { this->testId_ = nullptr;};
      inline string getTestId() const { DARABONBA_PTR_GET_DEFAULT(testId_, "") };
      inline Data& setTestId(string testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


    protected:
      // The ID of the test.
      shared_ptr<string> testId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TestDataServiceApiResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TestDataServiceApiResponseBody::Data) };
    inline TestDataServiceApiResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TestDataServiceApiResponseBody::Data) };
    inline TestDataServiceApiResponseBody& setData(const TestDataServiceApiResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TestDataServiceApiResponseBody& setData(TestDataServiceApiResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestDataServiceApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the test.
    shared_ptr<TestDataServiceApiResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
