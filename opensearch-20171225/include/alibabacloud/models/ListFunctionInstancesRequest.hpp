// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListFunctionInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(functionType, functionType_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(output, output_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(functionType, functionType_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(output, output_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    ListFunctionInstancesRequest() = default ;
    ListFunctionInstancesRequest(const ListFunctionInstancesRequest &) = default ;
    ListFunctionInstancesRequest(ListFunctionInstancesRequest &&) = default ;
    ListFunctionInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionInstancesRequest() = default ;
    ListFunctionInstancesRequest& operator=(const ListFunctionInstancesRequest &) = default ;
    ListFunctionInstancesRequest& operator=(ListFunctionInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionType_ == nullptr
        && this->modelType_ == nullptr && this->output_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->source_ == nullptr; };
    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline ListFunctionInstancesRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListFunctionInstancesRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline ListFunctionInstancesRequest& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFunctionInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFunctionInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListFunctionInstancesRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The type of the feature.
    shared_ptr<string> functionType_ {};
    // The type of the model.
    shared_ptr<string> modelType_ {};
    // The level of detail for the returned information. Valid values:
    // 
    // - normal: Displays information such as createParameters and cron. This is the default value.
    // 
    // - simple: Displays only basic information.
    // 
    // - detail: Returns the details of the training task.
    shared_ptr<string> output_ {};
    // The page number. The default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. The default value is 10.
    shared_ptr<int32_t> pageSize_ {};
    // The source of the instance. Valid values:
    // 
    // - builtin: The instance is created by the system.
    // 
    // - user: The instance is created by the user. This is the default value.
    // 
    // - all: All instances.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
