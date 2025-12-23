// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONRESOURCEREQUESTDATAGENERATORS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONRESOURCEREQUESTDATAGENERATORS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFunctionResourceRequestDataGeneratorsInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateFunctionResourceRequestDataGenerators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionResourceRequestDataGenerators& obj) { 
      DARABONBA_PTR_TO_JSON(Generator, generator_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionResourceRequestDataGenerators& obj) { 
      DARABONBA_PTR_FROM_JSON(Generator, generator_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    UpdateFunctionResourceRequestDataGenerators() = default ;
    UpdateFunctionResourceRequestDataGenerators(const UpdateFunctionResourceRequestDataGenerators &) = default ;
    UpdateFunctionResourceRequestDataGenerators(UpdateFunctionResourceRequestDataGenerators &&) = default ;
    UpdateFunctionResourceRequestDataGenerators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionResourceRequestDataGenerators() = default ;
    UpdateFunctionResourceRequestDataGenerators& operator=(const UpdateFunctionResourceRequestDataGenerators &) = default ;
    UpdateFunctionResourceRequestDataGenerators& operator=(UpdateFunctionResourceRequestDataGenerators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generator_ == nullptr
        && return this->input_ == nullptr && return this->output_ == nullptr; };
    // generator Field Functions 
    bool hasGenerator() const { return this->generator_ != nullptr;};
    void deleteGenerator() { this->generator_ = nullptr;};
    inline string generator() const { DARABONBA_PTR_GET_DEFAULT(generator_, "") };
    inline UpdateFunctionResourceRequestDataGenerators& setGenerator(string generator) { DARABONBA_PTR_SET_VALUE(generator_, generator) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::UpdateFunctionResourceRequestDataGeneratorsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::UpdateFunctionResourceRequestDataGeneratorsInput) };
    inline Models::UpdateFunctionResourceRequestDataGeneratorsInput input() { DARABONBA_PTR_GET(input_, Models::UpdateFunctionResourceRequestDataGeneratorsInput) };
    inline UpdateFunctionResourceRequestDataGenerators& setInput(const Models::UpdateFunctionResourceRequestDataGeneratorsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline UpdateFunctionResourceRequestDataGenerators& setInput(Models::UpdateFunctionResourceRequestDataGeneratorsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline UpdateFunctionResourceRequestDataGenerators& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


  protected:
    // The type of the feature generator.
    std::shared_ptr<string> generator_ = nullptr;
    // The input.
    std::shared_ptr<Models::UpdateFunctionResourceRequestDataGeneratorsInput> input_ = nullptr;
    // The name of the output feature.
    std::shared_ptr<string> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
