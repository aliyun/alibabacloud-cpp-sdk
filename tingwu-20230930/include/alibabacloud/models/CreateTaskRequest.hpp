// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTaskRequestInput.hpp>
#include <alibabacloud/models/CreateTaskRequestParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(operation, operation_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(operation, operation_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateTaskRequest() = default ;
    CreateTaskRequest(const CreateTaskRequest &) = default ;
    CreateTaskRequest(CreateTaskRequest &&) = default ;
    CreateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequest() = default ;
    CreateTaskRequest& operator=(const CreateTaskRequest &) = default ;
    CreateTaskRequest& operator=(CreateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->input_ != nullptr && this->parameters_ != nullptr && this->operation_ != nullptr && this->type_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline CreateTaskRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const CreateTaskRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, CreateTaskRequestInput) };
    inline CreateTaskRequestInput input() { DARABONBA_PTR_GET(input_, CreateTaskRequestInput) };
    inline CreateTaskRequest& setInput(const CreateTaskRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline CreateTaskRequest& setInput(CreateTaskRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const CreateTaskRequestParameters & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, CreateTaskRequestParameters) };
    inline CreateTaskRequestParameters parameters() { DARABONBA_PTR_GET(parameters_, CreateTaskRequestParameters) };
    inline CreateTaskRequest& setParameters(const CreateTaskRequestParameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateTaskRequest& setParameters(CreateTaskRequestParameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline CreateTaskRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> appKey_ = nullptr;
    std::shared_ptr<CreateTaskRequestInput> input_ = nullptr;
    std::shared_ptr<CreateTaskRequestParameters> parameters_ = nullptr;
    std::shared_ptr<string> operation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
