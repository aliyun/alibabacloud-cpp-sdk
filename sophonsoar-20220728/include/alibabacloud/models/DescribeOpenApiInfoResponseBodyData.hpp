// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENAPIINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENAPIINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeOpenApiInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenApiInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_TO_JSON(ResponseDemo, responseDemo_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenApiInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(OutputParams, outputParams_);
      DARABONBA_PTR_FROM_JSON(ResponseDemo, responseDemo_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeOpenApiInfoResponseBodyData() = default ;
    DescribeOpenApiInfoResponseBodyData(const DescribeOpenApiInfoResponseBodyData &) = default ;
    DescribeOpenApiInfoResponseBodyData(DescribeOpenApiInfoResponseBodyData &&) = default ;
    DescribeOpenApiInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenApiInfoResponseBodyData() = default ;
    DescribeOpenApiInfoResponseBodyData& operator=(const DescribeOpenApiInfoResponseBodyData &) = default ;
    DescribeOpenApiInfoResponseBodyData& operator=(DescribeOpenApiInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->inputParams_ == nullptr && return this->outputParams_ == nullptr && return this->responseDemo_ == nullptr && return this->summary_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeOpenApiInfoResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline DescribeOpenApiInfoResponseBodyData& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // outputParams Field Functions 
    bool hasOutputParams() const { return this->outputParams_ != nullptr;};
    void deleteOutputParams() { this->outputParams_ = nullptr;};
    inline string outputParams() const { DARABONBA_PTR_GET_DEFAULT(outputParams_, "") };
    inline DescribeOpenApiInfoResponseBodyData& setOutputParams(string outputParams) { DARABONBA_PTR_SET_VALUE(outputParams_, outputParams) };


    // responseDemo Field Functions 
    bool hasResponseDemo() const { return this->responseDemo_ != nullptr;};
    void deleteResponseDemo() { this->responseDemo_ = nullptr;};
    inline string responseDemo() const { DARABONBA_PTR_GET_DEFAULT(responseDemo_, "") };
    inline DescribeOpenApiInfoResponseBodyData& setResponseDemo(string responseDemo) { DARABONBA_PTR_SET_VALUE(responseDemo_, responseDemo) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline DescribeOpenApiInfoResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeOpenApiInfoResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The description of the API operation.
    std::shared_ptr<string> description_ = nullptr;
    // The input parameters of the API operation.
    std::shared_ptr<string> inputParams_ = nullptr;
    // The output parameters of the API operation.
    std::shared_ptr<string> outputParams_ = nullptr;
    // The sample response parameters.
    std::shared_ptr<string> responseDemo_ = nullptr;
    // The summary of the API operation.
    std::shared_ptr<string> summary_ = nullptr;
    // The title of the API operation.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
