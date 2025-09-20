// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHREQUESTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHREQUESTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FastFailPolicy.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateBatchRequestActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchRequestActions& obj) { 
      DARABONBA_PTR_TO_JSON(FastFailPolicy, fastFailPolicy_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchRequestActions& obj) { 
      DARABONBA_PTR_FROM_JSON(FastFailPolicy, fastFailPolicy_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    CreateBatchRequestActions() = default ;
    CreateBatchRequestActions(const CreateBatchRequestActions &) = default ;
    CreateBatchRequestActions(CreateBatchRequestActions &&) = default ;
    CreateBatchRequestActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchRequestActions() = default ;
    CreateBatchRequestActions& operator=(const CreateBatchRequestActions &) = default ;
    CreateBatchRequestActions& operator=(CreateBatchRequestActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fastFailPolicy_ != nullptr
        && this->name_ != nullptr && this->parameters_ != nullptr; };
    // fastFailPolicy Field Functions 
    bool hasFastFailPolicy() const { return this->fastFailPolicy_ != nullptr;};
    void deleteFastFailPolicy() { this->fastFailPolicy_ = nullptr;};
    inline const Models::FastFailPolicy & fastFailPolicy() const { DARABONBA_PTR_GET_CONST(fastFailPolicy_, Models::FastFailPolicy) };
    inline Models::FastFailPolicy fastFailPolicy() { DARABONBA_PTR_GET(fastFailPolicy_, Models::FastFailPolicy) };
    inline CreateBatchRequestActions& setFastFailPolicy(const Models::FastFailPolicy & fastFailPolicy) { DARABONBA_PTR_SET_VALUE(fastFailPolicy_, fastFailPolicy) };
    inline CreateBatchRequestActions& setFastFailPolicy(Models::FastFailPolicy && fastFailPolicy) { DARABONBA_PTR_SET_RVALUE(fastFailPolicy_, fastFailPolicy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBatchRequestActions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<string>) };
    inline vector<string> parameters() { DARABONBA_PTR_GET(parameters_, vector<string>) };
    inline CreateBatchRequestActions& setParameters(const vector<string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateBatchRequestActions& setParameters(vector<string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    // The policy configurations for handling failures.
    std::shared_ptr<Models::FastFailPolicy> fastFailPolicy_ = nullptr;
    // The name of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The template parameters.
    std::shared_ptr<vector<string>> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
