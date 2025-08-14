// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGEJOBRESPONSEBODYPACKAGEJOBINPUTS_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGEJOBRESPONSEBODYPACKAGEJOBINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPackageJobResponseBodyPackageJobInputsInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetPackageJobResponseBodyPackageJobInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageJobResponseBodyPackageJobInputs& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageJobResponseBodyPackageJobInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    GetPackageJobResponseBodyPackageJobInputs() = default ;
    GetPackageJobResponseBodyPackageJobInputs(const GetPackageJobResponseBodyPackageJobInputs &) = default ;
    GetPackageJobResponseBodyPackageJobInputs(GetPackageJobResponseBodyPackageJobInputs &&) = default ;
    GetPackageJobResponseBodyPackageJobInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageJobResponseBodyPackageJobInputs() = default ;
    GetPackageJobResponseBodyPackageJobInputs& operator=(const GetPackageJobResponseBodyPackageJobInputs &) = default ;
    GetPackageJobResponseBodyPackageJobInputs& operator=(GetPackageJobResponseBodyPackageJobInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetPackageJobResponseBodyPackageJobInputsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetPackageJobResponseBodyPackageJobInputsInput) };
    inline Models::GetPackageJobResponseBodyPackageJobInputsInput input() { DARABONBA_PTR_GET(input_, Models::GetPackageJobResponseBodyPackageJobInputsInput) };
    inline GetPackageJobResponseBodyPackageJobInputs& setInput(const Models::GetPackageJobResponseBodyPackageJobInputsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetPackageJobResponseBodyPackageJobInputs& setInput(Models::GetPackageJobResponseBodyPackageJobInputsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The information about the input stream file.
    std::shared_ptr<Models::GetPackageJobResponseBodyPackageJobInputsInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
