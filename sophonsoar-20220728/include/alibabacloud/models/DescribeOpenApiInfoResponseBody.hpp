// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENAPIINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENAPIINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeOpenApiInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenApiInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenApiInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenApiInfoResponseBody() = default ;
    DescribeOpenApiInfoResponseBody(const DescribeOpenApiInfoResponseBody &) = default ;
    DescribeOpenApiInfoResponseBody(DescribeOpenApiInfoResponseBody &&) = default ;
    DescribeOpenApiInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenApiInfoResponseBody() = default ;
    DescribeOpenApiInfoResponseBody& operator=(const DescribeOpenApiInfoResponseBody &) = default ;
    DescribeOpenApiInfoResponseBody& operator=(DescribeOpenApiInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
        DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
        DARABONBA_PTR_TO_JSON(ResponseDemo, responseDemo_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
        DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
        DARABONBA_PTR_FROM_JSON(ResponseDemo, responseDemo_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      virtual bool empty() const override { return this->description_ == nullptr
        && this->inputParams_ == nullptr && this->outputParams_ == nullptr && this->responseDemo_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // inputParams Field Functions 
      bool hasInputParams() const { return this->inputParams_ != nullptr;};
      void deleteInputParams() { this->inputParams_ = nullptr;};
      inline string getInputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
      inline Data& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


      // outputParams Field Functions 
      bool hasOutputParams() const { return this->outputParams_ != nullptr;};
      void deleteOutputParams() { this->outputParams_ = nullptr;};
      inline string getOutputParams() const { DARABONBA_PTR_GET_DEFAULT(outputParams_, "") };
      inline Data& setOutputParams(string outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };


      // responseDemo Field Functions 
      bool hasResponseDemo() const { return this->responseDemo_ != nullptr;};
      void deleteResponseDemo() { this->responseDemo_ = nullptr;};
      inline string getResponseDemo() const { DARABONBA_PTR_GET_DEFAULT(responseDemo_, "") };
      inline Data& setResponseDemo(string responseDemo) { DARABONBA_PTR_SET_VALUE(responseDemo_, responseDemo) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The description of the API operation.
      shared_ptr<string> description_ {};
      // The input parameters of the API operation.
      shared_ptr<string> inputParams_ {};
      // The output parameters of the API operation.
      shared_ptr<string> outputParams_ {};
      // The sample response parameters.
      shared_ptr<string> responseDemo_ {};
      // The summary of the API operation.
      shared_ptr<string> summary_ {};
      // The title of the API operation.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenApiInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenApiInfoResponseBody::Data) };
    inline DescribeOpenApiInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenApiInfoResponseBody::Data) };
    inline DescribeOpenApiInfoResponseBody& setData(const DescribeOpenApiInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenApiInfoResponseBody& setData(DescribeOpenApiInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenApiInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeOpenApiInfoResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
