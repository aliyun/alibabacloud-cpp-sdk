// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCERESPONSEBODYRESULTDATAGENERATORS_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONRESOURCERESPONSEBODYRESULTDATAGENERATORS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFunctionResourceResponseBodyResultDataGeneratorsInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionResourceResponseBodyResultDataGenerators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionResourceResponseBodyResultDataGenerators& obj) { 
      DARABONBA_PTR_TO_JSON(Generator, generator_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Output, output_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionResourceResponseBodyResultDataGenerators& obj) { 
      DARABONBA_PTR_FROM_JSON(Generator, generator_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
    };
    GetFunctionResourceResponseBodyResultDataGenerators() = default ;
    GetFunctionResourceResponseBodyResultDataGenerators(const GetFunctionResourceResponseBodyResultDataGenerators &) = default ;
    GetFunctionResourceResponseBodyResultDataGenerators(GetFunctionResourceResponseBodyResultDataGenerators &&) = default ;
    GetFunctionResourceResponseBodyResultDataGenerators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionResourceResponseBodyResultDataGenerators() = default ;
    GetFunctionResourceResponseBodyResultDataGenerators& operator=(const GetFunctionResourceResponseBodyResultDataGenerators &) = default ;
    GetFunctionResourceResponseBodyResultDataGenerators& operator=(GetFunctionResourceResponseBodyResultDataGenerators &&) = default ;
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
    inline GetFunctionResourceResponseBodyResultDataGenerators& setGenerator(string generator) { DARABONBA_PTR_SET_VALUE(generator_, generator) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetFunctionResourceResponseBodyResultDataGeneratorsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetFunctionResourceResponseBodyResultDataGeneratorsInput) };
    inline Models::GetFunctionResourceResponseBodyResultDataGeneratorsInput input() { DARABONBA_PTR_GET(input_, Models::GetFunctionResourceResponseBodyResultDataGeneratorsInput) };
    inline GetFunctionResourceResponseBodyResultDataGenerators& setInput(const Models::GetFunctionResourceResponseBodyResultDataGeneratorsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetFunctionResourceResponseBodyResultDataGenerators& setInput(Models::GetFunctionResourceResponseBodyResultDataGeneratorsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline GetFunctionResourceResponseBodyResultDataGenerators& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


  protected:
    // The type of the feature generator.
    std::shared_ptr<string> generator_ = nullptr;
    // The input.
    std::shared_ptr<Models::GetFunctionResourceResponseBodyResultDataGeneratorsInput> input_ = nullptr;
    // The name of the output feature.
    std::shared_ptr<string> output_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
