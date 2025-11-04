// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPACKAGEJOBREQUESTINPUTS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPACKAGEJOBREQUESTINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitPackageJobRequestInputsInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitPackageJobRequestInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPackageJobRequestInputs& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPackageJobRequestInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    SubmitPackageJobRequestInputs() = default ;
    SubmitPackageJobRequestInputs(const SubmitPackageJobRequestInputs &) = default ;
    SubmitPackageJobRequestInputs(SubmitPackageJobRequestInputs &&) = default ;
    SubmitPackageJobRequestInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPackageJobRequestInputs() = default ;
    SubmitPackageJobRequestInputs& operator=(const SubmitPackageJobRequestInputs &) = default ;
    SubmitPackageJobRequestInputs& operator=(SubmitPackageJobRequestInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::SubmitPackageJobRequestInputsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::SubmitPackageJobRequestInputsInput) };
    inline Models::SubmitPackageJobRequestInputsInput input() { DARABONBA_PTR_GET(input_, Models::SubmitPackageJobRequestInputsInput) };
    inline SubmitPackageJobRequestInputs& setInput(const Models::SubmitPackageJobRequestInputsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitPackageJobRequestInputs& setInput(Models::SubmitPackageJobRequestInputsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The information about the input stream file.
    // 
    // This parameter is required.
    std::shared_ptr<Models::SubmitPackageJobRequestInputsInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
